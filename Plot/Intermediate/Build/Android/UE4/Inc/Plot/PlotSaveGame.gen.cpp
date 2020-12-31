// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotSaveGame() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveGame_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Plot();
// End Cross Module References
	DEFINE_FUNCTION(UPlotSaveGame::execHasKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotSaveGame::execSaveKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotSaveGame::execSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotSaveGame::execLoadPlotSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotSaveGame**)Z_Param__Result=UPlotSaveGame::LoadPlotSaveGame();
		P_NATIVE_END;
	}
	void UPlotSaveGame::StaticRegisterNativesUPlotSaveGame()
	{
		UClass* Class = UPlotSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasKey", &UPlotSaveGame::execHasKey },
			{ "LoadPlotSaveGame", &UPlotSaveGame::execLoadPlotSaveGame },
			{ "Save", &UPlotSaveGame::execSave },
			{ "SaveKey", &UPlotSaveGame::execSaveKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics
	{
		struct PlotSaveGame_eventHasKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotSaveGame_eventHasKey_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_InKey_MetaData)) };
	void Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlotSaveGame_eventHasKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotSaveGame_eventHasKey_Parms), &Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotSaveGame, nullptr, "HasKey", nullptr, nullptr, sizeof(PlotSaveGame_eventHasKey_Parms), Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotSaveGame_HasKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotSaveGame_HasKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics
	{
		struct PlotSaveGame_eventLoadPlotSaveGame_Parms
		{
			UPlotSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotSaveGame_eventLoadPlotSaveGame_Parms, ReturnValue), Z_Construct_UClass_UPlotSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "/** Loads user persistence data if it exists, creates an empty record otherwise. */" },
		{ "ModuleRelativePath", "Public/PlotSaveGame.h" },
		{ "ToolTip", "Loads user persistence data if it exists, creates an empty record otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotSaveGame, nullptr, "LoadPlotSaveGame", nullptr, nullptr, sizeof(PlotSaveGame_eventLoadPlotSaveGame_Parms), Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotSaveGame_Save_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotSaveGame_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotSaveGame_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotSaveGame, nullptr, "Save", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotSaveGame_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotSaveGame_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotSaveGame_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics
	{
		struct PlotSaveGame_eventSaveKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotSaveGame_eventSaveKey_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotSaveGame, nullptr, "SaveKey", nullptr, nullptr, sizeof(PlotSaveGame_eventSaveKey_Parms), Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotSaveGame_SaveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotSaveGame_SaveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotSaveGame_NoRegister()
	{
		return UPlotSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UPlotSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotSaveGame_HasKey, "HasKey" }, // 320753137
		{ &Z_Construct_UFunction_UPlotSaveGame_LoadPlotSaveGame, "LoadPlotSaveGame" }, // 3226556827
		{ &Z_Construct_UFunction_UPlotSaveGame_Save, "Save" }, // 2112162725
		{ &Z_Construct_UFunction_UPlotSaveGame_SaveKey, "SaveKey" }, // 3533231351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlotSaveGame.h" },
		{ "ModuleRelativePath", "Public/PlotSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys_Inner = { "SaveKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys_MetaData[] = {
		{ "Category", "PlotSaveGame" },
		{ "ModuleRelativePath", "Public/PlotSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys = { "SaveKeys", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotSaveGame, SaveKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotSaveGame_Statics::NewProp_SaveKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotSaveGame_Statics::ClassParams = {
		&UPlotSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveGame_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotSaveGame, 3537698210);
	template<> PLOT_API UClass* StaticClass<UPlotSaveGame>()
	{
		return UPlotSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotSaveGame(Z_Construct_UClass_UPlotSaveGame, &UPlotSaveGame::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
