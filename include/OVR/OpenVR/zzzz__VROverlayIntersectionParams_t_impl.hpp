#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "vSource", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vDirection", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eOrigin", ty: "::OVR::OpenVR::ETrackingUniverseOrigin", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayIntersectionParams_t::VROverlayIntersectionParams_t(::OVR::OpenVR::HmdVector3_t vSource, ::OVR::OpenVR::HmdVector3_t vDirection, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) noexcept : ::bs_hook::ValueTypeWrapper() {this->vSource = vSource;
this->vDirection = vDirection;
this->eOrigin = eOrigin;
}
constexpr void ::OVR::OpenVR::VROverlayIntersectionParams_t::__set_vSource(::OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector3_t, 0x0>(this->__instance, std::forward<::OVR::OpenVR::HmdVector3_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector3_t ::OVR::OpenVR::VROverlayIntersectionParams_t::__get_vSource() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector3_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VROverlayIntersectionParams_t::__set_vDirection(::OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector3_t, 0xc>(this->__instance, std::forward<::OVR::OpenVR::HmdVector3_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector3_t ::OVR::OpenVR::VROverlayIntersectionParams_t::__get_vDirection() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector3_t, 0xc>(this->__instance);
}
constexpr void ::OVR::OpenVR::VROverlayIntersectionParams_t::__set_eOrigin(::OVR::OpenVR::ETrackingUniverseOrigin value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::ETrackingUniverseOrigin, 0x18>(this->__instance, std::forward<::OVR::OpenVR::ETrackingUniverseOrigin>(value));
}
constexpr ::OVR::OpenVR::ETrackingUniverseOrigin ::OVR::OpenVR::VROverlayIntersectionParams_t::__get_eOrigin() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::ETrackingUniverseOrigin, 0x18>(this->__instance);
}
} // end anonymous namespace
