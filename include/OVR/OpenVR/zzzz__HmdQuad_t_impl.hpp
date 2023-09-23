#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
// Ctor Parameters [CppParam { name: "vCorners0", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vCorners1", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vCorners2", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vCorners3", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::HmdQuad_t::HmdQuad_t(OVR::OpenVR::HmdVector3_t vCorners0, OVR::OpenVR::HmdVector3_t vCorners1, OVR::OpenVR::HmdVector3_t vCorners2, OVR::OpenVR::HmdVector3_t vCorners3) noexcept : ::bs_hook::ValueTypeWrapper() {this->vCorners0 = vCorners0;
this->vCorners1 = vCorners1;
this->vCorners2 = vCorners2;
this->vCorners3 = vCorners3;
}
constexpr void OVR::OpenVR::HmdQuad_t::__set_vCorners0(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::HmdQuad_t::__get_vCorners0() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::HmdQuad_t::__set_vCorners1(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0xc>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::HmdQuad_t::__get_vCorners1() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::HmdQuad_t::__set_vCorners2(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0x18>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::HmdQuad_t::__get_vCorners2() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::HmdQuad_t::__set_vCorners3(OVR::OpenVR::HmdVector3_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector3_t, 0x24>(this->__instance, std::forward<OVR::OpenVR::HmdVector3_t>(value));
}
constexpr OVR::OpenVR::HmdVector3_t OVR::OpenVR::HmdQuad_t::__get_vCorners3() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector3_t, 0x24>(this->__instance);
}
