#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRTextureWithPose_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRTextureWithPose_t::VRTextureWithPose_t(OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking) noexcept : ::bs_hook::ValueTypeWrapper() {this->mDeviceToAbsoluteTracking = mDeviceToAbsoluteTracking;
}
constexpr void OVR::OpenVR::VRTextureWithPose_t::__set_mDeviceToAbsoluteTracking(OVR::OpenVR::HmdMatrix34_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::VRTextureWithPose_t::__get_mDeviceToAbsoluteTracking() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance);
}
