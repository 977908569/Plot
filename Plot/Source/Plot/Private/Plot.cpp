#include "Plot.h"

#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"
#include "PlotItem.h"
#include "PlotItem_Branch.h"
#include "PlotItem_LoadImg.h"
#include "PlotItem_PlayEffect.h"
#include "PlotItem_RoleControl.h"
#include "PlotItem_Sequence.h"
#include "PlotTabFile.h"
#include "Blueprint/UserWidget.h"
#include "PlotItem_Talk.h"
#include "Kismet/GameplayStatics.h"
#include "PlotModule.h"
#include "PlotSaveGame.h"

UPlot::UPlot()
{
#if WITH_EDITOR
	if (CameraObj == nullptr)
	{
		CameraObj = CreateDefaultSubobject<UPlotCameraObj>(TEXT("CameraObj"));
	}
#endif
	PlotSaveGame = UPlotSaveGame::LoadPlotSaveGame();
}

void UPlot::Start()
{
#if WITH_EDITOR
	//编辑器重置
	TArray<UPlotItem*> AllItem;
	GetAllItems(AllItem);
	for (auto& Each : AllItem) {
		Each->EditorResetData();
	}
#endif
	if (RootItem && GetWidget())
	{
		GetWidget()->Start(this);
		RootItem->Start();
	}
}

void UPlot::End()
{
	Cleanup();
}

void UPlot::Cleanup()
{
	for (auto& Item : PlotSpawnRole) {
		if (Item.Value.IsValid()) {
			Item.Value->SetActorHiddenInGame(true);
			Item.Value->SetLifeSpan(0.1f);
		}
	}
	for (auto& Item : PlotSpawnParticle) {
		if (Item.Value.IsValid()) {
			Item.Value->Deactivate();
			Item.Value->SetVisibility(false);
		}
	}

	PlotSpawnParticle.Empty();
	PlotSpawnRole.Empty();
	ClearSequence();
}

void UPlot::ClearSequence() {
	for (auto& Each : PlotSequencePlayers) {
		if (Each.IsValid()) {
			Each->Destroy();
		}
	}
	PlotSequencePlayers.Empty();
}

bool UPlot::IsJump(UPlotItem* InItem)
{
	if (PlayMode == EPlayMode::Jump)
	{
		return true;
	}
#if WITH_EDITOR
	if (SimulateItem == InItem)
	{
		SimulateItem = nullptr;
		return false;
	}
	return SimulateItem != nullptr;
#endif
	return false;
}

bool UPlot::JumpTo(const FString& InKey) const
{
	auto FindItem = FindItemByKey(InKey);
	if (FindItem)
	{
		FindItem->Start();
		return true;
	}
	return false;
}

void UPlot::SaveKey(const FString& InKey) const {
	if (PlotSaveGame.IsValid()) {
		const FString FormatKey = FString::Format(TEXT("{0}.{1}"), { PlotConfig,InKey });
		PlotSaveGame->SaveKey(FormatKey);
	}
}

bool UPlot::HasKey(const FString& InKey) const {
	if (PlotSaveGame.IsValid()) {
		const FString FormatKey = FString::Format(TEXT("{0}.{1}"), { PlotConfig,InKey });
		return  PlotSaveGame->HasKey(FormatKey);
	}
	return false;
}

float UPlot::GetPlaySpeed() const
{
#if WITH_EDITOR
	if (SimulateItem.IsValid())
	{
		return MAX_PLAY_SPEED;
	}
#endif

	if (PlayMode == EPlayMode::Jump)
	{
		return MAX_PLAY_SPEED;
	}
	return 1.0f;
}

UWorld* UPlot::GetWorld() const
{
	if (Widget.IsValid())
		return Widget->GetWorld();
	return Super::GetWorld();
}

void UPlot::LoadConfig()
{
	if (PlotConfig.IsEmpty())
	{
		UE_LOG(LogPlot, Warning, TEXT("Config Is Empty %s"), *GetName());
		return;
	}
	ConfigMap.Empty();
	const FString Path = FString::Format(TEXT("dialogue/{0}.txt"), { PlotConfig });
	FPlotTabFile File;
	if (!File.Load(Path, 1)) return;
	for (auto It = File.Iterator(); It; ++It) {
		FString Key = It.GetString(TEXT("Key"));
		FConfigItem Item;
		Item.Key = Key;
		Item.Pos = It.GetInt(TEXT("Pos"));
		Item.Flag = It.GetString(TEXT("Flag"));
		Item.Speaker = It.GetString(TEXT("Speaker"));
		Item.Content = It.GetString(TEXT("zh_CN"));
		ConfigMap.Add(Key, Item);
	}
}

FConfigItem& UPlot::GetTalkConfig(FString& InKey)
{
	if (ConfigMap.Contains(InKey))
	{
		return ConfigMap[InKey];
	}
	static FConfigItem DefaultItem;
	return DefaultItem;
}


