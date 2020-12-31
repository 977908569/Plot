#include "PlotItem.h"
#include "PlotEvent.h"

void UPlotItem::Start()
{
	bTimeout = false;
	bPlaying = true;
#if WITH_EDITOR
	UE_LOG(LogTemp, Log, TEXT("Start -----%s  %d"), *GetDisplayLabel().ToString(), GetIndex());
#endif

	if (Parent) Parent->SetExecuteIndex(GetIndex());
	//start
	OnStart();
	//fast exe
	CheckJump();
	//is wait ?
	if (!bWait)
	{
		End();
	}
}

void UPlotItem::End()
{
	if (bPlaying)
	{
		OnEnd();
		if (Parent)
		{
			Parent->Next();
		}
		Clearup();
	}
}

void UPlotItem::Next()
{
	UPlotItem* NextItem = GetChildAt(++ExecuteIndex);
	if (NextItem)
	{
		NextItem->Start();
	}
	else
	{
		End();
	}
}

void UPlotItem::Init()
{
	UpdateIndex();
}

UWorld* UPlotItem::GetWorld() const
{
	UPlot* MyPlot = Cast<UPlot>(GetOuter());
	if (MyPlot) return MyPlot->GetWorld();
	return nullptr;
}

UPlotWidget* UPlotItem::GetWidget() const
{
	if (const auto Plot = Cast<UPlot>(GetOuter()))
	{
		return Plot->GetWidget();
	}
	return nullptr;
}

void UPlotItem::Clearup()
{
	bPlaying = false;
	ExecuteIndex = 0;
	OutTickTime = 0;
}

void UPlotItem::Tick(float DeltaTime)
{
	if (Timeout > 0.f)
	{
		OutTickTime += DeltaTime;
		if (Timeout < OutTickTime && !bTimeout)
		{
			OnTimeOut();
		}
	}
}

TStatId UPlotItem::GetStatId() const
{
	return  UObject::GetStatID();
}

bool UPlotItem::IsTickable() const
{
	 return false; 
}

bool UPlotItem::IsTickableInEditor() const
{
	return false;
}

bool UPlotItem::IsTickableWhenPaused() const
{
	return false;
}


UPlotItem* UPlotItem::GetChildAt(const int32 Index) const
{
	if (Childs.IsValidIndex(Index))
	{
		return Childs[Index];
	}
	return nullptr;
}

bool UPlotItem::CanHaveMultipleChildren() const
{
	return bCanHaveMultipleChildren;
}

bool UPlotItem::RemoveChild(UPlotItem* InChild)
{
	const int32 ChildIndex = InChild->GetIndex();
	if (ChildIndex != -1)
	{
		return RemoveChildAt(ChildIndex);
	}
	return false;
}

bool UPlotItem::RemoveChildAt(const int32 Index)
{
	if (Index < 0 || Index >= Childs.Num())
	{
		return false;
	}

	Childs[Index] = nullptr;
	Childs.RemoveAt(Index);
	UpdateIndex();
	return true;
}

bool UPlotItem::ReplaceChildAt(const int32 Index, UPlotItem* InItem)
{
	if (Index < 0 || Index >= Childs.Num())
	{
		return false;
	}
	InItem->Parent = this;
	Childs[Index] = InItem;
	UpdateIndex();
	return true;
}

bool UPlotItem::AddChild(UPlotItem* InItem)
{
	if (InItem == nullptr)
	{
		return false;
	}
	if (!bCanHaveMultipleChildren)
	{
		return false;
	}
	InItem->Parent = this;
	Childs.Add(InItem);
	UpdateIndex();
	InItem->OnAdd();
	return true;
}

bool UPlotItem::InsertChildAt(const int32 Index, UPlotItem* Content)
{
	const bool bSuc = AddChild(Content);
	ShiftChild(Index, Content);
	return bSuc;
}

void UPlotItem::ShiftChild(const int32 Index, UPlotItem* Child)
{
	const int32 CurrentIndex = Child->GetIndex();
	Childs.RemoveAt(CurrentIndex);
	Childs.Insert(Child, FMath::Clamp(Index, 0, Childs.Num()));
	UpdateIndex();
}

