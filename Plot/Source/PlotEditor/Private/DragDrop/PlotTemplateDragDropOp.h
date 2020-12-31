
#pragma once
#include "CoreMinimal.h"
#include "Input/DragAndDrop.h"
#include "DragAndDrop/DecoratedDragDropOp.h"
// Palette Drag
class FPlotTemplate;
class FPlotTemplateDragDropOp : public FDecoratedDragDropOp
{
public:
	DRAG_DROP_OPERATOR_TYPE(FPlotTemplateDragDropOp, FDecoratedDragDropOp)
	TSharedPtr<FPlotTemplate> Template;
	static TSharedRef<FPlotTemplateDragDropOp> New(const TSharedPtr<FPlotTemplate>& InTemplate);
};
