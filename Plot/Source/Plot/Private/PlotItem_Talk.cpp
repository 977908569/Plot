#include "PlotItem_Talk.h"
#include "Plot.h"
#include "PlotItem_Branch.h"
#include "PlotItem_Sequence.h"
#include "Kismet/KismetStringLibrary.h"

FString UPlotItem_Talk::GetSpeakerName() const
{
	//暂时兼容
	if (Name2Img.zh_CN.IsEmpty())
		return Config.Speaker;
	//
	//Check Language
	return Name2Img.zh_CN;
}

FString UPlotItem_Talk::GetContentStr() const
{
	//Check Language
	return Config.Content;
}

const FSoftObjectPath& UPlotItem_Talk::GetImg() const
{
	if (TalkConfig.Img.IsValid())
	{
		return TalkConfig.Img;
	}
	return Name2Img.ImgPath;
}

UPlotItem_Talk::UPlotItem_Talk() {
	bWait = true;
}

void UPlotItem_Talk::ParseInfo(const FConfigItem& InItem)
{
#if WITH_EDITOR
	SetDisplayLabel(InItem.Speaker + " |" + InItem.Content);
#endif
}

void UPlotItem_Talk::Start()
{
	Name2Img = FPlotName2Img::Get(Config.Speaker);
	Reset();
	CurrentTalkState = ETalkState::Talk;
	TargetStr = GetContentStr();
	Max = TargetStr.Len();
	UPlotWidget* Widget = GetWidget();
	if (Widget)
	{
#if !WITH_EDITOR //多语言读取
		//ParseInfo(GetPlot()->GetTalkConfig(TalkKey));
#endif
		Widget->OnInput.Clear();
		Widget->OnInput.AddDynamic(this, &UPlotItem_Talk::OnInput);
		Widget->DoTalk(this);
	}
	Super::Start();
}

void UPlotItem_Talk::End()
{
	if (auto MyWidget = GetWidget())
	{
		MyWidget->OnInput.RemoveAll(this);
	}
	//
	Super::End();
}

void UPlotItem_Talk::Tick(float InDeltaTime)
{
	Super::Tick(InDeltaTime);
	if (CurrentTalkState == ETalkState::Talk)
	{
		if (CurrentIndex > Max)
		{
			TalkEnd();
			return;
		}
		if (CurrentTime > 0)
		{
			CurrentTime -= InDeltaTime * CurrentSpeed;
		}
		else
		{
			CurrentTime = Interval;
			CurrentStr += UKismetStringLibrary::GetSubstring(TargetStr, CurrentIndex, 1);
			CurrentIndex += 1;
			OnTalkTextChange.Broadcast(CurrentStr);
		}
	}
	else if (CurrentTalkState == ETalkState::CountDown)
	{
		if (CountDownTime > 0)
		{
			CountDownTime -= InDeltaTime;
		}
		else
		{
			CurrentTalkState = ETalkState::Noraml;
			ExecuteEnd();
		}
	}
}

bool UPlotItem_Talk::IsTickable() const
{
	return IsPlaying();
}

void UPlotItem_Talk::OnAdd()
{
#if WITH_EDITOR
	if (Parent &&
		(Parent->IsA(UPlotItem_Branch_Item::StaticClass())
			|| Parent->IsA(UPlotItem_Sequence_Item::StaticClass())))
	{
		const FString TempFlag = Cast<UPlotSaveItem>(Parent)->Config.Flag + "-" + FString::FromInt(GetIndex());
		if (Config.Flag.IsEmpty())
		{
			Config.Flag = TempFlag;
		}
		if (Config.Key.IsEmpty())
		{
			Config.Key = TempFlag;
		}
	}
#endif
}

void UPlotItem_Talk::Jump()
{
	ForceEnd();
	End();
}

void UPlotItem_Talk::ForceEnd()
{
	CurrentIndex = Max;
	OnTalkTextChange.Broadcast(TargetStr);
	CurrentTalkState = ETalkState::Noraml;
}

#if WITH_EDITOR
void UPlotItem_Talk::UpdateConfig(const FConfigItem& InItem)
{
	Super::UpdateConfig(InItem);
	ParseInfo(InItem);
}

void UPlotItem_Talk::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	ParseInfo(Config);

	if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UPlotItem_Talk, TalkConfig))
	{
		if (TalkConfig.FowardType == EFowardType::Time)
		{
			if (!bWait)
				bWait = true;
			bCanEditWait = false;
		}
		else {
			bCanEditWait = true;
		}
	}
}

FSlateColor UPlotItem_Talk::GetColor() const
{
	if (const auto MyPlot = GetPlot()) {
		UPlotItem_Root* Root = Cast<UPlotItem_Root>(MyPlot->GetRootItem());
		if (Root)
		{
			if (!(Root->TalkConfig == TalkConfig))
			{
				return FLinearColor(1, 0.5f, 0.5f);
			}
		}
	}

	return Super::GetColor();
}
#endif

void UPlotItem_Talk::Reset()
{
	CurrentStr = TEXT("");
	CurrentIndex = 0;
	CurrentTime = 0;
	CurrentSpeed = TalkConfig.TalkPlaySpeed;
}


void UPlotItem_Talk::OnInput()
{
	//输入  直接结束 
	if (TalkConfig.FowardType == EFowardType::Click && CurrentTalkState == ETalkState::Noraml)
	{
		End();
	}
	if (CurrentTalkState == ETalkState::Talk)
	{
		ForceEnd();
	}
}

void UPlotItem_Talk::ExecuteEnd() const
{
	//通知进入切换状态
	if (GetWidget())
		GetWidget()->EnterChange();
}

void UPlotItem_Talk::TalkEnd()
{
	//显示完毕
	if (TalkConfig.FowardType == EFowardType::Time)
	{
		CountDownTime = TalkConfig.Time;
		CurrentTalkState = ETalkState::CountDown;
	}
	else
	{
		CurrentTalkState = ETalkState::Noraml;
	}
}

