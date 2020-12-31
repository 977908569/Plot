
#include "Palette/SPlotPaletteView.h"
#include "Palette/SPlotPaletteViewModel.h"
#include "Misc/ConfigCacheIni.h"
#include "Templates/PlotTemplateClass.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SScrollBorder.h"
#include "Widgets/Input/SSearchBox.h"
#if WITH_EDITOR
#include "EditorStyleSet.h"
#endif // WITH_EDITOR
#define LOCTEXT_NAMESPACE "PLOT"

FText SPlotPaletteViewItem::GetFavoriteToggleToolTipText() const
{
	if (GetFavoritedState() == ECheckBoxState::Checked)
	{
		return LOCTEXT("Unfavorite", "Click to remove this plot item from your favorites.");
	}
	return LOCTEXT("Favorite", "Click to add this plot item to your favorites.");
}

ECheckBoxState SPlotPaletteViewItem::GetFavoritedState() const
{
	if (PlotViewModel->IsFavorite())
	{
		return ECheckBoxState::Checked;
	}
	else
	{
		return ECheckBoxState::Unchecked;
	}
}

void SPlotPaletteViewItem::OnFavoriteToggled(ECheckBoxState InNewState)
{
	if (InNewState == ECheckBoxState::Checked)
	{
		//Add to favorites
		PlotViewModel->AddToFavorites();
	}
	else
	{
		//Remove from favorites
		PlotViewModel->RemoveFromFavorites();
	}
}

void SPlotPaletteViewItem::Construct(const FArguments& InArgs, TSharedPtr<FPlotTemplateViewModel> InPlotViewModel)
{
	PlotViewModel = InPlotViewModel;

	ChildSlot
		[
			SNew(SHorizontalBox)
			.ToolTip(PlotViewModel->Template->GetToolTip())
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Center)
		[
			SNew(SCheckBox)
			.ToolTipText(this, &SPlotPaletteViewItem::GetFavoriteToggleToolTipText)
		.IsChecked(this, &SPlotPaletteViewItem::GetFavoritedState)
		.OnCheckStateChanged(this, &SPlotPaletteViewItem::OnFavoriteToggled)
		.Style(FEditorStyle::Get(), "UMGEditor.Palette.FavoriteToggleStyle")
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Center)
		[
			SNew(SImage)
			.ColorAndOpacity(FLinearColor(1, 1, 1, 0.5))
		.Image(PlotViewModel->Template->GetIcon())
		]

	+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(2, 0, 0, 0)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(InPlotViewModel->GetName())
		.HighlightText(InArgs._HighlightText)
		]
		];
}

FReply SPlotPaletteViewItem::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	return PlotViewModel->Template->OnDoubleClicked();
};

void SPlotPaletteView::Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InEditor)
{
	PlotEditor = InEditor;
	PaletteViewModel = InEditor->GetPaletteViewModel();

	PaletteViewModel->OnUpdating.AddRaw(this, &SPlotPaletteView::OnViewModelUpdating);
	PaletteViewModel->OnUpdated.AddRaw(this, &SPlotPaletteView::OnViewModelUpdated);

	PlotFilter = MakeShareable(new PlotViewModelTextFilter(
		PlotViewModelTextFilter::FItemToStringArray::CreateSP(this, &SPlotPaletteView::GetPlotFilterStrings)));

	FilterHandler = MakeShareable(new PaletteFilterHandler());
	FilterHandler->SetFilter(PlotFilter.Get());
	FilterHandler->SetRootItems(&(PaletteViewModel->GetPlotViewModels()), &TreePlotViewModels);
	FilterHandler->SetGetChildrenDelegate(PaletteFilterHandler::FOnGetChildren::CreateRaw(this, &SPlotPaletteView::OnGetChildren));

	SAssignNew(PlotTemplatesView, STreeView< TSharedPtr<FPlotViewModel> >)
		.ItemHeight(1.0f)
		.SelectionMode(ESelectionMode::Single)
		.OnGenerateRow(this, &SPlotPaletteView::OnGeneratePlotTemplateItem)
		.OnGetChildren(FilterHandler.ToSharedRef(), &PaletteFilterHandler::OnGetFilteredChildren)
		.OnSelectionChanged(this, &SPlotPaletteView::PlotPalette_OnSelectionChanged)
		.TreeItemsSource(&TreePlotViewModels);
	FilterHandler->SetTreeView(PlotTemplatesView.Get());

	ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.Padding(4)
		.AutoHeight()
		[
			SAssignNew(SearchBoxPtr, SSearchBox)
			.HintText(LOCTEXT("SearchTemplates", "Search Palette"))
		.OnTextChanged(this, &SPlotPaletteView::OnSearchChanged)
		]

	+ SVerticalBox::Slot()
		.FillHeight(1.0f)
		[
			SNew(SScrollBorder, PlotTemplatesView.ToSharedRef())
			[
				PlotTemplatesView.ToSharedRef()
			]
		]
		];

	bRefreshRequested = true;

	PaletteViewModel->Update();
	LoadItemExpansion();
}

