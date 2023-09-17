#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
// Ctor Parameters [CppParam { name: "vTopLeft", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vBottomRight", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdRect2_t::HmdRect2_t(::OVR::OpenVR::HmdVector2_t vTopLeft, ::OVR::OpenVR::HmdVector2_t vBottomRight) noexcept : ::bs_hook::ValueTypeWrapper() {this->vTopLeft = vTopLeft;
this->vBottomRight = vBottomRight;
}
constexpr void ::OVR::OpenVR::HmdRect2_t::__set_vTopLeft(::OVR::OpenVR::HmdVector2_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector2_t, 0x0>(this->__instance, std::forward<::OVR::OpenVR::HmdVector2_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector2_t ::OVR::OpenVR::HmdRect2_t::__get_vTopLeft() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector2_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdRect2_t::__set_vBottomRight(::OVR::OpenVR::HmdVector2_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector2_t, 0x8>(this->__instance, std::forward<::OVR::OpenVR::HmdVector2_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector2_t ::OVR::OpenVR::HmdRect2_t::__get_vBottomRight() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector2_t, 0x8>(this->__instance);
}
} // end anonymous namespace
