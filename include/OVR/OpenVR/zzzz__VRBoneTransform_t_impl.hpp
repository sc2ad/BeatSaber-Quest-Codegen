#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector4_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuaternionf_t_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "OVR::OpenVR::HmdQuaternionf_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRBoneTransform_t::VRBoneTransform_t(OVR::OpenVR::HmdVector4_t position, OVR::OpenVR::HmdQuaternionf_t orientation) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->orientation = orientation;
}
constexpr void OVR::OpenVR::VRBoneTransform_t::__set_position(OVR::OpenVR::HmdVector4_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector4_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::HmdVector4_t>(value));
}
constexpr OVR::OpenVR::HmdVector4_t OVR::OpenVR::VRBoneTransform_t::__get_position() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector4_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VRBoneTransform_t::__set_orientation(OVR::OpenVR::HmdQuaternionf_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdQuaternionf_t, 0x10>(this->__instance, std::forward<OVR::OpenVR::HmdQuaternionf_t>(value));
}
constexpr OVR::OpenVR::HmdQuaternionf_t OVR::OpenVR::VRBoneTransform_t::__get_orientation() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdQuaternionf_t, 0x10>(this->__instance);
}
