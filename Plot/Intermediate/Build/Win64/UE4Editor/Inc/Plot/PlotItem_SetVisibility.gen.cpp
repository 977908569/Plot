// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_SetVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_SetVisibility() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_SetVisibility_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_SetVisibility();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
	UPackage* Z_Construct_UPackage__Script_Plot();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	void UPlotItem_SetVisibility::StaticRegisterNativesUPlotItem_SetVisibility()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_SetVisibility_NoRegister()
	{
		return UPlotItem_SetVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_SetVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_SetVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_SetVisibility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xaeUI\xe5\xb0\x8f\xe9\x83\xa8\xe4\xbb\xb6" },
		{ "IncludePath", "PlotItem_SetVisibility.h" },
		{ "ModuleRelativePath", "Public/PlotItem_SetVisibility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_WidgetName_MetaData[] = {
		{ "Category", "PlotItem_SetVisibility" },
		{ "DisplayName", "\xe9\x83\xa8\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem_SetVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_SetVisibility, WidgetName), METADATA_PARAMS(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_WidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_WidgetName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "PlotItem_SetVisibility" },
		{ "DisplayName", "\xe6\x98\xbe\xe7\xa4\xba\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/PlotItem_SetVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_SetVisibility, Visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_WidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_SetVisibility_Statics::NewProp_Visibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_SetVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_SetVisibility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_SetVisibility_Statics::ClassParams = {
		&UPlotItem_SetVisibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotItem_SetVisibility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_SetVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_SetVisibility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_SetVisibility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_SetVisibility, 182757362);
	template<> PLOT_API UClass* StaticClass<UPlotItem_SetVisibility>()
	{
		return UPlotItem_SetVisibility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_SetVisibility(Z_Construct_UClass_UPlotItem_SetVisibility, &UPlotItem_SetVisibility::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_SetVisibility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_SetVisibility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
