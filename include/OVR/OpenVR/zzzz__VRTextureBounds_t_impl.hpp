#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
// Ctor Parameters [CppParam { name: "uMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uMax", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vMax", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRTextureBounds_t::VRTextureBounds_t(float_t uMin, float_t vMin, float_t uMax, float_t vMax) noexcept : ::bs_hook::ValueTypeWrapper() {this->uMin = uMin;
this->vMin = vMin;
this->uMax = uMax;
this->vMax = vMax;
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_uMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VRTextureBounds_t::__get_uMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_vMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VRTextureBounds_t::__get_vMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_uMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VRTextureBounds_t::__get_uMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_vMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VRTextureBounds_t::__get_vMax() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
