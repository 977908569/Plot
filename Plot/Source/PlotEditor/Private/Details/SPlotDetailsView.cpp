
#include "SPlotDetailsView.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "IDetailsView.h"
#include "EditorClassUtils.h"
#include "PlotItem.h"
#include "PlotItem_RoleControl.h"
#include "PropertyEditorModule.h"
#include "Customizations/PlotDetailCustomizations.h"
#include "Customizations/PlotRoleControlDetailCustomizations.h"
#include "Customizations/PlotRootDetailCustomizations.h"
#include "Customizations/PlotItemlCustomizations.h"
#include "Styling/SlateIconFinder.h"
#include "Utils/PlotEditorUtils.h"
#define LOCTEXT_NAMESPACE "PLOT"

void SPlotDetailsView::Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InPlotEditor)
{
	PlotEditor = InPlotEditor;
	FPropertyEditorModule& EditModule = FModuleManager::Get().GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FNotifyHook* NotifyHook = this;
	FDetailsViewArgs DetailsViewArgs(false,
		false,
		true,
		FDetailsViewArgs::HideNameArea,
		true,
		NotifyHook,
		false,
		NAME_None);
	DetailsViewArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Automatic;
	PropertyView = EditModule.CreateDetailView(DetailsViewArgs);
	ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0, 2)
		[
			SNew(SBorder)
			.BorderImage(FEditorStyle::GetBrush(TEXT("ToolPanel.GroupBorder")))
		.Visibility(this, &SPlotDetailsView::GetBorderAreaVisibility)
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(4)
		[
			SNew(SHorizontalBox)
			.Visibility(this, &SPlotDetailsView::GetNameAreaVisibility)

		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(0, 0, 3, 0)
		.VAlign(VAlign_Center)
		[
			SNew(SImage)
			.Image(this, &SPlotDetailsView::GetNameIcon)
		]

	+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(0, 0, 6, 0)
		[
			SNew(SBox)
			.WidthOverride(200.0f)
		.VAlign(VAlign_Center)
		[
			SAssignNew(NameTextBox, SEditableTextBox)
			.SelectAllTextWhenFocused(true)
		.HintText(LOCTEXT("Name", "Name"))
		.Text(this, &SPlotDetailsView::GetNameText)
		.OnTextChanged(this, &SPlotDetailsView::HandleNameTextChanged)
		.OnTextCommitted(this, &SPlotDetailsView::HandleNameTextCommitted)
		]
		]

	+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(15, 0, 0, 0)
		[
			SAssignNew(ClassLinkArea, SBox)
		]
		]
		]
		]

	+ SVerticalBox::Slot()
		.FillHeight(1.0f)
		[
			PropertyView.ToSharedRef()
		]
		];

	PlotEditor.Pin()->OnSelectedPlotsChanging.AddRaw(this, &SPlotDetailsView::OnEditorSelectionChanging);
	PlotEditor.Pin()->OnSelectedPlotsChanged.AddRaw(this, &SPlotDetailsView::OnEditorSelectionChanged);

	RegisterCustomizations();
	OnEditorSelectionChanged();
}

SPlotDetailsView::~SPlotDetailsView()
{
	if (PlotEditor.IsValid())
	{
		PlotEditor.Pin()->OnSelectedPlotsChanging.RemoveAll(this);
		PlotEditor.Pin()->OnSelectedPlotsChanged.RemoveAll(this);
	}

	// Unregister the property type layouts
	static FName PropertyEditor("PropertyEditor");
	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(PropertyEditor);

	PropertyView->UnregisterInstancedCustomPropertyLayout(UPlotItem_RoleControl::StaticClass());
	PropertyView->UnregisterInstancedCustomPropertyLayout(UPlotItem_Root::StaticClass());
	PropertyView->UnregisterInstancedCustomPropertyLayout(UPlot::StaticClass());
	PropertyView->UnregisterInstancedCustomPropertyLayout(UPlotItem::StaticClass());
}

void SPlotDetailsView::RegisterCustomizations()
{
	PropertyView->RegisterInstancedCustomPropertyLayout(UPlotItem::StaticClass(), FOnGetDetailCustomizationInstance::CreateStatic(&FPlotItemlCustomizations::MakeInstance, PlotEditor.Pin().ToSharedRef()));
	PropertyView->RegisterInstancedCustomPropertyLayout(UPlotItem_RoleControl::StaticClass(), FOnGetDetailCustomizationInstance::CreateStatic(&FPlotRoleControlDetailCustomizations::MakeInstance, PlotEditor.Pin().ToSharedRef()));
	PropertyView->RegisterInstancedCustomPropertyLayout(UPlotItem_Root::StaticClass(), FOnGetDetailCustomizationInstance::CreateStatic(&FPlotRootDetailCustomizations::MakeInstance, PlotEditor.Pin().ToSharedRef()));
	PropertyView->RegisterInstancedCustomPropertyLayout(UPlot::StaticClass(), FOnGetDetailCustomizationInstance::CreateStatic(&FPlotDetailCustomizations::MakeInstance, PlotEditor.Pin().ToSharedRef()));
}

void SPlotDetailsView::OnEditorSelectionChanging()
{
	ClearFocusIfOwned();
	SelectedObjects.Empty();
	PropertyView->SetObjects(SelectedObjects);
}

