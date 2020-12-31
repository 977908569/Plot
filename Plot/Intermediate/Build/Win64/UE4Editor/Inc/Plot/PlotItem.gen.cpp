// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UClass* Z_Construct_UClass_UPlot_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotEvent_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Root_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Root();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FTalkConfig();
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveItem_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveItem();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigItem();
// End Cross Module References
	DEFINE_FUNCTION(UPlotItem::execGetChildrenCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChildrenCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotItem**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execGetIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execSetExecuteIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExecuteIndex(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execIsTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execClearup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clearup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execGetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotWidget**)Z_Param__Result=P_THIS->GetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execGetPlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlot**)Z_Param__Result=P_THIS->GetPlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotItem::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	static FName NAME_UPlotItem_OnEnd = FName(TEXT("OnEnd"));
	void UPlotItem::OnEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlotItem_OnEnd),NULL);
	}
	static FName NAME_UPlotItem_OnStart = FName(TEXT("OnStart"));
	void UPlotItem::OnStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlotItem_OnStart),NULL);
	}
	void UPlotItem::StaticRegisterNativesUPlotItem()
	{
		UClass* Class = UPlotItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clearup", &UPlotItem::execClearup },
			{ "End", &UPlotItem::execEnd },
			{ "GetChildrenCount", &UPlotItem::execGetChildrenCount },
			{ "GetIndex", &UPlotItem::execGetIndex },
			{ "GetParent", &UPlotItem::execGetParent },
			{ "GetPlot", &UPlotItem::execGetPlot },
			{ "GetWidget", &UPlotItem::execGetWidget },
			{ "GetWorld", &UPlotItem::execGetWorld },
			{ "IsTimeout", &UPlotItem::execIsTimeout },
			{ "SetExecuteIndex", &UPlotItem::execSetExecuteIndex },
			{ "Start", &UPlotItem::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotItem_Clearup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Clearup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Clearup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "Clearup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Clearup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Clearup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Clearup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Clearup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics
	{
		struct PlotItem_eventGetChildrenCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventGetChildrenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "GetChildrenCount", nullptr, nullptr, sizeof(PlotItem_eventGetChildrenCount_Parms), Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_GetChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_GetChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_GetIndex_Statics
	{
		struct PlotItem_eventGetIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlotItem_GetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventGetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_GetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_GetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_GetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "GetIndex", nullptr, nullptr, sizeof(PlotItem_eventGetIndex_Parms), Z_Construct_UFunction_UPlotItem_GetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_GetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_GetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_GetParent_Statics
	{
		struct PlotItem_eventGetParent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotItem_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UPlotItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "GetParent", nullptr, nullptr, sizeof(PlotItem_eventGetParent_Parms), Z_Construct_UFunction_UPlotItem_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_GetPlot_Statics
	{
		struct PlotItem_eventGetPlot_Parms
		{
			UPlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotItem_GetPlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventGetPlot_Parms, ReturnValue), Z_Construct_UClass_UPlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_GetPlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_GetPlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetPlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_GetPlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "GetPlot", nullptr, nullptr, sizeof(PlotItem_eventGetPlot_Parms), Z_Construct_UFunction_UPlotItem_GetPlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetPlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetPlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetPlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_GetPlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_GetPlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_GetWidget_Statics
	{
		struct PlotItem_eventGetWidget_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotItem_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UPlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_GetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "GetWidget", nullptr, nullptr, sizeof(PlotItem_eventGetWidget_Parms), Z_Construct_UFunction_UPlotItem_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_GetWorld_Statics
	{
		struct PlotItem_eventGetWorld_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotItem_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_GetWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "GetWorld", nullptr, nullptr, sizeof(PlotItem_eventGetWorld_Parms), Z_Construct_UFunction_UPlotItem_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_IsTimeout_Statics
	{
		struct PlotItem_eventIsTimeout_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlotItem_eventIsTimeout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotItem_eventIsTimeout_Parms), &Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "IsTimeout", nullptr, nullptr, sizeof(PlotItem_eventIsTimeout_Parms), Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_IsTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_IsTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_OnEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_OnEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_OnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "OnEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_OnEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_OnEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_OnEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_OnEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_OnStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_OnStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_OnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "OnStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_OnStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_OnStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_OnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_OnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics
	{
		struct PlotItem_eventSetExecuteIndex_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_eventSetExecuteIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "SetExecuteIndex", nullptr, nullptr, sizeof(PlotItem_eventSetExecuteIndex_Parms), Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_SetExecuteIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_SetExecuteIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotItem_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotItem_NoRegister()
	{
		return UPlotItem::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Childs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Childs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Childs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Childs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWait_MetaData[];
#endif
		static void NewProp_bWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutEvents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeoutEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeoutEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHaveMultipleChildren_MetaData[];
#endif
		static void NewProp_bCanHaveMultipleChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHaveMultipleChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecuteIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecuteIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEditWait_MetaData[];
#endif
		static void NewProp_bCanEditWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEditWait;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotItem_Clearup, "Clearup" }, // 800607324
		{ &Z_Construct_UFunction_UPlotItem_End, "End" }, // 2051513028
		{ &Z_Construct_UFunction_UPlotItem_GetChildrenCount, "GetChildrenCount" }, // 3122988487
		{ &Z_Construct_UFunction_UPlotItem_GetIndex, "GetIndex" }, // 3743334704
		{ &Z_Construct_UFunction_UPlotItem_GetParent, "GetParent" }, // 1832101829
		{ &Z_Construct_UFunction_UPlotItem_GetPlot, "GetPlot" }, // 2074305502
		{ &Z_Construct_UFunction_UPlotItem_GetWidget, "GetWidget" }, // 2366297402
		{ &Z_Construct_UFunction_UPlotItem_GetWorld, "GetWorld" }, // 1639938937
		{ &Z_Construct_UFunction_UPlotItem_IsTimeout, "IsTimeout" }, // 3467353440
		{ &Z_Construct_UFunction_UPlotItem_OnEnd, "OnEnd" }, // 2949874232
		{ &Z_Construct_UFunction_UPlotItem_OnStart, "OnStart" }, // 45776849
		{ &Z_Construct_UFunction_UPlotItem_SetExecuteIndex, "SetExecuteIndex" }, // 4047804382
		{ &Z_Construct_UFunction_UPlotItem_Start, "Start" }, // 2381593105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlotItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_Inner_MetaData[] = {
		{ "Category", "PlotItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_Inner = { "Childs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_MetaData[] = {
		{ "Category", "PlotItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs = { "Childs", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, Childs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, Parent), Z_Construct_UClass_UPlotItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait_MetaData[] = {
		{ "Category", "PlotItem" },
		{ "EditCondition", "bCanEditWait" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait_SetBit(void* Obj)
	{
		((UPlotItem*)Obj)->bWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait = { "bWait", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotItem), &Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "\xe8\xb6\x85\xe6\x97\xb6" },
		{ "DisplayName", "\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, Timeout), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_Inner_MetaData[] = {
		{ "Category", "\xe8\xb6\x85\xe6\x97\xb6" },
		{ "DisplayName", "\xe8\xb6\x85\xe6\x97\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe5\x88\x97\xe8\xa1\xa8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_Inner = { "TimeoutEvents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_MetaData[] = {
		{ "Category", "\xe8\xb6\x85\xe6\x97\xb6" },
		{ "DisplayName", "\xe8\xb6\x85\xe6\x97\xb6\xe4\xba\x8b\xe4\xbb\xb6\xe5\x88\x97\xe8\xa1\xa8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents = { "TimeoutEvents", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, TimeoutEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_TrackTime_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "//\xe5\xad\x90\xe8\xbd\xa8\xe9\x81\x93\xe4\xbd\xbf\xe7\x94\xa8\n" },
		{ "DisplayName", "\xe8\xa7\xa6\xe5\x8f\x91\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
		{ "ToolTip", "\xe5\xad\x90\xe8\xbd\xa8\xe9\x81\x93\xe4\xbd\xbf\xe7\x94\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_TrackTime = { "TrackTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, TrackTime), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_TrackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_TrackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren_SetBit(void* Obj)
	{
		((UPlotItem*)Obj)->bCanHaveMultipleChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren = { "bCanHaveMultipleChildren", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotItem), &Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_ExecuteIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_ExecuteIndex = { "ExecuteIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, ExecuteIndex), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_ExecuteIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_ExecuteIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, DisplayLabel), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_DisplayLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "Category", "PlotItem" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem, ItemIndex), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_ItemIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait_MetaData[] = {
		{ "Category", "PlotItem" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait_SetBit(void* Obj)
	{
		((UPlotItem*)Obj)->bCanEditWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait = { "bCanEditWait", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotItem), &Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_Childs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_bWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_TimeoutEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_TrackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanHaveMultipleChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_ExecuteIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_DisplayLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Statics::NewProp_bCanEditWait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Statics::ClassParams = {
		&UPlotItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem, 1144253703);
	template<> PLOT_API UClass* StaticClass<UPlotItem>()
	{
		return UPlotItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem(Z_Construct_UClass_UPlotItem, &UPlotItem::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem);
	void UPlotItem_Root::StaticRegisterNativesUPlotItem_Root()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_Root_NoRegister()
	{
		return UPlotItem_Root::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TalkConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Root_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Root Item\n */" },
		{ "IncludePath", "PlotItem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
		{ "ToolTip", "Root Item" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Root_Statics::NewProp_TalkConfig_MetaData[] = {
		{ "Category", "PlotItem_Root" },
		{ "DisplayName", "\xe9\xbb\x98\xe8\xae\xa4\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Root_Statics::NewProp_TalkConfig = { "TalkConfig", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Root, TalkConfig), Z_Construct_UScriptStruct_FTalkConfig, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Root_Statics::NewProp_TalkConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Root_Statics::NewProp_TalkConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_Root_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Root_Statics::NewProp_TalkConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Root>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Root_Statics::ClassParams = {
		&UPlotItem_Root::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_Root_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Root_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Root()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Root_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Root, 3752596703);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Root>()
	{
		return UPlotItem_Root::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Root(Z_Construct_UClass_UPlotItem_Root, &UPlotItem_Root::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Root"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Root);
	void UPlotSaveItem::StaticRegisterNativesUPlotSaveItem()
	{
	}
	UClass* Z_Construct_UClass_UPlotSaveItem_NoRegister()
	{
		return UPlotSaveItem::StaticClass();
	}
	struct Z_Construct_UClass_UPlotSaveItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotSaveItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSaveItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Needs to be saved to a configuration file\n */" },
		{ "IncludePath", "PlotItem.h" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
		{ "ToolTip", "Needs to be saved to a configuration file" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "PlotSaveItem" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotSaveItem, Config), Z_Construct_UScriptStruct_FConfigItem, METADATA_PARAMS(Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave_MetaData[] = {
		{ "Category", "PlotSaveItem" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbf\x9d\xe5\xad\x98" },
		{ "ModuleRelativePath", "Public/PlotItem.h" },
	};
#endif
	void Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((UPlotSaveItem*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotSaveItem), &Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotSaveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotSaveItem_Statics::NewProp_bSave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotSaveItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotSaveItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotSaveItem_Statics::ClassParams = {
		&UPlotSaveItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotSaveItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveItem_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotSaveItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotSaveItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotSaveItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotSaveItem, 1840249294);
	template<> PLOT_API UClass* StaticClass<UPlotSaveItem>()
	{
		return UPlotSaveItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotSaveItem(Z_Construct_UClass_UPlotSaveItem, &UPlotSaveItem::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotSaveItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotSaveItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
