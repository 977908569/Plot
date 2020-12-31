
#pragma once
#include "CoreMinimal.h"
#include "Widgets/SWidget.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"
#include "PlotEditor.h"

struct FPlotHierarchyTabSummoner : public FWorkflowTabFactory
{
public:
	static const FName TabID;
public:
	FPlotHierarchyTabSummoner(TSharedPtr<class FPlotEditor> InEditor);
	
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;
	
protected:
	TWeakPtr<class FPlotEditor> PlotEditor;
};
