#pragma once
#include "UnityEngine/zzzz__SubsystemBindings_def.hpp"
//  Writing Method size for method: UnityEngine::SubsystemBindings.DestroySubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&UnityEngine::SubsystemBindings::DestroySubsystem)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba33ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SubsystemBindings>::get(),
                            "DestroySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::SubsystemBindings::DestroySubsystem(::cordl_internals::intptr_t nativePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SubsystemBindings>::get(),
                            "DestroySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nativePtr);
}
