
#include "PlotEvent.h"
#include "PlotItem.h"

UPlotEvent::UPlotEvent() {

}

bool UPlotEvent::DoEvent_Implementation()
{
	return true;
}

bool UPlotEvent_JumpKey::DoEvent_Implementation()
{
	if (UPlotItem* Item = Cast<UPlotItem>(GetOuter()))
	{
		//清理数据
		Item->Clearup();
		if (UPlot* MyPlot = Item->GetPlot())
		{
			return MyPlot->JumpTo(Key);
		}
	}
	return false;
}


