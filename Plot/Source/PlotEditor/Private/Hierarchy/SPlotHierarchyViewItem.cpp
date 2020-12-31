#include "Hierarchy/SPlotHierarchyViewItem.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/Images/SImage.h"
#include "DragAndDrop/DecoratedDragDropOp.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "ScopedTransaction.h"
#include "Styling/SlateIconFinder.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "PlotReference.h"
#include "PlotTemplate.h"
#include "DragDrop/PlotTemplateDragDropOp.h"
#include "Templates/PlotTemplateBlueprintClass.h"
#include "Utils/PlotEditorUtils.h"
#define LOCTEXT_NAMESPACE "PLOT"

class FPlotHierarchyPlotDragDropOp : public FDecoratedDragDropOp
{
public:
	DRAG_DROP_OPERATOR_TYPE(FPlotHierarchyPlotDragDropOp, FDecoratedDragDropOp)
		virtual ~FPlotHierarchyPlotDragDropOp();
	virtual void OnDrop(bool bDropWasHandled, const FPointerEvent& MouseEvent) override;
	struct FItem
	{
		//
		FPlotReference PlotItem;
	};

	TArray<FItem> DraggedItems;
	FScopedTransaction* Transaction;
	static TSharedRef<FPlotHierarchyPlotDragDropOp> New(UPlot* InPlot, const TArray<FPlotReference>& InItems);
};

TSharedRef<FPlotHierarchyPlotDragDropOp> FPlotHierarchyPlotDragDropOp::New(UPlot* InPlot, const TArray<FPlotReference>& InItems)
{
	check(InItems.Num() > 0);
	TSharedRef<FPlotHierarchyPlotDragDropOp> Operation = MakeShareable(new FPlotHierarchyPlotDragDropOp());
	if (InItems.Num() == 1)
	{
		Operation->CurrentHoverText = Operation->DefaultHoverText = InItems[0].GetTemplate()->GetDisplayLabel();
		Operation->Transaction = new FScopedTransaction(LOCTEXT("Designer_MoveItem", "Move Item"));
	}
	else
	{
		Operation->CurrentHoverText = Operation->DefaultHoverText = LOCTEXT("Designer_DragMultipleItems", "Multiple Items");
		Operation->Transaction = new FScopedTransaction(LOCTEXT("Designer_MoveItems", "Move Items"));
	}
	for (const auto& Item : InItems)
	{
		FItem DraggedItem;
		DraggedItem.PlotItem = Item;
		Operation->DraggedItems.Add(DraggedItem);
	}
	Operation->Construct();
	return Operation;
}

FPlotHierarchyPlotDragDropOp::~FPlotHierarchyPlotDragDropOp()
{
	delete Transaction;
}

void FPlotHierarchyPlotDragDropOp::OnDrop(bool bDropWasHandled, const FPointerEvent& MouseEvent)
{
	if (!bDropWasHandled)
	{
		Transaction->Cancel();
	}
}

//////////////////////////////////////////////////////////////////////////

