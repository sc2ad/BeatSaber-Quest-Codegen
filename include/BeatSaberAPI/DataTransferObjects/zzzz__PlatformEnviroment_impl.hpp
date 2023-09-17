#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "BeatSaberAPI/DataTransferObjects/zzzz__PlatformEnviroment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::PlatformEnviroment(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment  ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::Test{0u};
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment  ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::Developer{1u};
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment  ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::Production{2u};
} // end anonymous namespace
