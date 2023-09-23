#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__DriverDirectMode_FrameTiming_def.hpp"
// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::DriverDirectMode_FrameTiming::DriverDirectMode_FrameTiming(uint32_t m_nSize, uint32_t m_nNumFramePresents, uint32_t m_nNumMisPresented, uint32_t m_nNumDroppedFrames, uint32_t m_nReprojectionFlags) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nSize = m_nSize;
this->m_nNumFramePresents = m_nNumFramePresents;
this->m_nNumMisPresented = m_nNumMisPresented;
this->m_nNumDroppedFrames = m_nNumDroppedFrames;
this->m_nReprojectionFlags = m_nReprojectionFlags;
}
constexpr void OVR::OpenVR::DriverDirectMode_FrameTiming::__set_m_nSize(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::DriverDirectMode_FrameTiming::__get_m_nSize() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::DriverDirectMode_FrameTiming::__set_m_nNumFramePresents(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::DriverDirectMode_FrameTiming::__get_m_nNumFramePresents() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::DriverDirectMode_FrameTiming::__set_m_nNumMisPresented(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::DriverDirectMode_FrameTiming::__get_m_nNumMisPresented() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::DriverDirectMode_FrameTiming::__set_m_nNumDroppedFrames(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::DriverDirectMode_FrameTiming::__get_m_nNumDroppedFrames() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::DriverDirectMode_FrameTiming::__set_m_nReprojectionFlags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::DriverDirectMode_FrameTiming::__get_m_nReprojectionFlags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
