#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__HmdQuaternion_t_def.hpp"
// Ctor Parameters [CppParam { name: "w", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "x", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdQuaternion_t::HmdQuaternion_t(double_t w, double_t x, double_t y, double_t z) noexcept : ::bs_hook::ValueTypeWrapper() {this->w = w;
this->x = x;
this->y = y;
this->z = z;
}
constexpr void ::OVR::OpenVR::HmdQuaternion_t::__set_w(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::OVR::OpenVR::HmdQuaternion_t::__get_w() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdQuaternion_t::__set_x(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::OVR::OpenVR::HmdQuaternion_t::__get_x() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdQuaternion_t::__set_y(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::OVR::OpenVR::HmdQuaternion_t::__get_y() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdQuaternion_t::__set_z(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::OVR::OpenVR::HmdQuaternion_t::__get_z() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->__instance);
}
} // end anonymous namespace
