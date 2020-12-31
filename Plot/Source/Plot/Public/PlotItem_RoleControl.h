#pragma once
#include "PlotItem.h"
#include "PlotItem_RoleControl.generated.h"
//配置参数
USTRUCT(BlueprintType)
struct FPlotRoleControlArgs
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "名称"))
		FString ShowName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "资源配置ID"))
		int32 ModelID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "角色动画", MetaClass = "AnimSequence"))
		FSoftObjectPath Anim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "循环次数 0一直循环"))
		int32 LoopNum = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "位置"))
		FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "旋转"))
		FRotator Rotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "隐藏角色"))
		bool bHide;

	void Set(const FPlotRoleControlArgs& InArgs)
	{
		Position = InArgs.Position;
		Rotator = InArgs.Rotator;
	}
};

//角色依附
UCLASS(BlueprintType, Blueprintable)
class APlotRoleActor : public AActor
{
	GENERATED_BODY()
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayAnimEnd);
public:
	APlotRoleActor(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
		void SetData(const FPlotRoleControlArgs& InArgs);
	UFUNCTION(BlueprintCallable)
		void UpdatePosAndRot(const FPlotRoleControlArgs& InArgs);

	UFUNCTION(BlueprintImplementableEvent)
		void OnUpdate(const FPlotRoleControlArgs& InArgs);

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
		void PlayAnim(const FSoftObjectPath& InPath, bool bLoop);

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
		void Jump();

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
		FOnPlayAnimEnd OnPlayAnimEnd;
};

//角色控制条目
UCLASS(BlueprintType, meta = (DisplayName = "角色控制"))
class PLOT_API UPlotItem_RoleControl :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "参数", DesignerRebuild))
		FPlotRoleControlArgs Args;
public:
	UPlotItem_RoleControl();
	virtual void Start() override;
	virtual void Jump() override;
	UFUNCTION()
		void OnAnimEnd();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	void ResetPos();
	void UpdatePos();
	virtual FText GetPaletteCategory() override {
		return  FText::FromString(TEXT("角色"));
	}
#endif

private:
	UPROPERTY(Transient)
		TWeakObjectPtr<APlotRoleActor> Role;
};


