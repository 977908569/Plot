#pragma once
#include "Widgets/SWidget.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"
#include "PlotEditor.h"
struct FPlotDetailsTabSummoner : public FWorkflowTabFactory
{
public:
	static const FName TabID;
	
public:
	FPlotDetailsTabSummoner(TSharedPtr<class FPlotEditor> InEditor);
	
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;
	
protected:
	TWeakPtr<class FPlotEditor> PlotEditor;
};
