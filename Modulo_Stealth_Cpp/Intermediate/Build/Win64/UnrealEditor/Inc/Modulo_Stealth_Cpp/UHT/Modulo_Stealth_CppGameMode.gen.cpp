// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modulo_Stealth_Cpp/Modulo_Stealth_CppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModulo_Stealth_CppGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MODULO_STEALTH_CPP_API UClass* Z_Construct_UClass_AModulo_Stealth_CppGameMode();
MODULO_STEALTH_CPP_API UClass* Z_Construct_UClass_AModulo_Stealth_CppGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Modulo_Stealth_Cpp();
// End Cross Module References

// Begin Class AModulo_Stealth_CppGameMode
void AModulo_Stealth_CppGameMode::StaticRegisterNativesAModulo_Stealth_CppGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModulo_Stealth_CppGameMode);
UClass* Z_Construct_UClass_AModulo_Stealth_CppGameMode_NoRegister()
{
	return AModulo_Stealth_CppGameMode::StaticClass();
}
struct Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Modulo_Stealth_CppGameMode.h" },
		{ "ModuleRelativePath", "Modulo_Stealth_CppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModulo_Stealth_CppGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Modulo_Stealth_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics::ClassParams = {
	&AModulo_Stealth_CppGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModulo_Stealth_CppGameMode()
{
	if (!Z_Registration_Info_UClass_AModulo_Stealth_CppGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModulo_Stealth_CppGameMode.OuterSingleton, Z_Construct_UClass_AModulo_Stealth_CppGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModulo_Stealth_CppGameMode.OuterSingleton;
}
template<> MODULO_STEALTH_CPP_API UClass* StaticClass<AModulo_Stealth_CppGameMode>()
{
	return AModulo_Stealth_CppGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModulo_Stealth_CppGameMode);
AModulo_Stealth_CppGameMode::~AModulo_Stealth_CppGameMode() {}
// End Class AModulo_Stealth_CppGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModulo_Stealth_CppGameMode, AModulo_Stealth_CppGameMode::StaticClass, TEXT("AModulo_Stealth_CppGameMode"), &Z_Registration_Info_UClass_AModulo_Stealth_CppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModulo_Stealth_CppGameMode), 277826002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppGameMode_h_1939308653(TEXT("/Script/Modulo_Stealth_Cpp"),
	Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
