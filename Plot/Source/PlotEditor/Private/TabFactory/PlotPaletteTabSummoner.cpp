#include "TabFactory/PlotPaletteTabSummoner.h"
#include "Palette/SPlotPaletteView.h"
#include "UMGStyle.h"
#define LOCTEXT_NAMESPACE "PLOT"
const FName FPlotPaletteTabSummoner::TabID(TEXT("PlotItemTemplates"));
FPlotPaletteTabSummoner::FPlotPaletteTabSummoner(TSharedPtr<class FPlotEditor> InEditor)
		: FWorkflowTabFactory(TabID, InEditor)
		, PlotEditor(InEditor)
{
	TabLabel = LOCTEXT("PlotItemTemplatesTabLabel", "Palette");
	TabIcon = FSlateIcon(FUMGStyle::GetStyleSetName(), "Palette.TabIcon");
	bIsSingleton = true;
	ViewMenuDescription = LOCTEXT("PlotItemTemplates_ViewMenu_Desc", "Palette");
	ViewMenuTooltip = LOCTEXT("PlotItemTemplates_ViewMenu_ToolTip", "Show the Palette");
}

TSharedRef<SWidget> FPlotPaletteTabSummoner::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	TSharedPtr<FPlotEditor> EditorPtr = StaticCastSharedPtr<FPlotEditor>(PlotEditor.Pin());

	return SNew(SPlotPaletteView, EditorPtr)
		.AddMetaData<FTagMetaData>(FTagMetaData(TEXT("Palette")));
}

#undef LOCTEXT_NAMESPACE 
