// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_Branch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_Branch() {}
// Cross Module References
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FBranchItemStruct();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectItemData();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Branch_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Branch();
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveItem();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Branch_Item_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Branch_Item();
// End Cross Module References

static_assert(std::is_polymorphic<FBranchItemStruct>() == std::is_polymorphic<FSelectItemData>(), "USTRUCT FBranchItemStruct cannot be polymorphic unless super FSelectItemData is polymorphic");

class UScriptStruct* FBranchItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FBranchItemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchItemStruct, Z_Construct_UPackage__Script_Plot(), TEXT("BranchItemStruct"), sizeof(FBranchItemStruct), Get_Z_Construct_UScriptStruct_FBranchItemStruct_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FBranchItemStruct>()
{
	return FBranchItemStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchItemStruct(FBranchItemStruct::StaticStruct, TEXT("/Script/Plot"), TEXT("BranchItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFBranchItemStruct
{
	FScriptStruct_Plot_StaticRegisterNativesFBranchItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchItemStruct")),new UScriptStruct::TCppStructOps<FBranchItemStruct>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFBranchItemStruct;
	struct Z_Construct_UScriptStruct_FBranchItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JumpKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotItem_Branch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchItemStruct_Statics::NewProp_JumpKey_MetaData[] = {
		{ "Category", "BranchItemStruct" },
		{ "DisplayName", "\xe8\xb7\xb3\xe8\xbd\xacKey" },
		{ "ModuleRelativePath", "Public/PlotItem_Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBranchItemStruct_Statics::NewProp_JumpKey = { "JumpKey", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBranchItemStruct, JumpKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchItemStruct_Statics::NewProp_JumpKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchItemStruct_Statics::NewProp_JumpKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchItemStruct_Statics::NewProp_JumpKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		Z_Construct_UScriptStruct_FSelectItemData,
		&NewStructOps,
		"BranchItemStruct",
		sizeof(FBranchItemStruct),
		alignof(FBranchItemStruct),
		Z_Construct_UScriptStruct_FBranchItemStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchItemStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchItemStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchItemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchItemStruct"), sizeof(FBranchItemStruct), Get_Z_Construct_UScriptStruct_FBranchItemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchItemStruct_Hash() { return 3669535444U; }
	DEFINE_FUNCTION(UPlotItem_Branch::execOnSelect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelect(Z_Param_InIndex);
		P_NATIVE_END;
	}
	void UPlotItem_Branch::StaticRegisterNativesUPlotItem_Branch()
	{
		UClass* Class = UPlotItem_Branch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelect", &UPlotItem_Branch::execOnSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics
	{
		struct PlotItem_Branch_eventOnSelect_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_Branch_eventOnSelect_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Branch, nullptr, "OnSelect", nullptr, nullptr, sizeof(PlotItem_Branch_eventOnSelect_Parms), Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Branch_OnSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Branch_OnSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotItem_Branch_NoRegister()
	{
		return UPlotItem_Branch::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Branch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Branchs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Branchs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Branchs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Branch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotSaveItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotItem_Branch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotItem_Branch_OnSelect, "OnSelect" }, // 993113750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Branch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe5\x88\x86\xe6\x94\xaf" },
		{ "IncludePath", "PlotItem_Branch.h" },
		{ "ModuleRelativePath", "Public/PlotItem_Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs_Inner = { "Branchs", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBranchItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs_MetaData[] = {
		{ "Category", "PlotItem_Branch" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/PlotItem_Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs = { "Branchs", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Branch, Branchs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_Branch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Branch_Statics::NewProp_Branchs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Branch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Branch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Branch_Statics::ClassParams = {
		&UPlotItem_Branch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotItem_Branch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Branch_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Branch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Branch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Branch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Branch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Branch, 1225374777);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Branch>()
	{
		return UPlotItem_Branch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Branch(Z_Construct_UClass_UPlotItem_Branch, &UPlotItem_Branch::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Branch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Branch);
	void UPlotItem_Branch_Item::StaticRegisterNativesUPlotItem_Branch_Item()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_Branch_Item_NoRegister()
	{
		return UPlotItem_Branch_Item::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Branch_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Branch_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotSaveItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Branch_Item_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x88\x86\xe6\x94\xaf\xe6\x9d\xa1\xe7\x9b\xae" },
		{ "IncludePath", "PlotItem_Branch.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PlotItem_Branch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Branch_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Branch_Item>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Branch_Item_Statics::ClassParams = {
		&UPlotItem_Branch_Item::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Branch_Item_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Branch_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Branch_Item()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Branch_Item_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Branch_Item, 3860087771);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Branch_Item>()
	{
		return UPlotItem_Branch_Item::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Branch_Item(Z_Construct_UClass_UPlotItem_Branch_Item, &UPlotItem_Branch_Item::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Branch_Item"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Branch_Item);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
