#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "UnityEngine/PS4/XR/zzzz__PSVRSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::PS4::XR::PSVRSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::PS4::XR::PSVRSettings::*)()>(&::UnityEngine::PS4::XR::PSVRSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b077e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PS4::XR::PSVRSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::PS4::XR::PSVRSettings::PSVRSettings()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<PSVRSettings>())) {}
 void ::UnityEngine::PS4::XR::PSVRSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::PS4::XR::PSVRSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
