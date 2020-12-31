// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_Spine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_Spine() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Spine_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Spine();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UPlotItem_Spine::StaticRegisterNativesUPlotItem_Spine()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_Spine_NoRegister()
	{
		return UPlotItem_Spine::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Spine_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Atlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHide_MetaData[];
#endif
		static void NewProp_bHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Spine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Spine" },
		{ "IncludePath", "PlotItem_Spine.h" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "PlotItem_Spine" },
		{ "DisplayName", "\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Spine, Pos), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Atlas_MetaData[] = {
		{ "AllowedClasses", "SpineAtlasAsset" },
		{ "Category", "PlotItem_Spine" },
		{ "DisplayName", "Atlas" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Spine, Atlas), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Atlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Skeleton_MetaData[] = {
		{ "AllowedClasses", "SpineSkeletonDataAsset" },
		{ "Category", "PlotItem_Spine" },
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Spine, Skeleton), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Anim_MetaData[] = {
		{ "Category", "PlotItem_Spine" },
		{ "DisplayName", "\xe5\x8a\xa8\xe4\xbd\x9c" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Spine, Anim), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "PlotItem_Spine" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbe\xaa\xe7\x8e\xaf" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UPlotItem_Spine*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotItem_Spine), &Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide_MetaData[] = {
		{ "Category", "PlotItem_Spine" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9a\x90\xe8\x97\x8f" },
		{ "ModuleRelativePath", "Public/PlotItem_Spine.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide_SetBit(void* Obj)
	{
		((UPlotItem_Spine*)Obj)->bHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide = { "bHide", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPlotItem_Spine), &Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_Spine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Atlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Spine_Statics::NewProp_bHide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Spine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Spine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Spine_Statics::ClassParams = {
		&UPlotItem_Spine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_Spine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Spine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Spine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Spine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Spine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Spine, 1300472719);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Spine>()
	{
		return UPlotItem_Spine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Spine(Z_Construct_UClass_UPlotItem_Spine, &UPlotItem_Spine::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Spine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Spine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
