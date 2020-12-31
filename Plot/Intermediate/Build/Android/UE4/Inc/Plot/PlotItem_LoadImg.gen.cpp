// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_LoadImg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_LoadImg() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_LoadImg_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_LoadImg();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UPlotItem_LoadImg::StaticRegisterNativesUPlotItem_LoadImg()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_LoadImg_NoRegister()
	{
		return UPlotItem_LoadImg::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_LoadImg_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImgPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImgPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_LoadImg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_LoadImg_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe5\x8a\xa0\xe8\xbd\xbd\xe8\x83\x8c\xe6\x99\xaf\xe5\x9b\xbe\xe7\x89\x87" },
		{ "IncludePath", "PlotItem_LoadImg.h" },
		{ "ModuleRelativePath", "Public/PlotItem_LoadImg.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_LoadImg_Statics::NewProp_ImgPath_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "PlotItem_LoadImg" },
		{ "DisplayName", "\xe5\x9b\xbe\xe7\x89\x87\xe8\xb5\x84\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/PlotItem_LoadImg.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_LoadImg_Statics::NewProp_ImgPath = { "ImgPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_LoadImg, ImgPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_LoadImg_Statics::NewProp_ImgPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_LoadImg_Statics::NewProp_ImgPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_LoadImg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_LoadImg_Statics::NewProp_ImgPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_LoadImg_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_LoadImg>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_LoadImg_Statics::ClassParams = {
		&UPlotItem_LoadImg::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_LoadImg_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_LoadImg_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_LoadImg_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_LoadImg_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_LoadImg()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_LoadImg_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_LoadImg, 2622722096);
	template<> PLOT_API UClass* StaticClass<UPlotItem_LoadImg>()
	{
		return UPlotItem_LoadImg::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_LoadImg(Z_Construct_UClass_UPlotItem_LoadImg, &UPlotItem_LoadImg::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_LoadImg"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_LoadImg);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
