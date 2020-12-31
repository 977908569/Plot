#pragma once
#include "Widgets/SWidget.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"

struct FPlotPaletteTabSummoner : public FWorkflowTabFactory
{
public:
	static const FName TabID;
	
public:
	FPlotPaletteTabSummoner(TSharedPtr<class FPlotEditor> InBlueprintEditor);
	
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;
	
protected:
	TWeakPtr<class FPlotEditor> PlotEditor;
};
