// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;
#ifdef PLOT_PlotItem_Talk_generated_h
#error "PlotItem_Talk.generated.h already included, missing '#pragma once' in PlotItem_Talk.h"
#endif
#define PLOT_PlotItem_Talk_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_15_DELEGATE \
struct PlotItem_Talk_eventOnTalkTextChange_Parms \
{ \
	FString TalkText; \
}; \
static inline void FOnTalkTextChange_DelegateWrapper(const FMulticastScriptDelegate& OnTalkTextChange, const FString& TalkText) \
{ \
	PlotItem_Talk_eventOnTalkTextChange_Parms Parms; \
	Parms.TalkText=TalkText; \
	OnTalkTextChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execGetImg); \
	DECLARE_FUNCTION(execGetContentStr); \
	DECLARE_FUNCTION(execGetSpeakerName);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execGetImg); \
	DECLARE_FUNCTION(execGetContentStr); \
	DECLARE_FUNCTION(execGetSpeakerName);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotItem_Talk(); \
	friend struct Z_Construct_UClass_UPlotItem_Talk_Statics; \
public: \
	DECLARE_CLASS(UPlotItem_Talk, UPlotSaveItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem_Talk)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlotItem_Talk(); \
	friend struct Z_Construct_UClass_UPlotItem_Talk_Statics; \
public: \
	DECLARE_CLASS(UPlotItem_Talk, UPlotSaveItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem_Talk)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotItem_Talk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotItem_Talk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem_Talk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem_Talk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem_Talk(UPlotItem_Talk&&); \
	NO_API UPlotItem_Talk(const UPlotItem_Talk&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem_Talk(UPlotItem_Talk&&); \
	NO_API UPlotItem_Talk(const UPlotItem_Talk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem_Talk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem_Talk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotItem_Talk)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Name2Img() { return STRUCT_OFFSET(UPlotItem_Talk, Name2Img); }


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_12_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotItem_Talk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotItem_Talk_h


#define FOREACH_ENUM_ETALKSTATE(op) \
	op(ETalkState::Noraml) \
	op(ETalkState::Talk) \
	op(ETalkState::CountDown) 

enum class ETalkState : uint8;
template<> PLOT_API UEnum* StaticEnum<ETalkState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