TOptional<EItemDropZone> ProcessHierarchyDragDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone, bool bIsDrop, TSharedPtr<FPlotEditor> InEditor, FPlotReference TargetItem, TOptional<int32> Index = TOptional<int32>())
{
	UPlotItem* TargetTemplate = TargetItem.GetTemplate();
	if (TargetTemplate && (DropZone == EItemDropZone::AboveItem || DropZone == EItemDropZone::BelowItem))
	{
		if (UPlotItem* TargetParentTemplate = TargetTemplate->GetParent())
		{
			int32 InsertIndex = TargetTemplate->GetIndex();
			InsertIndex += (DropZone == EItemDropZone::AboveItem) ? 0 : 1;
			InsertIndex = FMath::Clamp(InsertIndex, 0, TargetParentTemplate->GetChildrenCount());
			FPlotReference TargetParentTemplateRef = InEditor->GetReferenceFromTemplate(TargetParentTemplate);
			TOptional<EItemDropZone> ParentZone = ProcessHierarchyDragDrop(DragDropEvent, EItemDropZone::OntoItem, bIsDrop, InEditor, TargetParentTemplateRef, InsertIndex);
			if (ParentZone.IsSet())
			{
				return DropZone;
			}
			else
			{
				DropZone = EItemDropZone::OntoItem;
			}
		}
	}
	else
	{
		DropZone = EItemDropZone::OntoItem;
	}

	UPlot* Plot = InEditor->GetPlot();
	check(Plot != nullptr && Plot->RootItem != nullptr);

	TSharedPtr<FPlotTemplateDragDropOp> TemplateDragDropOp = DragDropEvent.GetOperationAs<FPlotTemplateDragDropOp>();
	if (TemplateDragDropOp.IsValid())
	{
		TemplateDragDropOp->ResetToDefaultToolTip();
		if (UPlotItem* Parent = TargetItem.GetTemplate())
		{
			if (!Parent->CanHaveMultipleChildren())
			{
				TemplateDragDropOp->CurrentHoverText = LOCTEXT("NoAdditionalChildren", "Item can't accept additional children.");
			}
			else if(!Parent->IsSupported(TemplateDragDropOp->Template->GetTemplateClass()))
			{
				TemplateDragDropOp->CurrentHoverText = LOCTEXT("Not Supported", "Parent can't supported item.");
			}
			else
			{
				if (bIsDrop)
				{
					//Create New Item
					UPlotItem* NewItem = TemplateDragDropOp->Template->Create(Plot);
					if (Index.IsSet())
					{
						Parent->InsertChildAt(Index.GetValue(), NewItem);
					}
					else
					{
						Parent->AddChild(NewItem);
					}
					Plot->BroadcastChanged();
				}
				TemplateDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.OK"));
				return EItemDropZone::OntoItem;
			}
		}
		else
		{
			TemplateDragDropOp->CurrentHoverText = LOCTEXT("CantHaveChildren", "Item can't have children.");
		}
		TemplateDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
		return TOptional<EItemDropZone>();
	}

	TSharedPtr<FPlotHierarchyPlotDragDropOp> HierarchyDragDropOp = DragDropEvent.GetOperationAs<FPlotHierarchyPlotDragDropOp>();
	if (HierarchyDragDropOp.IsValid())
	{
		HierarchyDragDropOp->ResetToDefaultToolTip();
		if (TargetItem.IsValid())
		{
			const bool bIsDraggedObject = HierarchyDragDropOp->DraggedItems.ContainsByPredicate([TargetItem](const FPlotHierarchyPlotDragDropOp::FItem& DraggedItem)
				{
					return DraggedItem.PlotItem == TargetItem;
				});

			if (bIsDraggedObject)
			{
				HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
				return TOptional<EItemDropZone>();
			}

			UPlotItem* NewParent = TargetItem.GetTemplate();
			if (!NewParent)
			{
				HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
				HierarchyDragDropOp->CurrentHoverText = LOCTEXT("CantHaveChildren", "Item can't have children.");
				return TOptional<EItemDropZone>();
			}

			if (!NewParent->CanHaveMultipleChildren())
			{
				HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
				HierarchyDragDropOp->CurrentHoverText = LOCTEXT("NoAdditionalChildren", "Item can't accept additional children.");
				return TOptional<EItemDropZone>();
			}

			if (!NewParent->CanHaveMultipleChildren() && HierarchyDragDropOp->DraggedItems.Num() > 1)
			{
				HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
				HierarchyDragDropOp->CurrentHoverText = LOCTEXT("CantHaveMultipleChildren", "Item can't have multiple children.");
				return TOptional<EItemDropZone>();
			}

			bool bFoundNewParentInChildSet = false;
			for (const auto& DraggedItem : HierarchyDragDropOp->DraggedItems)
			{
				UPlotItem* TemplateItem = DraggedItem.PlotItem.GetTemplate();
				Plot->ForItemAndChildren(TemplateItem, [&](UPlotItem* Each) {
					if (NewParent == Each)
					{
						bFoundNewParentInChildSet = true;
					}
					});
			}

			if (bFoundNewParentInChildSet)
			{
				HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
				HierarchyDragDropOp->CurrentHoverText = LOCTEXT("CantMakeItemChildOfChildren", "Can't make item a child of its children.");
				return TOptional<EItemDropZone>();
			}

			if (bIsDrop)
			{
				NewParent->SetFlags(RF_Transactional);
				NewParent->Modify();
				TSet<FPlotReference> SelectedTemplates;
				for (const auto& DraggedItem : HierarchyDragDropOp->DraggedItems)
				{
					UPlotItem* TemplateItem = DraggedItem.PlotItem.GetTemplate();
					if (Index.IsSet())
					{
						const bool bInsertInSameParent = TemplateItem->GetParent() == NewParent;
						const bool bNeedToDropIndex = TemplateItem->GetIndex() < Index.GetValue();

						if (bInsertInSameParent && bNeedToDropIndex)
						{
							Index = Index.GetValue() - 1;
						}
					}
					TemplateItem->Remove();
					if (Index.IsSet())
					{
						NewParent->InsertChildAt(Index.GetValue(), TemplateItem);
						Index = Index.GetValue() + 1;
					}
					else
					{
						NewParent->AddChild(TemplateItem);
					}
					Plot->BroadcastChanged();
					SelectedTemplates.Add(InEditor->GetReferenceFromTemplate(TemplateItem));
				}
				InEditor->SelectPlotItems(SelectedTemplates, false);
			}

			HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.OK"));
			return EItemDropZone::OntoItem;
		}
		else
		{
			HierarchyDragDropOp->CurrentIconBrush = FEditorStyle::GetBrush(TEXT("Graph.ConnectorFeedback.Error"));
			HierarchyDragDropOp->CurrentHoverText = LOCTEXT("CantHaveChildren", "Item can't have children.");
		}

		return TOptional<EItemDropZone>();
	}

	return TOptional<EItemDropZone>();
}


