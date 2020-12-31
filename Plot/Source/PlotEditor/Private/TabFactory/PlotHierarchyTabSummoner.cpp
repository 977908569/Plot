#include "TabFactory/PlotHierarchyTabSummoner.h"
#include "Hierarchy/SPlotHierarchyView.h"
#if WITH_EDITOR
#include "EditorStyleSet.h"
#endif // WITH_EDITOR
#define LOCTEXT_NAMESPACE "PLOT"

const FName FPlotHierarchyTabSummoner::TabID(TEXT("PlotHierarchy"));

FPlotHierarchyTabSummoner::FPlotHierarchyTabSummoner(TSharedPtr<class FPlotEditor> InEditor)
	: FWorkflowTabFactory(TabID, InEditor)
	, PlotEditor(InEditor)
{
	TabLabel = LOCTEXT("PlotHierarchyTabLabel", "Hierarchy");
	TabIcon = FSlateIcon(FEditorStyle::GetStyleSetName(), "Kismet.Tabs.Palette");
	bIsSingleton = true;
	ViewMenuDescription = LOCTEXT("PlotHierarchy_ViewMenu_Desc", "Hierarchy");
	ViewMenuTooltip = LOCTEXT("PlotHierarchy_ViewMenu_ToolTip", "Show the Hierarchy");
}

TSharedRef<SWidget> FPlotHierarchyTabSummoner::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	TSharedPtr<FPlotEditor> EditorPtr = StaticCastSharedPtr<FPlotEditor>(PlotEditor.Pin());
	return SNew(SPlotHierarchyView, EditorPtr, EditorPtr->GetPlot())
		.AddMetaData<FTagMetaData>(FTagMetaData(TEXT("Hierarchy")));
}
#undef LOCTEXT_NAMESPACE 
