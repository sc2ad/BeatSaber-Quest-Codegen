#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(float_t, float_t, float_t, float_t)>(&UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aed6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::*)(UnityEngine::Quaternion)>(&UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aed700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::XrQuaternionf(float_t x, float_t y, float_t z, float_t w) noexcept : ::bs_hook::ValueTypeWrapper() {this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
constexpr void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__set_x(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__set_y(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__set_z(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__get_z() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__set_w(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::__get_w() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
 void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor(float_t x, float_t y, float_t z, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, x, y, z, w);
}
 void UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf::_ctor(UnityEngine::Quaternion quaternion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, quaternion);
}
