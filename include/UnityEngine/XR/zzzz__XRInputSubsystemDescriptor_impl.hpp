#pragma once
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystemDescriptor_def.hpp"
//  Writing Method size for method: UnityEngine::XR::XRInputSubsystemDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRInputSubsystemDescriptor::*)()>(&UnityEngine::XR::XRInputSubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d39c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRInputSubsystemDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::XR::XRInputSubsystemDescriptor::XRInputSubsystemDescriptor()  : UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRInputSubsystem>(THROW_UNLESS(::il2cpp_utils::New<XRInputSubsystemDescriptor>())) {}
 void UnityEngine::XR::XRInputSubsystemDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRInputSubsystemDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
