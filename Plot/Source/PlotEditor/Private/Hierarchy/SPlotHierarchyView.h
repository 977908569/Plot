
#pragma once
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Misc/TextFilter.h"
#include "Framework/Views/TreeFilterHandler.h"
#include "PlotEditor.h"
#include "Components/Widget.h"
#include "SPlotHierarchyViewItem.h"

class SPlotHierarchyView : public SCompoundWidget
{
public:
	typedef TTextFilter< TSharedPtr<FPlotHierarchyModel> > PlotTextFilter;
public:
	SLATE_BEGIN_ARGS( SPlotHierarchyView ){}
	SLATE_END_ARGS()
	void Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InEditor, UPlot* InPlot);
	virtual ~SPlotHierarchyView();
	virtual void Tick( const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime ) override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) override;
private:
	TSharedPtr<SWidget> PlotHierarchy_OnContextMenuOpening();
	void PlotHierarchy_OnGetChildren(TSharedPtr<FPlotHierarchyModel> InParent, TArray< TSharedPtr<FPlotHierarchyModel> >& OutChildren);
	TSharedRef< ITableRow > PlotHierarchy_OnGenerateRow(TSharedPtr<FPlotHierarchyModel> InItem, const TSharedRef<STableViewBase>& OwnerTable);
	void PlotHierarchy_OnSelectionChanged(TSharedPtr<FPlotHierarchyModel> SelectedItem, ESelectInfo::Type SelectInfo);
	void PlotHierarchy_OnExpansionChanged(TSharedPtr<FPlotHierarchyModel> Item, bool bExpanded);
	void PlotHierarchy_OnMouseClick(TSharedPtr<FPlotHierarchyModel> InItem);
	void PlotHierarchy_OnMouseDoubleClick(TSharedPtr<FPlotHierarchyModel> InItem);

private:
	void BeginRename();
	bool CanRename() const;
	UPlot* GetPlot() const;
	void OnPlotChanged(UPlot* InPlot);
	void OnEditorSelectionChanged();
	void RefreshTree();
	void RebuildTreeView();
	FReply HandleDeleteSelected();
	void OnSearchChanged(const FText& InFilterText);
	FText GetSearchText() const;
	void GetPlotFilterStrings(TSharedPtr<FPlotHierarchyModel> Plot, TArray<FString>& OutStrings);
	void OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap);
	void UpdateItemsExpansionFromModel();
	void SaveItemsExpansion();
	void RestoreItemsExpansion();

	enum class EExpandBehavior : uint8
	{
		NeverExpand,
		AlwaysExpand,
		RestoreFromPrevious,
		FromModel
	};
	void RecursiveExpand(TSharedPtr<FPlotHierarchyModel>& Model, EExpandBehavior ExpandBehavior);
	void RestoreSelectedItems();
	void RecursiveSelection(TSharedPtr<FPlotHierarchyModel>& Model);
	void SetItemExpansionRecursive(TSharedPtr<FPlotHierarchyModel> Model, bool bInExpansionState);
private:
	TWeakPtr<class FPlotEditor> PlotEditor;
	TSharedPtr<FUICommandList> CommandList;
	TSharedPtr< TreeFilterHandler< TSharedPtr<FPlotHierarchyModel> > > FilterHandler;
	TArray< TSharedPtr<FPlotHierarchyModel> > RootPlots;
	TArray< TSharedPtr<FPlotHierarchyModel> > TreeRootPlots;
	TSharedPtr<SBorder> TreeViewArea;
	TSharedPtr< STreeView< TSharedPtr<FPlotHierarchyModel> > > PlotTreeView;
	TSet< FName > ExpandedItemNames;
	TSharedPtr<class SSearchBox> SearchBoxPtr;
	TSharedPtr<PlotTextFilter> SearchBoxPlotFilter;
	bool bRefreshRequested;
	bool bRebuildTreeRequested;
	bool bIsUpdatingSelection;
};
