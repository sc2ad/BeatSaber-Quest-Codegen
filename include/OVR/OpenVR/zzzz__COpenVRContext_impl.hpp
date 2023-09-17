#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__COpenVRContext_def.hpp"
// Ctor Parameters [CppParam { name: "m_pVRSystem", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRChaperone", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRChaperoneSetup", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRCompositor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVROverlay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRResources", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRRenderModels", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRExtendedDisplay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRSettings", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRApplications", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRTrackedCamera", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRScreenshots", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRDriverManager", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRInput", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRIOBuffer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRSpatialAnchors", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::COpenVRContext::COpenVRContext(::cordl_internals::intptr_t m_pVRSystem, ::cordl_internals::intptr_t m_pVRChaperone, ::cordl_internals::intptr_t m_pVRChaperoneSetup, ::cordl_internals::intptr_t m_pVRCompositor, ::cordl_internals::intptr_t m_pVROverlay, ::cordl_internals::intptr_t m_pVRResources, ::cordl_internals::intptr_t m_pVRRenderModels, ::cordl_internals::intptr_t m_pVRExtendedDisplay, ::cordl_internals::intptr_t m_pVRSettings, ::cordl_internals::intptr_t m_pVRApplications, ::cordl_internals::intptr_t m_pVRTrackedCamera, ::cordl_internals::intptr_t m_pVRScreenshots, ::cordl_internals::intptr_t m_pVRDriverManager, ::cordl_internals::intptr_t m_pVRInput, ::cordl_internals::intptr_t m_pVRIOBuffer, ::cordl_internals::intptr_t m_pVRSpatialAnchors) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_pVRSystem = m_pVRSystem;
this->m_pVRChaperone = m_pVRChaperone;
this->m_pVRChaperoneSetup = m_pVRChaperoneSetup;
this->m_pVRCompositor = m_pVRCompositor;
this->m_pVROverlay = m_pVROverlay;
this->m_pVRResources = m_pVRResources;
this->m_pVRRenderModels = m_pVRRenderModels;
this->m_pVRExtendedDisplay = m_pVRExtendedDisplay;
this->m_pVRSettings = m_pVRSettings;
this->m_pVRApplications = m_pVRApplications;
this->m_pVRTrackedCamera = m_pVRTrackedCamera;
this->m_pVRScreenshots = m_pVRScreenshots;
this->m_pVRDriverManager = m_pVRDriverManager;
this->m_pVRInput = m_pVRInput;
this->m_pVRIOBuffer = m_pVRIOBuffer;
this->m_pVRSpatialAnchors = m_pVRSpatialAnchors;
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRSystem(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRSystem() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRChaperone(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRChaperone() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRChaperoneSetup(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRChaperoneSetup() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRCompositor(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRCompositor() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVROverlay(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVROverlay() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRResources(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRResources() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRRenderModels(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x30>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRRenderModels() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x30>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRExtendedDisplay(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x38>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRExtendedDisplay() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x38>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRSettings(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x40>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRSettings() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x40>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRApplications(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x48>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRApplications() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x48>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRTrackedCamera(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x50>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRTrackedCamera() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x50>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRScreenshots(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x58>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRScreenshots() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x58>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRDriverManager(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x60>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRDriverManager() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x60>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRInput(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x68>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRInput() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x68>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRIOBuffer(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x70>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRIOBuffer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x70>(this->__instance);
}
constexpr void ::OVR::OpenVR::COpenVRContext::__set_m_pVRSpatialAnchors(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x78>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::COpenVRContext::__get_m_pVRSpatialAnchors() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x78>(this->__instance);
}
} // end anonymous namespace
