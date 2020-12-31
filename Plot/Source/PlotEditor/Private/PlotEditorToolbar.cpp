
#include "PlotEditorToolbar.h"
#include "PlotEditor.h"
#include "PlotEditorCommands.h"
#include "PlotEditorDesignerApplicationMode.h"
#include "ToolMenu.h"
#define LOCTEXT_NAMESPACE "PLOT"
//////////////////////////////////////////////////////////////////////////

FPlotEditorToolbar::FPlotEditorToolbar(TSharedPtr<FPlotEditor>& InPlotEditor)
	: PlotEditor(InPlotEditor)
{
}

void FPlotEditorToolbar::AddPlotEditorModesToolbar(TSharedPtr<FExtender> Extender)
{
	check(PlotEditor.IsValid());
	TSharedPtr<FPlotEditor> PlotEditorPtr = PlotEditor.Pin();

	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	ToolbarExtender->AddToolBarExtension("Asset", EExtensionHook::After, PlotEditorPtr->GetToolkitCommands(), FToolBarExtensionDelegate::CreateSP(this, &FPlotEditorToolbar::FillPlotToolbar));
	PlotEditorPtr->AddToolbarExtender(ToolbarExtender);
}

void FPlotEditorToolbar::FillPlotToolbar(FToolBarBuilder& ToolbarBuilder)
{
	ToolbarBuilder.BeginSection("NewPlot");
	{
		ToolbarBuilder.AddToolBarButton(FPlotEditorCommands::Get().NewPlot, "CreateNew", TAttribute<FText>(), TAttribute<FText>(), FSlateIcon(FEditorStyle::GetStyleSetName(), "Persona.CreateAsset"));
		ToolbarBuilder.AddToolBarButton(FPlotEditorCommands::Get().ResetPlot, "ResetPlot", TAttribute<FText>(), TAttribute<FText>(), FSlateIcon(FEditorStyle::GetStyleSetName(), "EnvQueryEditor.Profiler.LoadStats"));
		ToolbarBuilder.AddToolBarButton(FPlotEditorCommands::Get().Save2Config, "Save2Txt", TAttribute<FText>(), TAttribute<FText>(), FSlateIcon(FEditorStyle::GetStyleSetName(), "EnvQueryEditor.Profiler.LoadStats"));
	}
	ToolbarBuilder.EndSection();
}
#undef LOCTEXT_NAMESPACE