//////////////////////////////////////////////////////////////////////////

FPlotHierarchyModel::FPlotHierarchyModel(TSharedPtr<FPlotEditor> InEditor)
	: bInitialized(false)
	, bIsSelected(false)
	, PlotEditor(InEditor)
{

}

TOptional<EItemDropZone> FPlotHierarchyModel::HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone)
{
	return TOptional<EItemDropZone>();
}

FReply FPlotHierarchyModel::HandleDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (!IsRoot())
	{
		TArray<FPlotReference> DraggedItems;
		if (bIsSelected)
		{
			const TSet<FPlotReference>& SelectedItems = PlotEditor.Pin()->GetSelectedPlotItems();
			if (SelectedItems.Num() > 1)
			{
				for (const auto& SelectedItem : SelectedItems)
				{
					DraggedItems.Add(SelectedItem);
				}
			}
		}

		if (DraggedItems.Num() == 0)
		{
			FPlotReference ThisItem = AsDraggedItemReference();
			if (ThisItem.IsValid())
			{
				DraggedItems.Add(ThisItem);
			}
		}

		if (DraggedItems.Num() > 0)
		{
			return FReply::Handled().BeginDragDrop(FPlotHierarchyPlotDragDropOp::New(PlotEditor.Pin()->GetPlot(), DraggedItems));
		}
	}

	return FReply::Unhandled();
}

void FPlotHierarchyModel::HandleDragEnter(const FDragDropEvent& DragDropEvent)
{
}

void FPlotHierarchyModel::HandleDragLeave(const FDragDropEvent& DragDropEvent)
{
	TSharedPtr<FDecoratedDragDropOp> DecoratedDragDropOp = DragDropEvent.GetOperationAs<FDecoratedDragDropOp>();
	if (DecoratedDragDropOp.IsValid())
	{
		DecoratedDragDropOp->ResetToDefaultToolTip();
	}
}

FReply FPlotHierarchyModel::HandleAcceptDrop(FDragDropEvent const& DragDropEvent, EItemDropZone DropZone)
{
	return FReply::Unhandled();
}

bool FPlotHierarchyModel::OnVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage)
{
	return false;
}

void FPlotHierarchyModel::OnNameTextCommited(const FText& InText, ETextCommit::Type CommitInfo)
{
}

