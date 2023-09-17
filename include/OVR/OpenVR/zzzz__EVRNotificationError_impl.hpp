#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRNotificationError::EVRNotificationError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRNotificationError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRNotificationError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRNotificationError  ::OVR::OpenVR::EVRNotificationError::OK{0};
constexpr ::OVR::OpenVR::EVRNotificationError  ::OVR::OpenVR::EVRNotificationError::InvalidNotificationId{100};
constexpr ::OVR::OpenVR::EVRNotificationError  ::OVR::OpenVR::EVRNotificationError::NotificationQueueFull{101};
constexpr ::OVR::OpenVR::EVRNotificationError  ::OVR::OpenVR::EVRNotificationError::InvalidOverlayHandle{102};
constexpr ::OVR::OpenVR::EVRNotificationError  ::OVR::OpenVR::EVRNotificationError::SystemWithUserValueAlreadyExists{103};
} // end anonymous namespace
