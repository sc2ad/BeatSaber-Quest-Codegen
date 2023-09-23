#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform::UserPlatform(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserPlatform::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t BeatSaberAPI::DataTransferObjects::UserPlatform::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform  BeatSaberAPI::DataTransferObjects::UserPlatform::None{0u};
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform  BeatSaberAPI::DataTransferObjects::UserPlatform::Test{1u};
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform  BeatSaberAPI::DataTransferObjects::UserPlatform::Steam{2u};
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform  BeatSaberAPI::DataTransferObjects::UserPlatform::PlayStation{3u};
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform  BeatSaberAPI::DataTransferObjects::UserPlatform::OculusPC{4u};
constexpr BeatSaberAPI::DataTransferObjects::UserPlatform  BeatSaberAPI::DataTransferObjects::UserPlatform::OculusQuest{5u};