void FPlotHierarchyModel::RemovePreviewItem(UPlot* InPlot, UPlotItem* InItem)
{
	InPlot->SetFlags(RF_Transactional);
	InPlot->Modify();
	InPlot->RemoveItem(InItem);
	if (InItem->GetOutermost() != GetTransientPackage())
	{
		InItem->SetFlags(RF_NoFlags);
		InItem->Rename(nullptr, GetTransientPackage());
	}
}

void FPlotHierarchyModel::InitializeChildren()
{
	if (!bInitialized)
	{
		bInitialized = true;
		GetChildren(Models);
	}
}

void FPlotHierarchyModel::GatherChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children)
{
	InitializeChildren();

	Children.Append(Models);
}

bool FPlotHierarchyModel::ContainsSelection()
{
	InitializeChildren();

	for (TSharedPtr<FPlotHierarchyModel>& Model : Models)
	{
		if (Model->IsSelected() || Model->ContainsSelection())
		{
			return true;
		}
	}
	return false;
}

void FPlotHierarchyModel::RefreshSelection()
{
	InitializeChildren();

	UpdateSelection();

	for (TSharedPtr<FPlotHierarchyModel>& Model : Models)
	{
		Model->RefreshSelection();
	}
}

bool FPlotHierarchyModel::IsSelected() const
{
	return bIsSelected;
}

//////////////////////////////////////////////////////////////////////////

FPlotHierarchyRoot::FPlotHierarchyRoot(TSharedPtr<FPlotEditor> InEditor)
	: FPlotHierarchyModel(InEditor)
{
}

FName FPlotHierarchyRoot::GetUniqueName() const
{
	static const FName DesignerRootName(TEXT("PlotDesignerRoot"));
	return DesignerRootName;
}

FText FPlotHierarchyRoot::GetText() const
{
	return FText::FromString(PlotEditor.Pin()->GetPlot()->GetName());
}

FSlateColor FPlotHierarchyRoot::GetColor() const
{
	return  FLinearColor(1, 1, 1);
}

const FSlateBrush* FPlotHierarchyRoot::GetImage() const
{
	return nullptr;
}

FSlateFontInfo FPlotHierarchyRoot::GetFont() const
{
	return FCoreStyle::GetDefaultFontStyle("Bold", 10);
}

void FPlotHierarchyRoot::GetChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children)
{
	TSharedPtr<FPlotEditor> Ed = PlotEditor.Pin();
	UPlot* PlotAsset = Ed->GetPlot();

	if (PlotAsset->RootItem)
	{
		TSharedPtr<FPlotHierarchyWidget> RootChild = MakeShareable(new FPlotHierarchyWidget(Ed->GetReferenceFromTemplate(PlotAsset->RootItem), Ed));
		Children.Add(RootChild);
	}
}

void FPlotHierarchyRoot::OnSelection()
{
	TSharedPtr<FPlotEditor> PlotEd = PlotEditor.Pin();
	TSet<UObject*> SelectedObjects;
	SelectedObjects.Add(PlotEd->GetPlot());
	PlotEd->SelectObjects(SelectedObjects);
}

void FPlotHierarchyRoot::UpdateSelection()
{
	
}


TOptional<EItemDropZone> FPlotHierarchyRoot::HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone)
{
	TSharedPtr<FPlotTemplateDragDropOp> TemplateDragDropOp = DragDropEvent.GetOperationAs<FPlotTemplateDragDropOp>();
	if (TemplateDragDropOp.IsValid())
	{
		UPlot* Plot = PlotEditor.Pin()->GetPlot();
		if (Plot)
		{
			UPlotItem* TempItem = TemplateDragDropOp->Template->Create(Plot);
			if (TempItem)
			{
				FPlotHierarchyModel::RemovePreviewItem(Plot, TempItem);
			}
		}
	}

	bool bIsDrop = false;
	return  ProcessHierarchyDragDrop(DragDropEvent, DropZone, bIsDrop, PlotEditor.Pin(), FPlotReference());
}

