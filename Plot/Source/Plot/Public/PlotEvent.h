#pragma once
#include "UObject/Object.h"
#include "PlotEvent.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract, EditInlineNew, DefaultToInstanced)
class PLOT_API UPlotEvent :public UObject
{
	GENERATED_BODY()
public:
	UPlotEvent();

	UFUNCTION(BlueprintNativeEvent)
		bool DoEvent();
	virtual bool DoEvent_Implementation();
};

UCLASS(BlueprintType, meta = (DisplayName = "跳转到指定的Key"))
class PLOT_API UPlotEvent_JumpKey :public UPlotEvent
{
	GENERATED_BODY()
public:
	UPlotEvent_JumpKey() {}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "要跳转的Key"))
		FString Key;
	
	virtual bool DoEvent_Implementation() override;
};




