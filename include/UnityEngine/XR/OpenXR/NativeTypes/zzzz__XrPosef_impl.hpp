#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2aed714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "orientation", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::XrPosef(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f position) noexcept : ::bs_hook::ValueTypeWrapper() {this->orientation = orientation;
this->position = position;
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::__set_orientation(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf value)  {
::cordl_internals::setInstanceField<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, 0x0>(this->__instance, std::forward<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>(value));
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::__get_orientation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::__set_position(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f value)  {
::cordl_internals::setInstanceField<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, 0x10>(this->__instance, std::forward<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>(value));
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::__get_position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, 0x10>(this->__instance);
}
 void ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::_ctor(::UnityEngine::Vector3 vec3, ::UnityEngine::Quaternion quaternion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, vec3, quaternion);
}
} // end anonymous namespace
