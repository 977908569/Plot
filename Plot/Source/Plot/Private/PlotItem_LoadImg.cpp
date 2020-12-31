#include "PlotItem_LoadImg.h"
#include "Plot.h"

UPlotItem_LoadImg::UPlotItem_LoadImg() {
	bWait = false;
}

void UPlotItem_LoadImg::Start()
{
	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		Widget->SetBackground(ImgPath);
	}
	Super::Start();
}