UPlotSaveItem* UPlot::FindItemByKey(const FString InKey) const {
	TArray<UPlotItem*> AllItem;
	GetAllItems(AllItem);
	for (auto& Each : AllItem) {
		const auto SaveItem = Cast<UPlotSaveItem>(Each);
		if (SaveItem && SaveItem->Config.Key == InKey) {
			return SaveItem;
		}
	}
	return nullptr;
}

bool UPlot::RemoveItem(UPlotItem* InItem)
{
	bool bRemoved = false;
	UPlotItem* Parent = InItem->GetParent();
	if (Parent)
	{
		if (Parent->RemoveChild(InItem))
		{
			bRemoved = true;
		}
	}
	else if (InItem == RootItem)
	{
		RootItem = nullptr;
		bRemoved = true;
	}
	return bRemoved;
}

void UPlot::GetAllItems(TArray<UPlotItem*>& Items) const
{
	ForEachItem([&Items](UPlotItem* Item) {
		Items.Add(Item);
		});
}

void UPlot::GetChildItems(UPlotItem* Parent, TArray<UPlotItem*>& Items)
{
	ForItemAndChildren(Parent, [&Items](UPlotItem* Item) {
		Items.Add(Item);
		});
}

void UPlot::ForEachItem(TFunctionRef<void(UPlotItem*)> Predicate) const
{
	if (RootItem)
	{
		Predicate(RootItem);
		ForItemAndChildren(RootItem, Predicate);
	}
}

void UPlot::ForItemAndChildren(UPlotItem* Item, TFunctionRef<void(UPlotItem*)> Predicate)
{
	for (int32 ChildIndex = 0; ChildIndex < Item->GetChildrenCount(); ChildIndex++)
	{
		if (UPlotItem* ChildWidget = Item->GetChildAt(ChildIndex))
		{
			Predicate(ChildWidget);
			ForItemAndChildren(ChildWidget, Predicate);
		}
	}
}

UPlotItem* UPlot::ConstructItem(const TSubclassOf<UPlotItem> ItemClass, const FName ItemName)
{
	const auto NewObj = NewObject<UPlotItem>(this, ItemClass, ItemName, RF_Transactional);
	return NewObj;
}

int32 UPlot::GetAllClassNum(UClass* InClass) const
{
	int32 Num = 0;
	TArray<UPlotItem*> AllItems;
	GetAllItems(AllItems);
	for (auto& Item : AllItems)
	{
		if (Item->IsA(InClass))
		{
			Num++;
		}
	}
	return  Num;
}


//==================EDITOR==============================
#if WITH_EDITOR
void UPlot::StartSimulate(UPlotItem* InItem)
{
	Cleanup();
	SimulateItem = InItem;
	Start();
}

//创建选择条目
#define Create_Item(ClassType,FindItem,Each,Flag,Split)\
	TArray<FString> ChildInfo;\
	Flag.ParseIntoArray(ChildInfo, TEXT("-"));\
	FString ChildKey = FString::Format(TEXT("{0}-{1}"), {Split, ChildInfo[1] });\
	UPlotSaveItem* Child = RootItem->FindChildByKey(ChildKey);\
	if (Child == nullptr)\
	{\
		const auto TempChild = Cast<ClassType>(ConstructItem(ClassType::StaticClass()));\
		TempChild->bDefaultAdd = false;\
		Child = TempChild;\
		FConfigItem ChildConfig;\
		ChildConfig.Key = ChildKey;\
		ChildConfig.Flag = ChildKey;\
		Child->UpdateConfig(ChildConfig);\
		RootItem->InsertChildAt(RootItem->GetChildrenCount(), Child);\
	}\
	if (ChildInfo.Num() == 3)\
	{\
		Cast<ClassType>(Child)->AddSelect(Each);\
	}\
	else if (ChildInfo.Num() == 4)\
	{\
		const FString ChildItemFlag = FString::Format(TEXT("{0}-{1}-{2}"), { Split,ChildInfo[1],ChildInfo[2] });\
		UPlotSaveItem* ChildItem = Cast<ClassType>(Child)->GetItemByFlag(ChildItemFlag);\
		if (ChildItem)\
		{\
			auto TempItem = Cast<UPlotItem_Talk>(ConstructItem(UPlotItem_Talk::StaticClass()));\
			TempItem->TalkConfig = Cast<UPlotItem_Root>(RootItem)->TalkConfig;\
			FindItem = TempItem;\
			FindItem->UpdateConfig(Each);\
			ChildItem->InsertChildAt(ChildItem->GetChildrenCount(), FindItem);\
		}\
	}\


