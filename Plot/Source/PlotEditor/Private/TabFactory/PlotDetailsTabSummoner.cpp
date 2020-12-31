#include "PlotDetailsTabSummoner.h"
#if WITH_EDITOR
	#include "EditorStyleSet.h"
#endif // WITH_EDITOR

#include "Details/SPlotDetailsView.h"

#define LOCTEXT_NAMESPACE "PLOT"

const FName FPlotDetailsTabSummoner::TabID(TEXT("PlotDetails"));

FPlotDetailsTabSummoner::FPlotDetailsTabSummoner(TSharedPtr<class FPlotEditor> InEditor)
		: FWorkflowTabFactory(TabID, InEditor)
		, PlotEditor(InEditor)
{
	TabLabel = LOCTEXT("PlotItemDetails_TabLabel", "Details");
	TabIcon = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details");
	bIsSingleton = true;
	ViewMenuDescription = LOCTEXT("PlotItemDetails_ViewMenu_Desc", "Details");
	ViewMenuTooltip = LOCTEXT("PlotItemDetails_ViewMenu_ToolTip", "Show the Details");
}

TSharedRef<SWidget> FPlotDetailsTabSummoner::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	TSharedPtr<FPlotEditor> EditorPtr = StaticCastSharedPtr<FPlotEditor>(PlotEditor.Pin());

	return SNew(SPlotDetailsView, EditorPtr)
		.AddMetaData<FTagMetaData>(FTagMetaData(TEXT("Details")));
}

#undef LOCTEXT_NAMESPACE 
