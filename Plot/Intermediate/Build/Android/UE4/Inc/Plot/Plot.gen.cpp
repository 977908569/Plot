// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/Plot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlot() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlot_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UEnum* Z_Construct_UEnum_Plot_EPlayMode();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_NoRegister();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigItem();
	PLOT_API UClass* Z_Construct_UClass_UPlotWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	PLOT_API UClass* Z_Construct_UClass_UPlotCameraObj_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotCameraObj();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotCameraInfo();
	PLOT_API UClass* Z_Construct_UClass_APlotCharacter_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_APlotCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlot::execGetTalkConfig)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConfigItem*)Z_Param__Result=P_THIS->GetTalkConfig(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execGetPlaySpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaySpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execSetPlayMode)
	{
		P_GET_ENUM(EPlayMode,Z_Param_InPlayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayMode(EPlayMode(Z_Param_InPlayMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execGetPlayMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayMode*)Z_Param__Result=P_THIS->GetPlayMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execSetWidget)
	{
		P_GET_OBJECT(UPlotWidget,Z_Param_InWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidget(Z_Param_InWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execGetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotWidget**)Z_Param__Result=P_THIS->GetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execGetRootItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotItem**)Z_Param__Result=P_THIS->GetRootItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execHasKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execSaveKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execJumpTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JumpTo(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execIsJump)
	{
		P_GET_OBJECT(UPlotItem,Z_Param_InItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJump(Z_Param_InItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execClearSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execCleanup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cleanup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlot::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UPlot::StaticRegisterNativesUPlot()
	{
		UClass* Class = UPlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cleanup", &UPlot::execCleanup },
			{ "ClearSequence", &UPlot::execClearSequence },
			{ "End", &UPlot::execEnd },
			{ "GetPlayMode", &UPlot::execGetPlayMode },
			{ "GetPlaySpeed", &UPlot::execGetPlaySpeed },
			{ "GetRootItem", &UPlot::execGetRootItem },
			{ "GetTalkConfig", &UPlot::execGetTalkConfig },
			{ "GetWidget", &UPlot::execGetWidget },
			{ "GetWorld", &UPlot::execGetWorld },
			{ "HasKey", &UPlot::execHasKey },
			{ "IsJump", &UPlot::execIsJump },
			{ "JumpTo", &UPlot::execJumpTo },
			{ "SaveKey", &UPlot::execSaveKey },
			{ "SetPlayMode", &UPlot::execSetPlayMode },
			{ "SetWidget", &UPlot::execSetWidget },
			{ "Start", &UPlot::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlot_Cleanup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_Cleanup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_Cleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "Cleanup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_Cleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_Cleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_Cleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_Cleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_ClearSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_ClearSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_ClearSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "ClearSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_ClearSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_ClearSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_ClearSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_ClearSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_GetPlayMode_Statics
	{
		struct Plot_eventGetPlayMode_Parms
		{
			EPlayMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlot_GetPlayMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlot_GetPlayMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetPlayMode_Parms, ReturnValue), Z_Construct_UEnum_Plot_EPlayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_GetPlayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetPlayMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetPlayMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetPlayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_GetPlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "GetPlayMode", nullptr, nullptr, sizeof(Plot_eventGetPlayMode_Parms), Z_Construct_UFunction_UPlot_GetPlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetPlayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetPlayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetPlayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_GetPlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_GetPlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics
	{
		struct Plot_eventGetPlaySpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetPlaySpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "GetPlaySpeed", nullptr, nullptr, sizeof(Plot_eventGetPlaySpeed_Parms), Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_GetPlaySpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_GetPlaySpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_GetRootItem_Statics
	{
		struct Plot_eventGetRootItem_Parms
		{
			UPlotItem* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetRootItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlot_GetRootItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetRootItem_Parms, ReturnValue), Z_Construct_UClass_UPlotItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetRootItem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetRootItem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_GetRootItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetRootItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetRootItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_GetRootItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "GetRootItem", nullptr, nullptr, sizeof(Plot_eventGetRootItem_Parms), Z_Construct_UFunction_UPlot_GetRootItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetRootItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetRootItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetRootItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_GetRootItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_GetRootItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_GetTalkConfig_Statics
	{
		struct Plot_eventGetTalkConfig_Parms
		{
			FString InKey;
			FConfigItem ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetTalkConfig_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetTalkConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FConfigItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "GetTalkConfig", nullptr, nullptr, sizeof(Plot_eventGetTalkConfig_Parms), Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_GetTalkConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_GetTalkConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_GetWidget_Statics
	{
		struct Plot_eventGetWidget_Parms
		{
			UPlotWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlot_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UPlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_GetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "GetWidget", nullptr, nullptr, sizeof(Plot_eventGetWidget_Parms), Z_Construct_UFunction_UPlot_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_GetWorld_Statics
	{
		struct Plot_eventGetWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlot_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_GetWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "GetWorld", nullptr, nullptr, sizeof(Plot_eventGetWorld_Parms), Z_Construct_UFunction_UPlot_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_HasKey_Statics
	{
		struct Plot_eventHasKey_Parms
		{
			FString InKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventHasKey_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_InKey_MetaData)) };
	void Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Plot_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Plot_eventHasKey_Parms), &Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_HasKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_HasKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_HasKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "HasKey", nullptr, nullptr, sizeof(Plot_eventHasKey_Parms), Z_Construct_UFunction_UPlot_HasKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_HasKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_HasKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_HasKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_IsJump_Statics
	{
		struct Plot_eventIsJump_Parms
		{
			UPlotItem* InItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_InItem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventIsJump_Parms, InItem), Z_Construct_UClass_UPlotItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_InItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_InItem_MetaData)) };
	void Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Plot_eventIsJump_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Plot_eventIsJump_Parms), &Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_IsJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_InItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_IsJump_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_IsJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_IsJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "IsJump", nullptr, nullptr, sizeof(Plot_eventIsJump_Parms), Z_Construct_UFunction_UPlot_IsJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_IsJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_IsJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_IsJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_IsJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_IsJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_JumpTo_Statics
	{
		struct Plot_eventJumpTo_Parms
		{
			FString InKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventJumpTo_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_InKey_MetaData)) };
	void Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Plot_eventJumpTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Plot_eventJumpTo_Parms), &Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_JumpTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_JumpTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_JumpTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_JumpTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "JumpTo", nullptr, nullptr, sizeof(Plot_eventJumpTo_Parms), Z_Construct_UFunction_UPlot_JumpTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_JumpTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_JumpTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_JumpTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_JumpTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_JumpTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_SaveKey_Statics
	{
		struct Plot_eventSaveKey_Parms
		{
			FString InKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_SaveKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlot_SaveKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventSaveKey_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlot_SaveKey_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SaveKey_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_SaveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_SaveKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_SaveKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_SaveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "SaveKey", nullptr, nullptr, sizeof(Plot_eventSaveKey_Parms), Z_Construct_UFunction_UPlot_SaveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SaveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_SaveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SaveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_SaveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_SaveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_SetPlayMode_Statics
	{
		struct Plot_eventSetPlayMode_Parms
		{
			EPlayMode InPlayMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlayMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode = { "InPlayMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventSetPlayMode_Parms, InPlayMode), Z_Construct_UEnum_Plot_EPlayMode, METADATA_PARAMS(Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_SetPlayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_SetPlayMode_Statics::NewProp_InPlayMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_SetPlayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_SetPlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "SetPlayMode", nullptr, nullptr, sizeof(Plot_eventSetPlayMode_Parms), Z_Construct_UFunction_UPlot_SetPlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SetPlayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_SetPlayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SetPlayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_SetPlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_SetPlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_SetWidget_Statics
	{
		struct Plot_eventSetWidget_Parms
		{
			UPlotWidget* InWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_SetWidget_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlot_SetWidget_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Plot_eventSetWidget_Parms, InWidget), Z_Construct_UClass_UPlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlot_SetWidget_Statics::NewProp_InWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SetWidget_Statics::NewProp_InWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlot_SetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlot_SetWidget_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_SetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_SetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "SetWidget", nullptr, nullptr, sizeof(Plot_eventSetWidget_Parms), Z_Construct_UFunction_UPlot_SetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_SetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_SetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_SetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_SetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlot_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlot_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlot_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlot, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlot_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlot_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlot_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlot_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlot_NoRegister()
	{
		return UPlot::StaticClass();
	}
	struct Z_Construct_UClass_UPlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewLevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewLevelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraObj;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlotConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BGPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConfigMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlot_Cleanup, "Cleanup" }, // 1157217555
		{ &Z_Construct_UFunction_UPlot_ClearSequence, "ClearSequence" }, // 2526971421
		{ &Z_Construct_UFunction_UPlot_End, "End" }, // 742564797
		{ &Z_Construct_UFunction_UPlot_GetPlayMode, "GetPlayMode" }, // 2235172644
		{ &Z_Construct_UFunction_UPlot_GetPlaySpeed, "GetPlaySpeed" }, // 4119337876
		{ &Z_Construct_UFunction_UPlot_GetRootItem, "GetRootItem" }, // 64888871
		{ &Z_Construct_UFunction_UPlot_GetTalkConfig, "GetTalkConfig" }, // 3028084173
		{ &Z_Construct_UFunction_UPlot_GetWidget, "GetWidget" }, // 847821497
		{ &Z_Construct_UFunction_UPlot_GetWorld, "GetWorld" }, // 2393699602
		{ &Z_Construct_UFunction_UPlot_HasKey, "HasKey" }, // 827058899
		{ &Z_Construct_UFunction_UPlot_IsJump, "IsJump" }, // 613037253
		{ &Z_Construct_UFunction_UPlot_JumpTo, "JumpTo" }, // 3105683999
		{ &Z_Construct_UFunction_UPlot_SaveKey, "SaveKey" }, // 160522302
		{ &Z_Construct_UFunction_UPlot_SetPlayMode, "SetPlayMode" }, // 2200946942
		{ &Z_Construct_UFunction_UPlot_SetWidget, "SetWidget" }, // 619980037
		{ &Z_Construct_UFunction_UPlot_Start, "Start" }, // 2410773677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Plot Asset\n */" },
		{ "IncludePath", "Plot.h" },
		{ "ModuleRelativePath", "Public/Plot.h" },
		{ "ToolTip", "Plot Asset" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_PreviewLevelPath_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "Plot" },
		{ "DisplayName", "\xe9\xa2\x84\xe8\xa7\x88\xe5\x9c\xb0\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_PreviewLevelPath = { "PreviewLevelPath", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, PreviewLevelPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_PreviewLevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_PreviewLevelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_CameraObj_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_CameraObj = { "CameraObj", nullptr, (EPropertyFlags)0x0012000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, CameraObj), Z_Construct_UClass_UPlotCameraObj_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_CameraObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_CameraObj_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_PlotConfig_MetaData[] = {
		{ "Category", "Plot" },
		{ "DisplayName", "\xe5\x89\xa7\xe6\x83\x85\xe9\x85\x8d\xe7\xbd\xae\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_PlotConfig = { "PlotConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, PlotConfig), METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_PlotConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_PlotConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_BGPath_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "Plot" },
		{ "DisplayName", "\xe8\x83\x8c\xe6\x99\xaf\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_BGPath = { "BGPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, BGPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_BGPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_BGPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_RootItem_MetaData[] = {
		{ "Comment", "//Root Node\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plot.h" },
		{ "ToolTip", "Root Node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_RootItem = { "RootItem", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, RootItem), Z_Construct_UClass_UPlotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_RootItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_RootItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_Widget_MetaData[] = {
		{ "Comment", "//UI\n" },
		{ "ModuleRelativePath", "Public/Plot.h" },
		{ "ToolTip", "UI" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, Widget), Z_Construct_UClass_UPlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_ValueProp = { "ConfigMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FConfigItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_Key_KeyProp = { "ConfigMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_MetaData[] = {
		{ "Comment", "//Talk Config\n" },
		{ "ModuleRelativePath", "Public/Plot.h" },
		{ "ToolTip", "Talk Config" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap = { "ConfigMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlot, ConfigMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlot_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_PreviewLevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_CameraObj,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_PlotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_BGPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_RootItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlot_Statics::NewProp_ConfigMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlot_Statics::ClassParams = {
		&UPlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlot, 705645293);
	template<> PLOT_API UClass* StaticClass<UPlot>()
	{
		return UPlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlot(Z_Construct_UClass_UPlot, &UPlot::StaticClass, TEXT("/Script/Plot"), TEXT("UPlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlot);
	void UPlotCameraObj::StaticRegisterNativesUPlotCameraObj()
	{
	}
	UClass* Z_Construct_UClass_UPlotCameraObj_NoRegister()
	{
		return UPlotCameraObj::StaticClass();
	}
	struct Z_Construct_UClass_UPlotCameraObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraArgs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotCameraObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCameraObj_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x95\x9c\xe5\xa4\xb4\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "DisplayName", "\xe9\x95\x9c\xe5\xa4\xb4\xe5\x8f\x82\xe6\x95\xb0" },
		{ "IncludePath", "Plot.h" },
		{ "ModuleRelativePath", "Public/Plot.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x95\x9c\xe5\xa4\xb4\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCameraObj_Statics::NewProp_CameraArgs_MetaData[] = {
		{ "Category", "PlotCameraObj" },
		{ "DesignerRebuild", "" },
		{ "DisplayName", "\xe5\xbd\x93\xe5\x89\x8d\xe9\x95\x9c\xe5\xa4\xb4\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotCameraObj_Statics::NewProp_CameraArgs = { "CameraArgs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotCameraObj, CameraArgs), Z_Construct_UScriptStruct_FPlotCameraInfo, METADATA_PARAMS(Z_Construct_UClass_UPlotCameraObj_Statics::NewProp_CameraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCameraObj_Statics::NewProp_CameraArgs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotCameraObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotCameraObj_Statics::NewProp_CameraArgs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotCameraObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotCameraObj>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotCameraObj_Statics::ClassParams = {
		&UPlotCameraObj::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotCameraObj_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCameraObj_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotCameraObj_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCameraObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotCameraObj()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotCameraObj_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotCameraObj, 4174536563);
	template<> PLOT_API UClass* StaticClass<UPlotCameraObj>()
	{
		return UPlotCameraObj::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotCameraObj(Z_Construct_UClass_UPlotCameraObj, &UPlotCameraObj::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotCameraObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotCameraObj);
	DEFINE_FUNCTION(APlotCharacter::execGetCameraArgs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlotCameraInfo*)Z_Param__Result=P_THIS->GetCameraArgs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlotCharacter::execSetCameraArgs)
	{
		P_GET_STRUCT(FPlotCameraInfo,Z_Param_InArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraArgs(Z_Param_InArgs);
		P_NATIVE_END;
	}
	void APlotCharacter::StaticRegisterNativesAPlotCharacter()
	{
		UClass* Class = APlotCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraArgs", &APlotCharacter::execGetCameraArgs },
			{ "SetCameraArgs", &APlotCharacter::execSetCameraArgs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics
	{
		struct PlotCharacter_eventGetCameraArgs_Parms
		{
			FPlotCameraInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotCharacter_eventGetCameraArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlotCameraInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotCharacter, nullptr, "GetCameraArgs", nullptr, nullptr, sizeof(PlotCharacter_eventGetCameraArgs_Parms), Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotCharacter_GetCameraArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotCharacter_GetCameraArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics
	{
		struct PlotCharacter_eventSetCameraArgs_Parms
		{
			FPlotCameraInfo InArgs;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArgs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotCharacter_eventSetCameraArgs_Parms, InArgs), Z_Construct_UScriptStruct_FPlotCameraInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::NewProp_InArgs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotCharacter, nullptr, "SetCameraArgs", nullptr, nullptr, sizeof(PlotCharacter_eventSetCameraArgs_Parms), Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotCharacter_SetCameraArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotCharacter_SetCameraArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlotCharacter_NoRegister()
	{
		return APlotCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlotCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlotCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlotCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlotCharacter_GetCameraArgs, "GetCameraArgs" }, // 4084982181
		{ &Z_Construct_UFunction_APlotCharacter_SetCameraArgs, "SetCameraArgs" }, // 1024160028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlotCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xbd\xbf\xe7\x94\xa8\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Plot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Plot.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xbd\xbf\xe7\x94\xa8" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlotCharacter_Statics::NewProp_CameraArm_MetaData[] = {
		{ "Category", "PlotCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlotCharacter_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlotCharacter, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlotCharacter_Statics::NewProp_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlotCharacter_Statics::NewProp_CameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlotCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlotCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlotCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlotCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlotCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlotCharacter_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlotCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlotCharacter_Statics::NewProp_CameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlotCharacter_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlotCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlotCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlotCharacter_Statics::ClassParams = {
		&APlotCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlotCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlotCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlotCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlotCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlotCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlotCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlotCharacter, 2868289675);
	template<> PLOT_API UClass* StaticClass<APlotCharacter>()
	{
		return APlotCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlotCharacter(Z_Construct_UClass_APlotCharacter, &APlotCharacter::StaticClass, TEXT("/Script/Plot"), TEXT("APlotCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlotCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
