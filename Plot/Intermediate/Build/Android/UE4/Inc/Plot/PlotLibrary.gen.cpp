// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotLibrary() {}
// Cross Module References
	PLOT_API UClass* Z_Construct_UClass_UPlotLibrary_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_APlotRoleActor_NoRegister();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotName2Img();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotRoleInfo();
// End Cross Module References
	DEFINE_FUNCTION(UPlotLibrary::execGetPlotNameConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlotName2Img*)Z_Param__Result=UPlotLibrary::GetPlotNameConfig(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotLibrary::execGetPlotRoleConfig)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlotRoleInfo*)Z_Param__Result=UPlotLibrary::GetPlotRoleConfig(Z_Param_InID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotLibrary::execFindRoleByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlotRoleActor**)Z_Param__Result=UPlotLibrary::FindRoleByName(Z_Param_WorldContextObject,Z_Param_InName);
		P_NATIVE_END;
	}
	void UPlotLibrary::StaticRegisterNativesUPlotLibrary()
	{
		UClass* Class = UPlotLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindRoleByName", &UPlotLibrary::execFindRoleByName },
			{ "GetPlotNameConfig", &UPlotLibrary::execGetPlotNameConfig },
			{ "GetPlotRoleConfig", &UPlotLibrary::execGetPlotRoleConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics
	{
		struct PlotLibrary_eventFindRoleByName_Parms
		{
			UObject* WorldContextObject;
			FString InName;
			APlotRoleActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventFindRoleByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventFindRoleByName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventFindRoleByName_Parms, ReturnValue), Z_Construct_UClass_APlotRoleActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_InName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotLibrary, nullptr, "FindRoleByName", nullptr, nullptr, sizeof(PlotLibrary_eventFindRoleByName_Parms), Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotLibrary_FindRoleByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotLibrary_FindRoleByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics
	{
		struct PlotLibrary_eventGetPlotNameConfig_Parms
		{
			FString InKey;
			FPlotName2Img ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventGetPlotNameConfig_Parms, InKey), METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventGetPlotNameConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlotName2Img, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotLibrary, nullptr, "GetPlotNameConfig", nullptr, nullptr, sizeof(PlotLibrary_eventGetPlotNameConfig_Parms), Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics
	{
		struct PlotLibrary_eventGetPlotRoleConfig_Parms
		{
			int32 InID;
			FPlotRoleInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::NewProp_InID = { "InID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventGetPlotRoleConfig_Parms, InID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventGetPlotRoleConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlotRoleInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::NewProp_InID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotLibrary, nullptr, "GetPlotRoleConfig", nullptr, nullptr, sizeof(PlotLibrary_eventGetPlotRoleConfig_Parms), Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotLibrary_NoRegister()
	{
		return UPlotLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPlotLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotLibrary_FindRoleByName, "FindRoleByName" }, // 2354907693
		{ &Z_Construct_UFunction_UPlotLibrary_GetPlotNameConfig, "GetPlotNameConfig" }, // 2901511188
		{ &Z_Construct_UFunction_UPlotLibrary_GetPlotRoleConfig, "GetPlotRoleConfig" }, // 3642743683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlotLibrary.h" },
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotLibrary_Statics::ClassParams = {
		&UPlotLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotLibrary, 4133580885);
	template<> PLOT_API UClass* StaticClass<UPlotLibrary>()
	{
		return UPlotLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotLibrary(Z_Construct_UClass_UPlotLibrary, &UPlotLibrary::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
