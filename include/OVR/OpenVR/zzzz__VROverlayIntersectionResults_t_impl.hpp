#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
// Ctor Parameters [CppParam { name: "vPoint", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vNormal", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vUVs", ty: "OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VROverlayIntersectionResults_t::VROverlayIntersectionResults_t(OVR::OpenVR::HmdVector3_t vPoint, OVR::OpenVR::HmdVector3_t vNormal, OVR::OpenVR::HmdVector2_t vUVs, float_t fDistance) noexcept : ::bs_hook::ValueTypeWrapper() {this->vPoint = vPoint;
this->vNormal = vNormal;
this->vUVs = vUVs;
this->fDistance = fDistance;
}
constexpr void OVR::OpenVR::VROverlayIntersectionResults_t::__set_vPoint(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::VROverlayIntersectionResults_t::__get_vPoint() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VROverlayIntersectionResults_t::__set_vNormal(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0xc>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::VROverlayIntersectionResults_t::__get_vNormal() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::VROverlayIntersectionResults_t::__set_vUVs(OVR::OpenVR::HmdVector2_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector2_t, 0x18>(this->__instance, std::forward<OVR::OpenVR::HmdVector2_t>(value));
}
constexpr OVR::OpenVR::HmdVector2_t OVR::OpenVR::VROverlayIntersectionResults_t::__get_vUVs() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector2_t, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::VROverlayIntersectionResults_t::__set_fDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VROverlayIntersectionResults_t::__get_fDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
