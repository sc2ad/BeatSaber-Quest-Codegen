#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFrameIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flSystemTimeInSeconds", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flPreSubmitGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flPostSubmitGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flTotalRenderGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorRenderGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorRenderCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorIdleCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flClientFrameIntervalMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flPresentCallCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flWaitForPresentCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flSubmitFrameMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flWaitGetPosesCalledMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flNewPosesReadyMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flNewFrameReadyMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorUpdateStartMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorUpdateEndMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorRenderStartMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HmdPose", ty: "OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::Compositor_FrameTiming::Compositor_FrameTiming(uint32_t m_nSize, uint32_t m_nFrameIndex, uint32_t m_nNumFramePresents, uint32_t m_nNumMisPresented, uint32_t m_nNumDroppedFrames, uint32_t m_nReprojectionFlags, double_t m_flSystemTimeInSeconds, float_t m_flPreSubmitGpuMs, float_t m_flPostSubmitGpuMs, float_t m_flTotalRenderGpuMs, float_t m_flCompositorRenderGpuMs, float_t m_flCompositorRenderCpuMs, float_t m_flCompositorIdleCpuMs, float_t m_flClientFrameIntervalMs, float_t m_flPresentCallCpuMs, float_t m_flWaitForPresentCpuMs, float_t m_flSubmitFrameMs, float_t m_flWaitGetPosesCalledMs, float_t m_flNewPosesReadyMs, float_t m_flNewFrameReadyMs, float_t m_flCompositorUpdateStartMs, float_t m_flCompositorUpdateEndMs, float_t m_flCompositorRenderStartMs, OVR::OpenVR::TrackedDevicePose_t m_HmdPose) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nSize = m_nSize;
this->m_nFrameIndex = m_nFrameIndex;
this->m_nNumFramePresents = m_nNumFramePresents;
this->m_nNumMisPresented = m_nNumMisPresented;
this->m_nNumDroppedFrames = m_nNumDroppedFrames;
this->m_nReprojectionFlags = m_nReprojectionFlags;
this->m_flSystemTimeInSeconds = m_flSystemTimeInSeconds;
this->m_flPreSubmitGpuMs = m_flPreSubmitGpuMs;
this->m_flPostSubmitGpuMs = m_flPostSubmitGpuMs;
this->m_flTotalRenderGpuMs = m_flTotalRenderGpuMs;
this->m_flCompositorRenderGpuMs = m_flCompositorRenderGpuMs;
this->m_flCompositorRenderCpuMs = m_flCompositorRenderCpuMs;
this->m_flCompositorIdleCpuMs = m_flCompositorIdleCpuMs;
this->m_flClientFrameIntervalMs = m_flClientFrameIntervalMs;
this->m_flPresentCallCpuMs = m_flPresentCallCpuMs;
this->m_flWaitForPresentCpuMs = m_flWaitForPresentCpuMs;
this->m_flSubmitFrameMs = m_flSubmitFrameMs;
this->m_flWaitGetPosesCalledMs = m_flWaitGetPosesCalledMs;
this->m_flNewPosesReadyMs = m_flNewPosesReadyMs;
this->m_flNewFrameReadyMs = m_flNewFrameReadyMs;
this->m_flCompositorUpdateStartMs = m_flCompositorUpdateStartMs;
this->m_flCompositorUpdateEndMs = m_flCompositorUpdateEndMs;
this->m_flCompositorRenderStartMs = m_flCompositorRenderStartMs;
this->m_HmdPose = m_HmdPose;
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_nSize(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::Compositor_FrameTiming::__get_m_nSize() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_nFrameIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::Compositor_FrameTiming::__get_m_nFrameIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_nNumFramePresents(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::Compositor_FrameTiming::__get_m_nNumFramePresents() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_nNumMisPresented(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::Compositor_FrameTiming::__get_m_nNumMisPresented() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_nNumDroppedFrames(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::Compositor_FrameTiming::__get_m_nNumDroppedFrames() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_nReprojectionFlags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::Compositor_FrameTiming::__get_m_nReprojectionFlags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flSystemTimeInSeconds(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flSystemTimeInSeconds() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flPreSubmitGpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flPreSubmitGpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flPostSubmitGpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flPostSubmitGpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flTotalRenderGpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flTotalRenderGpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flCompositorRenderGpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flCompositorRenderGpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flCompositorRenderCpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flCompositorRenderCpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flCompositorIdleCpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flCompositorIdleCpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flClientFrameIntervalMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flClientFrameIntervalMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flPresentCallCpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flPresentCallCpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flWaitForPresentCpuMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flWaitForPresentCpuMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flSubmitFrameMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flSubmitFrameMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flWaitGetPosesCalledMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flWaitGetPosesCalledMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flNewPosesReadyMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flNewPosesReadyMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flNewFrameReadyMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flNewFrameReadyMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flCompositorUpdateStartMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flCompositorUpdateStartMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flCompositorUpdateEndMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flCompositorUpdateEndMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_flCompositorRenderStartMs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::Compositor_FrameTiming::__get_m_flCompositorRenderStartMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->__instance);
}
constexpr void OVR::OpenVR::Compositor_FrameTiming::__set_m_HmdPose(OVR::OpenVR::TrackedDevicePose_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::TrackedDevicePose_t, 0x60>(this->__instance, std::forward<OVR::OpenVR::TrackedDevicePose_t>(value));
}
constexpr OVR::OpenVR::TrackedDevicePose_t OVR::OpenVR::Compositor_FrameTiming::__get_m_HmdPose() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::TrackedDevicePose_t, 0x60>(this->__instance);
}
