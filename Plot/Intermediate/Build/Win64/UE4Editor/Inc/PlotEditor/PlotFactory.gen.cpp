// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotEditor/Public/PlotFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotFactory() {}
// Cross Module References
	PLOTEDITOR_API UClass* Z_Construct_UClass_UPlotFactory_NoRegister();
	PLOTEDITOR_API UClass* Z_Construct_UClass_UPlotFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PlotEditor();
// End Cross Module References
	void UPlotFactory::StaticRegisterNativesUPlotFactory()
	{
	}
	UClass* Z_Construct_UClass_UPlotFactory_NoRegister()
	{
		return UPlotFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPlotFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x88\x9b\xe5\xbb\xba\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlotFactory.h" },
		{ "ModuleRelativePath", "Public/PlotFactory.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x88\x9b\xe5\xbb\xba" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotFactory_Statics::ClassParams = {
		&UPlotFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotFactory, 1286913759);
	template<> PLOTEDITOR_API UClass* StaticClass<UPlotFactory>()
	{
		return UPlotFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotFactory(Z_Construct_UClass_UPlotFactory, &UPlotFactory::StaticClass, TEXT("/Script/PlotEditor"), TEXT("UPlotFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
