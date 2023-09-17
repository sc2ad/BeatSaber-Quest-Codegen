#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformEnvironment::PlatformEnvironment(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::PlatformEnvironment::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::GlobalNamespace::PlatformEnvironment::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::PlatformEnvironment  ::GlobalNamespace::PlatformEnvironment::Development{0u};
constexpr ::GlobalNamespace::PlatformEnvironment  ::GlobalNamespace::PlatformEnvironment::Certification{1u};
constexpr ::GlobalNamespace::PlatformEnvironment  ::GlobalNamespace::PlatformEnvironment::Production{2u};
} // end anonymous namespace
