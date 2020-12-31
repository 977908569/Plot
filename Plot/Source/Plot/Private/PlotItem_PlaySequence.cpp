#include "PlotItem_PlaySequence.h"
#include "LevelSequence/Public/LevelSequence.h"
#include "LevelSequence/Public/LevelSequenceActor.h"

UPlotItem_PlaySequence::UPlotItem_PlaySequence() {
	bWait = true;
	bCanHaveMultipleChildren = true;
}

void UPlotItem_PlaySequence::Start()
{
	if (auto MyPlot = GetPlot()) {
		MyPlot->ClearSequence();
		//
		ULevelSequence* Sequence = Cast<ULevelSequence>(SequencePath.TryLoad());
		if (Sequence)
		{
			ALevelSequenceActor* SequenceActor;
			SequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(this, Sequence, Settings, SequenceActor);
			if (SequencePlayer.IsValid()) {

				auto& AddSequences = MyPlot->PlotSequencePlayers;
				AddSequences.AddUnique(SequenceActor);
				SequencePlayer->Play();
				if (bWait)
					SequencePlayer->OnFinished.AddDynamic(this, &UPlotItem_PlaySequence::PlayFinish);
			}
		}
	}
	if (!IsCanJump())
	{
		RunSubItems();
	}

	Super::Start();
}

void UPlotItem_PlaySequence::End()
{
	Super::End();
	for (auto& Each : Childs)
	{
		if (Each)
		{
			Each->End();
		}
	}
}

void UPlotItem_PlaySequence::Jump()
{
	Super::Jump();
	if (SequencePlayer.IsValid())
	{
		SequencePlayer->SetPlayRate(MAX_PLAY_SPEED);
	}
}

#if WITH_EDITOR
FText UPlotItem_PlaySequence::GetPaletteCategory()
{
	return  FText::FromString(TEXT("Sequence"));
}

bool UPlotItem_PlaySequence::IsSupported(UClass* InClass)
{
	if (InClass->IsChildOf(UPlotItem_PlaySequence_Item::StaticClass()))
	{
		return true;
	}
	return false;
}

void UPlotItem_PlaySequence::EditorResetData()
{
	for (auto& Each : Childs)
	{
		TArray<UPlotItem*> ChildItems;
		UPlotItem::GetChildItems(Each, ChildItems);
		for (auto& Item : ChildItems)
		{
			Item->Clearup();
		}
	}
}
#endif


void UPlotItem_PlaySequence::PlayFinish() {
	if (!bWait) return;
	End();
#if WITH_EDITOR
	for (auto& Each : Childs)
	{
		if (Each->IsPlaying())
		{
			UE_LOG(LogTemp, Error, TEXT("子轨道还没结束？？？==> %s"), *Each->GetName());
		}
	}
#endif
}

void UPlotItem_PlaySequence::RunSubItems() {

	for (auto& Each : Childs)
	{
		if (Each)
		{
			Each->Start();
		}
	}
}
/////////////////////////////////////
UPlotItem_PlaySequence_Item::UPlotItem_PlaySequence_Item() {
	bWait = true;
	bCanHaveMultipleChildren = true;
}

void UPlotItem_PlaySequence_Item::Start() {
	HasTrigger.Empty();
	TickTime = 0;
	Super::Start();
}

void UPlotItem_PlaySequence_Item::End()
{
	if (bPlaying)
	{
		OnEnd();
		Clearup();
	}
	for (auto& Each : Childs) {
		if (Each && Each->IsPlaying()) {
			Each->End();
		}
	}
	//END
	UE_LOG(LogTemp, Log, TEXT("Sub Item Finish  %s"), *GetName())
}

void UPlotItem_PlaySequence_Item::Next()
{
	//Empty
}

void UPlotItem_PlaySequence_Item::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickTime += DeltaTime;
	for (auto& Each : Childs)
	{
		if (Each->TrackTime < TickTime && !HasTrigger.Contains(Each->GetIndex()))
		{
			HasTrigger.Add(Each->GetIndex());
			Each->Start();
			UE_LOG(LogTemp, Log, TEXT("Trigger Sub Item ==> %s"), *GetName());
		}
	}
}

bool UPlotItem_PlaySequence_Item::IsTickable() const
{
	return IsPlaying();
}

void UPlotItem_PlaySequence_Item::StartByIndex(const int32 InIndex) const
{
	auto Child = GetChildAt(InIndex);
	if (Child)
	{
		Child->Start();
	}
}

#if WITH_EDITOR
FText UPlotItem_PlaySequence_Item::GetPaletteCategory()
{
	return  FText::FromString(TEXT("Sequence"));
}
#endif

