// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlotRoleControlArgs;
struct FSoftObjectPath;
#ifdef PLOT_PlotItem_RoleControl_generated_h
#error "PlotItem_RoleControl.generated.h already included, missing '#pragma once' in PlotItem_RoleControl.h"
#endif
#define PLOT_PlotItem_RoleControl_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_8_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotRoleControlArgs_Statics; \
	PLOT_API static class UScriptStruct* StaticStruct();


template<> PLOT_API UScriptStruct* StaticStruct<struct FPlotRoleControlArgs>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_42_DELEGATE \
static inline void FOnPlayAnimEnd_DelegateWrapper(const FMulticastScriptDelegate& OnPlayAnimEnd) \
{ \
	OnPlayAnimEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePosAndRot); \
	DECLARE_FUNCTION(execSetData);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePosAndRot); \
	DECLARE_FUNCTION(execSetData);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_EVENT_PARMS \
	struct PlotRoleActor_eventOnUpdate_Parms \
	{ \
		FPlotRoleControlArgs InArgs; \
	}; \
	struct PlotRoleActor_eventPlayAnim_Parms \
	{ \
		FSoftObjectPath InPath; \
		bool bLoop; \
	};


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_CALLBACK_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlotRoleActor(); \
	friend struct Z_Construct_UClass_APlotRoleActor_Statics; \
public: \
	DECLARE_CLASS(APlotRoleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(APlotRoleActor)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAPlotRoleActor(); \
	friend struct Z_Construct_UClass_APlotRoleActor_Statics; \
public: \
	DECLARE_CLASS(APlotRoleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(APlotRoleActor)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlotRoleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlotRoleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlotRoleActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlotRoleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlotRoleActor(APlotRoleActor&&); \
	NO_API APlotRoleActor(const APlotRoleActor&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlotRoleActor(APlotRoleActor&&); \
	NO_API APlotRoleActor(const APlotRoleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlotRoleActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlotRoleActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlotRoleActor)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_38_PROLOG \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_EVENT_PARMS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class APlotRoleActor>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAnimEnd);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAnimEnd);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotItem_RoleControl(); \
	friend struct Z_Construct_UClass_UPlotItem_RoleControl_Statics; \
public: \
	DECLARE_CLASS(UPlotItem_RoleControl, UPlotItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem_RoleControl)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUPlotItem_RoleControl(); \
	friend struct Z_Construct_UClass_UPlotItem_RoleControl_Statics; \
public: \
	DECLARE_CLASS(UPlotItem_RoleControl, UPlotItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem_RoleControl)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotItem_RoleControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotItem_RoleControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem_RoleControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem_RoleControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem_RoleControl(UPlotItem_RoleControl&&); \
	NO_API UPlotItem_RoleControl(const UPlotItem_RoleControl&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem_RoleControl(UPlotItem_RoleControl&&); \
	NO_API UPlotItem_RoleControl(const UPlotItem_RoleControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem_RoleControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem_RoleControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotItem_RoleControl)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Role() { return STRUCT_OFFSET(UPlotItem_RoleControl, Role); }


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_65_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotItem_RoleControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotItem_RoleControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
