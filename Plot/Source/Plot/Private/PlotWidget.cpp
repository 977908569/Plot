#include "PlotWidget.h"
#include "Border.h"
#include "CanvasPanel.h"
#include "Image.h"
#include "ListView.h"
#include "PlotItem_Talk.h"
#include "TextBlock.h"
#include "Button.h"
#include "PlotItem_Spine.h"

void UPlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (ClickZone)
	{
		ClickZone->OnClicked.AddDynamic(this, &UPlotWidget::OnBtnClick);
	}
}

void UPlotWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (bChanging)
	{
		if (TempChangeTime > 0)
		{
			TempChangeTime -= InDeltaTime;
		}
		else
		{
			ChangeEnd();
			bChanging = false;
		}
	}
}

void UPlotWidget::PlayAnimByName(const FString& InName)
{
	const auto WidgetBlueprint = GetWidgetTreeOwningClass();
	if (WidgetBlueprint) {
		auto Anims = WidgetBlueprint->Animations;
		for (auto Item : Anims) {
			if (Item->GetName().StartsWith(InName)) {
				PlayAnimation(Item);
			}
		}
	}
}

void UPlotWidget::Add2Root()
{
	if (!IsRooted())
	{
		AddToRoot();
	}
}


void UPlotWidget::RemoveInRoot()
{
	if (IsRooted())
	{
		RemoveFromRoot();
	}
}

UTextBlock* UPlotWidget::GetDialogTextBlock(const EDialogueType& InType) const
{
	switch (InType) {
	case EDialogueType::Normal:
		return DialogueText;
	case EDialogueType::Fight:
		return FightStyle->TalkText;
	case EDialogueType::Animation:
		return DialogueText;
	default:;
	}
	return nullptr;
}

void UPlotWidget::EnterChange()
{
	bChanging = true;
}

void UPlotWidget::SetBackground(const FSoftObjectPath& Path) const
{
	if (Path.IsValid() && BG)
	{
		BG->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		BG->SetBrushFromTexture(Cast<UTexture2D>(Path.TryLoad()));
	}
}

void UPlotWidget::DoTalk(UPlotItem_Talk* InData)
{
	PlayItem = InData;
	InData->OnTalkTextChange.RemoveAll(this);
	InData->OnTalkTextChange.AddDynamic(this, &UPlotWidget::OnTalkTextChange);
	TalkText = GetDialogTextBlock(InData->TalkConfig.DialogueType);
	//Set Font Info
	if (TalkText)
	{
		TalkText->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		TalkText->SetText(FText::GetEmpty());
		FSlateFontInfo TempFont = TalkText->Font;
		TempFont.Size = InData->TalkConfig.FontSize;
		if (InData->TalkConfig.bBold)
			TempFont.TypefaceFontName = TEXT("Bold");
		else
			TempFont.TypefaceFontName = TEXT("Default");
		TalkText->SetFont(TempFont);
	}
	OnTalk(InData);
}

void UPlotWidget::OnTalk(UPlotItem_Talk* InData) {
	auto& Config = InData->TalkConfig;
	switch (Config.DialogueType) {
	case EDialogueType::Normal:
		if (UINode) UINode->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		if (Speaker) Speaker->SetText(FText::FromString(InData->GetSpeakerName()));
		if (ClickZone)ClickZone->SetVisibility(ESlateVisibility::Visible);
		if (TalkContent)TalkContent->SetVisibility(ESlateVisibility::HitTestInvisible);
		SetRoleImg(InData->Config.Pos, InData->GetImg(), false);
		if (FightStyle) FightStyle->SetVisibility(ESlateVisibility::Collapsed);
		break;
	case EDialogueType::Fight:
		if (UINode) UINode->SetVisibility(ESlateVisibility::HitTestInvisible);
		if (TalkContent)TalkContent->SetVisibility(ESlateVisibility::Collapsed);
		if (ClickZone)ClickZone->SetVisibility(ESlateVisibility::Collapsed);
		if (FightStyle)
		{
			FightStyle->SetVisibility(ESlateVisibility::HitTestInvisible);
			FightStyle->DoTalk(this, InData);
		}
		break;
	case EDialogueType::Animation:
		if (UINode) UINode->SetVisibility(ESlateVisibility::Collapsed);
		if (TalkContent)TalkContent->SetVisibility(ESlateVisibility::HitTestInvisible);
		if (ClickZone)ClickZone->SetVisibility(ESlateVisibility::Collapsed);
		if (Speaker) Speaker->SetText(FText::FromString(InData->GetSpeakerName()));
		break;
	default:;
	}

}

