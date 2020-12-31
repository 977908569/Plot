
#include "PlotReference.h"
#include "PlotEditor.h"
#define LOCTEXT_NAMESPACE "PLOT"

FPlotHandle::FPlotHandle(UPlotItem* InItem)
	: PlotItem(InItem)
{
}
FPlotReference::FPlotReference()
	: PlotEditor()
	, TemplateHandle()
{
}

FPlotReference::FPlotReference(TSharedPtr<FPlotEditor> InItemEditor, TSharedPtr< FPlotHandle > InTemplateHandle)
	: PlotEditor(InItemEditor)
	, TemplateHandle(InTemplateHandle)
{
}

void FPlotReference::OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap)
{
}

bool FPlotReference::IsValid() const
{
	if (TemplateHandle.IsValid())
	{
		return TemplateHandle->PlotItem.Get() != nullptr;
	}
	return false;
}

UPlotItem* FPlotReference::GetTemplate() const
{
	if (TemplateHandle.IsValid())
	{
		return TemplateHandle->PlotItem.Get();
	}
	return nullptr;
}
#undef LOCTEXT_NAMESPACE
