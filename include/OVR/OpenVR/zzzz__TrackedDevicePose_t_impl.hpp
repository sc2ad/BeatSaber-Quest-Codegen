#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingResult_def.hpp"
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vVelocity", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vAngularVelocity", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eTrackingResult", ty: "OVR::OpenVR::ETrackingResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "bPoseIsValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bDeviceIsConnected", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::TrackedDevicePose_t::TrackedDevicePose_t(OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking, OVR::OpenVR::HmdVector3_t vVelocity, OVR::OpenVR::HmdVector3_t vAngularVelocity, OVR::OpenVR::ETrackingResult eTrackingResult, bool bPoseIsValid, bool bDeviceIsConnected) noexcept : ::bs_hook::ValueTypeWrapper() {this->mDeviceToAbsoluteTracking = mDeviceToAbsoluteTracking;
this->vVelocity = vVelocity;
this->vAngularVelocity = vAngularVelocity;
this->eTrackingResult = eTrackingResult;
this->bPoseIsValid = bPoseIsValid;
this->bDeviceIsConnected = bDeviceIsConnected;
}
constexpr void OVR::OpenVR::TrackedDevicePose_t::__set_mDeviceToAbsoluteTracking(OVR::OpenVR::HmdMatrix34_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::TrackedDevicePose_t::__get_mDeviceToAbsoluteTracking() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::TrackedDevicePose_t::__set_vVelocity(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0x30>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::TrackedDevicePose_t::__get_vVelocity() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0x30>(this->__instance);
}
constexpr void OVR::OpenVR::TrackedDevicePose_t::__set_vAngularVelocity(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0x3c>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::TrackedDevicePose_t::__get_vAngularVelocity() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0x3c>(this->__instance);
}
constexpr void OVR::OpenVR::TrackedDevicePose_t::__set_eTrackingResult(OVR::OpenVR::ETrackingResult value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::ETrackingResult, 0x48>(this->__instance, std::forward<OVR::OpenVR::ETrackingResult>(value));
}
constexpr OVR::OpenVR::ETrackingResult OVR::OpenVR::TrackedDevicePose_t::__get_eTrackingResult() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::ETrackingResult, 0x48>(this->__instance);
}
constexpr void OVR::OpenVR::TrackedDevicePose_t::__set_bPoseIsValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::TrackedDevicePose_t::__get_bPoseIsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->__instance);
}
constexpr void OVR::OpenVR::TrackedDevicePose_t::__set_bDeviceIsConnected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::TrackedDevicePose_t::__get_bDeviceIsConnected() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this->__instance);
}
