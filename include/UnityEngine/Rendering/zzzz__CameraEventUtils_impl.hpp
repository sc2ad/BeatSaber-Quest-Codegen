#pragma once
namespace {
#include "UnityEngine/Rendering/zzzz__CameraEventUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CameraEventUtils.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::CameraEvent)>(&::UnityEngine::Rendering::CameraEventUtils::IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b73a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraEventUtils>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::Rendering::CameraEventUtils::IsValid(::UnityEngine::Rendering::CameraEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraEventUtils>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
} // end anonymous namespace