FReply FPlotHierarchyRoot::HandleAcceptDrop(FDragDropEvent const& DragDropEvent, EItemDropZone DropZone)
{
	bool bIsDrop = true;
	TOptional<EItemDropZone> Zone = ProcessHierarchyDragDrop(DragDropEvent, DropZone, bIsDrop, PlotEditor.Pin(), FPlotReference());
	return Zone.IsSet() ? FReply::Handled() : FReply::Unhandled();
}


//////////////////////////////////////////////////////////////////////////

FPlotHierarchyWidget::FPlotHierarchyWidget(FPlotReference InItem, TSharedPtr<FPlotEditor> InEditor)
	: FPlotHierarchyModel(InEditor)
	, Item(InItem)
	, bEditing(false)
{
}

FName FPlotHierarchyWidget::GetUniqueName() const
{
	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		return ItemTemplate->GetFName();
	}
	return NAME_None;
}

FText FPlotHierarchyWidget::GetText() const
{
	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		return  ItemTemplate->GetDisplayLabel();
	}
	return FText::GetEmpty();
}

FSlateColor FPlotHierarchyWidget::GetColor() const
{
	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		return  ItemTemplate->GetColor();
	}
	return FLinearColor(1,1,1,1);
}

FText FPlotHierarchyWidget::GetImageToolTipText() const
{
	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		return FText::FromString(ItemTemplate->GetName());
	}

	return FText::GetEmpty();
}

FText FPlotHierarchyWidget::GetLabelToolTipText() const
{
	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		return FText::FromString(TEXT("[") + ItemTemplate->GetClass()->GetDisplayNameText().ToString() + TEXT("]"));
	}
	return FText::GetEmpty();
}

void FPlotHierarchyWidget::GetFilterStrings(TArray<FString>& OutStrings) const
{
	FPlotHierarchyModel::GetFilterStrings(OutStrings);

	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		OutStrings.Add(ItemTemplate->GetClass()->GetName());
		OutStrings.Add(ItemTemplate->GetClass()->GetDisplayNameText().ToString());
	}
}

const FSlateBrush* FPlotHierarchyWidget::GetImage() const
{
	if (Item.GetTemplate())
	{
		return FSlateIconFinder::FindIconBrushForClass(Item.GetTemplate()->GetClass());
	}
	return nullptr;
}

FSlateFontInfo FPlotHierarchyWidget::GetFont() const
{
	UPlotItem* ItemTemplate = Item.GetTemplate();
	if (ItemTemplate)
	{
		return FCoreStyle::GetDefaultFontStyle("Bold", 10);
	}

	static FName NormalFont("NormalFont");
	return FCoreStyle::Get().GetFontStyle(NormalFont);
}

TOptional<EItemDropZone> FPlotHierarchyWidget::HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone)
{
	TSharedPtr<FPlotTemplateDragDropOp> TemplateDragDropOp = DragDropEvent.GetOperationAs<FPlotTemplateDragDropOp>();
	if (TemplateDragDropOp.IsValid())
	{
		UPlot* Plot = PlotEditor.Pin()->GetPlot();
		if(Plot)
		{
			UPlotItem* TempItem = TemplateDragDropOp->Template->Create(Plot);
			if (TempItem)
			{
				RemovePreviewItem(Plot, TempItem);
			}
		}
	}
	const bool bIsDrop = false;
	return ProcessHierarchyDragDrop(DragDropEvent, DropZone, bIsDrop, PlotEditor.Pin(), Item);
}

void FPlotHierarchyWidget::HandleDragLeave(const FDragDropEvent& DragDropEvent)
{
	TSharedPtr<FDecoratedDragDropOp> DecoratedDragDropOp = DragDropEvent.GetOperationAs<FDecoratedDragDropOp>();
	if (DecoratedDragDropOp.IsValid())
	{
		DecoratedDragDropOp->ResetToDefaultToolTip();
	}
	FPlotHierarchyModel::HandleDragLeave(DragDropEvent);
}

FReply FPlotHierarchyWidget::HandleAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone)
{
	const bool bIsDrop = true;
	TOptional<EItemDropZone> Zone = ProcessHierarchyDragDrop(DragDropEvent, DropZone, bIsDrop, PlotEditor.Pin(), Item);
	return Zone.IsSet() ? FReply::Handled() : FReply::Unhandled();
}

