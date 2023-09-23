#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ComponentState_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
// Ctor Parameters [CppParam { name: "mTrackingToComponentRenderModel", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mTrackingToComponentLocal", ty: "OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uProperties", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::RenderModel_ComponentState_t::RenderModel_ComponentState_t(OVR::OpenVR::HmdMatrix34_t mTrackingToComponentRenderModel, OVR::OpenVR::HmdMatrix34_t mTrackingToComponentLocal, uint32_t uProperties) noexcept : ::bs_hook::ValueTypeWrapper() {this->mTrackingToComponentRenderModel = mTrackingToComponentRenderModel;
this->mTrackingToComponentLocal = mTrackingToComponentLocal;
this->uProperties = uProperties;
}
constexpr void OVR::OpenVR::RenderModel_ComponentState_t::__set_mTrackingToComponentRenderModel(OVR::OpenVR::HmdMatrix34_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::RenderModel_ComponentState_t::__get_mTrackingToComponentRenderModel() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_ComponentState_t::__set_mTrackingToComponentLocal(OVR::OpenVR::HmdMatrix34_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x30>(this->__instance, std::forward<OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr OVR::OpenVR::HmdMatrix34_t OVR::OpenVR::RenderModel_ComponentState_t::__get_mTrackingToComponentLocal() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdMatrix34_t, 0x30>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_ComponentState_t::__set_uProperties(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x60>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::RenderModel_ComponentState_t::__get_uProperties() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->__instance);
}
