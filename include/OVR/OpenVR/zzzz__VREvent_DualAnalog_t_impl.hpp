#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_DualAnalog_t_def.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformedX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformedY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "which", ty: "::OVR::OpenVR::EDualAnalogWhich", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_DualAnalog_t::VREvent_DualAnalog_t(float_t x, float_t y, float_t transformedX, float_t transformedY, ::OVR::OpenVR::EDualAnalogWhich which) noexcept : ::bs_hook::ValueTypeWrapper() {this->x = x;
this->y = y;
this->transformedX = transformedX;
this->transformedY = transformedY;
this->which = which;
}
constexpr void ::OVR::OpenVR::VREvent_DualAnalog_t::__set_x(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_DualAnalog_t::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_DualAnalog_t::__set_y(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_DualAnalog_t::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_DualAnalog_t::__set_transformedX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_DualAnalog_t::__get_transformedX() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_DualAnalog_t::__set_transformedY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_DualAnalog_t::__get_transformedY() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_DualAnalog_t::__set_which(::OVR::OpenVR::EDualAnalogWhich value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::EDualAnalogWhich, 0x10>(this->__instance, std::forward<::OVR::OpenVR::EDualAnalogWhich>(value));
}
constexpr ::OVR::OpenVR::EDualAnalogWhich ::OVR::OpenVR::VREvent_DualAnalog_t::__get_which() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::EDualAnalogWhich, 0x10>(this->__instance);
}
} // end anonymous namespace