void UPlot::Reset()
{
	LoadConfig();
	//Add setting background entry
	if (BGPath.IsValid() && RootItem->Childs.Num() <= 0)
	{
		UPlotItem_LoadImg* NewLoadItem = Cast<UPlotItem_LoadImg>(ConstructItem(UPlotItem_LoadImg::StaticClass()));
		if (NewLoadItem)
		{
			NewLoadItem->ImgPath = BGPath;
			RootItem->AddChild(NewLoadItem);
		}
	}
	//Modify configuration items
	for (TPair<FString, FConfigItem>& Element : ConfigMap)
	{
		FConfigItem& Each = Element.Value;
		UPlotSaveItem* FindItem = FindItemByKey(Each.Key);
		if (FindItem) {
			FindItem->UpdateConfig(Each);
		}
		else {
			FString Flag = Each.Flag;
			if (Flag.IsEmpty()) {
				auto TempItem = Cast<UPlotItem_Talk>(ConstructItem(UPlotItem_Talk::StaticClass()));
				TempItem->TalkConfig = Cast<UPlotItem_Root>(RootItem)->TalkConfig;
				FindItem = TempItem;
				FindItem->UpdateConfig(Each);
				RootItem->InsertChildAt(RootItem->GetChildrenCount(), FindItem);
			}
			else {
				if (Flag.Contains(TEXT("b-"))) {

					Create_Item(UPlotItem_Branch, FindItem, Each, Flag, TEXT("b"))
				}
				else if (Flag.Contains(TEXT("e-"))) {

					Create_Item(UPlotItem_Sequence, FindItem, Each, Flag, TEXT("e"))
				}
			}
		}
	}
	BroadcastChanged();
}

void UPlot::Save2Txt()
{
	LoadConfig();
	TArray<FConfigItem> AllConfig;
	ConfigMap.GenerateValueArray(AllConfig);
	TArray<FString> StrArray;
	TArray<UPlotItem*> AllItem;
	GetAllItems(AllItem);
	const static  TArray<FString> Title = { TEXT("字符串索引	标记	立绘位置	说话人	中文简体	中文繁体	日语") ,TEXT("Key	Flag	Pos	Speaker	zh_CN	zh_TW	ja_JP") };
	StrArray.Append(Title);
	UPlotSaveItem* LastItem = nullptr;
	for (auto& Item : AllItem)
	{
		//Filter
		if (!(Item->IsA(UPlotSaveItem::StaticClass())
			|| Item->IsA(UPlotItem_Branch::StaticClass())
			|| Item->IsA(UPlotItem_Sequence::StaticClass())))
		{
			continue;
		}
		UPlotSaveItem* SaveItem = Cast<UPlotSaveItem>(Item);
		bool bFind = false;
		for (auto& Each : AllConfig)
		{
			if (Each.Key == SaveItem->Config.Key)
			{
				bFind = true;
				Each = SaveItem->Config;
				break;
			}
		}
		if (!bFind)
		{
			if (LastItem == nullptr)
			{
				AllConfig.Insert(SaveItem->Config, 0);
			}
			else
			{
				const int32 InsertIndex = AllConfig.IndexOfByPredicate([&](const FConfigItem& Element) -> bool
					{
						return LastItem->Config.Key == Element.Key;
					});
				AllConfig.Insert(SaveItem->Config, InsertIndex + 1);
			}
		}
		LastItem = SaveItem;
	}

	for (auto& Item : AllConfig)
	{
		StrArray.Add(Item.GetFormatStr());
	}
	const FString FilePath = FPaths::ProjectContentDir() / TEXT("Settings/dialogue/") + PlotConfig + TEXT(".txt");
	FFileHelper::SaveStringArrayToFile(StrArray, *FilePath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM);
}

void UPlot::SetTalkConfigByRoot() const
{
	const FTalkConfig TalkConfig = Cast<UPlotItem_Root>(RootItem)->TalkConfig;
	TArray<UPlotItem*> AllItems;
	GetAllItems(AllItems);
	for (auto& Item : AllItems)
	{
		if (auto Each = Cast<UPlotItem_Talk>(Item))
		{
			Each->TalkConfig = TalkConfig;
		}
	}
}
#endif

APlotCharacter::APlotCharacter()
{
	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->SetupAttachment(RootComponent);
	CameraArm->bDoCollisionTest = true;
	CameraArm->bUsePawnControlRotation = true;
	CameraArm->bInheritPitch = true;
	CameraArm->bInheritYaw = true;
	CameraArm->bInheritRoll = false;
	CameraArm->bEnableCameraLag = false;
	CameraArm->bEnableCameraRotationLag = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);
	Camera->SetRelativeLocation(FVector::ZeroVector);
	Camera->bUsePawnControlRotation = false;
}

void APlotCharacter::BeginPlay() {
	Super::BeginPlay();
	auto CameraMgr = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if (CameraMgr) {
		CameraMgr->SetViewTarget(this);
	}
}

void APlotCharacter::SetCameraArgs(const FPlotCameraInfo InArgs) const
{
	Camera->FieldOfView = InArgs.FOV;
	Camera->SetWorldLocation(InArgs.Postion);
	Camera->SetWorldRotation(InArgs.Rotator);
}

FPlotCameraInfo& APlotCharacter::GetCameraArgs() const
{
	static FPlotCameraInfo Info;
	Info.FOV = Camera->FieldOfView;
	Info.Postion = Camera->GetComponentLocation();
	Info.Rotator = Camera->GetComponentRotation();
	return Info;
}

