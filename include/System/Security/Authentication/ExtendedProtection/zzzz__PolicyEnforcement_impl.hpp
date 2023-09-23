#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__PolicyEnforcement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Authentication::ExtendedProtection::PolicyEnforcement::PolicyEnforcement(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Authentication::ExtendedProtection::PolicyEnforcement::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Authentication::ExtendedProtection::PolicyEnforcement::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Authentication::ExtendedProtection::PolicyEnforcement  System::Security::Authentication::ExtendedProtection::PolicyEnforcement::Never{0};
constexpr System::Security::Authentication::ExtendedProtection::PolicyEnforcement  System::Security::Authentication::ExtendedProtection::PolicyEnforcement::WhenSupported{1};
constexpr System::Security::Authentication::ExtendedProtection::PolicyEnforcement  System::Security::Authentication::ExtendedProtection::PolicyEnforcement::Always{2};
