#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::ConfigurationSaveMode::ConfigurationSaveMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Configuration::ConfigurationSaveMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Configuration::ConfigurationSaveMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Configuration::ConfigurationSaveMode  ::System::Configuration::ConfigurationSaveMode::Full{2};
constexpr ::System::Configuration::ConfigurationSaveMode  ::System::Configuration::ConfigurationSaveMode::Minimal{1};
constexpr ::System::Configuration::ConfigurationSaveMode  ::System::Configuration::ConfigurationSaveMode::Modified{0};
} // end anonymous namespace
