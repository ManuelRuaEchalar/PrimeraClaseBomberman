// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/BoarCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoarCamera() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_ABoarCamera_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_ABoarCamera();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
// End Cross Module References
	void ABoarCamera::StaticRegisterNativesABoarCamera()
	{
	}
	UClass* Z_Construct_UClass_ABoarCamera_NoRegister()
	{
		return ABoarCamera::StaticClass();
	}
	struct Z_Construct_UClass_ABoarCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoarCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoarCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "BoarCamera.h" },
		{ "ModuleRelativePath", "BoarCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoarCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoarCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoarCamera_Statics::ClassParams = {
		&ABoarCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoarCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoarCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoarCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoarCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoarCamera, 731242703);
	template<> PRIMERACLASE_API UClass* StaticClass<ABoarCamera>()
	{
		return ABoarCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoarCamera(Z_Construct_UClass_ABoarCamera, &ABoarCamera::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("ABoarCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoarCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