void UPlotWidget::SetRoleImg(const int32 InPos, const FSoftObjectPath& InPath, const bool bHide) const
{
	if (PoseNode) PoseNode->SetVisibility(ESlateVisibility::HitTestInvisible);
	//if (SpineNode) SpineNode->SetVisibility(ESlateVisibility::Collapsed);
	UImage* CurrentImg = nullptr;
	switch (InPos)
	{
	case 0:
		break;
	case 1:
		CurrentImg = LeftPose;
		break;
	case 2:
		CurrentImg = CenterPose;
		break;
	case 3:
		CurrentImg = RightPose;
		break;
	default:;
	}
	if (CurrentImg == nullptr) return;

	if (bHide) CurrentImg->SetVisibility(ESlateVisibility::Collapsed);
	if (InPath.IsValid())
	{
		CurrentImg->SetVisibility(ESlateVisibility::HitTestInvisible);
		CurrentImg->SetBrushFromTexture(Cast<UTexture2D>(InPath.TryLoad()));
	}
}

void UPlotWidget::SetWidgetVisibility(const FName& InName, ESlateVisibility InVisibility) const {
	UWidget* FindWidget = GetWidgetFromName(InName);
	if (FindWidget) {
		FindWidget->SetVisibility(InVisibility);
	}
}

void UPlotWidget::Start(UPlot* InPlot)
{
	check(InPlot);
	Plot = InPlot;
	if (BranchList_R) BranchList_R->SetVisibility(ESlateVisibility::Collapsed);
	if (LeftPose) LeftPose->SetVisibility(ESlateVisibility::Collapsed);
	if (CenterPose) CenterPose->SetVisibility(ESlateVisibility::Collapsed);
	if (RightPose) RightPose->SetVisibility(ESlateVisibility::Collapsed);
	if (TalkContent) TalkContent->SetVisibility(ESlateVisibility::Collapsed);

	OnStart();
}

void UPlotWidget::OnTalkTextChange(const FString& InText)
{
	if (TalkText)
	{
		TalkText->SetText(FText::FromString(InText));
	}
}


void UPlotWidget::ChangeEnd() const
{
	//结束
	if (PlayItem.IsValid() && PlayItem->IsPlaying())
	{
		PlayItem->End();
	}
}

void UPlotWidget::OnBtnClick()
{
	if (bChanging)
	{
		TempChangeTime = 0;
	}
	if (OnInput.IsBound())
		OnInput.Broadcast();
}

///==============================
void UPlotFightStyle::DoTalk(UPlotWidget* InParent, UPlotItem_Talk* InData)
{
	ParentWidget = InParent;
	auto& Config = InData->Config;
	if (Voice)
	{
		if (Config.Pos == 0)
		{
			Voice->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			Voice->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
	}
	if (Speaker)
	{
		Speaker->SetText(FText::FromString(Config.Speaker));
	}

	if (TalkText)
	{
		TalkText->SetText(FText::FromString(""));
	}
	if (InData->GetImg().IsValid())
	{
		auto& SoftPath = InData->GetImg();
		if (Role)
		{
			Role->SetBrushFromTexture(Cast<UTexture2D>(SoftPath.TryLoad()), true);
		}
	}
}
