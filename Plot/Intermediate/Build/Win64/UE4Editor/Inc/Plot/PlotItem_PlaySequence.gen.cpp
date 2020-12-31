// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_PlaySequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_PlaySequence() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_PlaySequence_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_PlaySequence();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_PlaySequence_Item_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_PlaySequence_Item();
// End Cross Module References
	DEFINE_FUNCTION(UPlotItem_PlaySequence::execPlayFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFinish();
		P_NATIVE_END;
	}
	void UPlotItem_PlaySequence::StaticRegisterNativesUPlotItem_PlaySequence()
	{
		UClass* Class = UPlotItem_PlaySequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayFinish", &UPlotItem_PlaySequence::execPlayFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_PlaySequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_PlaySequence, nullptr, "PlayFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotItem_PlaySequence_NoRegister()
	{
		return UPlotItem_PlaySequence::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_PlaySequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequencePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_PlaySequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotItem_PlaySequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotItem_PlaySequence_PlayFinish, "PlayFinish" }, // 1573680486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlaySequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe5\xba\x8f\xe5\x88\x97" },
		{ "IncludePath", "PlotItem_PlaySequence.h" },
		{ "ModuleRelativePath", "Public/PlotItem_PlaySequence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_SequencePath_MetaData[] = {
		{ "AllowedClasses", "LevelSequence" },
		{ "Category", "PlotItem_PlaySequence" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/PlotItem_PlaySequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_PlaySequence, SequencePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_SequencePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "PlotItem_PlaySequence" },
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PlotItem_PlaySequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_PlaySequence, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_PlaySequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_SequencePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlaySequence_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_PlaySequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_PlaySequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_PlaySequence_Statics::ClassParams = {
		&UPlotItem_PlaySequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotItem_PlaySequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlaySequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_PlaySequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_PlaySequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_PlaySequence, 3689631672);
	template<> PLOT_API UClass* StaticClass<UPlotItem_PlaySequence>()
	{
		return UPlotItem_PlaySequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_PlaySequence(Z_Construct_UClass_UPlotItem_PlaySequence, &UPlotItem_PlaySequence::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_PlaySequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_PlaySequence);
	void UPlotItem_PlaySequence_Item::StaticRegisterNativesUPlotItem_PlaySequence_Item()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_PlaySequence_Item_NoRegister()
	{
		return UPlotItem_PlaySequence_Item::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xba\x8f\xe5\x88\x97\xe6\x9d\xa1\xe7\x9b\xae" },
		{ "IncludePath", "PlotItem_PlaySequence.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PlotItem_PlaySequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_PlaySequence_Item>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::ClassParams = {
		&UPlotItem_PlaySequence_Item::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_PlaySequence_Item()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_PlaySequence_Item_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_PlaySequence_Item, 3233279463);
	template<> PLOT_API UClass* StaticClass<UPlotItem_PlaySequence_Item>()
	{
		return UPlotItem_PlaySequence_Item::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_PlaySequence_Item(Z_Construct_UClass_UPlotItem_PlaySequence_Item, &UPlotItem_PlaySequence_Item::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_PlaySequence_Item"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_PlaySequence_Item);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
