#pragma once
#include "GlobalNamespace/zzzz__TransformExtensions_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: GlobalNamespace::TransformExtensions.InverseTransformRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Transform, UnityEngine::Quaternion)>(&GlobalNamespace::TransformExtensions::InverseTransformRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1f7c534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TransformExtensions>::get(),
                            "InverseTransformRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Quaternion GlobalNamespace::TransformExtensions::InverseTransformRotation(UnityEngine::Transform trans, UnityEngine::Quaternion worldRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TransformExtensions>::get(),
                            "InverseTransformRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(nullptr, ___internal_method, trans, worldRotation);
}