SPlotPaletteView::~SPlotPaletteView()
{
	// Unregister to the update of the viewmodel.
	PaletteViewModel->OnUpdating.RemoveAll(this);
	PaletteViewModel->OnUpdated.RemoveAll(this);

	// If the filter is enabled, disable it before saving the expanded items since
	// filtering expands all items by default.
	if (FilterHandler->GetIsEnabled())
	{
		FilterHandler->SetIsEnabled(false);
		FilterHandler->RefreshAndFilterTree();
	}

	SaveItemExpansion();
}

void SPlotPaletteView::OnSearchChanged(const FText& InFilterText)
{
	bRefreshRequested = true;
	FilterHandler->SetIsEnabled(!InFilterText.IsEmpty());
	PlotFilter->SetRawFilterText(InFilterText);
	SearchBoxPtr->SetError(PlotFilter->GetFilterErrorText());
	PaletteViewModel->SetSearchText(InFilterText);
}

void SPlotPaletteView::PlotPalette_OnSelectionChanged(TSharedPtr<FPlotViewModel> SelectedItem, ESelectInfo::Type SelectInfo)
{
	if (!SelectedItem.IsValid()) 
	{
		return;
	}

	// Reset the selected
	PlotEditor.Pin()->SetSelectedTemplate(nullptr);

	// If it's not a template, return
	if (!SelectedItem->IsTemplate())
	{
		return;
	}

	TSharedPtr<FPlotTemplateViewModel> SelectedTemplate = StaticCastSharedPtr<FPlotTemplateViewModel>(SelectedItem);
	if (SelectedTemplate.IsValid())
	{
		TSharedPtr<FPlotTemplateClass> TemplateClass = StaticCastSharedPtr<FPlotTemplateClass>(SelectedTemplate->Template);
		if (TemplateClass.IsValid())
		{
			if (TemplateClass->GetItemClass().IsValid())
			{
				PlotEditor.Pin()->SetSelectedTemplate(TemplateClass->GetItemClass());
			}
		}
	}
}

TSharedPtr<FPlotTemplate> SPlotPaletteView::GetSelectedTemplateWidget() const
{
	TArray<TSharedPtr<FPlotViewModel>> SelectedTemplates = PlotTemplatesView.Get()->GetSelectedItems();
	if (SelectedTemplates.Num() == 1)
	{
		TSharedPtr<FPlotTemplateViewModel> TemplateViewModel = StaticCastSharedPtr<FPlotTemplateViewModel>(SelectedTemplates[0]);
		if (TemplateViewModel.IsValid())
		{
			return TemplateViewModel->Template;
		}
	}
	return nullptr;
}

void SPlotPaletteView::LoadItemExpansion()
{
	for (TSharedPtr<FPlotViewModel>& ViewModel : PaletteViewModel->GetPlotViewModels())
	{
		bool IsExpanded;
		if (GConfig->GetBool(TEXT("PlotTemplatesExpanded"), *ViewModel->GetName().ToString(), IsExpanded, GEditorPerProjectIni) && IsExpanded)
		{
			PlotTemplatesView->SetItemExpansion(ViewModel, true);
		}
	}
}

void SPlotPaletteView::SaveItemExpansion()
{
	for (TSharedPtr<FPlotViewModel>& ViewModel : PaletteViewModel->GetPlotViewModels())
	{
		const bool IsExpanded = PlotTemplatesView->IsItemExpanded(ViewModel);
		GConfig->SetBool(TEXT("PlotTemplatesExpanded"), *ViewModel->GetName().ToString(), IsExpanded, GEditorPerProjectIni);
	}
}

void SPlotPaletteView::OnGetChildren(TSharedPtr<FPlotViewModel> Item, TArray< TSharedPtr<FPlotViewModel> >& Children)
{
	return Item->GetChildren(Children);
}

TSharedRef<ITableRow> SPlotPaletteView::OnGeneratePlotTemplateItem(TSharedPtr<FPlotViewModel> Item, const TSharedRef<STableViewBase>& OwnerTable)
{
	return Item->BuildRow(OwnerTable);
}

void SPlotPaletteView::OnViewModelUpdating()
{
	// Save the old expanded items temporarily
	PlotTemplatesView->GetExpandedItems(ExpandedItems);
}

void SPlotPaletteView::OnViewModelUpdated()
{
	bRefreshRequested = true;

	// Restore the expansion state
	for (TSharedPtr<FPlotViewModel>& ExpandedItem : ExpandedItems)
	{
		for (TSharedPtr<FPlotViewModel>& ViewModel : PaletteViewModel->GetPlotViewModels())
		{
			if (ViewModel->GetName().EqualTo(ExpandedItem->GetName()) || ViewModel->ShouldForceExpansion())
			{
				PlotTemplatesView->SetItemExpansion(ViewModel, true);
			}
		}
	}
	ExpandedItems.Reset();
}

void SPlotPaletteView::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	if (bRefreshRequested)
	{
		bRefreshRequested = false;
		FilterHandler->RefreshAndFilterTree();
	}
}

void SPlotPaletteView::GetPlotFilterStrings(TSharedPtr<FPlotViewModel> ItemViewModel, TArray<FString>& OutStrings)
{
	ItemViewModel->GetFilterStrings(OutStrings);
}

#undef LOCTEXT_NAMESPACE
