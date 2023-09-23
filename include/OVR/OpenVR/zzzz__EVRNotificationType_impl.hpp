#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRNotificationType::EVRNotificationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRNotificationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRNotificationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRNotificationType  OVR::OpenVR::EVRNotificationType::Transient{0};
constexpr OVR::OpenVR::EVRNotificationType  OVR::OpenVR::EVRNotificationType::Persistent{1};
constexpr OVR::OpenVR::EVRNotificationType  OVR::OpenVR::EVRNotificationType::Transient_SystemWithUserValue{2};