void SPlotDetailsView::OnEditorSelectionChanged()
{
	SelectedObjects.Empty();
	PropertyView->SetObjects(SelectedObjects);

	TSet<FPlotReference> SelectedItems = PlotEditor.Pin()->GetSelectedPlotItems();
	if (SelectedItems.Num() > 0)
	{
		for (FPlotReference& ItemRef : SelectedItems)
		{
			SelectedObjects.Add(ItemRef.GetTemplate());
		}
	}

	TSet< TWeakObjectPtr<UObject> > Selection = PlotEditor.Pin()->GetSelectedObjects();
	for (TWeakObjectPtr<UObject> Selected : Selection)
	{
		if (UObject* S = Selected.Get())
		{
			SelectedObjects.Add(S);
		}
	}

	if (SelectedObjects.Num() == 1 && SelectedObjects[0].IsValid())
	{
		ClassLinkArea->SetContent(FEditorClassUtils::GetSourceLink(SelectedObjects[0]->GetClass(), TWeakObjectPtr<UObject>()));
	}
	const bool bForceRefresh = false;
	PropertyView->SetObjects(SelectedObjects, bForceRefresh);
}

void SPlotDetailsView::OnPropertyViewObjectArrayChanged(const FString& InTitle, const TArray<UObject*>& InObjects)
{
	UPlot* UMGBlueprint = PlotEditor.Pin()->GetPlot();
	if (UMGBlueprint)
	{
		UPackage* UMGPackage = UMGBlueprint->GetOutermost();
		if (UMGPackage)
		{
			TMap<TWeakObjectPtr<UObject>, TWeakObjectPtr<UPackage>> ObjectToPackageMapping;

			for (const TWeakObjectPtr<UObject>& Object : InObjects)
			{
				ObjectToPackageMapping.Add(Object, UMGPackage);
			}

			PropertyView->SetObjectPackageOverrides(ObjectToPackageMapping);
		}
	}
}

void SPlotDetailsView::ClearFocusIfOwned()
{
	static bool bIsReentrant = false;
	if (!bIsReentrant)
	{
		bIsReentrant = true;
		if (FSlateApplication::Get().HasFocusedDescendants(AsShared()))
		{
			FSlateApplication::Get().ClearKeyboardFocus(EFocusCause::Mouse);
		}
		bIsReentrant = false;
	}
}

bool SPlotDetailsView::IsItemCDOSelected() const
{
	if (SelectedObjects.Num() == 1)
	{
		UPlotItem* Item = Cast<UPlotItem>(SelectedObjects[0].Get());
		if (Item)
		{
			return true;
		}
	}
	return false;
}

EVisibility SPlotDetailsView::GetBorderAreaVisibility() const
{
	return (SelectedObjects.Num() == 0) ? EVisibility::Collapsed : EVisibility::Visible;
}

EVisibility SPlotDetailsView::GetNameAreaVisibility() const
{
	return IsItemCDOSelected() ? EVisibility::Collapsed : EVisibility::Visible;
}

EVisibility SPlotDetailsView::GetCategoryAreaVisibility() const
{
	return IsItemCDOSelected() ? EVisibility::Visible : EVisibility::Collapsed;
}

void SPlotDetailsView::HandleCategoryTextCommitted(const FText& Text, ETextCommit::Type CommitType)
{
}

FText SPlotDetailsView::GetCategoryText() const
{
	return FText::GetEmpty();
}

const FSlateBrush* SPlotDetailsView::GetNameIcon() const
{
	return FSlateIconFinder::FindIconBrushForClass(UPlotItem::StaticClass());
}

FText SPlotDetailsView::GetNameText() const
{
	return FText::GetEmpty();
}

void SPlotDetailsView::HandleNameTextChanged(const FText& Text)
{
	FText OutErrorMessage;
	if (!HandleVerifyNameTextChanged(Text, OutErrorMessage))
	{
		NameTextBox->SetError(OutErrorMessage);
	}
	else
	{
		NameTextBox->SetError(FText::GetEmpty());
	}
}

bool SPlotDetailsView::HandleVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage)
{
	return false;
}

void SPlotDetailsView::HandleNameTextCommitted(const FText& Text, ETextCommit::Type CommitType)
{
	static bool IsReentrant = false;

	if (!IsReentrant)
	{
		IsReentrant = true;
		if (SelectedObjects.Num() == 1)
		{
			FText DummyText;
			if (HandleVerifyNameTextChanged(Text, DummyText))
			{
				UPlotItem* Item = Cast<UPlotItem>(SelectedObjects[0].Get());
				FPlotEditorUtils::RenameItem(PlotEditor.Pin().ToSharedRef(), Item, Text.ToString());
			}
		}
		IsReentrant = false;

		if (CommitType == ETextCommit::OnUserMovedFocus || CommitType == ETextCommit::OnCleared)
		{
			NameTextBox->SetError(FText::GetEmpty());
		}
	}
}

void SPlotDetailsView::NotifyPreChange(FEditPropertyChain* PropertyAboutToChange)
{
}

void SPlotDetailsView::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FEditPropertyChain* PropertyThatChanged)
{
	const static FName DesignerRebuildName("DesignerRebuild");
	if (PropertyChangedEvent.Property->HasMetaData(DesignerRebuildName) || PropertyThatChanged->GetActiveMemberNode()->GetValue()->HasMetaData(DesignerRebuildName))
	{
		PlotEditor.Pin()->GetPlot()->BroadcastChanged();
	}
}

#undef LOCTEXT_NAMESPACE
