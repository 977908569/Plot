#include "PlotDesignerTabSummoner.h"
#include "UMGStyle.h"
#include "Designer/SPlotDesignerView.h"
#define LOCTEXT_NAMESPACE "PLOT"
const FName FPlotDesignerTabSummoner::TabID(TEXT("PlotPreview"));
FPlotDesignerTabSummoner::FPlotDesignerTabSummoner(TSharedPtr<class FPlotEditor> InEditor)
		: FWorkflowTabFactory(TabID, InEditor)
		, PlotEditor(InEditor)
{
	TabLabel = LOCTEXT("DesignerTabLabel", "Designer");
	TabIcon = FSlateIcon(FUMGStyle::GetStyleSetName(), "Designer.TabIcon");
	bIsSingleton = true;
	ViewMenuDescription = LOCTEXT("PlotPreview_ViewMenu_Desc", "Designer");
	ViewMenuTooltip = LOCTEXT("PlotPreview_ViewMenu_ToolTip", "Show the Designer");
}

TSharedRef<SWidget> FPlotDesignerTabSummoner::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	return SNew(SPlotDesignerView, PlotEditor.Pin())
		.AddMetaData<FTagMetaData>(FTagMetaData(TEXT("Designer")));
}

#undef LOCTEXT_NAMESPACE 
