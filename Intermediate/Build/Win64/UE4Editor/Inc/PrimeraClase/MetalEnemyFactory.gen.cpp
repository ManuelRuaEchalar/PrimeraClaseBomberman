// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/MetalEnemyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetalEnemyFactory() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_AMetalEnemyFactory_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AMetalEnemyFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
	PRIMERACLASE_API UClass* Z_Construct_UClass_UEnemyFactory_NoRegister();
// End Cross Module References
	void AMetalEnemyFactory::StaticRegisterNativesAMetalEnemyFactory()
	{
	}
	UClass* Z_Construct_UClass_AMetalEnemyFactory_NoRegister()
	{
		return AMetalEnemyFactory::StaticClass();
	}
	struct Z_Construct_UClass_AMetalEnemyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetalEnemyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetalEnemyFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetalEnemyFactory.h" },
		{ "ModuleRelativePath", "MetalEnemyFactory.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMetalEnemyFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyFactory_NoRegister, (int32)VTABLE_OFFSET(AMetalEnemyFactory, IEnemyFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetalEnemyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetalEnemyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMetalEnemyFactory_Statics::ClassParams = {
		&AMetalEnemyFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMetalEnemyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetalEnemyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetalEnemyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMetalEnemyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMetalEnemyFactory, 3162564389);
	template<> PRIMERACLASE_API UClass* StaticClass<AMetalEnemyFactory>()
	{
		return AMetalEnemyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMetalEnemyFactory(Z_Construct_UClass_AMetalEnemyFactory, &AMetalEnemyFactory::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("AMetalEnemyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetalEnemyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
