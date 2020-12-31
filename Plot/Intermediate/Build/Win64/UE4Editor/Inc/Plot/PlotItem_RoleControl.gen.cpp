// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Plot/Public/PlotItem_RoleControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotItem_RoleControl() {}
// Cross Module References
	PLOT_API UFunction* Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature();
	PLOT_API UClass* Z_Construct_UClass_APlotRoleActor();
	PLOT_API UScriptStruct* Z_Construct_UScriptStruct_FPlotRoleControlArgs();
	UPackage* Z_Construct_UPackage__Script_Plot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PLOT_API UClass* Z_Construct_UClass_APlotRoleActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_RoleControl_NoRegister();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem_RoleControl();
	PLOT_API UClass* Z_Construct_UClass_UPlotItem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotRoleActor, nullptr, "OnPlayAnimEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FPlotRoleControlArgs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOT_API uint32 Get_Z_Construct_UScriptStruct_FPlotRoleControlArgs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotRoleControlArgs, Z_Construct_UPackage__Script_Plot(), TEXT("PlotRoleControlArgs"), sizeof(FPlotRoleControlArgs), Get_Z_Construct_UScriptStruct_FPlotRoleControlArgs_Hash());
	}
	return Singleton;
}
template<> PLOT_API UScriptStruct* StaticStruct<FPlotRoleControlArgs>()
{
	return FPlotRoleControlArgs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotRoleControlArgs(FPlotRoleControlArgs::StaticStruct, TEXT("/Script/Plot"), TEXT("PlotRoleControlArgs"), false, nullptr, nullptr);
static struct FScriptStruct_Plot_StaticRegisterNativesFPlotRoleControlArgs
{
	FScriptStruct_Plot_StaticRegisterNativesFPlotRoleControlArgs()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotRoleControlArgs")),new UScriptStruct::TCppStructOps<FPlotRoleControlArgs>);
	}
} ScriptStruct_Plot_StaticRegisterNativesFPlotRoleControlArgs;
	struct Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModelID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopNum;
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
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotRoleControlArgs>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ShowName_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ShowName = { "ShowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleControlArgs, ShowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ShowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ShowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ModelID_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe8\xb5\x84\xe6\xba\x90\xe9\x85\x8d\xe7\xbd\xaeID" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ModelID = { "ModelID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleControlArgs, ModelID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ModelID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ModelID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Anim_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "MetaClass", "AnimSequence" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleControlArgs, Anim), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_LoopNum_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe5\xbe\xaa\xe7\x8e\xaf\xe6\xac\xa1\xe6\x95\xb0 0\xe4\xb8\x80\xe7\x9b\xb4\xe5\xbe\xaa\xe7\x8e\xaf" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_LoopNum = { "LoopNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleControlArgs, LoopNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_LoopNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_LoopNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleControlArgs, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotRoleControlArgs, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide_MetaData[] = {
		{ "Category", "PlotRoleControlArgs" },
		{ "DisplayName", "\xe9\x9a\x90\xe8\x97\x8f\xe8\xa7\x92\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide_SetBit(void* Obj)
	{
		((FPlotRoleControlArgs*)Obj)->bHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide = { "bHide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlotRoleControlArgs), &Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ShowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_ModelID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_LoopNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::NewProp_bHide,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
		nullptr,
		&NewStructOps,
		"PlotRoleControlArgs",
		sizeof(FPlotRoleControlArgs),
		alignof(FPlotRoleControlArgs),
		Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotRoleControlArgs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotRoleControlArgs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Plot();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotRoleControlArgs"), sizeof(FPlotRoleControlArgs), Get_Z_Construct_UScriptStruct_FPlotRoleControlArgs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotRoleControlArgs_Hash() { return 2579276975U; }
	DEFINE_FUNCTION(APlotRoleActor::execUpdatePosAndRot)
	{
		P_GET_STRUCT_REF(FPlotRoleControlArgs,Z_Param_Out_InArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePosAndRot(Z_Param_Out_InArgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlotRoleActor::execSetData)
	{
		P_GET_STRUCT_REF(FPlotRoleControlArgs,Z_Param_Out_InArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Out_InArgs);
		P_NATIVE_END;
	}
	static FName NAME_APlotRoleActor_Jump = FName(TEXT("Jump"));
	void APlotRoleActor::Jump()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlotRoleActor_Jump),NULL);
	}
	static FName NAME_APlotRoleActor_OnUpdate = FName(TEXT("OnUpdate"));
	void APlotRoleActor::OnUpdate(FPlotRoleControlArgs const& InArgs)
	{
		PlotRoleActor_eventOnUpdate_Parms Parms;
		Parms.InArgs=InArgs;
		ProcessEvent(FindFunctionChecked(NAME_APlotRoleActor_OnUpdate),&Parms);
	}
	static FName NAME_APlotRoleActor_PlayAnim = FName(TEXT("PlayAnim"));
	void APlotRoleActor::PlayAnim(FSoftObjectPath const& InPath, bool bLoop)
	{
		PlotRoleActor_eventPlayAnim_Parms Parms;
		Parms.InPath=InPath;
		Parms.bLoop=bLoop ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlotRoleActor_PlayAnim),&Parms);
	}
	void APlotRoleActor::StaticRegisterNativesAPlotRoleActor()
	{
		UClass* Class = APlotRoleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &APlotRoleActor::execSetData },
			{ "UpdatePosAndRot", &APlotRoleActor::execUpdatePosAndRot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlotRoleActor_Jump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotRoleActor_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotRoleActor, nullptr, "Jump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotRoleActor_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotRoleActor_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArgs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotRoleActor_eventOnUpdate_Parms, InArgs), Z_Construct_UScriptStruct_FPlotRoleControlArgs, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::NewProp_InArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::NewProp_InArgs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::NewProp_InArgs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotRoleActor, nullptr, "OnUpdate", nullptr, nullptr, sizeof(PlotRoleActor_eventOnUpdate_Parms), Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotRoleActor_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotRoleActor_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPath;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotRoleActor_eventPlayAnim_Parms, InPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_InPath_MetaData)) };
	void Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((PlotRoleActor_eventPlayAnim_Parms*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotRoleActor_eventPlayAnim_Parms), &Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_InPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::NewProp_bLoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotRoleActor, nullptr, "PlayAnim", nullptr, nullptr, sizeof(PlotRoleActor_eventPlayAnim_Parms), Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotRoleActor_PlayAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotRoleActor_PlayAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlotRoleActor_SetData_Statics
	{
		struct PlotRoleActor_eventSetData_Parms
		{
			FPlotRoleControlArgs InArgs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArgs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_SetData_Statics::NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotRoleActor_SetData_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotRoleActor_eventSetData_Parms, InArgs), Z_Construct_UScriptStruct_FPlotRoleControlArgs, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_SetData_Statics::NewProp_InArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_SetData_Statics::NewProp_InArgs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotRoleActor_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotRoleActor_SetData_Statics::NewProp_InArgs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotRoleActor_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotRoleActor, nullptr, "SetData", nullptr, nullptr, sizeof(PlotRoleActor_eventSetData_Parms), Z_Construct_UFunction_APlotRoleActor_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotRoleActor_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotRoleActor_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics
	{
		struct PlotRoleActor_eventUpdatePosAndRot_Parms
		{
			FPlotRoleControlArgs InArgs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArgs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotRoleActor_eventUpdatePosAndRot_Parms, InArgs), Z_Construct_UScriptStruct_FPlotRoleControlArgs, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::NewProp_InArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::NewProp_InArgs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::NewProp_InArgs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotRoleActor, nullptr, "UpdatePosAndRot", nullptr, nullptr, sizeof(PlotRoleActor_eventUpdatePosAndRot_Parms), Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlotRoleActor_NoRegister()
	{
		return APlotRoleActor::StaticClass();
	}
	struct Z_Construct_UClass_APlotRoleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayAnimEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayAnimEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlotRoleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlotRoleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlotRoleActor_Jump, "Jump" }, // 3230790645
		{ &Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature, "OnPlayAnimEnd__DelegateSignature" }, // 3016405878
		{ &Z_Construct_UFunction_APlotRoleActor_OnUpdate, "OnUpdate" }, // 3568659959
		{ &Z_Construct_UFunction_APlotRoleActor_PlayAnim, "PlayAnim" }, // 2196899432
		{ &Z_Construct_UFunction_APlotRoleActor_SetData, "SetData" }, // 853743447
		{ &Z_Construct_UFunction_APlotRoleActor_UpdatePosAndRot, "UpdatePosAndRot" }, // 4162499253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlotRoleActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe4\xbe\x9d\xe9\x99\x84\n" },
		{ "IncludePath", "PlotItem_RoleControl.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe4\xbe\x9d\xe9\x99\x84" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlotRoleActor_Statics::NewProp_OnPlayAnimEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlotRoleActor_Statics::NewProp_OnPlayAnimEnd = { "OnPlayAnimEnd", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlotRoleActor, OnPlayAnimEnd), Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APlotRoleActor_Statics::NewProp_OnPlayAnimEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlotRoleActor_Statics::NewProp_OnPlayAnimEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlotRoleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlotRoleActor_Statics::NewProp_OnPlayAnimEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlotRoleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlotRoleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlotRoleActor_Statics::ClassParams = {
		&APlotRoleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlotRoleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlotRoleActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlotRoleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlotRoleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlotRoleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlotRoleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlotRoleActor, 310230890);
	template<> PLOT_API UClass* StaticClass<APlotRoleActor>()
	{
		return APlotRoleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlotRoleActor(Z_Construct_UClass_APlotRoleActor, &APlotRoleActor::StaticClass, TEXT("/Script/Plot"), TEXT("APlotRoleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlotRoleActor);
	DEFINE_FUNCTION(UPlotItem_RoleControl::execOnAnimEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimEnd();
		P_NATIVE_END;
	}
	void UPlotItem_RoleControl::StaticRegisterNativesUPlotItem_RoleControl()
	{
		UClass* Class = UPlotItem_RoleControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAnimEnd", &UPlotItem_RoleControl::execOnAnimEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotItem_RoleControl, nullptr, "OnAnimEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotItem_RoleControl_NoRegister()
	{
		return UPlotItem_RoleControl::StaticClass();
	}
	struct Z_Construct_UClass_UPlotItem_RoleControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Args;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotItem_RoleControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Plot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotItem_RoleControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotItem_RoleControl_OnAnimEnd, "OnAnimEnd" }, // 4130260291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleControl_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\xa1\xe7\x9b\xae\n" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "IncludePath", "PlotItem_RoleControl.h" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x8e\xa7\xe5\x88\xb6\xe6\x9d\xa1\xe7\x9b\xae" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Args_MetaData[] = {
		{ "Category", "PlotItem_RoleControl" },
		{ "DesignerRebuild", "" },
		{ "DisplayName", "\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_RoleControl, Args), Z_Construct_UScriptStruct_FPlotRoleControlArgs, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Args_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotItem_RoleControl.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotItem_RoleControl, Role), Z_Construct_UClass_APlotRoleActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotItem_RoleControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotItem_RoleControl_Statics::NewProp_Role,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotItem_RoleControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotItem_RoleControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotItem_RoleControl_Statics::ClassParams = {
		&UPlotItem_RoleControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotItem_RoleControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleControl_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotItem_RoleControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotItem_RoleControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotItem_RoleControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotItem_RoleControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotItem_RoleControl, 1988514721);
	template<> PLOT_API UClass* StaticClass<UPlotItem_RoleControl>()
	{
		return UPlotItem_RoleControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotItem_RoleControl(Z_Construct_UClass_UPlotItem_RoleControl, &UPlotItem_RoleControl::StaticClass, TEXT("/Script/Plot"), TEXT("UPlotItem_RoleControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotItem_RoleControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
