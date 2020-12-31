#pragma once
#include "PlotEditor.h"
#include "WorkflowOrientedApp/ApplicationMode.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"
class PLOTEDITOR_API FPlotDesignerApplicationMode : public FApplicationMode
{
public:
	FPlotDesignerApplicationMode(TSharedPtr<FPlotEditor> InPlotEditor);
	virtual void RegisterTabFactories(TSharedPtr<FTabManager> InTabManager) override;
	static const FName DesignerMode;
protected:
	UPlot* GetPlot() const;
	TSharedPtr<class FPlotEditor> GetPlotEditor() const;
	TWeakPtr<class FPlotEditor> MyPlotEditor;
	FWorkflowAllowedTabSet TabFactories;
};
