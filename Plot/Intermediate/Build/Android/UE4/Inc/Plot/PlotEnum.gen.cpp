// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotEnum() {}
// Cross Module References
	PLOT_API UEnum* Z_Construct_UEnum_Plot_EDialogueType();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UEnum* Z_Construct_UEnum_Plot_EFowardType();
	PLOT_API UEnum* Z_Construct_UEnum_Plot_EPlayMode();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectItemData();
	PLOT_API UClass* Z_Construct_UClass_UPlotCondition_NoRegister();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotRoleInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotAccessoriesInfo();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotName2Img();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotInfo();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotCameraInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FTalkConfig();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigItem();
// End Cross Module References
	static UEnum* EDialogueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Plot_EDialogueType, Z_Construct_UPackage__Script_Plot(), TEXT("EDialogueType"));
		}
		return Singleton;
	}
	template<> PLOT_API UEnum* StaticEnum<EDialogueType>()
	{
		return EDialogueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDialogueType(EDialogueType_StaticEnum, TEXT("/Script/Plot"), TEXT("EDialogueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Plot_EDialogueType_Hash() { return 614215352U; }
	UEnum* Z_Construct_UEnum_Plot_EDialogueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDialogueType"), 0, Get_Z_Construct_UEnum_Plot_EDialogueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDialogueType::Normal", (int64)EDialogueType::Normal },
				{ "EDialogueType::Fight", (int64)EDialogueType::Fight },
				{ "EDialogueType::Animation", (int64)EDialogueType::Animation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.Name", "EDialogueType::Animation" },
				{ "BlueprintType", "true" },
				{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86\xe7\xb1\xbb\xe5\x9e\x8b\n" },
				{ "Fight.Name", "EDialogueType::Fight" },
				{ "ModuleRelativePath", "Public/PlotEnum.h" },
				{ "Normal.Name", "EDialogueType::Normal" },
				{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86\xe7\xb1\xbb\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Plot,
				nullptr,
				"EDialogueType",
				"EDialogueType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFowardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Plot_EFowardType, Z_Construct_UPackage__Script_Plot(), TEXT("EFowardType"));
		}
		return Singleton;
	}
	template<> PLOT_API UEnum* StaticEnum<EFowardType>()
	{
		return EFowardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFowardType(EFowardType_StaticEnum, TEXT("/Script/Plot"), TEXT("EFowardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Plot_EFowardType_Hash() { return 1494828430U; }
	UEnum* Z_Construct_UEnum_Plot_EFowardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFowardType"), 0, Get_Z_Construct_UEnum_Plot_EFowardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFowardType::Click", (int64)EFowardType::Click },
				{ "EFowardType::Time", (int64)EFowardType::Time },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Click.Name", "EFowardType::Click" },
				{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x89\x8d\xe8\xbf\x9b\xe6\x96\xb9\xe5\xbc\x8f\n" },
				{ "ModuleRelativePath", "Public/PlotEnum.h" },
				{ "Time.Name", "EFowardType::Time" },
				{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x89\x8d\xe8\xbf\x9b\xe6\x96\xb9\xe5\xbc\x8f" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Plot,
				nullptr,
				"EFowardType",
				"EFowardType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Plot_EPlayMode, Z_Construct_UPackage__Script_Plot(), TEXT("EPlayMode"));
		}
		return Singleton;
	}
	template<> PLOT_API UEnum* StaticEnum<EPlayMode>()
	{
		return EPlayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayMode(EPlayMode_StaticEnum, TEXT("/Script/Plot"), TEXT("EPlayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Plot_EPlayMode_Hash() { return 2079386249U; }
	UEnum* Z_Construct_UEnum_Plot_EPlayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayMode"), 0, Get_Z_Construct_UEnum_Plot_EPlayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayMode::Normal", (int64)EPlayMode::Normal },
				{ "EPlayMode::Auto", (int64)EPlayMode::Auto },
				{ "EPlayMode::Jump", (int64)EPlayMode::Jump },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "EPlayMode::Auto" },
				{ "BlueprintType", "true" },
				{ "Comment", "//\xe6\x92\xad\xe6\x94\xbe\xe6\xa8\xa1\xe5\xbc\x8f\n" },
				{ "Jump.Name", "EPlayMode::Jump" },
				{ "ModuleRelativePath", "Public/PlotEnum.h" },
				{ "Normal.Name", "EPlayMode::Normal" },
				{ "ToolTip", "\xe6\x92\xad\xe6\x94\xbe\xe6\xa8\xa1\xe5\xbc\x8f" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Plot,
				nullptr,
				"EPlayMode",
				"EPlayMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSelectItemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FSelectItemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectItemData, Z_Construct_UPackage__Script_Plot(), TEXT("SelectItemData"), sizeof(FSelectItemData), Get_Z_Construct_UScriptStruct_FSelectItemData_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FSelectItemData>()
{
	return FSelectItemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSelectItemData(FSelectItemData::StaticStruct, TEXT("/Script/Plot"), TEXT("SelectItemData"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFSelectItemData
{
	FScriptStruct_Plot_StaticRegisterNativesFSelectItemData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SelectItemData")),new UScriptStruct::TCppStructOps<FSelectItemData>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFSelectItemData;
	struct Z_Construct_UScriptStruct_FSelectItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppearCondition_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AppearCondition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppearCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppearCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisAppearCondition_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisAppearCondition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisAppearCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisAppearCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe6\x9d\xa1\xe7\x9b\xae\n" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe6\x9d\xa1\xe7\x9b\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectItemData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectItemData, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_Inner_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_Inner = { "AppearCondition", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotCondition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition = { "AppearCondition", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectItemData, AppearCondition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_Inner_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_Inner = { "DisAppearCondition", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotCondition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition = { "DisAppearCondition", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectItemData, DisAppearCondition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectItemData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_SelectNum_MetaData[] = {
		{ "Category", "SelectItemData" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe6\xac\xa1\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe6\xac\xa1\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_SelectNum = { "SelectNum", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectItemData, SelectNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_SelectNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_SelectNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_AppearCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_DisAppearCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectItemData_Statics::NewProp_SelectNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		nullptr,
		&NewStructOps,
		"SelectItemData",
		sizeof(FSelectItemData),
		alignof(FSelectItemData),
		Z_Construct_UScriptStruct_FSelectItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectItemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSelectItemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SelectItemData"), sizeof(FSelectItemData), Get_Z_Construct_UScriptStruct_FSelectItemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSelectItemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSelectItemData_Hash() { return 2913841981U; }

static_assert(std::is_polymorphic<FPlotRoleInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlotRoleInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlotRoleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FPlotRoleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotRoleInfo, Z_Construct_UPackage__Script_Plot(), TEXT("PlotRoleInfo"), sizeof(FPlotRoleInfo), Get_Z_Construct_UScriptStruct_FPlotRoleInfo_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FPlotRoleInfo>()
{
	return FPlotRoleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotRoleInfo(FPlotRoleInfo::StaticStruct, TEXT("/Script/Plot"), TEXT("PlotRoleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFPlotRoleInfo
{
	FScriptStruct_Plot_StaticRegisterNativesFPlotRoleInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotRoleInfo")),new UScriptStruct::TCppStructOps<FPlotRoleInfo>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFPlotRoleInfo;
	struct Z_Construct_UScriptStruct_FPlotRoleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeletal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeletal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccessoriesSkeletal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessoriesSkeletal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AccessoriesSkeletal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotRoleInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "PlotRoleInfo" },
		{ "DisplayName", "ID" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_Skeletal_MetaData[] = {
		{ "AllowedClasses", "SkeletalMesh" },
		{ "Category", "PlotRoleInfo" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe6\xa8\xa1\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_Skeletal = { "Skeletal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleInfo, Skeletal), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_Skeletal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_Skeletal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal_Inner = { "AccessoriesSkeletal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlotAccessoriesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal_MetaData[] = {
		{ "Category", "PlotRoleInfo" },
		{ "DisplayName", "\xe6\x8c\x82\xe4\xbb\xb6\xe6\xa8\xa1\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal = { "AccessoriesSkeletal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleInfo, AccessoriesSkeletal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_Skeletal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::NewProp_AccessoriesSkeletal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlotRoleInfo",
		sizeof(FPlotRoleInfo),
		alignof(FPlotRoleInfo),
		Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotRoleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotRoleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotRoleInfo"), sizeof(FPlotRoleInfo), Get_Z_Construct_UScriptStruct_FPlotRoleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotRoleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotRoleInfo_Hash() { return 652358744U; }
class UScriptStruct* FPlotAccessoriesInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotAccessoriesInfo, Z_Construct_UPackage__Script_Plot(), TEXT("PlotAccessoriesInfo"), sizeof(FPlotAccessoriesInfo), Get_Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FPlotAccessoriesInfo>()
{
	return FPlotAccessoriesInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotAccessoriesInfo(FPlotAccessoriesInfo::StaticStruct, TEXT("/Script/Plot"), TEXT("PlotAccessoriesInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFPlotAccessoriesInfo
{
	FScriptStruct_Plot_StaticRegisterNativesFPlotAccessoriesInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotAccessoriesInfo")),new UScriptStruct::TCppStructOps<FPlotAccessoriesInfo>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFPlotAccessoriesInfo;
	struct Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accessorie_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Accessorie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SokectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SokectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotAccessoriesInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_Accessorie_MetaData[] = {
		{ "AllowedClasses", "SkeletalMesh" },
		{ "Category", "PlotAccessoriesInfo" },
		{ "DisplayName", "\xe6\x8c\x82\xe4\xbb\xb6\xe6\xa8\xa1\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_Accessorie = { "Accessorie", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotAccessoriesInfo, Accessorie), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_Accessorie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_Accessorie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_SokectName_MetaData[] = {
		{ "Category", "PlotAccessoriesInfo" },
		{ "DisplayName", "\xe6\x8f\x92\xe6\xa7\xbd\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_SokectName = { "SokectName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotAccessoriesInfo, SokectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_SokectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_SokectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_Accessorie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::NewProp_SokectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		nullptr,
		&NewStructOps,
		"PlotAccessoriesInfo",
		sizeof(FPlotAccessoriesInfo),
		alignof(FPlotAccessoriesInfo),
		Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotAccessoriesInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotAccessoriesInfo"), sizeof(FPlotAccessoriesInfo), Get_Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Hash() { return 3163564417U; }

static_assert(std::is_polymorphic<FPlotName2Img>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlotName2Img cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlotName2Img::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FPlotName2Img_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotName2Img, Z_Construct_UPackage__Script_Plot(), TEXT("PlotName2Img"), sizeof(FPlotName2Img), Get_Z_Construct_UScriptStruct_FPlotName2Img_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FPlotName2Img>()
{
	return FPlotName2Img::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotName2Img(FPlotName2Img::StaticStruct, TEXT("/Script/Plot"), TEXT("PlotName2Img"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFPlotName2Img
{
	FScriptStruct_Plot_StaticRegisterNativesFPlotName2Img()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotName2Img")),new UScriptStruct::TCppStructOps<FPlotName2Img>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFPlotName2Img;
	struct Z_Construct_UScriptStruct_FPlotName2Img_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zh_CN_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_zh_CN;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zh_TW_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_zh_TW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ja_JP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ja_JP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImgPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImgPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotName2Img_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotName2Img>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "PlotName2Img" },
		{ "DisplayName", "\xe5\x90\x8d\xe7\xa7\xb0\xe7\xb4\xa2\xe5\xbc\x95" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotName2Img, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_CN_MetaData[] = {
		{ "Category", "PlotName2Img" },
		{ "DisplayName", "\xe4\xb8\xad\xe6\x96\x87" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_CN = { "zh_CN", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotName2Img, zh_CN), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_CN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_CN_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_TW_MetaData[] = {
		{ "Category", "PlotName2Img" },
		{ "DisplayName", "\xe4\xb8\xad\xe6\x96\x87\xe7\xb9\x81\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_TW = { "zh_TW", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotName2Img, zh_TW), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_TW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_TW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ja_JP_MetaData[] = {
		{ "Category", "PlotName2Img" },
		{ "DisplayName", "\xe6\x97\xa5\xe8\xaf\xad" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ja_JP = { "ja_JP", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotName2Img, ja_JP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ja_JP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ja_JP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ImgPath_MetaData[] = {
		{ "AllowAbstract", "0" },
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "PlotName2Img" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98\xe8\xb5\x84\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ImgPath = { "ImgPath", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotName2Img, ImgPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ImgPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ImgPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotName2Img_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_CN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_zh_TW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ja_JP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotName2Img_Statics::NewProp_ImgPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotName2Img_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlotName2Img",
		sizeof(FPlotName2Img),
		alignof(FPlotName2Img),
		Z_Construct_UScriptStruct_FPlotName2Img_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotName2Img_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotName2Img_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotName2Img()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotName2Img_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotName2Img"), sizeof(FPlotName2Img), Get_Z_Construct_UScriptStruct_FPlotName2Img_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotName2Img_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotName2Img_Hash() { return 2469565382U; }

static_assert(std::is_polymorphic<FPlotInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlotInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlotInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FPlotInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotInfo, Z_Construct_UPackage__Script_Plot(), TEXT("PlotInfo"), sizeof(FPlotInfo), Get_Z_Construct_UScriptStruct_FPlotInfo_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FPlotInfo>()
{
	return FPlotInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotInfo(FPlotInfo::StaticStruct, TEXT("/Script/Plot"), TEXT("PlotInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFPlotInfo
{
	FScriptStruct_Plot_StaticRegisterNativesFPlotInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotInfo")),new UScriptStruct::TCppStructOps<FPlotInfo>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFPlotInfo;
	struct Z_Construct_UScriptStruct_FPlotInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlotPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\x89\xa7\xe6\x83\x85\xe9\x85\x8d\xe7\xbd\xae\xe6\x9d\xa1\xe7\x9b\xae\n" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
		{ "ToolTip", "\xe5\x89\xa7\xe6\x83\x85\xe9\x85\x8d\xe7\xbd\xae\xe6\x9d\xa1\xe7\x9b\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "\xe5\x8f\x82\xe6\x95\xb0" },
		{ "DisplayName", "ID" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_PlotPath_MetaData[] = {
		{ "AllowAbstract", "0" },
		{ "AllowedClasses", "Plot" },
		{ "Category", "\xe5\x8f\x82\xe6\x95\xb0" },
		{ "DisplayName", "\xe5\x89\xa7\xe6\x83\x85\xe8\x93\x9d\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_PlotPath = { "PlotPath", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotInfo, PlotPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_PlotPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_PlotPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotInfo_Statics::NewProp_PlotPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlotInfo",
		sizeof(FPlotInfo),
		alignof(FPlotInfo),
		Z_Construct_UScriptStruct_FPlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotInfo"), sizeof(FPlotInfo), Get_Z_Construct_UScriptStruct_FPlotInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotInfo_Hash() { return 3276289002U; }
class UScriptStruct* FPlotCameraInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FPlotCameraInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotCameraInfo, Z_Construct_UPackage__Script_Plot(), TEXT("PlotCameraInfo"), sizeof(FPlotCameraInfo), Get_Z_Construct_UScriptStruct_FPlotCameraInfo_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FPlotCameraInfo>()
{
	return FPlotCameraInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotCameraInfo(FPlotCameraInfo::StaticStruct, TEXT("/Script/Plot"), TEXT("PlotCameraInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFPlotCameraInfo
{
	FScriptStruct_Plot_StaticRegisterNativesFPlotCameraInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotCameraInfo")),new UScriptStruct::TCppStructOps<FPlotCameraInfo>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFPlotCameraInfo;
	struct Z_Construct_UScriptStruct_FPlotCameraInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Postion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Postion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotCameraInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Postion_MetaData[] = {
		{ "Category", "PlotCameraInfo" },
		{ "DisplayName", "\xe9\x95\x9c\xe5\xa4\xb4\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Postion = { "Postion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotCameraInfo, Postion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Postion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Postion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "PlotCameraInfo" },
		{ "DisplayName", "\xe9\x95\x9c\xe5\xa4\xb4\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotCameraInfo, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "PlotCameraInfo" },
		{ "DisplayName", "FOV" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotCameraInfo, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "PlotCameraInfo" },
		{ "DisplayName", "\xe9\x95\x9c\xe5\xa4\xb4\xe7\x84\xa6\xe7\x82\xb9" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotCameraInfo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "PlotCameraInfo" },
		{ "Comment", "//\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xbd\xbf\xe7\x94\xa8 \xe6\x9c\x9d\xe5\x90\x91\n" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xbd\xbf\xe7\x94\xa8 \xe6\x9c\x9d\xe5\x90\x91" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotCameraInfo, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Postion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::NewProp_Direction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		nullptr,
		&NewStructOps,
		"PlotCameraInfo",
		sizeof(FPlotCameraInfo),
		alignof(FPlotCameraInfo),
		Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotCameraInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotCameraInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotCameraInfo"), sizeof(FPlotCameraInfo), Get_Z_Construct_UScriptStruct_FPlotCameraInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotCameraInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotCameraInfo_Hash() { return 2305701387U; }
class UScriptStruct* FTalkConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FTalkConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTalkConfig, Z_Construct_UPackage__Script_Plot(), TEXT("TalkConfig"), sizeof(FTalkConfig), Get_Z_Construct_UScriptStruct_FTalkConfig_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FTalkConfig>()
{
	return FTalkConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTalkConfig(FTalkConfig::StaticStruct, TEXT("/Script/Plot"), TEXT("TalkConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFTalkConfig
{
	FScriptStruct_Plot_StaticRegisterNativesFTalkConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TalkConfig")),new UScriptStruct::TCppStructOps<FTalkConfig>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFTalkConfig;
	struct Z_Construct_UScriptStruct_FTalkConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Img_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Img;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBold_MetaData[];
#endif
		static void NewProp_bBold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBold;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FowardType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FowardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FowardType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkPlaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TalkPlaySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomSpeed_MetaData[];
#endif
		static void NewProp_bUseCustomSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTalkConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTalkConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Img_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "TalkConfig" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Img = { "Img", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkConfig, Img), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Img_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Img_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "TalkConfig" },
		{ "DisplayName", "\xe5\xad\x97\xe5\x8f\xb7" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkConfig, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold_MetaData[] = {
		{ "Category", "TalkConfig" },
		{ "DisplayName", "\xe5\x8a\xa0\xe7\xb2\x97" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold_SetBit(void* Obj)
	{
		((FTalkConfig*)Obj)->bBold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold = { "bBold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkConfig), &Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType_MetaData[] = {
		{ "Category", "TalkConfig" },
		{ "DisplayName", "\xe5\x89\x8d\xe8\xbf\x9b\xe6\x96\xb9\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType = { "FowardType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkConfig, FowardType), Z_Construct_UEnum_Plot_EFowardType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "TalkConfig" },
		{ "DisplayName", "\xe5\x89\x8d\xe8\xbf\x9b\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkConfig, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType_MetaData[] = {
		{ "Category", "TalkConfig" },
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86\xe6\xa0\xb7\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType = { "DialogueType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkConfig, DialogueType), Z_Construct_UEnum_Plot_EDialogueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_TalkPlaySpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "DisplayName", "\xe9\xbb\x98\xe8\xae\xa4\xe5\xaf\xb9\xe8\xaf\x9d\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_TalkPlaySpeed = { "TalkPlaySpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTalkConfig, TalkPlaySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_TalkPlaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_TalkPlaySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x8e\xa9\xe5\xae\xb6\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed_SetBit(void* Obj)
	{
		((FTalkConfig*)Obj)->bUseCustomSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed = { "bUseCustomSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTalkConfig), &Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTalkConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Img,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bBold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_FowardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_DialogueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_TalkPlaySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTalkConfig_Statics::NewProp_bUseCustomSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTalkConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		nullptr,
		&NewStructOps,
		"TalkConfig",
		sizeof(FTalkConfig),
		alignof(FTalkConfig),
		Z_Construct_UScriptStruct_FTalkConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTalkConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTalkConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTalkConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTalkConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TalkConfig"), sizeof(FTalkConfig), Get_Z_Construct_UScriptStruct_FTalkConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTalkConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTalkConfig_Hash() { return 1553217194U; }
class UScriptStruct* FConfigItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FConfigItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigItem, Z_Construct_UPackage__Script_Plot(), TEXT("ConfigItem"), sizeof(FConfigItem), Get_Z_Construct_UScriptStruct_FConfigItem_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FConfigItem>()
{
	return FConfigItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfigItem(FConfigItem::StaticStruct, TEXT("/Script/Plot"), TEXT("ConfigItem"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFConfigItem
{
	FScriptStruct_Plot_StaticRegisterNativesFConfigItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConfigItem")),new UScriptStruct::TCppStructOps<FConfigItem>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFConfigItem;
	struct Z_Construct_UScriptStruct_FConfigItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe6\x9d\xa1\xe7\x9b\xae\n" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe6\x9d\xa1\xe7\x9b\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "ConfigItem" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfigItem, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "ConfigItem" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfigItem, Pos), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Flag_MetaData[] = {
		{ "Category", "ConfigItem" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfigItem, Flag), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "ConfigItem" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfigItem, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "ConfigItem" },
		{ "ModuleRelativePath", "Public/PlotEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConfigItem, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigItem_Statics::NewProp_Content,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		nullptr,
		&NewStructOps,
		"ConfigItem",
		sizeof(FConfigItem),
		alignof(FConfigItem),
		Z_Construct_UScriptStruct_FConfigItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfigItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfigItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConfigItem"), sizeof(FConfigItem), Get_Z_Construct_UScriptStruct_FConfigItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfigItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfigItem_Hash() { return 2270377820U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
