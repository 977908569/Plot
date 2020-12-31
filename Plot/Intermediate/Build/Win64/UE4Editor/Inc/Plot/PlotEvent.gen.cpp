// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotEvent() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotEvent_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UClass* Z_Construct_UClass_UPlotEvent_JumpKey_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotEvent_JumpKey();
// End Cross Module References
	DEFINE_FUNCTION(UPlotEvent::execDoEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoEvent_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UPlotEvent_DoEvent = FName(TEXT("DoEvent"));
	bool UPlotEvent::DoEvent()
	{
		PlotEvent_eventDoEvent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UPlotEvent_DoEvent),&Parms);
		return !!Parms.ReturnValue;
	}
	void UPlotEvent::StaticRegisterNativesUPlotEvent()
	{
		UClass* Class = UPlotEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoEvent", &UPlotEvent::execDoEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotEvent_DoEvent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlotEvent_eventDoEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotEvent_eventDoEvent_Parms), &Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotEvent, nullptr, "DoEvent", nullptr, nullptr, sizeof(PlotEvent_eventDoEvent_Parms), Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotEvent_DoEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotEvent_DoEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotEvent_NoRegister()
	{
		return UPlotEvent::StaticClass();
	}
	struct Z_Construct_UClass_UPlotEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotEvent_DoEvent, "DoEvent" }, // 1370889016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlotEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotEvent_Statics::ClassParams = {
		&UPlotEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotEvent, 2840154367);
	template<> PLOT_API UClass* StaticClass<UPlotEvent>()
	{
		return UPlotEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotEvent(Z_Construct_UClass_UPlotEvent, &UPlotEvent::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotEvent);
	void UPlotEvent_JumpKey::StaticRegisterNativesUPlotEvent_JumpKey()
	{
	}
	UClass* Z_Construct_UClass_UPlotEvent_JumpKey_NoRegister()
	{
		return UPlotEvent_JumpKey::StaticClass();
	}
	struct Z_Construct_UClass_UPlotEvent_JumpKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotEvent_JumpKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotEvent_JumpKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe8\xb7\xb3\xe8\xbd\xac\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84Key" },
		{ "IncludePath", "PlotEvent.h" },
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotEvent_JumpKey_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "PlotEvent_JumpKey" },
		{ "DisplayName", "\xe8\xa6\x81\xe8\xb7\xb3\xe8\xbd\xac\xe7\x9a\x84Key" },
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotEvent_JumpKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotEvent_JumpKey, Key), METADATA_PARAMS(Z_Construct_UClass_UPlotEvent_JumpKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotEvent_JumpKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotEvent_JumpKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotEvent_JumpKey_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotEvent_JumpKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotEvent_JumpKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotEvent_JumpKey_Statics::ClassParams = {
		&UPlotEvent_JumpKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotEvent_JumpKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotEvent_JumpKey_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotEvent_JumpKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotEvent_JumpKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotEvent_JumpKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotEvent_JumpKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotEvent_JumpKey, 4293693859);
	template<> PLOT_API UClass* StaticClass<UPlotEvent_JumpKey>()
	{
		return UPlotEvent_JumpKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotEvent_JumpKey(Z_Construct_UClass_UPlotEvent_JumpKey, &UPlotEvent_JumpKey::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotEvent_JumpKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotEvent_JumpKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
