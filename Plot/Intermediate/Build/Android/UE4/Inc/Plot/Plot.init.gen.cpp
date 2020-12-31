// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlot_init() {}
	PLOT_API UFunction* Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature();
	PLOT_API UFunction* Z_Construct_UDelegateFunction_UPlotWidget_OnSelect__DelegateSignature();
	PLOT_API UFunction* Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature();
	PLOT_API UFunction* Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Plot()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPlotWidget_OnSelect__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_APlotRoleActor_OnPlayAnimEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPlotItem_Talk_OnTalkTextChange__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Plot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD1443A77,
				0xC67CD602,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
