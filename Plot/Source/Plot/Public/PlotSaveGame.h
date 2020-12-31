#pragma once
#include "GameFramework/SaveGame.h"
#include "PlotSaveGame.generated.h"

UCLASS(BlueprintType)
class UPlotSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	/** Loads user persistence data if it exists, creates an empty record otherwise. */
	UFUNCTION(BlueprintCallable, Category = "SaveGame")
		static UPlotSaveGame* LoadPlotSaveGame();

	UFUNCTION(BlueprintCallable)
		void Save();

	UFUNCTION(BlueprintCallable)
		void SaveKey(const FString& InKey);

	UFUNCTION(BlueprintCallable)
		bool HasKey(const FString& InKey) const;
protected:
	UPROPERTY(BlueprintReadOnly)
		TArray<FString> SaveKeys;
private:
	/** The string identifier used to save/load this persistent user. */
	static FString SlotName;
	static int32 UserIndex;

	static TWeakObjectPtr<UPlotSaveGame> Instance;
};