bool FPlotHierarchyWidget::OnVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage)
{
	return FPlotEditorUtils::VerifyItemRename(PlotEditor.Pin().ToSharedRef(), Item, InText, OutErrorMessage);
}

void FPlotHierarchyWidget::OnNameTextCommited(const FText& InText, ETextCommit::Type CommitInfo)
{
	FPlotEditorUtils::RenameItem(PlotEditor.Pin().ToSharedRef(), Item.GetTemplate(), InText.ToString());
}

void FPlotHierarchyWidget::GetChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children)
{
	TSharedPtr<FPlotEditor> BPEd = PlotEditor.Pin();
	for (int32 i = 0; i < Item.GetTemplate()->GetChildrenCount(); i++)
	{
		UPlotItem* Child = Item.GetTemplate()->GetChildAt(i);
		if (Child)
		{
			TSharedPtr<FPlotHierarchyWidget> ChildItem = MakeShareable(new FPlotHierarchyWidget(BPEd->GetReferenceFromTemplate(Child), BPEd));
			Children.Add(ChildItem);
		}
	}
}

void FPlotHierarchyWidget::OnSelection()
{
	TSet<FPlotReference> SelectedItems;
	SelectedItems.Add(Item);

	PlotEditor.Pin()->SelectPlotItems(SelectedItems, true);

}

void FPlotHierarchyWidget::OnMouseEnter()
{
	PlotEditor.Pin()->SetHoveredPlotItem(Item);
}

void FPlotHierarchyWidget::OnMouseLeave()
{
	PlotEditor.Pin()->ClearHoveredPlotItem();
}

bool FPlotHierarchyWidget::IsHovered() const
{
	return PlotEditor.Pin()->GetHoveredPlotItem() == Item;
}

void FPlotHierarchyWidget::UpdateSelection()
{
	const TSet<FPlotReference>& SelectedItems = PlotEditor.Pin()->GetSelectedPlotItems();
	bIsSelected = SelectedItems.Contains(Item);
}

bool FPlotHierarchyWidget::CanRename() const
{
	if (Item.GetTemplate()->IsA(UPlotItem_Root::StaticClass()))
	{
		return false;
	}
	return true;
}

void FPlotHierarchyWidget::RequestBeginRename()
{
	RenameEvent.ExecuteIfBound();
}

void FPlotHierarchyWidget::OnBeginEditing()
{
	bEditing = true;
}

void FPlotHierarchyWidget::OnEndEditing()
{
	bEditing = false;
}

//////////////////////////////////////////////////////////////////////////

void SPlotHierarchyViewItem::Construct(const FArguments& InArgs, const TSharedRef< STableViewBase >& InOwnerTableView, TSharedPtr<FPlotHierarchyModel> InModel)
{
	Model = InModel;
	Model->RenameEvent.BindSP(this, &SPlotHierarchyViewItem::OnRequestBeginRename);
	STableRow< TSharedPtr<FPlotHierarchyModel> >::Construct(
		STableRow< TSharedPtr<FPlotHierarchyModel> >::FArguments()
		.OnCanAcceptDrop(this, &SPlotHierarchyViewItem::HandleCanAcceptDrop)
		.OnAcceptDrop(this, &SPlotHierarchyViewItem::HandleAcceptDrop)
		.OnDragDetected(this, &SPlotHierarchyViewItem::HandleDragDetected)
		.OnDragEnter(this, &SPlotHierarchyViewItem::HandleDragEnter)
		.OnDragLeave(this, &SPlotHierarchyViewItem::HandleDragLeave)
		.Padding(0.0f)
		.Content()
		[
			SNew(SHorizontalBox)

			// item icon
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.VAlign(VAlign_Center)
		[
			SNew(SImage)
			.ColorAndOpacity(FLinearColor(1, 1, 1, 0.5))
		.Image(Model->GetImage())
		.ToolTipText(Model->GetImageToolTipText())
		]

	// Name of the item
	+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		.Padding(2, 0, 0, 0)
		.VAlign(VAlign_Center)
		[
			SAssignNew(EditBox, SInlineEditableTextBlock)
			.Font(this, &SPlotHierarchyViewItem::GetItemFont)
		.Text(this, &SPlotHierarchyViewItem::GetItemText)
		.ColorAndOpacity(this, &SPlotHierarchyViewItem::GetItemColor)
		.ToolTipText(Model->GetLabelToolTipText())
		.HighlightText(InArgs._HighlightText)
		.IsReadOnly(this, &SPlotHierarchyViewItem::IsReadOnly)
		.OnEnterEditingMode(this, &SPlotHierarchyViewItem::OnBeginNameTextEdit)
		.OnExitEditingMode(this, &SPlotHierarchyViewItem::OnEndNameTextEdit)
		.OnVerifyTextChanged(this, &SPlotHierarchyViewItem::OnVerifyNameTextChanged)
		.OnTextCommitted(this, &SPlotHierarchyViewItem::OnNameTextCommited)
		.IsSelected(this, &SPlotHierarchyViewItem::IsSelectedExclusively)
		]
		],
		InOwnerTableView);
}

