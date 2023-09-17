#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumReprojectedFrames", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresentsOnStartup", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumReprojectedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumLoading", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresentsLoading", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFramesLoading", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumReprojectedFramesLoading", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumTimedOut", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresentsTimedOut", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumReprojectedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Compositor_CumulativeStats::Compositor_CumulativeStats(uint32_t m_nPid, uint32_t m_nNumFramePresents, uint32_t m_nNumDroppedFrames, uint32_t m_nNumReprojectedFrames, uint32_t m_nNumFramePresentsOnStartup, uint32_t m_nNumDroppedFramesOnStartup, uint32_t m_nNumReprojectedFramesOnStartup, uint32_t m_nNumLoading, uint32_t m_nNumFramePresentsLoading, uint32_t m_nNumDroppedFramesLoading, uint32_t m_nNumReprojectedFramesLoading, uint32_t m_nNumTimedOut, uint32_t m_nNumFramePresentsTimedOut, uint32_t m_nNumDroppedFramesTimedOut, uint32_t m_nNumReprojectedFramesTimedOut) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nPid = m_nPid;
this->m_nNumFramePresents = m_nNumFramePresents;
this->m_nNumDroppedFrames = m_nNumDroppedFrames;
this->m_nNumReprojectedFrames = m_nNumReprojectedFrames;
this->m_nNumFramePresentsOnStartup = m_nNumFramePresentsOnStartup;
this->m_nNumDroppedFramesOnStartup = m_nNumDroppedFramesOnStartup;
this->m_nNumReprojectedFramesOnStartup = m_nNumReprojectedFramesOnStartup;
this->m_nNumLoading = m_nNumLoading;
this->m_nNumFramePresentsLoading = m_nNumFramePresentsLoading;
this->m_nNumDroppedFramesLoading = m_nNumDroppedFramesLoading;
this->m_nNumReprojectedFramesLoading = m_nNumReprojectedFramesLoading;
this->m_nNumTimedOut = m_nNumTimedOut;
this->m_nNumFramePresentsTimedOut = m_nNumFramePresentsTimedOut;
this->m_nNumDroppedFramesTimedOut = m_nNumDroppedFramesTimedOut;
this->m_nNumReprojectedFramesTimedOut = m_nNumReprojectedFramesTimedOut;
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nPid(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nPid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumFramePresents(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumFramePresents() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumDroppedFrames(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumDroppedFrames() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumReprojectedFrames(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumReprojectedFrames() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumFramePresentsOnStartup(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumFramePresentsOnStartup() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumDroppedFramesOnStartup(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumDroppedFramesOnStartup() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumReprojectedFramesOnStartup(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumReprojectedFramesOnStartup() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumLoading(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumLoading() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumFramePresentsLoading(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumFramePresentsLoading() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumDroppedFramesLoading(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x24>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumDroppedFramesLoading() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x24>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumReprojectedFramesLoading(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumReprojectedFramesLoading() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumTimedOut(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x2c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumTimedOut() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x2c>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumFramePresentsTimedOut(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumFramePresentsTimedOut() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumDroppedFramesTimedOut(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumDroppedFramesTimedOut() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_CumulativeStats::__set_m_nNumReprojectedFramesTimedOut(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_CumulativeStats::__get_m_nNumReprojectedFramesTimedOut() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->__instance);
}
} // end anonymous namespace
