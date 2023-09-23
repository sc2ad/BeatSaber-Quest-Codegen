#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdQuaternionf_t_def.hpp"
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::HmdQuaternionf_t::HmdQuaternionf_t(float_t w, float_t x, float_t y, float_t z) noexcept : ::bs_hook::ValueTypeWrapper() {this->w = w;
this->x = x;
this->y = y;
this->z = z;
}
constexpr void OVR::OpenVR::HmdQuaternionf_t::__set_w(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::HmdQuaternionf_t::__get_w() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::HmdQuaternionf_t::__set_x(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::HmdQuaternionf_t::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::HmdQuaternionf_t::__set_y(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::HmdQuaternionf_t::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::HmdQuaternionf_t::__set_z(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::HmdQuaternionf_t::__get_z() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
