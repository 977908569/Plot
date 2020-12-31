
#pragma once
#include "CoreMinimal.h"
#include "PlotEditor.h"
class FExtender;
class FToolBarBuilder;
class UToolMenu;

class FPlotEditorToolbar : public TSharedFromThis<FPlotEditorToolbar>
{
public:
	FPlotEditorToolbar(TSharedPtr<FPlotEditor>& InPlotEditor);
	void AddPlotEditorModesToolbar(TSharedPtr<FExtender> Extender);
	void FillPlotToolbar(FToolBarBuilder& ToolbarBuilder);
public:
	TWeakPtr<FPlotEditor> PlotEditor;
};
