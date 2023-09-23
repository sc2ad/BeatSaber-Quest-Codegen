#pragma once
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
//  Writing Method size for method: UnityEngine::XR::XRDisplaySubsystemDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRDisplaySubsystemDescriptor::*)()>(&UnityEngine::XR::XRDisplaySubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d3a9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDisplaySubsystemDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::XR::XRDisplaySubsystemDescriptor::XRDisplaySubsystemDescriptor()  : UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRDisplaySubsystem>(THROW_UNLESS(::il2cpp_utils::New<XRDisplaySubsystemDescriptor>())) {}
 void UnityEngine::XR::XRDisplaySubsystemDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDisplaySubsystemDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
