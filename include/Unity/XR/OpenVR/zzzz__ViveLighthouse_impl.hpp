#pragma once
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
namespace {
#include "Unity/XR/OpenVR/zzzz__ViveLighthouse_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::ViveLighthouse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::OpenVR::ViveLighthouse::*)()>(&::Unity::XR::OpenVR::ViveLighthouse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a2c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::OpenVR::ViveLighthouse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Unity::XR::OpenVR::ViveLighthouse::ViveLighthouse()  : ::UnityEngine::InputSystem::TrackedDevice(THROW_UNLESS(::il2cpp_utils::New<ViveLighthouse>())) {}
 void ::Unity::XR::OpenVR::ViveLighthouse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::OpenVR::ViveLighthouse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
