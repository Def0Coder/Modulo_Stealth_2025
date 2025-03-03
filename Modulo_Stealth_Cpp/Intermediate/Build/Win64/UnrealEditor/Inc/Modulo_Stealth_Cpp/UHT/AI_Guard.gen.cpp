// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modulo_Stealth_Cpp/AI_Guard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Guard() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MODULO_STEALTH_CPP_API UClass* Z_Construct_UClass_AAI_Guard();
MODULO_STEALTH_CPP_API UClass* Z_Construct_UClass_AAI_Guard_NoRegister();
UPackage* Z_Construct_UPackage__Script_Modulo_Stealth_Cpp();
// End Cross Module References

// Begin Class AAI_Guard
void AAI_Guard::StaticRegisterNativesAAI_Guard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAI_Guard);
UClass* Z_Construct_UClass_AAI_Guard_NoRegister()
{
	return AAI_Guard::StaticClass();
}
struct Z_Construct_UClass_AAI_Guard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Guard.h" },
		{ "ModuleRelativePath", "AI_Guard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Guard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAI_Guard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Modulo_Stealth_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Guard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAI_Guard_Statics::ClassParams = {
	&AAI_Guard::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Guard_Statics::Class_MetaDataParams), Z_Construct_UClass_AAI_Guard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAI_Guard()
{
	if (!Z_Registration_Info_UClass_AAI_Guard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAI_Guard.OuterSingleton, Z_Construct_UClass_AAI_Guard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAI_Guard.OuterSingleton;
}
template<> MODULO_STEALTH_CPP_API UClass* StaticClass<AAI_Guard>()
{
	return AAI_Guard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Guard);
AAI_Guard::~AAI_Guard() {}
// End Class AAI_Guard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_AI_Guard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAI_Guard, AAI_Guard::StaticClass, TEXT("AAI_Guard"), &Z_Registration_Info_UClass_AAI_Guard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAI_Guard), 676577224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_AI_Guard_h_1777687292(TEXT("/Script/Modulo_Stealth_Cpp"),
	Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_AI_Guard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_AI_Guard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
