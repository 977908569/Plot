#pragma once
#include "Styling/SlateIconFinder.h"
#include "Plot.h"
#include "PlotItem.h"

class PLOTEDITOR_API FPlotTemplate : public TSharedFromThis<FPlotTemplate>
{
public:
	FPlotTemplate();
	virtual ~FPlotTemplate() { }
	virtual FText GetCategory() const = 0;
	virtual UPlotItem* Create(class UPlot* InPlot) = 0;
	virtual const FSlateBrush* GetIcon() const
	{
		return FSlateIconFinder::FindIconBrushForClass(UPlotItem::StaticClass());
	}
	virtual TSharedRef<IToolTip> GetToolTip() const = 0;
	virtual void GetFilterStrings(TArray<FString>& OutStrings) const { OutStrings.Add(Name.ToString()); }
	virtual FReply OnDoubleClicked() { return FReply::Unhandled(); }
	virtual UClass* GetTemplateClass() = 0;
public:
	FText Name;
 };
