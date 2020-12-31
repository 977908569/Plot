// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_Sequence() {}
// Cross Module References
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceItemStruct();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectItemData();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Sequence_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Sequence();
	PLOT_API UClass* Z_Construct_UClass_UPlotSaveItem();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Sequence_Item_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_Sequence_Item();
// End Cross Module References

static_assert(std::is_polymorphic<FSequenceItemStruct>() == std::is_polymorphic<FSelectItemData>(), "USTRUCT FSequenceItemStruct cannot be polymorphic unless super FSelectItemData is polymorphic");

class UScriptStruct* FSequenceItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FSequenceItemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceItemStruct, Z_Construct_UPackage__Script_Plot(), TEXT("SequenceItemStruct"), sizeof(FSequenceItemStruct), Get_Z_Construct_UScriptStruct_FSequenceItemStruct_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FSequenceItemStruct>()
{
	return FSequenceItemStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSequenceItemStruct(FSequenceItemStruct::StaticStruct, TEXT("/Script/Plot"), TEXT("SequenceItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFSequenceItemStruct
{
	FScriptStruct_Plot_StaticRegisterNativesFSequenceItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SequenceItemStruct")),new UScriptStruct::TCppStructOps<FSequenceItemStruct>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFSequenceItemStruct;
	struct Z_Construct_UScriptStruct_FSequenceItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlotItem_Sequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceItemStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		Z_Construct_UScriptStruct_FSelectItemData,
		&NewStructOps,
		"SequenceItemStruct",
		sizeof(FSequenceItemStruct),
		alignof(FSequenceItemStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceItemStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSequenceItemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SequenceItemStruct"), sizeof(FSequenceItemStruct), Get_Z_Construct_UScriptStruct_FSequenceItemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSequenceItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSequenceItemStruct_Hash() { return 552070179U; }
	DEFINE_FUNCTION(UPlotItem_Sequence::execOnSelect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelect(Z_Param_InIndex);
		P_NATIVE_END;
	}
	void UPlotItem_Sequence::StaticRegisterNativesUPlotItem_Sequence()
	{
		UClass* Class = UPlotItem_Sequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelect", &UPlotItem_Sequence::execOnSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics
	{
		struct PlotItem_Sequence_eventOnSelect_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotItem_Sequence_eventOnSelect_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_Sequence, nullptr, "OnSelect", nullptr, nullptr, sizeof(PlotItem_Sequence_eventOnSelect_Parms), Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_Sequence_OnSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_Sequence_OnSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotItem_Sequence_NoRegister()
	{
		return UPlotItem_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotSaveItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotItem_Sequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotItem_Sequence_OnSelect, "OnSelect" }, // 1197269042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Sequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe9\x81\x8d\xe5\x8e\x86" },
		{ "IncludePath", "PlotItem_Sequence.h" },
		{ "ModuleRelativePath", "Public/PlotItem_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSequenceItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "PlotItem_Sequence" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/PlotItem_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_Sequence, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_Sequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_Sequence_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Sequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Sequence_Statics::ClassParams = {
		&UPlotItem_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotItem_Sequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Sequence_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Sequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Sequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Sequence, 4269444190);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Sequence>()
	{
		return UPlotItem_Sequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Sequence(Z_Construct_UClass_UPlotItem_Sequence, &UPlotItem_Sequence::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Sequence);
	void UPlotItem_Sequence_Item::StaticRegisterNativesUPlotItem_Sequence_Item()
	{
	}
	UClass* Z_Construct_UClass_UPlotItem_Sequence_Item_NoRegister()
	{
		return UPlotItem_Sequence_Item::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_Sequence_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotSaveItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x81\x8d\xe5\x8e\x86\xe6\x9d\xa1\xe7\x9b\xae" },
		{ "IncludePath", "PlotItem_Sequence.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PlotItem_Sequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_Sequence_Item>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::ClassParams = {
		&UPlotItem_Sequence_Item::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_Sequence_Item()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_Sequence_Item_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_Sequence_Item, 457545287);
	template<> PLOT_API UClass* StaticClass<UPlotItem_Sequence_Item>()
	{
		return UPlotItem_Sequence_Item::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_Sequence_Item(Z_Construct_UClass_UPlotItem_Sequence_Item, &UPlotItem_Sequence_Item::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_Sequence_Item"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_Sequence_Item);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
