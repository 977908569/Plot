
#include "PlotTemplateDragDropOp.h"
#include "PlotTemplate.h"

#define LOCTEXT_NAMESPACE "PLOT"
TSharedRef<FPlotTemplateDragDropOp> FPlotTemplateDragDropOp::New(const TSharedPtr<FPlotTemplate>& InTemplate)
{
	TSharedRef<FPlotTemplateDragDropOp> Operation = MakeShareable(new FPlotTemplateDragDropOp());
	Operation->Template = InTemplate;
	Operation->DefaultHoverText = InTemplate->Name;
	Operation->CurrentHoverText = InTemplate->Name;
	Operation->Construct();
	return Operation;
}
#undef LOCTEXT_NAMESPACE
