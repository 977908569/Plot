#pragma once
#include "PlotItem.h"
#include "PlotItem_Talk.generated.h"

UENUM(BlueprintType)
enum class ETalkState :uint8 {
	Noraml,
	Talk,
	CountDown,
};

UCLASS(BlueprintType, meta = (DisplayName = "对话"))
class PLOT_API UPlotItem_Talk :public UPlotSaveItem
{
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTalkTextChange, const FString&, TalkText);
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "对话参数"))
		FTalkConfig TalkConfig;
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FOnTalkTextChange OnTalkTextChange;

public:
	UFUNCTION(BlueprintCallable)
		FString GetSpeakerName() const;

	UFUNCTION(BlueprintCallable)
		FString GetContentStr() const;

	UFUNCTION(BlueprintCallable)
		const FSoftObjectPath& GetImg() const;

	UPlotItem_Talk();
	//解析配置信息
	void ParseInfo(const FConfigItem& InItem);
	virtual void Start() override;
	virtual void End() override;
	virtual void Tick(float InDeltaTime) override;
	virtual bool IsTickable() const override;
	virtual void OnAdd() override;
	virtual void Jump() override;
	void ForceEnd();
#if WITH_EDITOR
	virtual void UpdateConfig(const FConfigItem& InItem) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FSlateColor GetColor() const override;
#endif

private:
	//变量重置
	void Reset();
	UFUNCTION()
		void OnInput();
	//执行结束
	void ExecuteEnd() const;
	void TalkEnd();
private:
	ETalkState CurrentTalkState;
	float CurrentTime = 0.f;
	int32 CurrentIndex = 0;
	int32 Max = 0;
	FString CurrentStr;
	FString TargetStr;
	float CurrentSpeed = 1.0f;

	float Interval = 0.2f;
	float CountDownTime;
	UPROPERTY(Transient)
		FPlotName2Img Name2Img;
};


