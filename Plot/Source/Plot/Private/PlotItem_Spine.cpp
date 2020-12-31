#include "PlotItem_Spine.h"
UPlotItem_Spine::UPlotItem_Spine() {
	bWait = false;
}

void UPlotItem_Spine::Start()
{
	if (GetWidget()) {
		GetWidget()->OnPlaySpine(this);
	}
	Super::Start();
}
