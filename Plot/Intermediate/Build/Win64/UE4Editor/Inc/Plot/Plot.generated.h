// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConfigItem;
class UWorld;
enum class EPlayMode : uint8;
class UPlotWidget;
class UPlotItem;
struct FPlotCameraInfo;
#ifdef PLOT_Plot_generated_h
#error "Plot.generated.h already included, missing '#pragma once' in Plot.h"
#endif
#define PLOT_Plot_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTalkConfig); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execGetPlaySpeed); \
	DECLARE_FUNCTION(execSetPlayMode); \
	DECLARE_FUNCTION(execGetPlayMode); \
	DECLARE_FUNCTION(execSetWidget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execGetRootItem); \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execSaveKey); \
	DECLARE_FUNCTION(execJumpTo); \
	DECLARE_FUNCTION(execIsJump); \
	DECLARE_FUNCTION(execClearSequence); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTalkConfig); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execGetPlaySpeed); \
	DECLARE_FUNCTION(execSetPlayMode); \
	DECLARE_FUNCTION(execGetPlayMode); \
	DECLARE_FUNCTION(execSetWidget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execGetRootItem); \
	DECLARE_FUNCTION(execHasKey); \
	DECLARE_FUNCTION(execSaveKey); \
	DECLARE_FUNCTION(execJumpTo); \
	DECLARE_FUNCTION(execIsJump); \
	DECLARE_FUNCTION(execClearSequence); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlot(); \
	friend struct Z_Construct_UClass_UPlot_Statics; \
public: \
	DECLARE_CLASS(UPlot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlot)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlot(); \
	friend struct Z_Construct_UClass_UPlot_Statics; \
public: \
	DECLARE_CLASS(UPlot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlot)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlot(UPlot&&); \
	NO_API UPlot(const UPlot&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlot(UPlot&&); \
	NO_API UPlot(const UPlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlot)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget() { return STRUCT_OFFSET(UPlot, Widget); } \
	FORCEINLINE static uint32 __PPO__ConfigMap() { return STRUCT_OFFSET(UPlot, ConfigMap); }


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_14_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlot>();

#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotCameraObj(); \
	friend struct Z_Construct_UClass_UPlotCameraObj_Statics; \
public: \
	DECLARE_CLASS(UPlotCameraObj, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotCameraObj)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUPlotCameraObj(); \
	friend struct Z_Construct_UClass_UPlotCameraObj_Statics; \
public: \
	DECLARE_CLASS(UPlotCameraObj, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotCameraObj)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCameraObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCameraObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCameraObj); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCameraObj); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCameraObj(UPlotCameraObj&&); \
	NO_API UPlotCameraObj(const UPlotCameraObj&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCameraObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCameraObj(UPlotCameraObj&&); \
	NO_API UPlotCameraObj(const UPlotCameraObj&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCameraObj); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCameraObj); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCameraObj)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_149_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotCameraObj>();

#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCameraArgs); \
	DECLARE_FUNCTION(execSetCameraArgs);


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraArgs); \
	DECLARE_FUNCTION(execSetCameraArgs);


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlotCharacter(); \
	friend struct Z_Construct_UClass_APlotCharacter_Statics; \
public: \
	DECLARE_CLASS(APlotCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(APlotCharacter)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_INCLASS \
private: \
	static void StaticRegisterNativesAPlotCharacter(); \
	friend struct Z_Construct_UClass_APlotCharacter_Statics; \
public: \
	DECLARE_CLASS(APlotCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(APlotCharacter)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlotCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlotCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlotCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlotCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlotCharacter(APlotCharacter&&); \
	NO_API APlotCharacter(const APlotCharacter&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlotCharacter(APlotCharacter&&); \
	NO_API APlotCharacter(const APlotCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlotCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlotCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlotCharacter)


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_160_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_Plot_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class APlotCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_Plot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
