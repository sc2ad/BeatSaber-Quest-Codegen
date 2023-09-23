#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRInputFilterCancelType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRInputFilterCancelType::EVRInputFilterCancelType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRInputFilterCancelType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRInputFilterCancelType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRInputFilterCancelType  OVR::OpenVR::EVRInputFilterCancelType::VRInputFilterCancel_Timers{0};
constexpr OVR::OpenVR::EVRInputFilterCancelType  OVR::OpenVR::EVRInputFilterCancelType::VRInputFilterCancel_Momentum{1};
