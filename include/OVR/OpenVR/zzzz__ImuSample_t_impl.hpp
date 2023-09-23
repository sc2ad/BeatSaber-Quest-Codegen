#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__ImuSample_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3d_t_def.hpp"
// Ctor Parameters [CppParam { name: "fSampleTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vAccel", ty: "OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vGyro", ty: "OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unOffScaleFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::ImuSample_t::ImuSample_t(double_t fSampleTime, OVR::OpenVR::HmdVector3d_t vAccel, OVR::OpenVR::HmdVector3d_t vGyro, uint32_t unOffScaleFlags) noexcept : ::bs_hook::ValueTypeWrapper() {this->fSampleTime = fSampleTime;
this->vAccel = vAccel;
this->vGyro = vGyro;
this->unOffScaleFlags = unOffScaleFlags;
}
constexpr void OVR::OpenVR::ImuSample_t::__set_fSampleTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t OVR::OpenVR::ImuSample_t::__get_fSampleTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::ImuSample_t::__set_vAccel(OVR::OpenVR::HmdVector3d_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3d_t, 0x8>(this->__instance, std::forward<OVR::OpenVR::HmdVector3d_t>(value));
}
constexpr OVR::OpenVR::HmdVector3d_t OVR::OpenVR::ImuSample_t::__get_vAccel() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3d_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::ImuSample_t::__set_vGyro(OVR::OpenVR::HmdVector3d_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3d_t, 0x20>(this->__instance, std::forward<OVR::OpenVR::HmdVector3d_t>(value));
}
constexpr OVR::OpenVR::HmdVector3d_t OVR::OpenVR::ImuSample_t::__get_vGyro() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3d_t, 0x20>(this->__instance);
}
constexpr void OVR::OpenVR::ImuSample_t::__set_unOffScaleFlags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::ImuSample_t::__get_unOffScaleFlags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->__instance);
}
