#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
// Ctor Parameters [CppParam { name: "eFrameType", ty: "OVR::OpenVR::EVRTrackedCameraFrameType", modifiers: "", def_value: Some("{}") }, CppParam { name: "nWidth", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nHeight", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nBytesPerPixel", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFrameSequence", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "standingTrackedDevicePose", ty: "OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::CameraVideoStreamFrameHeader_t::CameraVideoStreamFrameHeader_t(OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint32_t nWidth, uint32_t nHeight, uint32_t nBytesPerPixel, uint32_t nFrameSequence, OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose) noexcept : ::bs_hook::ValueTypeWrapper() {this->eFrameType = eFrameType;
this->nWidth = nWidth;
this->nHeight = nHeight;
this->nBytesPerPixel = nBytesPerPixel;
this->nFrameSequence = nFrameSequence;
this->standingTrackedDevicePose = standingTrackedDevicePose;
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_eFrameType(OVR::OpenVR::EVRTrackedCameraFrameType value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::EVRTrackedCameraFrameType, 0x0>(this->__instance, std::forward<OVR::OpenVR::EVRTrackedCameraFrameType>(value));
}
constexpr OVR::OpenVR::EVRTrackedCameraFrameType OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_eFrameType() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::EVRTrackedCameraFrameType, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nWidth(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nWidth() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nHeight(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nHeight() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nBytesPerPixel(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nBytesPerPixel() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_nFrameSequence(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_nFrameSequence() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::CameraVideoStreamFrameHeader_t::__set_standingTrackedDevicePose(OVR::OpenVR::TrackedDevicePose_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::TrackedDevicePose_t, 0x14>(this->__instance, std::forward<OVR::OpenVR::TrackedDevicePose_t>(value));
}
constexpr OVR::OpenVR::TrackedDevicePose_t OVR::OpenVR::CameraVideoStreamFrameHeader_t::__get_standingTrackedDevicePose() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::TrackedDevicePose_t, 0x14>(this->__instance);
}
