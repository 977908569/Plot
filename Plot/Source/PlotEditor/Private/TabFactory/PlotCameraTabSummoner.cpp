#include "PlotCameraTabSummoner.h"
#if WITH_EDITOR
	#include "EditorStyleSet.h"
#endif // WITH_EDITOR
#include "Camera/SPlotCameraView.h"
#define LOCTEXT_NAMESPACE "PLOT"

const FName FPlotCameraTabSummoner::TabID(TEXT("PlotCamera"));

FPlotCameraTabSummoner::FPlotCameraTabSummoner(TSharedPtr<class FPlotEditor> InEditor)
		: FWorkflowTabFactory(TabID, InEditor)
		, PlotEditor(InEditor)
{
	TabLabel = LOCTEXT("PlotItemCamera_TabLabel", "Camera");
	TabIcon = FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details");
	bIsSingleton = true;
	ViewMenuDescription = LOCTEXT("PlotItemDetails_ViewMenu_Desc", "Camera");
	ViewMenuTooltip = LOCTEXT("PlotItemCamera_ViewMenu_ToolTip", "Show the Camera");
}

TSharedRef<SWidget> FPlotCameraTabSummoner::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	TSharedPtr<FPlotEditor> EditorPtr = StaticCastSharedPtr<FPlotEditor>(PlotEditor.Pin());

	return SNew(SPlotCameraView, EditorPtr)
		.AddMetaData<FTagMetaData>(FTagMetaData(TEXT("Camera")));
}

#undef LOCTEXT_NAMESPACE 
