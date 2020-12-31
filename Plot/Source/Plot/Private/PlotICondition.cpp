#include "PlotCondition.h"
#include "PlotItem.h"
#include "PlotItem_Sequence.h"

bool UPlotCondition::Check_Implementation()
{
	return true;
}

UPlot* UPlotCondition::GetPlot() const
{
	if (UPlotItem* Item = Cast<UPlotItem>(GetOuter()))
	{
		return Item->GetPlot();
	}
	return nullptr;
}

UPlotReadKeyCondition::UPlotReadKeyCondition()
{
}

bool UPlotReadKeyCondition::Check_Implementation()
{
	if (const auto MyPlot = GetPlot()) {
		return MyPlot->HasKey(Key);
	}
	return true;
}

bool UPlotSelectNumCondition::InnerCheck(int32 InNum) const {
	return InNum > Num;
}

bool UPlotTimeoutCondition::Check_Implementation()
{
	if (const auto MyPlot = GetPlot())
	{
		UPlotItem* FindItem = MyPlot->FindItemByKey(Key);
		if (FindItem)
		{
			return FindItem->IsTimeout();
		}
	}
	return false;
}
