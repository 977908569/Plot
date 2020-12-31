// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLOT_PlotEnum_generated_h
#error "PlotEnum.generated.h already included, missing '#pragma once' in PlotEnum.h"
#endif
#define PLOT_PlotEnum_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSelectItemData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PLOT_API UScriptStruct* StaticStruct<struct FSelectItemData>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotRoleInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PLOT_API UScriptStruct* StaticStruct<struct FPlotRoleInfo>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotAccessoriesInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PLOT_API UScriptStruct* StaticStruct<struct FPlotAccessoriesInfo>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotName2Img_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PLOT_API UScriptStruct* StaticStruct<struct FPlotName2Img>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PLOT_API UScriptStruct* StaticStruct<struct FPlotInfo>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotCameraInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PLOT_API UScriptStruct* StaticStruct<struct FPlotCameraInfo>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTalkConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PLOT_API UScriptStruct* StaticStruct<struct FTalkConfig>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConfigItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PLOT_API UScriptStruct* StaticStruct<struct FConfigItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotEnum_h


#define FOREACH_ENUM_EDIALOGUETYPE(op) \
	op(EDialogueType::Normal) \
	op(EDialogueType::Fight) \
	op(EDialogueType::Animation) 

enum class EDialogueType : uint8;
template<> PLOT_API UEnum* StaticEnum<EDialogueType>();

#define FOREACH_ENUM_EFOWARDTYPE(op) \
	op(EFowardType::Click) \
	op(EFowardType::Time) 

enum class EFowardType : uint8;
template<> PLOT_API UEnum* StaticEnum<EFowardType>();

#define FOREACH_ENUM_EPLAYMODE(op) \
	op(EPlayMode::Normal) \
	op(EPlayMode::Auto) \
	op(EPlayMode::Jump) 

enum class EPlayMode : uint8;
template<> PLOT_API UEnum* StaticEnum<EPlayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
