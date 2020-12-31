// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
struct FSoftObjectPath;
class UPlotItem_Talk;
class UPlot;
enum class EDialogueType : uint8;
class UTextBlock;
struct FSoftClassPath;
class UPlotItem_Spine;
struct FSelectItemData;
struct FPlotCameraInfo;
class UPlotWidget;
#ifdef PLOT_PlotWidget_generated_h
#error "PlotWidget.generated.h already included, missing '#pragma once' in PlotWidget.h"
#endif
#define PLOT_PlotWidget_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_18_DELEGATE \
struct PlotWidget_eventOnSelect_Parms \
{ \
	int32 Index; \
}; \
static inline void FOnSelect_DelegateWrapper(const FMulticastScriptDelegate& OnSelect, int32 Index) \
{ \
	PlotWidget_eventOnSelect_Parms Parms; \
	Parms.Index=Index; \
	OnSelect.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_16_DELEGATE \
static inline void FOnInput_DelegateWrapper(const FMulticastScriptDelegate& OnInput) \
{ \
	OnInput.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBtnClick); \
	DECLARE_FUNCTION(execOnTalkTextChange); \
	DECLARE_FUNCTION(execSetWidgetVisibility); \
	DECLARE_FUNCTION(execSetRoleImg); \
	DECLARE_FUNCTION(execOnTalk); \
	DECLARE_FUNCTION(execDoTalk); \
	DECLARE_FUNCTION(execSetBackground); \
	DECLARE_FUNCTION(execEnterChange); \
	DECLARE_FUNCTION(execGetPlot); \
	DECLARE_FUNCTION(execGetDialogTextBlock); \
	DECLARE_FUNCTION(execRemoveInRoot); \
	DECLARE_FUNCTION(execAdd2Root); \
	DECLARE_FUNCTION(execPlayAnimByName);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBtnClick); \
	DECLARE_FUNCTION(execOnTalkTextChange); \
	DECLARE_FUNCTION(execSetWidgetVisibility); \
	DECLARE_FUNCTION(execSetRoleImg); \
	DECLARE_FUNCTION(execOnTalk); \
	DECLARE_FUNCTION(execDoTalk); \
	DECLARE_FUNCTION(execSetBackground); \
	DECLARE_FUNCTION(execEnterChange); \
	DECLARE_FUNCTION(execGetPlot); \
	DECLARE_FUNCTION(execGetDialogTextBlock); \
	DECLARE_FUNCTION(execRemoveInRoot); \
	DECLARE_FUNCTION(execAdd2Root); \
	DECLARE_FUNCTION(execPlayAnimByName);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_EVENT_PARMS \
	struct PlotWidget_eventCreateWidget_Parms \
	{ \
		FSoftClassPath InWidget; \
	}; \
	struct PlotWidget_eventOnPlaySpine_Parms \
	{ \
		UPlotItem_Spine* InData; \
	}; \
	struct PlotWidget_eventOnShowSelect_Parms \
	{ \
		bool bShow; \
		TArray<FSelectItemData> InDatas; \
	}; \
	struct PlotWidget_eventSetCameraArgs_Parms \
	{ \
		FPlotCameraInfo InCameraInfo; \
	};


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_CALLBACK_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotWidget(); \
	friend struct Z_Construct_UClass_UPlotWidget_Statics; \
public: \
	DECLARE_CLASS(UPlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotWidget)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPlotWidget(); \
	friend struct Z_Construct_UClass_UPlotWidget_Statics; \
public: \
	DECLARE_CLASS(UPlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotWidget)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotWidget(UPlotWidget&&); \
	NO_API UPlotWidget(const UPlotWidget&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotWidget(UPlotWidget&&); \
	NO_API UPlotWidget(const UPlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotWidget)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_12_PROLOG \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_EVENT_PARMS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotWidget>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoTalk);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoTalk);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotFightStyle(); \
	friend struct Z_Construct_UClass_UPlotFightStyle_Statics; \
public: \
	DECLARE_CLASS(UPlotFightStyle, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotFightStyle)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_INCLASS \
private: \
	static void StaticRegisterNativesUPlotFightStyle(); \
	friend struct Z_Construct_UClass_UPlotFightStyle_Statics; \
public: \
	DECLARE_CLASS(UPlotFightStyle, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotFightStyle)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotFightStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotFightStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotFightStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotFightStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotFightStyle(UPlotFightStyle&&); \
	NO_API UPlotFightStyle(const UPlotFightStyle&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotFightStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotFightStyle(UPlotFightStyle&&); \
	NO_API UPlotFightStyle(const UPlotFightStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotFightStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotFightStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotFightStyle)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParentWidget() { return STRUCT_OFFSET(UPlotFightStyle, ParentWidget); }


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_133_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotFightStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
