#include "PlotItem_Branch.h"

UPlotItem_Branch::UPlotItem_Branch() {
	bCanHaveMultipleChildren = true;
	bWait = true;
}

void UPlotItem_Branch::Start()
{
	bWait = true;
	for (int32 Index = 0; Index < Branchs.Num(); Index++)
	{
		Branchs[Index].Index = Index;
	}
	//显示
	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		Widget->OnSelect.RemoveAll(this);
		Widget->OnSelect.AddDynamic(this, &UPlotItem_Branch::OnSelect);
		TArray<FSelectItemData> CastArray;
		for (int32 AddIndex = 0; AddIndex < Branchs.Num(); AddIndex++)
		{
			if (Branchs[AddIndex].Check())
			{
				CastArray.Add(Branchs[AddIndex]);
			}
		}
		Widget->OnShowSelect(true, CastArray);
	}

	Super::Start();
}

bool UPlotItem_Branch::IsCanJump()
{
#if WITH_EDITOR
	return Super::IsCanJump();
#endif
	return false;
}

void UPlotItem_Branch::Next()
{
	//直接结束
	End();
}

void UPlotItem_Branch::OnSelect(int32 InIndex)
{
	if (Branchs.IsValidIndex(InIndex))
	{
		Branchs[InIndex].SelectNum += 1;
	}

	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
		const TArray<FSelectItemData> TempArray;
		Widget->OnShowSelect(false, TempArray);
	}
	//Exe Child
	UPlotItem* SelectItem = GetChildAt(InIndex);
	if (SelectItem)
	{
		SelectItem->Start();
	}
}

#if WITH_EDITOR

FText UPlotItem_Branch::GetPaletteCategory()
{
	return FText::FromString(TEXT("Branch"));
}

bool UPlotItem_Branch::IsSupported(UClass* InClass)
{
	if (InClass->IsChildOf(UPlotItem_Branch_Item::StaticClass()))
	{
		return true;
	}
	return false;
}

void UPlotItem_Branch::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.GetPropertyName().ToString().Contains(TEXT("Branchs"))) {
		UpdateChild();
	}
}

void UPlotItem_Branch::UpdateChild()
{
	for (int32 Index = 0; Index < Branchs.Num(); Index++)
	{
		if (Index < Childs.Num())
		{
			UPlotSaveItem* TempItem = Cast<UPlotSaveItem>(GetChildAt(Index));
			TempItem->SetDisplayLabel(Branchs[Index].Text);
			TempItem->Config.Content = Branchs[Index].Text;
		}
		else
		{
			UPlotItem_Branch_Item* DefaultAdd = Cast<UPlotItem_Branch_Item>(Cast<UPlot>(GetOuter())->ConstructItem(UPlotItem_Branch_Item::StaticClass()));
			if (DefaultAdd)
			{
				DefaultAdd->Config.Flag = FString::Format(TEXT("{0}-{1}"), { this->Config.Key,FString::FromInt(Index + 1) });
				DefaultAdd->Config.Key = DefaultAdd->Config.Flag;
				DefaultAdd->SetDisplayLabel(Branchs[Index].Text);
				AddChild(DefaultAdd);
			}
		}
	}

	for (int32 Index = Branchs.Num(); Index < Childs.Num(); Index++)
	{
		RemoveChildAt(Index);
	}
	GetPlot()->BroadcastChanged();
}

UPlotItem_Branch_Item* UPlotItem_Branch::AddSelect(const FConfigItem InConfig)
{
	FBranchItemStruct BranchItemStruct;
	BranchItemStruct.Text = InConfig.Content;
	const int32 Index = Branchs.Add(BranchItemStruct);
	UpdateChild();
	auto Branch_Item = Cast<UPlotItem_Branch_Item>(GetChildAt(Index));
	Branch_Item->UpdateConfig(InConfig);
	return Branch_Item;
}

void UPlotItem_Branch::Jump()
{
	int32 SelectIndex = AutoSelect();
	if (SelectIndex < 0)SelectIndex = 0;
	OnSelect(SelectIndex);
	Super::Jump();
}

int32 UPlotItem_Branch::AutoSelect() const
{
	UPlotItem* SimulateItem = GetPlot()->GetSimulateItem();
	if (SimulateItem != nullptr)
	{
		UPlotItem_Branch_Item* Branch_Item = Cast<UPlotItem_Branch_Item>(SimulateItem);
		if (Branch_Item == nullptr)
			Branch_Item = Cast<UPlotItem_Branch_Item>(SimulateItem->Parent);
		if (Branch_Item)
		{
			return Branch_Item->GetIndex();
		}
	}
	return -1;
}

UPlotItem_Branch_Item* UPlotItem_Branch::GetItemByFlag(FString InFlag)
{
	for (auto& Item : Childs)
	{
		UPlotItem_Branch_Item* Each = Cast<UPlotItem_Branch_Item>(Item);
		if (Each->Config.Flag == InFlag)
		{
			return Each;
		}
	}
	return nullptr;
}

void UPlotItem_Branch::OnAdd()
{
	Super::OnAdd();
	if (bDefaultAdd)
	{
		const int32 Idx = GetPlot()->GetAllClassNum(UPlotItem_Branch::StaticClass());
		this->Config.Key = FString::Format(TEXT("b-{0}"), { FString::FromInt(Idx) });
		if (Branchs.Num() <= 0)
		{
			for (int32 Index = 0; Index < 2; Index++)
			{
				FBranchItemStruct BranchItemStruct;
				BranchItemStruct.Text = FString::Format(TEXT("DefaultBranch-{0}"), { FString::FromInt(Index) });
				Branchs.Add(BranchItemStruct);
			}
		}
		UpdateChild();
	}
}

void UPlotItem_Branch::EditorResetData() {
	for (auto& B : Branchs) {
		B.SelectNum = 0;
	}
}
#endif


UPlotItem_Branch_Item::UPlotItem_Branch_Item()
{
	bCanHaveMultipleChildren = true;
	bWait = true;
}

void UPlotItem_Branch_Item::Start()
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

void UPlotItem_Branch_Item::End()
{
	UPlotItem_Branch* MyParent = Cast<UPlotItem_Branch>(Parent);
	const FBranchItemStruct TempData = MyParent->Branchs[GetIndex()];
	//有跳转
	if (!TempData.JumpKey.IsEmpty())
	{
		UPlot* MyPlot = GetPlot();
		if (MyPlot)
		{
			UPlotItem* JumpItem = MyPlot->FindItemByKey(TempData.JumpKey);
			if (JumpItem)
			{
				JumpItem->Start();
			}
		}
	}
	else
	{
		Super::End();
	}
}

#if WITH_EDITOR
void UPlotItem_Branch_Item::UpdateConfig(const FConfigItem& InItem)
{
	Super::UpdateConfig(InItem);
	SetDisplayLabel(InItem.Content);
}
#endif

