#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRControllerAxis_t::VRControllerAxis_t(float_t x, float_t y) noexcept : ::bs_hook::ValueTypeWrapper() {this->x = x;
this->y = y;
}
constexpr void OVR::OpenVR::VRControllerAxis_t::__set_x(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VRControllerAxis_t::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VRControllerAxis_t::__set_y(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VRControllerAxis_t::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
