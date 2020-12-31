#pragma once
#include "PlotItem.h"
#include "PlotItem_Sequence.generated.h"

USTRUCT(BlueprintType)
struct FSequenceItemStruct : public FSelectItemData
{
	GENERATED_USTRUCT_BODY()
		FSequenceItemStruct() {
	}
};

UCLASS(BlueprintType, meta = (DisplayName = "遍历"))
class PLOT_API UPlotItem_Sequence :public UPlotSaveItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DesignerRebuild))
		TArray<FSequenceItemStruct> Sequence;

	UPlotItem_Sequence();
	virtual void Start() override;
	virtual void Next() override;
	UFUNCTION()
		void OnSelect(int32 InIndex);
	void DoStart();
	virtual bool IsCanJump() override;
#if WITH_EDITOR
	virtual bool IsSupported(UClass* InClass) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	void UpdateChild();
	class UPlotItem_Sequence_Item* AddSelect(FConfigItem InConfig);
	virtual void Jump() override;
	class UPlotItem_Sequence_Item* GetItemByFlag(FString InFlag);
	virtual void OnAdd() override;
	virtual void EditorResetData() override;
#endif
public:
	bool bDefaultAdd = true;
};

UCLASS(NotBlueprintable, meta = (DisplayName = "遍历条目"))
class PLOT_API UPlotItem_Sequence_Item :public UPlotSaveItem
{
	GENERATED_BODY()
public:
	UPlotItem_Sequence_Item();
	virtual void Start() override;
#if WITH_EDITOR
	virtual void UpdateConfig(const FConfigItem& InItem) override;
#endif
};


