#pragma once
#include "UObject/Object.h"
#include "PlotCondition.generated.h"

class UPlot;
UCLASS(BlueprintType, Blueprintable, Abstract, EditInlineNew, DefaultToInstanced)
class PLOT_API UPlotCondition :public UObject
{
	GENERATED_BODY()
public:
	UPlotCondition() {}

	UFUNCTION(BlueprintNativeEvent)
		bool Check();
	virtual bool Check_Implementation();

	UFUNCTION(BlueprintCallable)
		UPlot* GetPlot() const;
};


UCLASS(BlueprintType, meta = (DisplayName = "文本已读"))
class PLOT_API UPlotReadKeyCondition :public UPlotCondition
{
	GENERATED_BODY()
public:
	UPlotReadKeyCondition();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "文件名.KeyID"))
		FString Key;
	virtual bool Check_Implementation() override;
};

UCLASS(BlueprintType, meta = (DisplayName = "选择次数"))
class PLOT_API UPlotSelectNumCondition :public UPlotCondition
{
	GENERATED_BODY()
public:
	UPlotSelectNumCondition() {}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "选择次数"))
		int32 Num;
	bool InnerCheck(int32 InNum) const;
};

UCLASS(BlueprintType, meta = (DisplayName = "对话超时"))
class PLOT_API UPlotTimeoutCondition :public UPlotCondition
{
	GENERATED_BODY()
public:
	UPlotTimeoutCondition() {}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Key"))
		FString Key;
	virtual bool Check_Implementation() override;
};


