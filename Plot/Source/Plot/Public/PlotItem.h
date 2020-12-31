#pragma once
#include "PlotWidget.h"
#include "UObject/Object.h"
#include "Plot.h"
#include "Tickable.h"
#include "PlotItem.generated.h"
/**
 * Item
 */
class UPlot;
UCLASS(BlueprintType, Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class PLOT_API UPlotItem :public UObject, public FTickableGameObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Instanced, BlueprintReadOnly)
		TArray< UPlotItem*> Childs;
	UPROPERTY(Instanced)
		UPlotItem* Parent;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "bCanEditWait"))
		bool bWait;

	UPROPERTY(EditAnywhere, Category = "超时", meta = (DisplayName = "时间"))
		float Timeout = -1.0f;

	UPROPERTY(EditAnywhere, Instanced, Category = "超时", meta = (DisplayName = "超时事件列表"))
		TArray<class UPlotEvent*> TimeoutEvents;

	//子轨道使用
	UPROPERTY(EditAnywhere, Category = "Time", meta = (DisplayName = "触发时间"))
		float TrackTime;

public:
	UFUNCTION(BlueprintCallable)
		virtual void Start();
	UFUNCTION(BlueprintImplementableEvent)
		void OnStart();

	UFUNCTION(BlueprintCallable)
		virtual void End();
	UFUNCTION(BlueprintImplementableEvent)
		void OnEnd();

	virtual void Next();
	UFUNCTION(BlueprintCallable)
		UPlot* GetPlot() const { return  Cast<UPlot>(GetOuter()); }

	UFUNCTION(BlueprintCallable)
		UPlotWidget* GetWidget() const;

	UFUNCTION(BlueprintCallable)
	virtual	void Clearup();

	UFUNCTION(BlueprintCallable)
		bool IsTimeout() const { return bTimeout; }

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickable() const override;
	virtual bool IsTickableInEditor() const override;
	virtual bool IsTickableWhenPaused() const override;
	
	virtual bool IsSupported(UClass* InClass) { return true; }
	virtual void Init();
	UFUNCTION(BlueprintCallable)
		virtual UWorld* GetWorld() const override;
	UFUNCTION(BlueprintCallable)
		void SetExecuteIndex(int32 InIndex) { ExecuteIndex = InIndex; }
	UFUNCTION(BlueprintCallable)
		int32 GetIndex() const { return ItemIndex; }
	UFUNCTION(BlueprintCallable)
		class UPlotItem* GetParent() const { return Parent; }
	UFUNCTION(BlueprintCallable)
		int32 GetChildrenCount() const { return Childs.Num(); }

	UPlotItem* GetChildAt(int32 Index) const;
	bool CanHaveMultipleChildren() const;
	bool RemoveChild(UPlotItem* InChild);
	bool RemoveChildAt(int32 Index);
	bool ReplaceChildAt(int32 Index, UPlotItem* InItem);
	bool AddChild(UPlotItem* InItem);
	bool InsertChildAt(int32 Index, UPlotItem* Content);
	void ShiftChild(int32 Index, UPlotItem* Child);
	void UpdateIndex();
	bool IsChildOf(UPlotItem* PossibleParent) const;
	virtual bool ReplaceChild(UPlotItem* CurrentChild, UPlotItem* NewChild);
	virtual void Remove();
	void RemoveAllChild() const;
	UPlotSaveItem* FindChildByKey(FString& InKey);
	virtual void OnAdd() {}
	virtual void Jump() {}
	virtual bool IsCanJump();
	void CheckJump();
	bool IsPlaying() const { return bPlaying; }
	static void GetChildItems(UPlotItem* Parent, TArray<UPlotItem*>& Childs);
	static void ForItemAndChildren(UPlotItem* Item, TFunctionRef<void(UPlotItem*)> Predicate);
#if WITH_EDITOR
	virtual FText GetPaletteCategory();
	virtual FText GetDisplayLabel() const;
	virtual FSlateColor GetColor() const;
	void SetDisplayLabel(const FString& InDisplayLabel);
	//编辑器播放需要重置一些变量
	virtual void EditorResetData() {}
#endif
private:
	void OnTimeOut();
protected:
	UPROPERTY()
		bool bCanHaveMultipleChildren;
	UPROPERTY()
		int32 ExecuteIndex;
	UPROPERTY()
		FString DisplayLabel;
	UPROPERTY(VisibleAnywhere)
		int32 ItemIndex;
	bool bPlaying;
	UPROPERTY(EditDefaultsOnly)
		bool bCanEditWait = true;
	bool bTimeout = false;
	float OutTickTime = 0;
};

/**
 * Root Item
 */
UCLASS(NotBlueprintable)
class  PLOT_API UPlotItem_Root :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "默认对话参数"))
		FTalkConfig TalkConfig;
public:
	UPlotItem_Root();
	virtual void Start() override;
	virtual void End() override;
#if WITH_EDITOR
	virtual FText GetDisplayLabel() const override;
	void ResetTalkArgs() const;
#endif
};

/**
 * Needs to be saved to a configuration file
 */
UCLASS(Abstract)
class PLOT_API UPlotSaveItem :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (DesignerRebuild))
		FConfigItem Config;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "是否保存"))
		bool bSave = false;
public:
	void Read() const;
	virtual void Start() override;
#if WITH_EDITOR
	virtual void UpdateConfig(const FConfigItem& InItem);
#endif

};