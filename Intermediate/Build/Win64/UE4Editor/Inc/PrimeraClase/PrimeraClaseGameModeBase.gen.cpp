// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/PrimeraClaseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimeraClaseGameModeBase() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_APrimeraClaseGameModeBase_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_APrimeraClaseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
// End Cross Module References
	void APrimeraClaseGameModeBase::StaticRegisterNativesAPrimeraClaseGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APrimeraClaseGameModeBase_NoRegister()
	{
		return APrimeraClaseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APrimeraClaseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PrimeraClaseGameModeBase.h" },
		{ "ModuleRelativePath", "PrimeraClaseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimeraClaseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::ClassParams = {
		&APrimeraClaseGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimeraClaseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrimeraClaseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrimeraClaseGameModeBase, 1223695689);
	template<> PRIMERACLASE_API UClass* StaticClass<APrimeraClaseGameModeBase>()
	{
		return APrimeraClaseGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrimeraClaseGameModeBase(Z_Construct_UClass_APrimeraClaseGameModeBase, &APrimeraClaseGameModeBase::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("APrimeraClaseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimeraClaseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
