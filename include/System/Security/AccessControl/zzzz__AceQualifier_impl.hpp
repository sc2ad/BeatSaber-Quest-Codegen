#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::AccessControl::AceQualifier::AceQualifier(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::AccessControl::AceQualifier::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::AccessControl::AceQualifier::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::AccessControl::AceQualifier  System::Security::AccessControl::AceQualifier::AccessAllowed{0};
constexpr System::Security::AccessControl::AceQualifier  System::Security::AccessControl::AceQualifier::AccessDenied{1};
constexpr System::Security::AccessControl::AceQualifier  System::Security::AccessControl::AceQualifier::SystemAudit{2};
constexpr System::Security::AccessControl::AceQualifier  System::Security::AccessControl::AceQualifier::SystemAlarm{3};
