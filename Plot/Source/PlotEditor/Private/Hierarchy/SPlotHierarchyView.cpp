#include "SPlotHierarchyView.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Editor.h"
#include "Widgets/Layout/SScrollBorder.h"
#if WITH_EDITOR
#include "EditorStyleSet.h"
#endif // WITH_EDITOR
#include "SPlotHierarchyViewItem.h"
#include "Widgets/Input/SSearchBox.h"
#include "Framework/Commands/GenericCommands.h"
#include "Utils/PlotEditorUtils.h"
#define LOCTEXT_NAMESPACE "PLOT"

void SPlotHierarchyView::Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InEditor, UPlot* InPlot)
{
	PlotEditor = InEditor;
	bRebuildTreeRequested = false;
	bIsUpdatingSelection = false;
	// register for any objects replaced
	GEditor->OnObjectsReplaced().AddRaw(this, &SPlotHierarchyView::OnObjectsReplaced);
	// Create the filter for searching in the tree
	SearchBoxPlotFilter = MakeShareable(new PlotTextFilter(PlotTextFilter::FItemToStringArray::CreateSP(this, &SPlotHierarchyView::GetPlotFilterStrings)));

	InPlot->OnChanged().AddRaw(this, &SPlotHierarchyView::OnPlotChanged);

	FilterHandler = MakeShareable(new TreeFilterHandler< TSharedPtr<FPlotHierarchyModel> >());
	FilterHandler->SetFilter(SearchBoxPlotFilter.Get());
	FilterHandler->SetRootItems(&RootPlots, &TreeRootPlots);
	FilterHandler->SetGetChildrenDelegate(TreeFilterHandler< TSharedPtr<FPlotHierarchyModel> >::FOnGetChildren::CreateRaw(this, &SPlotHierarchyView::PlotHierarchy_OnGetChildren));
	CommandList = MakeShareable(new FUICommandList);
	CommandList->MapAction(
		FGenericCommands::Get().Rename,
		FExecuteAction::CreateSP(this, &SPlotHierarchyView::BeginRename),
		FCanExecuteAction::CreateSP(this, &SPlotHierarchyView::CanRename)
	);
	ChildSlot
		[
			SNew(SBorder)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
		.Padding(4)
		.AutoHeight()
		[
			SAssignNew(SearchBoxPtr, SSearchBox)
			.HintText(LOCTEXT("SearchPlotItems", "Search Items"))
		.OnTextChanged(this, &SPlotHierarchyView::OnSearchChanged)
		]

	+ SVerticalBox::Slot()
		.FillHeight(1.0f)
		[
			SAssignNew(TreeViewArea, SBorder)
			.Padding(0)
		.BorderImage(FEditorStyle::GetBrush("NoBrush"))
		]
		]
		];

	RebuildTreeView();

	PlotEditor.Pin()->OnSelectedPlotsChanged.AddRaw(this, &SPlotHierarchyView::OnEditorSelectionChanged);

	bRefreshRequested = true;
}

SPlotHierarchyView::~SPlotHierarchyView()
{
	UPlot* Plot = GetPlot();
	if (Plot)
	{
		Plot->OnChanged().RemoveAll(this);
	}

	if (PlotEditor.IsValid())
	{
		PlotEditor.Pin()->OnSelectedPlotsChanged.RemoveAll(this);
	}
	GEditor->OnObjectsReplaced().RemoveAll(this);
}

void SPlotHierarchyView::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	if (bRebuildTreeRequested || bRefreshRequested)
	{
		if (bRebuildTreeRequested)
		{
			RebuildTreeView();
		}

		RefreshTree();

		UpdateItemsExpansionFromModel();

		OnEditorSelectionChanged();

		bRefreshRequested = false;
		bRebuildTreeRequested = false;
	}
}

void SPlotHierarchyView::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseEnter(MyGeometry, MouseEvent);
	PlotEditor.Pin()->ClearHoveredPlotItem();
}

