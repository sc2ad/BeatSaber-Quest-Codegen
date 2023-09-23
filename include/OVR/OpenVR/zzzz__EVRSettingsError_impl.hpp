#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRSettingsError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRSettingsError::EVRSettingsError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRSettingsError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRSettingsError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::None{0};
constexpr OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::IPCFailed{1};
constexpr OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::WriteFailed{2};
constexpr OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::ReadFailed{3};
constexpr OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::JsonParseFailed{4};
constexpr OVR::OpenVR::EVRSettingsError  OVR::OpenVR::EVRSettingsError::UnsetSettingHasNoDefault{5};
