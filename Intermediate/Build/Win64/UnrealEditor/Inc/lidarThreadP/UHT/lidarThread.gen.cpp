// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lidarThreadP/Public/lidarThread.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelidarThread() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LIDARTHREADP_API UClass* Z_Construct_UClass_AlidarThread();
	LIDARTHREADP_API UClass* Z_Construct_UClass_AlidarThread_NoRegister();
	UPackage* Z_Construct_UPackage__Script_lidarThreadP();
// End Cross Module References
	DEFINE_FUNCTION(AlidarThread::execisMyThreadDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isMyThreadDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AlidarThread::execactivateLidar)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_fileNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->activateLidar(Z_Param_fileNum);
		P_NATIVE_END;
	}
	void AlidarThread::StaticRegisterNativesAlidarThread()
	{
		UClass* Class = AlidarThread::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "activateLidar", &AlidarThread::execactivateLidar },
			{ "isMyThreadDone", &AlidarThread::execisMyThreadDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AlidarThread_activateLidar_Statics
	{
		struct lidarThread_eventactivateLidar_Parms
		{
			int32 fileNum;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_fileNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AlidarThread_activateLidar_Statics::NewProp_fileNum = { "fileNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(lidarThread_eventactivateLidar_Parms, fileNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AlidarThread_activateLidar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AlidarThread_activateLidar_Statics::NewProp_fileNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AlidarThread_activateLidar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Thread Funtion" },
		{ "ModuleRelativePath", "Public/lidarThread.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AlidarThread_activateLidar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AlidarThread, nullptr, "activateLidar", nullptr, nullptr, sizeof(Z_Construct_UFunction_AlidarThread_activateLidar_Statics::lidarThread_eventactivateLidar_Parms), Z_Construct_UFunction_AlidarThread_activateLidar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AlidarThread_activateLidar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AlidarThread_activateLidar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AlidarThread_activateLidar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AlidarThread_activateLidar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AlidarThread_activateLidar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics
	{
		struct lidarThread_eventisMyThreadDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lidarThread_eventisMyThreadDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(lidarThread_eventisMyThreadDone_Parms), &Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Thread Funtion" },
		{ "ModuleRelativePath", "Public/lidarThread.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AlidarThread, nullptr, "isMyThreadDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::lidarThread_eventisMyThreadDone_Parms), Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AlidarThread_isMyThreadDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AlidarThread_isMyThreadDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AlidarThread);
	UClass* Z_Construct_UClass_AlidarThread_NoRegister()
	{
		return AlidarThread::StaticClass();
	}
	struct Z_Construct_UClass_AlidarThread_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AlidarThread_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lidarThreadP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AlidarThread_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AlidarThread_activateLidar, "activateLidar" }, // 1598720966
		{ &Z_Construct_UFunction_AlidarThread_isMyThreadDone, "isMyThreadDone" }, // 1253275843
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlidarThread_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "lidarThread.h" },
		{ "ModuleRelativePath", "Public/lidarThread.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AlidarThread_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AlidarThread>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AlidarThread_Statics::ClassParams = {
		&AlidarThread::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AlidarThread_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AlidarThread_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AlidarThread()
	{
		if (!Z_Registration_Info_UClass_AlidarThread.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AlidarThread.OuterSingleton, Z_Construct_UClass_AlidarThread_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AlidarThread.OuterSingleton;
	}
	template<> LIDARTHREADP_API UClass* StaticClass<AlidarThread>()
	{
		return AlidarThread::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AlidarThread);
	AlidarThread::~AlidarThread() {}
	struct Z_CompiledInDeferFile_FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AlidarThread, AlidarThread::StaticClass, TEXT("AlidarThread"), &Z_Registration_Info_UClass_AlidarThread, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AlidarThread), 2558525849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_2819023993(TEXT("/Script/lidarThreadP"),
		Z_CompiledInDeferFile_FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Altroverse_LA_Plugins_lidarThreadP_Source_lidarThreadP_Public_lidarThread_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