void SPlotHierarchyView::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseLeave(MouseEvent);
	PlotEditor.Pin()->ClearHoveredPlotItem();
}

void SPlotHierarchyView::PlotHierarchy_OnMouseClick(TSharedPtr<FPlotHierarchyModel> InItem)
{
	PlotEditor.Pin()->PasteDropLocation = FVector2D(0, 0);
}

void SPlotHierarchyView::PlotHierarchy_OnMouseDoubleClick(TSharedPtr<FPlotHierarchyModel> InItem)
{
        const TSet<FPlotReference> SelectedItems = PlotEditor.Pin()->GetSelectedPlotItems();
	FPlotEditorUtils::Play(PlotEditor.Pin().ToSharedRef(), PlotEditor.Pin()->GetPlot(), SelectedItems);
}

FReply SPlotHierarchyView::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	if (PlotEditor.Pin()->DesignerCommandList->ProcessCommandBindings(InKeyEvent))
	{
		return FReply::Handled();
	}
	if (CommandList->ProcessCommandBindings(InKeyEvent))
	{
		return FReply::Handled();
	}
	return FReply::Unhandled();
}

void SPlotHierarchyView::BeginRename()
{
	TArray< TSharedPtr<FPlotHierarchyModel> > SelectedItems = PlotTreeView->GetSelectedItems();
	if (SelectedItems.Num() > 0)
		SelectedItems[0]->RequestBeginRename();
}

bool SPlotHierarchyView::CanRename() const
{
	TArray< TSharedPtr<FPlotHierarchyModel> > SelectedItems = PlotTreeView->GetSelectedItems();
	return SelectedItems.Num() == 1 && SelectedItems[0]->CanRename();
}

void SPlotHierarchyView::GetPlotFilterStrings(TSharedPtr<FPlotHierarchyModel> Item, TArray<FString>& OutStrings)
{
	Item->GetFilterStrings(OutStrings);
}

void SPlotHierarchyView::OnSearchChanged(const FText& InFilterText)
{
	bRefreshRequested = true;
	const bool bFilteringEnabled = !InFilterText.IsEmpty();
	if (bFilteringEnabled != FilterHandler->GetIsEnabled())
	{
		FilterHandler->SetIsEnabled(bFilteringEnabled);
		if (bFilteringEnabled)
		{
			SaveItemsExpansion();
		}
		else
		{
			RestoreItemsExpansion();
		}
	}
	SearchBoxPlotFilter->SetRawFilterText(InFilterText);
	SearchBoxPtr->SetError(SearchBoxPlotFilter->GetFilterErrorText());
}

FText SPlotHierarchyView::GetSearchText() const
{
	return SearchBoxPlotFilter->GetRawFilterText();
}

void SPlotHierarchyView::OnEditorSelectionChanged()
{
	if (!bIsUpdatingSelection)
	{
		PlotTreeView->ClearSelection();

		if (RootPlots.Num() > 0)
		{
			RootPlots[0]->RefreshSelection();
		}

		RestoreSelectedItems();
	}
}

UPlot* SPlotHierarchyView::GetPlot() const
{
	if (PlotEditor.IsValid())
	{
		return  PlotEditor.Pin()->GetPlot();
	}
	return nullptr;
}

void SPlotHierarchyView::OnPlotChanged(UPlot* InPlot)
{
	if (InPlot)
	{
		bRefreshRequested = true;
	}
}

TSharedPtr<SWidget> SPlotHierarchyView::PlotHierarchy_OnContextMenuOpening()
{
	FMenuBuilder MenuBuilder(true, CommandList);
	FPlotEditorUtils::CreateItemContextMenu(MenuBuilder, PlotEditor.Pin().ToSharedRef(), FVector2D(0, 0));
	return MenuBuilder.MakeWidget();
}

