// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_SetCameraArgs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_SetCameraArgs() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_SetCameraArgs_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_SetCameraArgs();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotCameraInfo();
// End Cross Module References
	void UPlotItem_SetCameraArgs::StaticRegisterNativesUPlotItem_SetCameraArgs()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_SetCameraArgs_NoRegister()
	{
		return UPlotItem_SetCameraArgs::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Args;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe9\x95\x9c\xe5\xa4\xb4\xe5\x8f\x82\xe6\x95\xb0" },
		{ "IncludePath", "PlotItem_SetCameraArgs.h" },
		{ "ModuleRelativePath", "Public/PlotItem_SetCameraArgs.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::NewProp_Args_MetaData[] = {
		{ "Category", "PlotItem_SetCameraArgs" },
		{ "DesignerRebuild", "" },
		{ "DisplayName", "\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem_SetCameraArgs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_SetCameraArgs, Args), Z_Construct_UScriptStruct_FPlotCameraInfo, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::NewProp_Args,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_SetCameraArgs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::ClassParams = {
		&UPlotItem_SetCameraArgs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_SetCameraArgs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_SetCameraArgs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_SetCameraArgs, 197571048);
	template<> PLOT_API UClass* StaticClass<UPlotItem_SetCameraArgs>()
	{
		return UPlotItem_SetCameraArgs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_SetCameraArgs(Z_Construct_UClass_UPlotItem_SetCameraArgs, &UPlotItem_SetCameraArgs::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_SetCameraArgs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_SetCameraArgs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
