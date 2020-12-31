#pragma once
#include "PlotEnum.h"
#include "Blueprint/UserWidget.h"
#include "PlotWidget.generated.h"

class UPlotItem_Sequence;
class UPlotItem;
class UPlot;
class UPlotItem_Branch;
class UPlotItem_Talk;

UCLASS(BlueprintType, Blueprintable)
class PLOT_API UPlotWidget : public UUserWidget
{
	//Input Event
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInput);
	//Branch Select Event
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelect, int32, Index);
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FOnInput OnInput;
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FOnSelect OnSelect;
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

#pragma region //与LuaWidget 保持一致 临时做法
public:
	UFUNCTION(BlueprintImplementableEvent)
		void PlayOpenAnimation();
	UFUNCTION(BlueprintCallable, Category = "LuaWidget")
		void PlayAnimByName(const FString& InName);
	UFUNCTION(BlueprintCallable)
		void Add2Root();
	UFUNCTION(BlueprintCallable)
		void RemoveInRoot();
#pragma endregion 
public:
	UFUNCTION(BlueprintCallable)
		class UTextBlock* GetDialogTextBlock(const EDialogueType& InType) const;
	UFUNCTION(BlueprintCallable)
		FORCEINLINE UPlot* GetPlot() const { return Plot.Get(); }
	//进入切换时间
	UFUNCTION(BlueprintCallable)
		void EnterChange();
public:
	//创建子组件
	UFUNCTION(BlueprintImplementableEvent)
		void CreateWidget(FSoftClassPath InWidget);
	UFUNCTION(BlueprintImplementableEvent)
		void OnPlaySpine(class UPlotItem_Spine* InData);
	UFUNCTION(BlueprintImplementableEvent)
		void OnShowSelect(bool bShow, const TArray<FSelectItemData>& InDatas);
	//设置相机信息
	UFUNCTION(BlueprintImplementableEvent)
		void SetCameraArgs(const FPlotCameraInfo& InCameraInfo);
	//==========================================================
	//设置对话背景图片
	UFUNCTION(BlueprintCallable)
		void SetBackground(const FSoftObjectPath& Path) const;
	UFUNCTION(BlueprintCallable)
		void DoTalk(UPlotItem_Talk* InData);
	UFUNCTION()
		void OnTalk(UPlotItem_Talk* InData);
	UFUNCTION(BlueprintCallable)
		void SetRoleImg(int32 InPos, const FSoftObjectPath& InPath, bool bHide) const;
	UFUNCTION(BlueprintCallable)
		void SetWidgetVisibility(const FName& InName, ESlateVisibility InVisibility) const;
#pragma region  Start
	void Start(UPlot* InPlot);
	UFUNCTION(BlueprintImplementableEvent)
		void OnStart();

	UFUNCTION(BlueprintImplementableEvent)
		void OnEnd();
#pragma endregion

private:
	//文字改变
	UFUNCTION()
		void OnTalkTextChange(const FString& InText);
	//切换完成
	void ChangeEnd() const;
	//输入
	UFUNCTION()
		void OnBtnClick();
public:
#pragma region 绑定的变量
	UPROPERTY(BlueprintReadOnly)
		UTextBlock* TalkText = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* DialogueText = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ClickZone = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UBorder* TalkContent = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UCanvasPanel* UINode = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* Speaker = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UPlotFightStyle* FightStyle = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UListView* BranchList_R = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* BG = nullptr;
	//IMG
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UCanvasPanel* PoseNode = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UImage* LeftPose = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UImage* CenterPose = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UImage* RightPose = nullptr;
	//END IMG

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UCanvasPanel* SpineNode = nullptr;

#pragma endregion  
private:
	TWeakObjectPtr<UPlot> Plot;
	TWeakObjectPtr<UPlotItem> PlayItem;

	//切换时间
	float TempChangeTime;
	//切换标记
	bool bChanging;
};

UCLASS(BlueprintType, Blueprintable)
class PLOT_API UPlotFightStyle : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		void DoTalk(UPlotWidget* InParent, UPlotItem_Talk* InData);
public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage* Voice = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* Speaker = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* TalkText = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UImage* Role = nullptr;
private:
	UPROPERTY(Transient)
		UPlotWidget* ParentWidget;
};