void SPlotHierarchyView::PlotHierarchy_OnGetChildren(TSharedPtr<FPlotHierarchyModel> InParent, TArray< TSharedPtr<FPlotHierarchyModel> >& OutChildren)
{
	InParent->GatherChildren(OutChildren);
}

TSharedRef< ITableRow > SPlotHierarchyView::PlotHierarchy_OnGenerateRow(TSharedPtr<FPlotHierarchyModel> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SPlotHierarchyViewItem, OwnerTable, InItem)
		.HighlightText(this, &SPlotHierarchyView::GetSearchText);
}

void SPlotHierarchyView::PlotHierarchy_OnSelectionChanged(TSharedPtr<FPlotHierarchyModel> SelectedItem, ESelectInfo::Type SelectInfo)
{
	if (SelectInfo != ESelectInfo::Direct)
	{
		bIsUpdatingSelection = true;
		TArray< TSharedPtr<FPlotHierarchyModel> > SelectedItems = PlotTreeView->GetSelectedItems();
		TSet<FPlotReference> Clear;
		PlotEditor.Pin()->SelectPlotItems(Clear, false);
		for (TSharedPtr<FPlotHierarchyModel>& Item : SelectedItems)
		{
			Item->OnSelection();
		}
		if (RootPlots.Num() > 0)
		{
			RootPlots[0]->RefreshSelection();
		}
		PlotEditor.Pin()->PasteDropLocation = FVector2D(0, 0);
		bIsUpdatingSelection = false;
	}
}

void SPlotHierarchyView::PlotHierarchy_OnExpansionChanged(TSharedPtr<FPlotHierarchyModel> Item, bool bExpanded)
{
	Item->SetExpanded(bExpanded);
}

FReply SPlotHierarchyView::HandleDeleteSelected()
{
	TSet<FPlotReference> SelectedItems = PlotEditor.Pin()->GetSelectedPlotItems();
	FPlotEditorUtils::DeleteItems(GetPlot(), SelectedItems);
	return FReply::Handled();
}

void SPlotHierarchyView::RefreshTree()
{
	RootPlots.Empty();
	RootPlots.Add(MakeShareable(new FPlotHierarchyRoot(PlotEditor.Pin())));
	FilterHandler->RefreshAndFilterTree();
}

void SPlotHierarchyView::RebuildTreeView()
{
	float OldScrollOffset = 0.0f;

	if (PlotTreeView.IsValid())
	{
		OldScrollOffset = PlotTreeView->GetScrollOffset();
	}
	SAssignNew(PlotTreeView, STreeView<TSharedPtr<FPlotHierarchyModel>>)
		.ItemHeight(20.0f)
		.SelectionMode(ESelectionMode::Multi)
		.OnGetChildren(FilterHandler.ToSharedRef(), &TreeFilterHandler< TSharedPtr<FPlotHierarchyModel> >::OnGetFilteredChildren)
		.OnGenerateRow(this, &SPlotHierarchyView::PlotHierarchy_OnGenerateRow)
		.OnSelectionChanged(this, &SPlotHierarchyView::PlotHierarchy_OnSelectionChanged)
		.OnExpansionChanged(this, &SPlotHierarchyView::PlotHierarchy_OnExpansionChanged)
		.OnContextMenuOpening(this, &SPlotHierarchyView::PlotHierarchy_OnContextMenuOpening)
		.OnSetExpansionRecursive(this, &SPlotHierarchyView::SetItemExpansionRecursive)
		.TreeItemsSource(&TreeRootPlots)
		.OnMouseButtonDoubleClick(this, &SPlotHierarchyView::PlotHierarchy_OnMouseDoubleClick)
		.OnMouseButtonClick(this, &SPlotHierarchyView::PlotHierarchy_OnMouseClick);

	FilterHandler->SetTreeView(PlotTreeView.Get());
	TreeViewArea->SetContent(
		SNew(SScrollBorder, PlotTreeView.ToSharedRef())
		[
			PlotTreeView.ToSharedRef()
		]);
	PlotTreeView->SetScrollOffset(OldScrollOffset);
}

