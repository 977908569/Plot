#pragma once
#include "PlotEnum.h"
#include "GameFramework/Character.h"
#include "UObject/Object.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlotWidget.h"
#include "Plot.generated.h"
class UPlotItem;
#define MAX_PLAY_SPEED 1000.f
/**
 * Plot Asset
 */
UCLASS(BlueprintType)
class PLOT_API UPlot :public UObject
{
	GENERATED_BODY()
public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, meta = (DisplayName = "预览地图", AllowedClasses = "World"))
		FSoftObjectPath PreviewLevelPath;
	UPROPERTY(Instanced)
		class UPlotCameraObj* CameraObj;
#endif
	UPROPERTY(EditAnywhere, meta = (DisplayName = "剧情配置表"))
		FString PlotConfig;

	UPROPERTY(EditAnywhere, meta = (DisplayName = "背景图", AllowedClasses = "Texture2D"))
		FSoftObjectPath BGPath;
public:
	UPlot();

	UFUNCTION(BlueprintCallable)
		void Start();

	UFUNCTION(BlueprintCallable)
		void End();

	UFUNCTION(BlueprintCallable)
		void Cleanup();
	UFUNCTION(BlueprintCallable)
		void ClearSequence();

	UFUNCTION(BlueprintCallable)
		bool IsJump(UPlotItem* InItem);

	UFUNCTION(BlueprintCallable)
		bool JumpTo(const FString& InKey) const;

	UFUNCTION(BlueprintCallable)
		void SaveKey(const FString& InKey) const;

	UFUNCTION(BlueprintCallable)
		bool HasKey(const FString& InKey) const;
public:
	//Root Node
	UPROPERTY(Instanced)
		UPlotItem* RootItem;
public:
	UFUNCTION(BlueprintCallable)
		FORCEINLINE	class UPlotItem* GetRootItem() const { return RootItem; }

	UFUNCTION(BlueprintCallable)
		FORCEINLINE class UPlotWidget* GetWidget() const { return Widget.Get(); }

	UFUNCTION(BlueprintCallable)
		void SetWidget(UPlotWidget* InWidget) { Widget = InWidget; }

	UFUNCTION(BlueprintCallable)
		EPlayMode GetPlayMode() const { return PlayMode; }

	UFUNCTION(BlueprintCallable)
		void SetPlayMode(const EPlayMode InPlayMode) { PlayMode = InPlayMode; };

	UFUNCTION(BlueprintCallable)
		float GetPlaySpeed() const;

	UFUNCTION(BlueprintCallable)
		virtual UWorld* GetWorld() const override;
	/**
	 * Load Base Config
	 */
	void LoadConfig();

	UFUNCTION(BlueprintCallable)
		FConfigItem& GetTalkConfig(FString& InKey);
	/**
	 * Find Save Item By Key
	 */
	class UPlotSaveItem* FindItemByKey(FString InKey) const;
public:
	TMap<FString, TWeakObjectPtr<class UParticleSystemComponent>> PlotSpawnParticle;
	TMap<FString, TWeakObjectPtr<class APlotRoleActor>> PlotSpawnRole;
	TArray<TWeakObjectPtr<class ALevelSequenceActor>> PlotSequencePlayers;
private:
	//UI
	UPROPERTY(Transient)
		TWeakObjectPtr<class UPlotWidget> Widget;
	//Talk Config
	UPROPERTY(Transient)
		TMap<FString, FConfigItem> ConfigMap;
	TWeakObjectPtr<class UPlotSaveGame> PlotSaveGame;
	//Mode
	EPlayMode PlayMode;
	//Play Speed
	float PlaySpeed = 1.0f;
public:
	bool RemoveItem(UPlotItem* InItem);
	void GetAllItems(TArray<UPlotItem*>& Items) const;
	static void GetChildItems(UPlotItem* Parent, TArray<UPlotItem*>& Items);
	void ForEachItem(TFunctionRef<void(UPlotItem*)> Predicate) const;
	static void ForItemAndChildren(UPlotItem* Item, TFunctionRef<void(UPlotItem*)> Predicate);
	UPlotItem* ConstructItem(TSubclassOf<UPlotItem> ItemClass, FName ItemName = NAME_None);
	int32 GetAllClassNum(UClass* InClass) const;
#pragma region  Editor Code
public:
#if WITH_EDITOR
	void StartSimulate(UPlotItem* InItem);
	UPlotItem* GetSimulateItem() const { return SimulateItem.Get(); }
	DECLARE_EVENT_OneParam(UPlot, FChangedEvent, class UPlot*);
	FChangedEvent& OnChanged() { return ChangedEvent; }
	void BroadcastChanged() { ChangedEvent.Broadcast(this); }
	DECLARE_EVENT_OneParam(UPlot, FOnCameraPosChange, FPlotCameraInfo)
	FOnCameraPosChange OnCameraPosChange;
	/**
	 * Reset the editor according to the configuration table
	 */
	void Reset();
	/**
	 * Save to the configuration table
	 */
	void Save2Txt();
	/**
	 * Reset talk Settings parameters
	 */
	void SetTalkConfigByRoot() const;
private:
	FChangedEvent ChangedEvent;
	TWeakObjectPtr<UPlotItem> SimulateItem;
#endif
#pragma endregion 
};

#pragma region 编辑器使用

#pragma region  编辑器镜头参数
//编辑器镜头参数

UCLASS(DefaultToInstanced, EditInlineNew, BlueprintType, meta = (DisplayName = "镜头参数"))
class PLOT_API UPlotCameraObj : public UObject {

	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, meta = (DisplayName = "当前镜头参数", DesignerRebuild))
		FPlotCameraInfo CameraArgs;
};
#pragma  endregion 

//编辑器使用
UCLASS(BlueprintType, Blueprintable)
class PLOT_API APlotCharacter : public ACharacter {

	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USpringArmComponent* CameraArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UCameraComponent* Camera;
public:
	APlotCharacter();
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
		void SetCameraArgs(FPlotCameraInfo InArgs) const;

	UFUNCTION(BlueprintCallable)
		FPlotCameraInfo& GetCameraArgs() const;
};

#pragma endregion 

