#pragma once
#include "PlotCondition.h"
#include "Engine/DataTable.h"
#include "PlotEnum.generated.h"

#define  PLOT_PREFIX  (TEXT("Plot_Auto_Prefix_"))

//播放模式
UENUM(BlueprintType)
enum class EPlayMode :uint8 {
	Normal,
	Auto,
	Jump,
};

//对话前进方式
UENUM(BlueprintType)
enum class EFowardType :uint8 {
	Click,
	Time,
};

//对话框类型
UENUM(BlueprintType)
enum class EDialogueType :uint8 {
	Normal,
	Fight,
	Animation,
};

//配置条目
USTRUCT(BlueprintType)
struct PLOT_API FConfigItem
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 Pos;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Flag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Speaker;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Content;

	FConfigItem() : Pos(0)
	{
	}

	bool operator==(const FConfigItem& InConfig)
	{
		return this->Key == InConfig.Key;
	}

	FString GetFormatStr() const
	{
		return FString::Format(TEXT("{0}	{1}	{2}	{3}	{4}"), { Key,Flag,Pos,Speaker,Content });
	}
};

USTRUCT(BlueprintType)
struct PLOT_API FTalkConfig
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "立绘", AllowedClasses = "Texture2D"))
		FSoftObjectPath Img;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "字号"))
		int32 FontSize = 16;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "加粗"))
		bool bBold = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "前进方式"))
		EFowardType FowardType = EFowardType::Click;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "前进时间"))
		float Time = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "对话框样式"))
		EDialogueType DialogueType = EDialogueType::Normal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Speed", meta = (DisplayName = "默认对话播放速度"))
		float TalkPlaySpeed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Speed", meta = (DisplayName = "是否使用玩家自定义播放速度"))
		bool bUseCustomSpeed = true;

	bool operator==(const FTalkConfig& InComp) const
	{
		return FontSize == InComp.FontSize && FowardType == InComp.FowardType
			&& DialogueType == InComp.DialogueType && TalkPlaySpeed == InComp.TalkPlaySpeed
			&& bUseCustomSpeed == InComp.bUseCustomSpeed && bBold == InComp.bBold;
	}

	FTalkConfig() {}
};


USTRUCT(BlueprintType)
struct PLOT_API FPlotCameraInfo
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "镜头位置"))
		FVector Postion;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "镜头旋转"))
		FRotator Rotator;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "FOV"))
		float FOV;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "镜头焦点"))
		FVector Offset;

	//编辑器使用 朝向
	UPROPERTY(VisibleAnywhere)
		FVector Direction;

	void Set(const FPlotCameraInfo& InArgs)
	{
		Postion = InArgs.Postion;
		Rotator = InArgs.Rotator;
		FOV = InArgs.FOV;
		Offset = InArgs.Offset;
		Direction = InArgs.Direction;
	}
};

//剧情配置条目
USTRUCT(BlueprintType)
struct PLOT_API FPlotInfo : public FTableRowBase {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditDefaultsOnly, Category = "参数", meta = (DisplayName = "ID"))
		int32 ID;

	UPROPERTY(EditDefaultsOnly, Category = "参数", meta = (DisplayName = "剧情蓝图", AllowedClasses = "Plot", AllowAbstract = "0"))
		FSoftObjectPath PlotPath;
	// 配置资源比较
	bool operator==(const int32& nId)
	{
		return this->ID == nId;
	}
};

USTRUCT(BlueprintType)
struct PLOT_API FPlotName2Img : public FTableRowBase {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "名称索引"))
		FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "中文"))
		FString zh_CN;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "中文繁体"))
		FString zh_TW;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "日语"))
		FString ja_JP;

	UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "立绘资源", AllowedClasses = "Texture2D", AllowAbstract = "0"))
		FSoftObjectPath ImgPath;


	// 配置资源比较
	bool operator==(const FString& InKey)
	{
		return this->Key == InKey;
	}

	static  FPlotName2Img& Get(const FString& InKey);
};

USTRUCT(BlueprintType)
struct PLOT_API FPlotAccessoriesInfo
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "挂件模型", AllowedClasses = "SkeletalMesh"))
		FSoftObjectPath Accessorie;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Meta = (DisplayName = "插槽名称"))
		FName SokectName;

	FORCEINLINE FPlotAccessoriesInfo() {}

	FORCEINLINE explicit FPlotAccessoriesInfo(EForceInit)
	{
		// put these into the body for proper ordering with INTEL vs non-INTEL_BYTE_ORDER
		Accessorie = FSoftObjectPath();
		SokectName = FName();
	}

	FORCEINLINE FPlotAccessoriesInfo(FSoftObjectPath InAccessorie, FString InSokectName) :Accessorie(InAccessorie), SokectName(InSokectName) {}
};

USTRUCT(BlueprintType)
struct PLOT_API FPlotRoleInfo : public FTableRowBase {
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, meta = (DisplayName = "ID"))
		int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "角色模型", AllowedClasses = "SkeletalMesh"))
		FSoftObjectPath Skeletal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "挂件模型"))
		TArray<FPlotAccessoriesInfo> AccessoriesSkeletal;

	// 配置资源比较
	bool operator==(const int32& nId)
	{
		return this->ID == nId;
	}

	static  FPlotRoleInfo& Get(int32 InID);
};

//配置条目
USTRUCT(BlueprintType)
struct PLOT_API FSelectItemData
{
	virtual ~FSelectItemData() = default;
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Text;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
		TArray<UPlotCondition*>  AppearCondition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
		TArray<UPlotCondition*>  DisAppearCondition;

	UPROPERTY(Transient, BlueprintReadOnly)
		int32 Index = 0;

	//选择次数
	UPROPERTY(Transient, BlueprintReadOnly)
		int32 SelectNum;

	//是否显示
	virtual  bool Check() const
	{
		bool bAppear = true;
		int32 AppearNum = 0;
		for (auto& Each : AppearCondition) {
			if (Each == nullptr)
			{
				UE_LOG(LogTemp, Error, TEXT("出现条件配置错误==> %s"), *Text);
				continue;
			}
			AppearNum++;
			//临时处理
			if (Each->IsA(UPlotSelectNumCondition::StaticClass())) {
				if (!Cast<UPlotSelectNumCondition>(Each)->InnerCheck(SelectNum)) {
					bAppear = false;
					break;
				}
			}
			if (!Each->Check()) {
				bAppear = false;
				break;
			}
		}
		int32 DisAppearNum = 0;
		//判断消失条件
		if (bAppear && DisAppearCondition.Num() > 0) {
			bool bDisAppear = true;
			for (auto& Each : DisAppearCondition) {
				if (Each == nullptr)
				{
					UE_LOG(LogTemp, Error, TEXT("消失配置错误==> %s"), *Text);
					continue;
				}
				DisAppearNum++;
				//临时处理
				if (Each->IsA(UPlotSelectNumCondition::StaticClass())) {
					if (!Cast<UPlotSelectNumCondition>(Each)->InnerCheck(SelectNum)) {
						bDisAppear = false;
						break;
					}
				}
				//
				if (!Each->Check()) {
					bDisAppear = false;
					break;
				}
			}
			if (bDisAppear) {
				bAppear = false;
			}
		}

		//没有条件的时候 只能选择一次
		if (bAppear && AppearNum <= 0 && DisAppearNum <= 0 && SelectNum > 0) {
			bAppear = false;
		}
		return bAppear;
	}
};