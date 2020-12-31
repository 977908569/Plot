#pragma once
#include "PlotItem.h"
#include "PlotItem_SetVisibility.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "设置UI小部件"))
class PLOT_API UPlotItem_SetVisibility :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "部件名称"))
		FName WidgetName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "显示状态"))
		ESlateVisibility Visibility;
public:
	UPlotItem_SetVisibility();
	virtual void Start() override;
};


