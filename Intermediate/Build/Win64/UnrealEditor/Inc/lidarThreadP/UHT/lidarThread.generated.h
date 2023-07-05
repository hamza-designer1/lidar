// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "lidarThread.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARTHREADP_lidarThread_generated_h
#error "lidarThread.generated.h already included, missing '#pragma once' in lidarThread.h"
#endif
#define LIDARTHREADP_lidarThread_generated_h

#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_SPARSE_DATA
#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisMyThreadDone); \
	DECLARE_FUNCTION(execactivateLidar);


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisMyThreadDone); \
	DECLARE_FUNCTION(execactivateLidar);


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_ACCESSORS
#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAlidarThread(); \
	friend struct Z_Construct_UClass_AlidarThread_Statics; \
public: \
	DECLARE_CLASS(AlidarThread, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lidarThreadP"), NO_API) \
	DECLARE_SERIALIZER(AlidarThread)


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAlidarThread(); \
	friend struct Z_Construct_UClass_AlidarThread_Statics; \
public: \
	DECLARE_CLASS(AlidarThread, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lidarThreadP"), NO_API) \
	DECLARE_SERIALIZER(AlidarThread)


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AlidarThread(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AlidarThread) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AlidarThread); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AlidarThread); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AlidarThread(AlidarThread&&); \
	NO_API AlidarThread(const AlidarThread&); \
public: \
	NO_API virtual ~AlidarThread();


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AlidarThread(AlidarThread&&); \
	NO_API AlidarThread(const AlidarThread&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AlidarThread); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AlidarThread); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AlidarThread) \
	NO_API virtual ~AlidarThread();


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_15_PROLOG
#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_SPARSE_DATA \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_RPC_WRAPPERS \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_ACCESSORS \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_INCLASS \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_SPARSE_DATA \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_ACCESSORS \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_INCLASS_NO_PURE_DECLS \
	FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARTHREADP_API UClass* StaticClass<class AlidarThread>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
