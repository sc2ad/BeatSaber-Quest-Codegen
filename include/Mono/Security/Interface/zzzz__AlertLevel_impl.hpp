#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::AlertLevel::AlertLevel(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Security::Interface::AlertLevel::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Mono::Security::Interface::AlertLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::Mono::Security::Interface::AlertLevel  ::Mono::Security::Interface::AlertLevel::Warning{1u};
constexpr ::Mono::Security::Interface::AlertLevel  ::Mono::Security::Interface::AlertLevel::Fatal{2u};
} // end anonymous namespace
