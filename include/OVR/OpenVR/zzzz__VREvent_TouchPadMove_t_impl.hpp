#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_TouchPadMove_t_def.hpp"
// Ctor Parameters [CppParam { name: "bFingerDown", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flSecondsFingerDown", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueXFirst", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueYFirst", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueXRaw", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueYRaw", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_TouchPadMove_t::VREvent_TouchPadMove_t(bool bFingerDown, float_t flSecondsFingerDown, float_t fValueXFirst, float_t fValueYFirst, float_t fValueXRaw, float_t fValueYRaw) noexcept : ::bs_hook::ValueTypeWrapper() {this->bFingerDown = bFingerDown;
this->flSecondsFingerDown = flSecondsFingerDown;
this->fValueXFirst = fValueXFirst;
this->fValueYFirst = fValueYFirst;
this->fValueXRaw = fValueXRaw;
this->fValueYRaw = fValueYRaw;
}
constexpr void OVR::OpenVR::VREvent_TouchPadMove_t::__set_bFingerDown(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::VREvent_TouchPadMove_t::__get_bFingerDown() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_TouchPadMove_t::__set_flSecondsFingerDown(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_TouchPadMove_t::__get_flSecondsFingerDown() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_TouchPadMove_t::__set_fValueXFirst(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_TouchPadMove_t::__get_fValueXFirst() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_TouchPadMove_t::__set_fValueYFirst(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_TouchPadMove_t::__get_fValueYFirst() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_TouchPadMove_t::__set_fValueXRaw(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_TouchPadMove_t::__get_fValueXRaw() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_TouchPadMove_t::__set_fValueYRaw(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_TouchPadMove_t::__get_fValueYRaw() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
