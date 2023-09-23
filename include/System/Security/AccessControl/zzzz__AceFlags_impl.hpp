#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::AccessControl::AceFlags::AceFlags(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::AccessControl::AceFlags::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Security::AccessControl::AceFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::None{0u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::ObjectInherit{1u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::ContainerInherit{2u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::NoPropagateInherit{4u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::InheritOnly{8u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::InheritanceFlags{15u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::Inherited{16u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::SuccessfulAccess{64u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::FailedAccess{128u};
constexpr System::Security::AccessControl::AceFlags  System::Security::AccessControl::AceFlags::AuditFlags{192u};
