#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VRTextureDepthInfo_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mProjection", ty: "OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vRange", ty: "OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VRTextureDepthInfo_t::VRTextureDepthInfo_t(::cordl_internals::intptr_t handle, OVR::OpenVR::HmdMatrix44_t mProjection, OVR::OpenVR::HmdVector2_t vRange) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
this->mProjection = mProjection;
this->vRange = vRange;
}
constexpr void OVR::OpenVR::VRTextureDepthInfo_t::__set_handle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::VRTextureDepthInfo_t::__get_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VRTextureDepthInfo_t::__set_mProjection(OVR::OpenVR::HmdMatrix44_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdMatrix44_t, 0x8>(this->__instance, std::forward<OVR::OpenVR::HmdMatrix44_t>(value));
}
constexpr OVR::OpenVR::HmdMatrix44_t OVR::OpenVR::VRTextureDepthInfo_t::__get_mProjection() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdMatrix44_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::VRTextureDepthInfo_t::__set_vRange(OVR::OpenVR::HmdVector2_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::HmdVector2_t, 0x48>(this->__instance, std::forward<OVR::OpenVR::HmdVector2_t>(value));
}
constexpr OVR::OpenVR::HmdVector2_t OVR::OpenVR::VRTextureDepthInfo_t::__get_vRange() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::HmdVector2_t, 0x48>(this->__instance);
}
