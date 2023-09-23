#pragma once
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystemDescriptor_def.hpp"
//  Writing Method size for method: UnityEngine::XR::XRMeshSubsystemDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRMeshSubsystemDescriptor::*)()>(&UnityEngine::XR::XRMeshSubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d3a16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRMeshSubsystemDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::XR::XRMeshSubsystemDescriptor::XRMeshSubsystemDescriptor()  : UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRMeshSubsystem>(THROW_UNLESS(::il2cpp_utils::New<XRMeshSubsystemDescriptor>())) {}
 void UnityEngine::XR::XRMeshSubsystemDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRMeshSubsystemDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
