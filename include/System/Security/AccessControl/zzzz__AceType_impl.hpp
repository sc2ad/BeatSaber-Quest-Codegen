#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AceType::AceType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::AccessControl::AceType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Security::AccessControl::AceType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessAllowed{0u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessDenied{1u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAudit{2u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAlarm{3u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessAllowedCompound{4u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessAllowedObject{5u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessDeniedObject{6u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAuditObject{7u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAlarmObject{8u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessAllowedCallback{9u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessDeniedCallback{10u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessAllowedCallbackObject{11u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::AccessDeniedCallbackObject{12u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAuditCallback{13u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAlarmCallback{14u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAuditCallbackObject{15u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::SystemAlarmCallbackObject{16u};
constexpr ::System::Security::AccessControl::AceType  ::System::Security::AccessControl::AceType::MaxDefinedAceType{16u};
} // end anonymous namespace