void SPlotHierarchyView::OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap)
{
	if (!bRebuildTreeRequested)
	{
		for (const auto& Entry : ReplacementMap)
		{
			if (Entry.Key->IsA<UPlotItem>())
			{
				bRefreshRequested = true;
				bRebuildTreeRequested = true;
			}
		}
	}
}

void SPlotHierarchyView::UpdateItemsExpansionFromModel()
{
	for (TSharedPtr<FPlotHierarchyModel>& Model : RootPlots)
	{
		RecursiveExpand(Model, EExpandBehavior::FromModel);
	}
}

void SPlotHierarchyView::RestoreItemsExpansion()
{
	for (TSharedPtr<FPlotHierarchyModel>& Model : RootPlots)
	{
		RecursiveExpand(Model, EExpandBehavior::RestoreFromPrevious);
	}
}

void SPlotHierarchyView::SaveItemsExpansion()
{
	ExpandedItemNames.Empty();

	if (PlotTreeView.IsValid())
	{
		TSet< TSharedPtr<FPlotHierarchyModel> > ExpandedItems;
		PlotTreeView->GetExpandedItems(ExpandedItems);

		for (TSharedPtr<FPlotHierarchyModel> Item : ExpandedItems)
		{
			if (Item.IsValid())
			{
				ExpandedItemNames.Add(Item->GetUniqueName());
			}
		}
	}
}

void SPlotHierarchyView::RecursiveExpand(TSharedPtr<FPlotHierarchyModel>& Model, EExpandBehavior ExpandBehavior)
{
	bool bShouldExpandItem = true;

	switch (ExpandBehavior)
	{
	case EExpandBehavior::NeverExpand:
	{
		bShouldExpandItem = false;
	}
	break;

	case EExpandBehavior::RestoreFromPrevious:
	{
		bShouldExpandItem = ExpandedItemNames.Contains(Model->GetUniqueName());
	}
	break;

	case EExpandBehavior::AlwaysExpand:
	{
		bShouldExpandItem = true;
	}
	break;

	case EExpandBehavior::FromModel:
	default:
	{
		bShouldExpandItem = Model->IsExpanded();
	}
	break;
	}

	PlotTreeView->SetItemExpansion(Model, bShouldExpandItem);

	TArray< TSharedPtr<FPlotHierarchyModel> > Children;
	Model->GatherChildren(Children);

	for (TSharedPtr<FPlotHierarchyModel>& ChildModel : Children)
	{
		RecursiveExpand(ChildModel, ExpandBehavior);
	}
}

void SPlotHierarchyView::RestoreSelectedItems()
{
	for (TSharedPtr<FPlotHierarchyModel>& Model : RootPlots)
	{
		RecursiveSelection(Model);
	}
}

void SPlotHierarchyView::RecursiveSelection(TSharedPtr<FPlotHierarchyModel>& Model)
{
	if (Model->ContainsSelection())
	{
		// Expand items that contain selection.
		PlotTreeView->SetItemExpansion(Model, true);

		TArray< TSharedPtr<FPlotHierarchyModel> > Children;
		Model->GatherChildren(Children);

		for (TSharedPtr<FPlotHierarchyModel>& ChildModel : Children)
		{
			RecursiveSelection(ChildModel);
		}
	}

	if (Model->IsSelected())
	{
		PlotTreeView->SetItemSelection(Model, true, ESelectInfo::Direct);
		PlotTreeView->RequestScrollIntoView(Model);
	}
}

void SPlotHierarchyView::SetItemExpansionRecursive(TSharedPtr<FPlotHierarchyModel> Model, bool bInExpansionState)
{
	if (Model.IsValid())
	{
		RecursiveExpand(Model, bInExpansionState ? EExpandBehavior::AlwaysExpand : EExpandBehavior::NeverExpand);
	}
}
#undef LOCTEXT_NAMESPACE
