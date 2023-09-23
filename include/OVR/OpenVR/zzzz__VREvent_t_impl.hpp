#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Data_t_def.hpp"
// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_t::VREvent_t(uint32_t eventType, uint32_t trackedDeviceIndex, float_t eventAgeSeconds, OVR::OpenVR::VREvent_Data_t data) noexcept : ::bs_hook::ValueTypeWrapper() {this->eventType = eventType;
this->trackedDeviceIndex = trackedDeviceIndex;
this->eventAgeSeconds = eventAgeSeconds;
this->data = data;
}
constexpr void OVR::OpenVR::VREvent_t::__set_eventType(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VREvent_t::__get_eventType() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_t::__set_trackedDeviceIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VREvent_t::__get_trackedDeviceIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_t::__set_eventAgeSeconds(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_t::__get_eventAgeSeconds() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_t::__set_data(OVR::OpenVR::VREvent_Data_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Data_t, 0x10>(this->__instance, std::forward<OVR::OpenVR::VREvent_Data_t>(value));
}
constexpr OVR::OpenVR::VREvent_Data_t OVR::OpenVR::VREvent_t::__get_data() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Data_t, 0x10>(this->__instance);
}
