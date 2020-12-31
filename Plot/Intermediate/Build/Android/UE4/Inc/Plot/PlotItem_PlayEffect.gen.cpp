// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_PlayEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_PlayEffect() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_PlayEffect_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_PlayEffect();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UPlotItem_PlayEffect::StaticRegisterNativesUPlotItem_PlayEffect()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_PlayEffect_NoRegister()
	{
		return UPlotItem_PlayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_PlayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHide_MetaData[];
#endif
		static void NewProp_bHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_PlayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlayEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe7\x89\xb9\xe6\x95\x88" },
		{ "IncludePath", "PlotItem_PlayEffect.h" },
		{ "ModuleRelativePath", "Public/PlotItem_PlayEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_EffectName_MetaData[] = {
		{ "Category", "PlotItem_PlayEffect" },
		{ "DisplayName", "\xe7\x89\xb9\xe6\x95\x88\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem_PlayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_EffectName = { "EffectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_PlayEffect, EffectName), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_EffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_EffectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Effect_MetaData[] = {
		{ "AllowedClasses", "ParticleSystem" },
		{ "Category", "PlotItem_PlayEffect" },
		{ "DesignerRebuild", "" },
		{ "DisplayName", "\xe7\x89\xb9\xe6\x95\x88\xe8\xb5\x84\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/PlotItem_PlayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_PlayEffect, Effect), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PlotItem_PlayEffect" },
		{ "DesignerRebuild", "" },
		{ "DisplayName", "\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PlotItem_PlayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_PlayEffect, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "PlotItem_PlayEffect" },
		{ "DesignerRebuild", "" },
		{ "DisplayName", "\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/PlotItem_PlayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_PlayEffect, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide_MetaData[] = {
		{ "Category", "PlotItem_PlayEffect" },
		{ "DisplayName", "\xe9\x9a\x90\xe8\x97\x8f" },
		{ "ModuleRelativePath", "Public/PlotItem_PlayEffect.h" },
	};
#endif
	void Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide_SetBit(void* Obj)
	{
		((UPlotItem_PlayEffect*)Obj)->bHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide = { "bHide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotItem_PlayEffect), &Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_PlayEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_EffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_PlayEffect_Statics::NewProp_bHide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_PlayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_PlayEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_PlayEffect_Statics::ClassParams = {
		&UPlotItem_PlayEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_PlayEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_PlayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_PlayEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_PlayEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_PlayEffect, 2901618287);
	template<> PLOT_API UClass* StaticClass<UPlotItem_PlayEffect>()
	{
		return UPlotItem_PlayEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_PlayEffect(Z_Construct_UClass_UPlotItem_PlayEffect, &UPlotItem_PlayEffect::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_PlayEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_PlayEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
