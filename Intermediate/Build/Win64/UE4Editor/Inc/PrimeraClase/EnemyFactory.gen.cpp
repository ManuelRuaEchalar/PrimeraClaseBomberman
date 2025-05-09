// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/EnemyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFactory() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_UEnemyFactory_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_UEnemyFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
// End Cross Module References
	void UEnemyFactory::StaticRegisterNativesUEnemyFactory()
	{
	}
	UClass* Z_Construct_UClass_UEnemyFactory_NoRegister()
	{
		return UEnemyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFactory_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFactory_Statics::ClassParams = {
		&UEnemyFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyFactory, 1707789945);
	template<> PRIMERACLASE_API UClass* StaticClass<UEnemyFactory>()
	{
		return UEnemyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyFactory(Z_Construct_UClass_UEnemyFactory, &UEnemyFactory::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("UEnemyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
