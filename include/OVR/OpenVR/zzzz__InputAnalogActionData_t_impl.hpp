#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::InputAnalogActionData_t::InputAnalogActionData_t(bool bActive, uint64_t activeOrigin, float_t x, float_t y, float_t z, float_t deltaX, float_t deltaY, float_t deltaZ, float_t fUpdateTime) noexcept : ::bs_hook::ValueTypeWrapper() {this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->x = x;
this->y = y;
this->z = z;
this->deltaX = deltaX;
this->deltaY = deltaY;
this->deltaZ = deltaZ;
this->fUpdateTime = fUpdateTime;
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_bActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::InputAnalogActionData_t::__get_bActive() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_activeOrigin(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t OVR::OpenVR::InputAnalogActionData_t::__get_activeOrigin() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_x(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_y(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_z(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_z() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_deltaX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_deltaX() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_deltaY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_deltaY() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_deltaZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_deltaZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void OVR::OpenVR::InputAnalogActionData_t::__set_fUpdateTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::InputAnalogActionData_t::__get_fUpdateTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
