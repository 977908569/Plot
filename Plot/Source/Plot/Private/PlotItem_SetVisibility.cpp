#include "PlotItem_SetVisibility.h"
#include "Plot.h"

UPlotItem_SetVisibility::UPlotItem_SetVisibility() {
	bWait = false;
}

void UPlotItem_SetVisibility::Start()
{
	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		Widget->SetWidgetVisibility(WidgetName, Visibility);
	}
	Super::Start();
}
