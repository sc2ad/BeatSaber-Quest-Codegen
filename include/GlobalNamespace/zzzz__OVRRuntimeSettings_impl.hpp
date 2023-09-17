#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings.GetRuntimeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRRuntimeSettings (*)()>(&::GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26027c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings>::get(),
                            "GetRuntimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRuntimeSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRuntimeSettings::*)()>(&::GlobalNamespace::OVRRuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26028d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::OVRRuntimeSettings::__set_colorSpace(::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace ::GlobalNamespace::OVRRuntimeSettings::__get_colorSpace() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::OVRRuntimeSettings ::GlobalNamespace::OVRRuntimeSettings::GetRuntimeSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings>::get(),
                            "GetRuntimeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRRuntimeSettings, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::OVRRuntimeSettings::OVRRuntimeSettings()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<OVRRuntimeSettings>())) {}
 void ::GlobalNamespace::OVRRuntimeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRuntimeSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
