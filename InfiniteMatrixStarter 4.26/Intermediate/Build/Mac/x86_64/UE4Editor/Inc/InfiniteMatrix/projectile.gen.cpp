// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfiniteMatrix/projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprojectile() {}
// Cross Module References
	INFINITEMATRIX_API UClass* Z_Construct_UClass_Aprojectile_NoRegister();
	INFINITEMATRIX_API UClass* Z_Construct_UClass_Aprojectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InfiniteMatrix();
// End Cross Module References
	void Aprojectile::StaticRegisterNativesAprojectile()
	{
	}
	UClass* Z_Construct_UClass_Aprojectile_NoRegister()
	{
		return Aprojectile::StaticClass();
	}
	struct Z_Construct_UClass_Aprojectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprojectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteMatrix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprojectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "projectile.h" },
		{ "ModuleRelativePath", "projectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprojectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprojectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aprojectile_Statics::ClassParams = {
		&Aprojectile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aprojectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aprojectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aprojectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aprojectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aprojectile, 988051043);
	template<> INFINITEMATRIX_API UClass* StaticClass<Aprojectile>()
	{
		return Aprojectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aprojectile(Z_Construct_UClass_Aprojectile, &Aprojectile::StaticClass, TEXT("/Script/InfiniteMatrix"), TEXT("Aprojectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprojectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