SPlotHierarchyViewItem::~SPlotHierarchyViewItem()
{
	Model->RenameEvent.Unbind();
}

void SPlotHierarchyViewItem::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	STableRow< TSharedPtr<FPlotHierarchyModel> >::OnMouseEnter(MyGeometry, MouseEvent);
	Model->OnMouseEnter();
}

void SPlotHierarchyViewItem::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	STableRow< TSharedPtr<FPlotHierarchyModel> >::OnMouseLeave(MouseEvent);

	Model->OnMouseLeave();
}

void SPlotHierarchyViewItem::OnBeginNameTextEdit()
{
	Model->OnBeginEditing();
	InitialText = Model->GetText();
}

void SPlotHierarchyViewItem::OnEndNameTextEdit()
{
	Model->OnEndEditing();
}

bool SPlotHierarchyViewItem::OnVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage)
{
	return Model->OnVerifyNameTextChanged(InText, OutErrorMessage);
}

void SPlotHierarchyViewItem::OnNameTextCommited(const FText& InText, ETextCommit::Type CommitInfo)
{
	if (InitialText.EqualToCaseIgnored(InText))
	{
		return;
	}
	Model->OnNameTextCommited(InText, CommitInfo);
}

bool SPlotHierarchyViewItem::IsReadOnly() const
{
	return !Model->CanRename();
}

void SPlotHierarchyViewItem::OnRequestBeginRename()
{
	TSharedPtr<SInlineEditableTextBlock> SafeEditBox = EditBox.Pin();
	if (SafeEditBox.IsValid())
	{
		SafeEditBox->EnterEditingMode();
	}
}

FSlateFontInfo SPlotHierarchyViewItem::GetItemFont() const
{
	return Model->GetFont();
}

FText SPlotHierarchyViewItem::GetItemText() const
{
	return Model->GetText();
}

FSlateColor SPlotHierarchyViewItem::GetItemColor() const
{
	return  Model->GetColor() ;
}

bool SPlotHierarchyViewItem::IsHovered() const
{
	return bIsHovered || Model->IsHovered();
}

void SPlotHierarchyViewItem::HandleDragEnter(FDragDropEvent const& DragDropEvent)
{
	Model->HandleDragEnter(DragDropEvent);
}

void SPlotHierarchyViewItem::HandleDragLeave(const FDragDropEvent& DragDropEvent)
{
	Model->HandleDragLeave(DragDropEvent);
}

TOptional<EItemDropZone> SPlotHierarchyViewItem::HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone, TSharedPtr<FPlotHierarchyModel> TargetItem)
{
	return Model->HandleCanAcceptDrop(DragDropEvent, DropZone);
}

FReply SPlotHierarchyViewItem::HandleDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return Model->HandleDragDetected(MyGeometry, MouseEvent);
}

FReply SPlotHierarchyViewItem::HandleAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone, TSharedPtr<FPlotHierarchyModel> TargetItem)
{
	return Model->HandleAcceptDrop(DragDropEvent, DropZone);
}
#undef LOCTEXT_NAMESPACE
