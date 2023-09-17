#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EOverlayDirection::EOverlayDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EOverlayDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EOverlayDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EOverlayDirection  ::OVR::OpenVR::EOverlayDirection::Up{0};
constexpr ::OVR::OpenVR::EOverlayDirection  ::OVR::OpenVR::EOverlayDirection::Down{1};
constexpr ::OVR::OpenVR::EOverlayDirection  ::OVR::OpenVR::EOverlayDirection::Left{2};
constexpr ::OVR::OpenVR::EOverlayDirection  ::OVR::OpenVR::EOverlayDirection::Right{3};
constexpr ::OVR::OpenVR::EOverlayDirection  ::OVR::OpenVR::EOverlayDirection::Count{4};
} // end anonymous namespace
