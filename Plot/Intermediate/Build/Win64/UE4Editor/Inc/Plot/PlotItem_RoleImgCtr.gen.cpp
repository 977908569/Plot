// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_RoleImgCtr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_RoleImgCtr() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_RoleImgCtr_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_RoleImgCtr();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UPlotItem_RoleImgCtr::StaticRegisterNativesUPlotItem_RoleImgCtr()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_RoleImgCtr_NoRegister()
	{
		return UPlotItem_RoleImgCtr::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImgPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImgPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHide_MetaData[];
#endif
		static void NewProp_bHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe7\xab\x8b\xe7\xbb\x98\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "IncludePath", "PlotItem_RoleImgCtr.h" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleImgCtr.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "PlotItem_RoleImgCtr" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleImgCtr.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_RoleImgCtr, Pos), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_Pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_Pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_ImgPath_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "PlotItem_RoleImgCtr" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98\xe8\xb5\x84\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleImgCtr.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_ImgPath = { "ImgPath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_RoleImgCtr, ImgPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_ImgPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_ImgPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide_MetaData[] = {
		{ "Category", "PlotItem_RoleImgCtr" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9a\x90\xe8\x97\x8f" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleImgCtr.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide_SetBit(void* Obj)
	{
		((UPlotItem_RoleImgCtr*)Obj)->bHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide = { "bHide", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPlotItem_RoleImgCtr), &Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_ImgPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::NewProp_bHide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_RoleImgCtr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::ClassParams = {
		&UPlotItem_RoleImgCtr::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_RoleImgCtr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_RoleImgCtr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_RoleImgCtr, 525833215);
	template<> PLOT_API UClass* StaticClass<UPlotItem_RoleImgCtr>()
	{
		return UPlotItem_RoleImgCtr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_RoleImgCtr(Z_Construct_UClass_UPlotItem_RoleImgCtr, &UPlotItem_RoleImgCtr::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_RoleImgCtr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_RoleImgCtr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
