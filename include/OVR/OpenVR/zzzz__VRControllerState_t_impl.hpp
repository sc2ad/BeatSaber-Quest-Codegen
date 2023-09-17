#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_def.hpp"
// Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRControllerState_t::VRControllerState_t(uint32_t unPacketNum, uint64_t ulButtonPressed, uint64_t ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t rAxis0, ::OVR::OpenVR::VRControllerAxis_t rAxis1, ::OVR::OpenVR::VRControllerAxis_t rAxis2, ::OVR::OpenVR::VRControllerAxis_t rAxis3, ::OVR::OpenVR::VRControllerAxis_t rAxis4) noexcept : ::bs_hook::ValueTypeWrapper() {this->unPacketNum = unPacketNum;
this->ulButtonPressed = ulButtonPressed;
this->ulButtonTouched = ulButtonTouched;
this->rAxis0 = rAxis0;
this->rAxis1 = rAxis1;
this->rAxis2 = rAxis2;
this->rAxis3 = rAxis3;
this->rAxis4 = rAxis4;
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_unPacketNum(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VRControllerState_t::__get_unPacketNum() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_ulButtonPressed(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VRControllerState_t::__get_ulButtonPressed() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_ulButtonTouched(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VRControllerState_t::__get_ulButtonTouched() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_rAxis0(::OVR::OpenVR::VRControllerAxis_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x18>(this->__instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t ::OVR::OpenVR::VRControllerState_t::__get_rAxis0() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x18>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_rAxis1(::OVR::OpenVR::VRControllerAxis_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x20>(this->__instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t ::OVR::OpenVR::VRControllerState_t::__get_rAxis1() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x20>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_rAxis2(::OVR::OpenVR::VRControllerAxis_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x28>(this->__instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t ::OVR::OpenVR::VRControllerState_t::__get_rAxis2() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x28>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_rAxis3(::OVR::OpenVR::VRControllerAxis_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x30>(this->__instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t ::OVR::OpenVR::VRControllerState_t::__get_rAxis3() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x30>(this->__instance);
}
constexpr void ::OVR::OpenVR::VRControllerState_t::__set_rAxis4(::OVR::OpenVR::VRControllerAxis_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x38>(this->__instance, std::forward<::OVR::OpenVR::VRControllerAxis_t>(value));
}
constexpr ::OVR::OpenVR::VRControllerAxis_t ::OVR::OpenVR::VRControllerState_t::__get_rAxis4() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::VRControllerAxis_t, 0x38>(this->__instance);
}
} // end anonymous namespace
