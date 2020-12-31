// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotCondition() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotCondition_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Plot();
	PLOT_API UClass* Z_Construct_UClass_UPlot_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotReadKeyCondition_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotReadKeyCondition();
	PLOT_API UClass* Z_Construct_UClass_UPlotSelectNumCondition_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotSelectNumCondition();
	PLOT_API UClass* Z_Construct_UClass_UPlotTimeoutCondition_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotTimeoutCondition();
// End Cross Module References
	DEFINE_FUNCTION(UPlotCondition::execGetPlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlot**)Z_Param__Result=P_THIS->GetPlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotCondition::execCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Check_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UPlotCondition_Check = FName(TEXT("Check"));
	bool UPlotCondition::Check()
	{
		PlotCondition_eventCheck_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UPlotCondition_Check),&Parms);
		return !!Parms.ReturnValue;
	}
	void UPlotCondition::StaticRegisterNativesUPlotCondition()
	{
		UClass* Class = UPlotCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Check", &UPlotCondition::execCheck },
			{ "GetPlot", &UPlotCondition::execGetPlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotCondition_Check_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlotCondition_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlotCondition_eventCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlotCondition_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotCondition_eventCheck_Parms), &Z_Construct_UFunction_UPlotCondition_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotCondition_Check_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotCondition_Check_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotCondition_Check_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotCondition_Check_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotCondition, nullptr, "Check", nullptr, nullptr, sizeof(PlotCondition_eventCheck_Parms), Z_Construct_UFunction_UPlotCondition_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_Check_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotCondition_Check_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_Check_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotCondition_Check()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotCondition_Check_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotCondition_GetPlot_Statics
	{
		struct PlotCondition_eventGetPlot_Parms
		{
			UPlot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotCondition_eventGetPlot_Parms, ReturnValue), Z_Construct_UClass_UPlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotCondition, nullptr, "GetPlot", nullptr, nullptr, sizeof(PlotCondition_eventGetPlot_Parms), Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotCondition_GetPlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotCondition_GetPlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotCondition_NoRegister()
	{
		return UPlotCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlotCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotCondition_Check, "Check" }, // 672266112
		{ &Z_Construct_UFunction_UPlotCondition_GetPlot, "GetPlot" }, // 435016519
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlotCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotCondition_Statics::ClassParams = {
		&UPlotCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotCondition, 4268132888);
	template<> PLOT_API UClass* StaticClass<UPlotCondition>()
	{
		return UPlotCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotCondition(Z_Construct_UClass_UPlotCondition, &UPlotCondition::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotCondition);
	void UPlotReadKeyCondition::StaticRegisterNativesUPlotReadKeyCondition()
	{
	}
	UClass* Z_Construct_UClass_UPlotReadKeyCondition_NoRegister()
	{
		return UPlotReadKeyCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlotReadKeyCondition_Statics
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
	UObject* (*const Z_Construct_UClass_UPlotReadKeyCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotReadKeyCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe6\x96\x87\xe6\x9c\xac\xe5\xb7\xb2\xe8\xaf\xbb" },
		{ "IncludePath", "PlotCondition.h" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotReadKeyCondition_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "PlotReadKeyCondition" },
		{ "DisplayName", "\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d.KeyID" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotReadKeyCondition_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotReadKeyCondition, Key), METADATA_PARAMS(Z_Construct_UClass_UPlotReadKeyCondition_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotReadKeyCondition_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotReadKeyCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotReadKeyCondition_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotReadKeyCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotReadKeyCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotReadKeyCondition_Statics::ClassParams = {
		&UPlotReadKeyCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotReadKeyCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotReadKeyCondition_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotReadKeyCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotReadKeyCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotReadKeyCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotReadKeyCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotReadKeyCondition, 3832015306);
	template<> PLOT_API UClass* StaticClass<UPlotReadKeyCondition>()
	{
		return UPlotReadKeyCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotReadKeyCondition(Z_Construct_UClass_UPlotReadKeyCondition, &UPlotReadKeyCondition::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotReadKeyCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotReadKeyCondition);
	void UPlotSelectNumCondition::StaticRegisterNativesUPlotSelectNumCondition()
	{
	}
	UClass* Z_Construct_UClass_UPlotSelectNumCondition_NoRegister()
	{
		return UPlotSelectNumCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlotSelectNumCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotSelectNumCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSelectNumCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe9\x80\x89\xe6\x8b\xa9\xe6\xac\xa1\xe6\x95\xb0" },
		{ "IncludePath", "PlotCondition.h" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotSelectNumCondition_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "PlotSelectNumCondition" },
		{ "DisplayName", "\xe9\x80\x89\xe6\x8b\xa9\xe6\xac\xa1\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotSelectNumCondition_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotSelectNumCondition, Num), METADATA_PARAMS(Z_Construct_UClass_UPlotSelectNumCondition_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSelectNumCondition_Statics::NewProp_Num_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotSelectNumCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotSelectNumCondition_Statics::NewProp_Num,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotSelectNumCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotSelectNumCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotSelectNumCondition_Statics::ClassParams = {
		&UPlotSelectNumCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotSelectNumCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSelectNumCondition_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotSelectNumCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotSelectNumCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotSelectNumCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotSelectNumCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotSelectNumCondition, 837884307);
	template<> PLOT_API UClass* StaticClass<UPlotSelectNumCondition>()
	{
		return UPlotSelectNumCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotSelectNumCondition(Z_Construct_UClass_UPlotSelectNumCondition, &UPlotSelectNumCondition::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotSelectNumCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotSelectNumCondition);
	void UPlotTimeoutCondition::StaticRegisterNativesUPlotTimeoutCondition()
	{
	}
	UClass* Z_Construct_UClass_UPlotTimeoutCondition_NoRegister()
	{
		return UPlotTimeoutCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlotTimeoutCondition_Statics
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
	UObject* (*const Z_Construct_UClass_UPlotTimeoutCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotTimeoutCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb6\x85\xe6\x97\xb6" },
		{ "IncludePath", "PlotCondition.h" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotTimeoutCondition_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "PlotTimeoutCondition" },
		{ "DisplayName", "Key" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotTimeoutCondition_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotTimeoutCondition, Key), METADATA_PARAMS(Z_Construct_UClass_UPlotTimeoutCondition_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotTimeoutCondition_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotTimeoutCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotTimeoutCondition_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotTimeoutCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotTimeoutCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotTimeoutCondition_Statics::ClassParams = {
		&UPlotTimeoutCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotTimeoutCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotTimeoutCondition_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotTimeoutCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotTimeoutCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotTimeoutCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotTimeoutCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotTimeoutCondition, 288224155);
	template<> PLOT_API UClass* StaticClass<UPlotTimeoutCondition>()
	{
		return UPlotTimeoutCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotTimeoutCondition(Z_Construct_UClass_UPlotTimeoutCondition, &UPlotTimeoutCondition::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotTimeoutCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotTimeoutCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
