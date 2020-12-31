// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_Talk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_Talk() {}
// Cross Module References
	PLOT_API UFunction* Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Talk();
	PLOT_API UEnum* Z_Construct_UEnum_Plot_ETalkState();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Talk_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FTalkConfig();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotName2Img();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics
	{
		struct PlotItem_Talk_eventOnTalkTextChange_Parms
		{
			FString TalkText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TalkText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::NewProp_TalkText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::NewProp_TalkText = { "TalkText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_Talk_eventOnTalkTextChange_Parms, TalkText), METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::NewProp_TalkText_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::NewProp_TalkText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::NewProp_TalkText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Talk, nullptr, "OnTalkTextChange__DelegateSignature", nullptr, nullptr, sizeof(PlotItem_Talk_eventOnTalkTextChange_Parms), Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETalkState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Plot_ETalkState, Z_Construct_UPackage__Script_Plot(), TEXT("ETalkState"));
		}
		return Singleton;
	}
	template<> PLOT_API UEnum* StaticEnum<ETalkState>()
	{
		return ETalkState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETalkState(ETalkState_StaticEnum, TEXT("/Script/Plot"), TEXT("ETalkState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Plot_ETalkState_Hash() { return 1996563237U; }
	UEnum* Z_Construct_UEnum_Plot_ETalkState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETalkState"), 0, Get_Z_Construct_UEnum_Plot_ETalkState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETalkState::Noraml", (int64)ETalkState::Noraml },
				{ "ETalkState::Talk", (int64)ETalkState::Talk },
				{ "ETalkState::CountDown", (int64)ETalkState::CountDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CountDown.Name", "ETalkState::CountDown" },
				{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
				{ "Noraml.Name", "ETalkState::Noraml" },
				{ "Talk.Name", "ETalkState::Talk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Plot,
				nullptr,
				"ETalkState",
				"ETalkState",
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
	DEFINE_FUNCTION(UPlotItem_Talk::execOnInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem_Talk::execGetImg)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=P_THIS->GetImg();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem_Talk::execGetContentStr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContentStr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem_Talk::execGetSpeakerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSpeakerName();
		P_NATIVE_END;
	}
	void UPlotItem_Talk::StaticRegisterNativesUPlotItem_Talk()
	{
		UClass* Class = UPlotItem_Talk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContentStr", &UPlotItem_Talk::execGetContentStr },
			{ "GetImg", &UPlotItem_Talk::execGetImg },
			{ "GetSpeakerName", &UPlotItem_Talk::execGetSpeakerName },
			{ "OnInput", &UPlotItem_Talk::execOnInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics
	{
		struct PlotItem_Talk_eventGetContentStr_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_Talk_eventGetContentStr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Talk, nullptr, "GetContentStr", nullptr, nullptr, sizeof(PlotItem_Talk_eventGetContentStr_Parms), Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Talk_GetContentStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Talk_GetContentStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics
	{
		struct PlotItem_Talk_eventGetImg_Parms
		{
			FSoftObjectPath ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_Talk_eventGetImg_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Talk, nullptr, "GetImg", nullptr, nullptr, sizeof(PlotItem_Talk_eventGetImg_Parms), Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Talk_GetImg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Talk_GetImg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics
	{
		struct PlotItem_Talk_eventGetSpeakerName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_Talk_eventGetSpeakerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Talk, nullptr, "GetSpeakerName", nullptr, nullptr, sizeof(PlotItem_Talk_eventGetSpeakerName_Parms), Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_Talk_OnInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Talk_OnInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Talk_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Talk, nullptr, "OnInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Talk_OnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Talk_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Talk_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Talk_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotItem_Talk_NoRegister()
	{
		return UPlotItem_Talk::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Talk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TalkConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTalkTextChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTalkTextChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name2Img_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name2Img;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Talk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotSaveItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotItem_Talk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotItem_Talk_GetContentStr, "GetContentStr" }, // 1082722249
		{ &Z_Construct_UFunction_UPlotItem_Talk_GetImg, "GetImg" }, // 1692648497
		{ &Z_Construct_UFunction_UPlotItem_Talk_GetSpeakerName, "GetSpeakerName" }, // 2542116520
		{ &Z_Construct_UFunction_UPlotItem_Talk_OnInput, "OnInput" }, // 1415904347
		{ &Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature, "OnTalkTextChange__DelegateSignature" }, // 3139765191
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Talk_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d" },
		{ "IncludePath", "PlotItem_Talk.h" },
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_TalkConfig_MetaData[] = {
		{ "Category", "PlotItem_Talk" },
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_TalkConfig = { "TalkConfig", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Talk, TalkConfig), Z_Construct_UScriptStruct_FTalkConfig, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_TalkConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_TalkConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_OnTalkTextChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_OnTalkTextChange = { "OnTalkTextChange", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Talk, OnTalkTextChange), Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_OnTalkTextChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_OnTalkTextChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_Name2Img_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_Name2Img = { "Name2Img", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Talk, Name2Img), Z_Construct_UScriptStruct_FPlotName2Img, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_Name2Img_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_Name2Img_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_Talk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_TalkConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_OnTalkTextChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Talk_Statics::NewProp_Name2Img,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Talk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Talk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Talk_Statics::ClassParams = {
		&UPlotItem_Talk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotItem_Talk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Talk_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Talk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Talk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Talk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Talk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Talk, 275214137);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Talk>()
	{
		return UPlotItem_Talk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Talk(Z_Construct_UClass_UPlotItem_Talk, &UPlotItem_Talk::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Talk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Talk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
