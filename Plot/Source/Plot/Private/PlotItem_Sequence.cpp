#include "PlotItem_Sequence.h"
#include "Plot.h"

UPlotItem_Sequence::UPlotItem_Sequence() {
	bCanHaveMultipleChildren = true;
	bWait = true;
}

void UPlotItem_Sequence::Start()
{
	bWait = true;
	//变量重置
	for (int32 Index = 0; Index < Sequence.Num(); Index++)
	{
		Sequence[Index].Index = Index;
	}
	//点击事件绑定
	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		Widget->OnSelect.RemoveAll(this);
		Widget->OnSelect.AddDynamic(this, &UPlotItem_Sequence::OnSelect);
	}
	DoStart();
	Super::Start();
}

void UPlotItem_Sequence::Next()
{
	for (auto& Each : Sequence)
	{
		if (Each.Check())
		{
			//继续
			DoStart();
			//Jump
			CheckJump();
			return;
		}
	}
	//结束
	End();
}

void UPlotItem_Sequence::OnSelect(int32 InIndex)
{
	if (Sequence.IsValidIndex(InIndex))
	{
		Sequence[InIndex].SelectNum += 1;
	}

	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		const TArray<FSelectItemData> TempArray;
		Widget->OnShowSelect(false, TempArray);
	}
	//
	UPlotItem* SelectItem = GetChildAt(InIndex);
	if (SelectItem)
	{
		SelectItem->Start();
	}
}

void UPlotItem_Sequence::DoStart()
{
	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		TArray<FSelectItemData> CastArray;
		for (int32 AddIndex = 0; AddIndex < Sequence.Num(); AddIndex++)
		{
			if (Sequence[AddIndex].Check())
			{
				CastArray.Add(Sequence[AddIndex]);
			}
		}
		Widget->OnShowSelect(true, CastArray);
	}
}

bool UPlotItem_Sequence::IsCanJump()
{
#if WITH_EDITOR
	return Super::IsCanJump();
#endif
	return false;
}

#if WITH_EDITOR

bool UPlotItem_Sequence::IsSupported(UClass* InClass)
{
	if (InClass->IsChildOf(UPlotItem_Sequence_Item::StaticClass()))
	{
		return true;
	}
	return false;
}

void UPlotItem_Sequence::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.GetPropertyName().ToString().Contains(TEXT("Sequence"))) {
		UpdateChild();
	}
}

void UPlotItem_Sequence::UpdateChild()
{
	for (int32 Index = 0; Index < Sequence.Num(); Index++)
	{
		if (Index < Childs.Num())
		{
			UPlotSaveItem* TempItem = Cast<UPlotSaveItem>(GetChildAt(Index));
			TempItem->SetDisplayLabel(Sequence[Index].Text);
			TempItem->Config.Content = Sequence[Index].Text;
		}
		else
		{
			UPlotItem_Sequence_Item* DefaultAdd = Cast<UPlotItem_Sequence_Item>(Cast<UPlot>(GetOuter())->ConstructItem(UPlotItem_Sequence_Item::StaticClass()));
			if (DefaultAdd)
			{
				DefaultAdd->Config.Flag = FString::Format(TEXT("{0}-{1}"), { this->Config.Key,FString::FromInt(Index + 1) });
				DefaultAdd->Config.Key = DefaultAdd->Config.Flag;
				DefaultAdd->SetDisplayLabel(Sequence[Index].Text);
				AddChild(DefaultAdd);
			}
		}
	}

	for (int32 Index = Sequence.Num(); Index < Childs.Num(); Index++)
	{
		RemoveChildAt(Index);
	}
	GetPlot()->BroadcastChanged();
}

UPlotItem_Sequence_Item* UPlotItem_Sequence::AddSelect(FConfigItem InConfig)
{
	FSequenceItemStruct SequenceItemStruct;
	SequenceItemStruct.Text = InConfig.Content;
	const int32 Index = Sequence.Add(SequenceItemStruct);
	UpdateChild();
	auto Branch_Item = Cast<UPlotItem_Sequence_Item>(GetChildAt(Index));
	Branch_Item->UpdateConfig(InConfig);
	return Branch_Item;
}

void UPlotItem_Sequence::Jump()
{
	//是跳过模式
	for (auto& Each : Sequence)
	{
		if (Each.Check())
		{
			OnSelect(Each.Index);
			break;
		}
	}
}

UPlotItem_Sequence_Item* UPlotItem_Sequence::GetItemByFlag(FString InFlag)
{
	for (auto& Item : Childs)
	{
		UPlotItem_Sequence_Item* Each = Cast<UPlotItem_Sequence_Item>(Item);
		if (Each->Config.Flag == InFlag)
		{
			return Each;
		}
	}
	return nullptr;
}

void UPlotItem_Sequence::OnAdd()
{
	Super::OnAdd();
	if (bDefaultAdd)
	{
		const int32 Idx = GetPlot()->GetAllClassNum(UPlotItem_Sequence::StaticClass());
		this->Config.Key = FString::Format(TEXT("e-{0}"), { FString::FromInt(Idx) });
		if (Sequence.Num() <= 0)
		{
			for (int32 Index = 0; Index < 2; Index++)
			{
				FSequenceItemStruct SequenceItemStruct;
				SequenceItemStruct.Text = FString::Format(TEXT("DefaultSequence-{0}"), { FString::FromInt(Index) });
				Sequence.Add(SequenceItemStruct);
			}
		}
		UpdateChild();
	}
}

void UPlotItem_Sequence::EditorResetData() {
	for (auto& S : Sequence) {
		S.SelectNum = 0;
	}
}

#endif

////////////////////////////////////////////////
UPlotItem_Sequence_Item::UPlotItem_Sequence_Item()
{
	bCanHaveMultipleChildren = true;
	bWait = true;
}

void UPlotItem_Sequence_Item::Start()
{
	Super::Start();
	if (Childs.Num() > 0)
	{
		Childs[0]->Start();
	}
	else
	{
		End();
	}
}

#if WITH_EDITOR
void UPlotItem_Sequence_Item::UpdateConfig(const FConfigItem& InItem)
{
	Super::UpdateConfig(InItem);
	SetDisplayLabel(InItem.Content);
}
#endif

