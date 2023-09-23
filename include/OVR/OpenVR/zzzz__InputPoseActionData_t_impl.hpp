#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::InputPoseActionData_t::InputPoseActionData_t(bool bActive, uint64_t activeOrigin, OVR::OpenVR::TrackedDevicePose_t pose) noexcept : ::bs_hook::ValueTypeWrapper() {this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->pose = pose;
}
constexpr void OVR::OpenVR::InputPoseActionData_t::__set_bActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::InputPoseActionData_t::__get_bActive() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::InputPoseActionData_t::__set_activeOrigin(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t OVR::OpenVR::InputPoseActionData_t::__get_activeOrigin() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::InputPoseActionData_t::__set_pose(OVR::OpenVR::TrackedDevicePose_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::TrackedDevicePose_t, 0x10>(this->__instance, std::forward<OVR::OpenVR::TrackedDevicePose_t>(value));
}
constexpr OVR::OpenVR::TrackedDevicePose_t OVR::OpenVR::InputPoseActionData_t::__get_pose() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::TrackedDevicePose_t, 0x10>(this->__instance);
}
