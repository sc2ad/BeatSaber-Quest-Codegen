#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRState::EVRState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Undefined{-1};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Off{0};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Searching{1};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Searching_Alert{2};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready{3};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready_Alert{4};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::NotReady{5};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Standby{6};
constexpr OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready_Alert_Low{7};
