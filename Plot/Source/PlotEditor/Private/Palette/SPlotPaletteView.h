
#pragma once
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "Misc/TextFilter.h"
#include "Widgets/Views/STreeView.h"
#include "Framework/Views/TreeFilterHandler.h"
#include "PlotEditor.h"
#include "SPlotPaletteViewModel.h"

class SPlotPaletteView;
class FPlotPaletteViewModel;
class SPlotPaletteViewItem : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPlotPaletteViewItem) {}
	SLATE_ATTRIBUTE(FText, HighlightText)
	SLATE_END_ARGS()
	void Construct(const FArguments& InArgs, TSharedPtr<FPlotTemplateViewModel> InPlotViewModel);
private:
	FText GetFavoriteToggleToolTipText() const;
	ECheckBoxState GetFavoritedState() const;
	void OnFavoriteToggled(ECheckBoxState InNewState);
	virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;
private:
	TSharedPtr<FPlotTemplateViewModel> PlotViewModel;
};

/** */
class SPlotPaletteView : public SCompoundWidget
{
public:
	typedef TTextFilter<TSharedPtr<FPlotViewModel>> PlotViewModelTextFilter;
public:
	SLATE_BEGIN_ARGS( SPlotPaletteView ){}
	SLATE_END_ARGS()
	void Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InEditor);
	virtual ~SPlotPaletteView();
	virtual void Tick( const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime ) override;
	void PlotPalette_OnSelectionChanged(TSharedPtr<FPlotViewModel> SelectedItem, ESelectInfo::Type SelectInfo);
	TSharedPtr<FPlotTemplate> GetSelectedTemplateWidget() const;
private:
	void OnGetChildren(TSharedPtr<FPlotViewModel> Item, TArray< TSharedPtr<FPlotViewModel> >& Children);
	TSharedRef<ITableRow> OnGeneratePlotTemplateItem(TSharedPtr<FPlotViewModel> Item, const TSharedRef<STableViewBase>& OwnerTable);
	void OnSearchChanged(const FText& InFilterText);
	void OnViewModelUpdating();
	void OnViewModelUpdated();
private:
	void LoadItemExpansion();
	void SaveItemExpansion();
	void GetPlotFilterStrings(TSharedPtr<FPlotViewModel> ItemViewModel, TArray<FString>& OutStrings);
	TWeakPtr<class FPlotEditor> PlotEditor;
	TSharedPtr<FPlotPaletteViewModel> PaletteViewModel;
	typedef TreeFilterHandler<TSharedPtr<FPlotViewModel>> PaletteFilterHandler;
	TSharedPtr<PaletteFilterHandler> FilterHandler;
	typedef TArray<TSharedPtr<FPlotViewModel>> ViewModelsArray;
	ViewModelsArray TreePlotViewModels;
	TSharedPtr< STreeView< TSharedPtr<FPlotViewModel> > > PlotTemplatesView;
	TSharedPtr<class SSearchBox> SearchBoxPtr;
	TSharedPtr<PlotViewModelTextFilter> PlotFilter;
	TSet<TSharedPtr<FPlotViewModel>> ExpandedItems;
	bool bRefreshRequested;
	bool bAllowEditorPlot;
};
