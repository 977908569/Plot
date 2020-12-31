#include "PlotSaveGame.h"
#include "Kismet/GameplayStatics.h"

FString UPlotSaveGame::SlotName = TEXT("PLOT_SAVE_GAME");
int32 UPlotSaveGame::UserIndex = 0;
TWeakObjectPtr<UPlotSaveGame> UPlotSaveGame::Instance = nullptr;

UPlotSaveGame* UPlotSaveGame::LoadPlotSaveGame()
{
	if (Instance.IsValid()) return Instance.Get();

	if (!SlotName.IsEmpty())
	{
		if (UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex))
		{
			Instance = Cast<UPlotSaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex));
		}
		else
		{
			Instance = Cast<UPlotSaveGame>(UGameplayStatics::CreateSaveGameObject(UPlotSaveGame::StaticClass()));
		}
		check(Instance.IsValid());
		if (Instance.IsValid()) Instance->AddToRoot();
	}
	return Instance.IsValid() ? Instance.Get() : nullptr;
}

void UPlotSaveGame::Save()
{
	UGameplayStatics::SaveGameToSlot(this, SlotName, UserIndex);
}

void UPlotSaveGame::SaveKey(const FString& InKey) {
	if (!HasKey(InKey)) {
		SaveKeys.Add(InKey);
	}
	//
	Save();
}

bool UPlotSaveGame::HasKey(const FString& InKey) const {
	return SaveKeys.Contains(InKey);
}
