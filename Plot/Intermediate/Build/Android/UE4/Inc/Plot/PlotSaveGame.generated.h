// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlotSaveGame;
#ifdef PLOT_PlotSaveGame_generated_h
#error "PlotSaveGame.generated.h already included, missing '#pragma once' in PlotSaveGame.h"
#endif
#define PLOT_PlotSaveGame_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execSaveKey); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execLoadPlotSaveGame);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execSaveKey); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execLoadPlotSaveGame);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotSaveGame(); \
	friend struct Z_Construct_UClass_UPlotSaveGame_Statics; \
public: \
	DECLARE_CLASS(UPlotSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotSaveGame)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPlotSaveGame(); \
	friend struct Z_Construct_UClass_UPlotSaveGame_Statics; \
public: \
	DECLARE_CLASS(UPlotSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotSaveGame)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotSaveGame(UPlotSaveGame&&); \
	NO_API UPlotSaveGame(const UPlotSaveGame&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotSaveGame(UPlotSaveGame&&); \
	NO_API UPlotSaveGame(const UPlotSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotSaveGame)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SaveKeys() { return STRUCT_OFFSET(UPlotSaveGame, SaveKeys); }


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_5_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
