// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/WoodEnemyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWoodEnemyFactory() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_AWoodEnemyFactory_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AWoodEnemyFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
	PRIMERACLASE_API UClass* Z_Construct_UClass_UEnemyFactory_NoRegister();
// End Cross Module References
	void AWoodEnemyFactory::StaticRegisterNativesAWoodEnemyFactory()
	{
	}
	UClass* Z_Construct_UClass_AWoodEnemyFactory_NoRegister()
	{
		return AWoodEnemyFactory::StaticClass();
	}
	struct Z_Construct_UClass_AWoodEnemyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWoodEnemyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodEnemyFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WoodEnemyFactory.h" },
		{ "ModuleRelativePath", "WoodEnemyFactory.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWoodEnemyFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyFactory_NoRegister, (int32)VTABLE_OFFSET(AWoodEnemyFactory, IEnemyFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWoodEnemyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWoodEnemyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWoodEnemyFactory_Statics::ClassParams = {
		&AWoodEnemyFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWoodEnemyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodEnemyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWoodEnemyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWoodEnemyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWoodEnemyFactory, 1612549593);
	template<> PRIMERACLASE_API UClass* StaticClass<AWoodEnemyFactory>()
	{
		return AWoodEnemyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWoodEnemyFactory(Z_Construct_UClass_AWoodEnemyFactory, &AWoodEnemyFactory::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("AWoodEnemyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWoodEnemyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
