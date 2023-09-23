#pragma once
#include "System/Resources/zzzz__ManifestBasedResourceGroveler_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: System::Resources::ManifestBasedResourceGroveler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ManifestBasedResourceGroveler::*)(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator)>(&System::Resources::ManifestBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2373314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ManifestBasedResourceGroveler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (*)(System::Reflection::Assembly, ByRef<System::Resources::UltimateResourceFallbackLocation>)>(&System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x237333c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ManifestBasedResourceGroveler>::get(),
                            "GetNeutralResourcesLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::UltimateResourceFallbackLocation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Resources::ManifestBasedResourceGroveler.GetNeutralResourcesLanguageAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::Assembly, ByRef<::StringW>, ByRef<int16_t>)>(&System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x237365c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ManifestBasedResourceGroveler>::get(),
                            "GetNeutralResourcesLanguageAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Resources::IResourceGroveler
constexpr  System::Resources::ManifestBasedResourceGroveler::operator System::Resources::IResourceGroveler() const noexcept {
return System::Resources::IResourceGroveler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::ManifestBasedResourceGroveler::__set__mediator(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator value)  {
::cordl_internals::setInstanceField<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>(value));
}
constexpr System::Resources::System__Resources__ResourceManager__ResourceManagerMediator System::Resources::ManifestBasedResourceGroveler::__get__mediator() const {
return ::cordl_internals::getInstanceField<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mediator", ty: "System::Resources::System__Resources__ResourceManager__ResourceManagerMediator", modifiers: "", def_value: None }]
 System::Resources::ManifestBasedResourceGroveler::ManifestBasedResourceGroveler(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ManifestBasedResourceGroveler>(mediator))) {}
 void System::Resources::ManifestBasedResourceGroveler::_ctor(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ManifestBasedResourceGroveler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mediator);
}
 System::Globalization::CultureInfo System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage(System::Reflection::Assembly a, ByRef<System::Resources::UltimateResourceFallbackLocation> fallbackLocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ManifestBasedResourceGroveler>::get(),
                            "GetNeutralResourcesLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Resources::UltimateResourceFallbackLocation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(nullptr, ___internal_method, a, fallbackLocation);
}
 bool System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute(System::Reflection::Assembly assembly, ByRef<::StringW> cultureName, ByRef<int16_t> fallbackLocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::ManifestBasedResourceGroveler>::get(),
                            "GetNeutralResourcesLanguageAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, assembly, cultureName, fallbackLocation);
}