void UPlotItem::UpdateIndex()
{
	for (int32 Index = 0; Index < Childs.Num(); ++Index)
	{
		if (Childs[Index] == nullptr)
		{
			Childs.RemoveAt(Index);
			Index--;
		}
		else
		{
			Childs[Index]->ItemIndex = Index;
		}
	}
}


bool UPlotItem::IsChildOf(UPlotItem* PossibleParent) const
{
	if (Parent == nullptr)
	{
		return false;
	}
	else if (Parent == PossibleParent)
	{
		return true;
	}
	return Parent->IsChildOf(PossibleParent);
}

bool UPlotItem::ReplaceChild(UPlotItem* CurrentChild, UPlotItem* NewChild)
{
	const int32 Index = CurrentChild->GetIndex();
	if (Index != -1)
	{
		return ReplaceChildAt(Index, NewChild);
	}

	return false;
}

void UPlotItem::Remove()
{
	if (Parent) Parent->RemoveChild(this);
}

void UPlotItem::RemoveAllChild() const
{
	TArray<UPlotItem*> RemoveItems = Childs;
	for (auto& Item : RemoveItems)
	{
		Item->Remove();
	}
}

UPlotSaveItem* UPlotItem::FindChildByKey(FString& InKey)
{
	for (auto& Item : Childs)
	{
		const auto SaveItem = Cast<UPlotSaveItem>(Item);
		if (SaveItem && SaveItem->Config.Key == InKey)
		{
			return SaveItem;
		}
	}
	return nullptr;
}

bool UPlotItem::IsCanJump()
{
	bool bJump = false;
	if (UPlot* MyPlot = GetPlot())
	{
		bJump = MyPlot->IsJump(this);
	}
	return bWait && bJump;
}

void UPlotItem::CheckJump()
{
	if (IsCanJump())
	{
		Jump();
	}
}

void UPlotItem::OnTimeOut()
{
	//
	bTimeout = true;
	for (auto& Each : TimeoutEvents)
	{
		Each->DoEvent();
	}
}

void UPlotItem::GetChildItems(UPlotItem* Parent, TArray<UPlotItem*>& Childs)
{
	ForItemAndChildren(Parent, [&Childs](UPlotItem* Item) {
		Childs.Add(Item);
		});
}

void UPlotItem::ForItemAndChildren(UPlotItem* Item, TFunctionRef<void(UPlotItem*)> Predicate)
{
	for (int32 ChildIndex = 0; ChildIndex < Item->GetChildrenCount(); ChildIndex++)
	{
		if (UPlotItem* ChildItem = Item->GetChildAt(ChildIndex))
		{
			Predicate(ChildItem);

			ForItemAndChildren(ChildItem, Predicate);
		}
	}
}

#if WITH_EDITOR
FText UPlotItem::GetPaletteCategory()
{
	return  FText::FromString(TEXT("Uncategorized"));
}

FText UPlotItem::GetDisplayLabel() const
{
	return DisplayLabel.IsEmpty() ? FText::FromString(GetName()) : FText::FromString(DisplayLabel);
}

FSlateColor UPlotItem::GetColor() const
{
	return FSlateColor::UseForeground();
}

void UPlotItem::SetDisplayLabel(const FString& InDisplayLabel)
{
	DisplayLabel = InDisplayLabel;
}

#endif


UPlotItem_Root::UPlotItem_Root()
{
	bCanHaveMultipleChildren = true;
}

void UPlotItem_Root::Start()
{
	UPlotItem* First = GetChildAt(0);
	if (First)
	{
		First->Start();
	}
}

void UPlotItem_Root::End() {
	UE_LOG(LogTemp, Log, TEXT("Play End"));
	if (auto MyWidget = GetWidget()) {
		MyWidget->OnEnd();
	}
}
#if WITH_EDITOR
FText UPlotItem_Root::GetDisplayLabel() const
{
	return FText::FromString(TEXT("ROOT"));
}

void UPlotItem_Root::ResetTalkArgs() const {
	GetPlot()->SetTalkConfigByRoot();
}
#endif

void UPlotSaveItem::Read() const {
	if (!bSave) return;
	if (const auto MyPlot = GetPlot()) {
		MyPlot->SaveKey(Config.Key);
	}
}

void UPlotSaveItem::Start() {
	Read();
	Super::Start();
}

#if WITH_EDITOR

void UPlotSaveItem::UpdateConfig(const FConfigItem& InItem)
{
	Config = InItem;
}
#endif




