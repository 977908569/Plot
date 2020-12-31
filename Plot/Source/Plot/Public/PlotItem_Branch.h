#pragma once
#include "PlotItem.h"
#include "PlotItem_Branch.generated.h"
class UPlotItem_Branch_Item;
USTRUCT(BlueprintType)
struct FBranchItemStruct : public FSelectItemData
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "跳转Key"))
		FString JumpKey;

	FBranchItemStruct() {}
};

UCLASS(BlueprintType, meta = (DisplayName = "分支"))
class PLOT_API UPlotItem_Branch :public UPlotSaveItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DesignerRebuild))
		TArray<FBranchItemStruct> Branchs;
public:
	UPlotItem_Branch();
	virtual void Start() override;
	virtual bool IsCanJump() override;
	virtual void Next() override;
	UFUNCTION()
		void OnSelect(int32 InIndex);
#if WITH_EDITOR
	virtual FText GetPaletteCategory() override;
	virtual bool IsSupported(UClass* InClass) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	void UpdateChild();
	UPlotItem_Branch_Item* AddSelect(FConfigItem InConfig);
	virtual void Jump() override;
	int32 AutoSelect() const;
	UPlotItem_Branch_Item* GetItemByFlag(FString InFlag);
	virtual void OnAdd() override;
	virtual void EditorResetData() override;
#endif
public:
	bool bDefaultAdd = true;
};

UCLASS(NotBlueprintable, meta = (DisplayName = "分支条目"))
class PLOT_API UPlotItem_Branch_Item :public UPlotSaveItem
{
	GENERATED_BODY()
public:
	UPlotItem_Branch_Item();
	virtual void Start() override;
	virtual void End() override;
#if WITH_EDITOR
	virtual void UpdateConfig(const FConfigItem& InItem) override;
#endif
};

