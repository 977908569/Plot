#pragma once
#include "PlotItem.h"
#include "MovieScene/Public/MovieSceneSequencePlayer.h"
#include "PlotItem_PlaySequence.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "播放序列"))
class PLOT_API UPlotItem_PlaySequence :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "资源", AllowedClasses = "LevelSequence"))
		FSoftObjectPath SequencePath;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "设置"))
		FMovieSceneSequencePlaybackSettings Settings;
public:
	UPlotItem_PlaySequence();
	virtual void Start() override;
	virtual void End() override;
	virtual void Jump() override;
#if WITH_EDITOR
	virtual FText GetPaletteCategory() override;
	virtual bool IsSupported(UClass* InClass) override;
	virtual void EditorResetData() override;
#endif

private:
	UFUNCTION()
		void PlayFinish();
	void RunSubItems();
	TWeakObjectPtr<class ULevelSequencePlayer> SequencePlayer;
};

UCLASS(NotBlueprintable, meta = (DisplayName = "序列条目"))
class PLOT_API UPlotItem_PlaySequence_Item :public UPlotItem
{
	GENERATED_BODY()
public:
	UPlotItem_PlaySequence_Item();
	virtual void Start() override;
	virtual void End() override;
	virtual void Next() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
private:
	void StartByIndex(int32 InIndex) const;
#if WITH_EDITOR
	virtual FText GetPaletteCategory() override;
#endif
private:
	TArray<int32> HasTrigger;
	float TickTime = 0;
};


