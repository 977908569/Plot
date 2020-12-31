
#pragma once
#include "CoreMinimal.h"
#include "SlateFwd.h"
#include "Fonts/SlateFontInfo.h"
#include "Input/DragAndDrop.h"
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Views/STableRow.h"
#include "PlotEditor.h"
#include "PlotReference.h"

class FPlotEditor;
class FPlotHierarchyModel : public TSharedFromThis < FPlotHierarchyModel >
{
public:
	FPlotHierarchyModel(TSharedPtr<FPlotEditor> InEditor);
	virtual ~FPlotHierarchyModel() { }
	virtual FName GetUniqueName() const = 0;
	virtual FText GetText() const = 0;
	virtual FSlateColor GetColor() const = 0;
	virtual FText GetImageToolTipText() const { return FText::GetEmpty(); }
	virtual FText GetLabelToolTipText() const { return FText::GetEmpty(); }
	virtual void GetFilterStrings(TArray<FString>& OutStrings) const { OutStrings.Add(GetText().ToString()); }
	virtual const FSlateBrush* GetImage() const = 0;
	virtual FSlateFontInfo GetFont() const = 0;
	FReply HandleDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void HandleDragEnter(const FDragDropEvent& DragDropEvent);
	virtual void HandleDragLeave(const FDragDropEvent& DragDropEvent);
	virtual TOptional<EItemDropZone> HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone);
	virtual FReply HandleAcceptDrop(FDragDropEvent const& DragDropEvent, EItemDropZone DropZone);
	virtual bool OnVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage);
	virtual void OnNameTextCommited(const FText& InText, ETextCommit::Type CommitInfo);
	virtual void GatherChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children);
	virtual void OnSelection() = 0;
	virtual void OnMouseEnter() {}
	virtual void OnMouseLeave() {}
	void RefreshSelection();
	bool ContainsSelection();
	bool IsSelected() const;
	virtual bool IsHovered() const { return false; }

	virtual bool IsExpanded() const { return true; }
	virtual void SetExpanded(bool bIsExpanded) { }

	virtual bool CanRename() const { return false; }
	virtual void RequestBeginRename() { }

	virtual void OnBeginEditing() { }
	virtual void OnEndEditing() { }

	virtual bool IsRoot() const { return false; }
public:
	FSimpleDelegate RenameEvent;
protected:
	virtual void GetChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children) = 0;
	virtual void UpdateSelection() = 0;
	virtual FPlotReference AsDraggedItemReference() const { return FPlotReference(); }
	void RemovePreviewItem(class UPlot* InPlot, class UPlotItem* InItem);
private:
	void InitializeChildren();
protected:
	bool bInitialized;
	bool bIsSelected;
	TWeakPtr<FPlotEditor> PlotEditor;
	TArray< TSharedPtr<FPlotHierarchyModel> > Models;
};

//PlotItem Node
class FPlotHierarchyRoot : public FPlotHierarchyModel
{
public:
	FPlotHierarchyRoot(TSharedPtr<FPlotEditor> InEditor);
	virtual ~FPlotHierarchyRoot() {}
	virtual FName GetUniqueName() const override;
	virtual FText GetText() const override;
	virtual FSlateColor GetColor() const override;
	virtual const FSlateBrush* GetImage() const override;
	virtual FSlateFontInfo GetFont() const override;
	virtual void OnSelection() override;
	virtual bool CanRename() const override { return false; }
	virtual TOptional<EItemDropZone> HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone) override;
	virtual FReply HandleAcceptDrop(FDragDropEvent const& DragDropEvent, EItemDropZone DropZone) override;
	virtual bool IsRoot() const override { return true; }
protected:
	virtual void GetChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children) override;
	virtual void UpdateSelection() override;
private:
	FText RootText;
};

class FPlotHierarchyWidget : public FPlotHierarchyModel
{
public:
	FPlotHierarchyWidget(FPlotReference InItem, TSharedPtr<FPlotEditor> InEditor);
	virtual ~FPlotHierarchyWidget() {}
	virtual FName GetUniqueName() const override;
	virtual FText GetText() const override;
	virtual FSlateColor GetColor() const override;
	virtual FText GetImageToolTipText() const override;
	virtual FText GetLabelToolTipText() const override;
	virtual void GetFilterStrings(TArray<FString>& OutStrings) const override;
	virtual const FSlateBrush* GetImage() const override;
	virtual FSlateFontInfo GetFont() const override;
	virtual TOptional<EItemDropZone> HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone) override;
	virtual void HandleDragLeave(const FDragDropEvent& DragDropEvent) override;
	virtual FReply HandleAcceptDrop(FDragDropEvent const& DragDropEvent, EItemDropZone DropZone) override;
	virtual bool OnVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage) override;
	virtual void OnNameTextCommited(const FText& InText, ETextCommit::Type CommitInfo) override;
	virtual void OnSelection() override;
	virtual void OnMouseEnter() override;
	virtual void OnMouseLeave() override;
	virtual bool IsHovered() const override;
	virtual bool IsExpanded() const override
	{
		return true;
	}
	virtual void SetExpanded(bool bIsExpanded) override
	{
	}
	virtual bool CanRename() const override;
	virtual void RequestBeginRename() override;
	virtual void OnBeginEditing() override;
	virtual void OnEndEditing() override;
protected:
	virtual void GetChildren(TArray< TSharedPtr<FPlotHierarchyModel> >& Children) override;
	virtual void UpdateSelection() override;
	virtual FPlotReference AsDraggedItemReference() const { return Item; }
private:
	FPlotReference Item;
	bool bEditing;
};

//Item Node
class SPlotHierarchyViewItem : public STableRow< TSharedPtr<FPlotHierarchyModel> >
{
public:
	SLATE_BEGIN_ARGS(SPlotHierarchyViewItem) {}
	SLATE_ATTRIBUTE(FText, HighlightText)
		SLATE_END_ARGS()
		void Construct(const FArguments& InArgs, const TSharedRef< STableViewBase >& InOwnerTableView, TSharedPtr<FPlotHierarchyModel> InModel);
	virtual ~SPlotHierarchyViewItem();
	virtual bool IsHovered() const override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
public:
	FReply HandleDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void HandleDragEnter(const FDragDropEvent& DragDropEvent);
	void HandleDragLeave(const FDragDropEvent& DragDropEvent);
	TOptional<EItemDropZone> HandleCanAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone, TSharedPtr<FPlotHierarchyModel> TargetItem);
	FReply HandleAcceptDrop(const FDragDropEvent& DragDropEvent, EItemDropZone DropZone, TSharedPtr<FPlotHierarchyModel> TargetItem);

private:
	void OnBeginNameTextEdit();
	void OnEndNameTextEdit();
	bool OnVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage);
	void OnNameTextCommited(const FText& InText, ETextCommit::Type CommitInfo);
	bool IsReadOnly() const;
	void OnRequestBeginRename();
	FSlateFontInfo GetItemFont() const;
	FText GetItemText() const;
	FSlateColor GetItemColor() const;
private:
	TWeakPtr<SInlineEditableTextBlock> EditBox;
	TSharedPtr<FPlotHierarchyModel> Model;
	FText InitialText;
};
