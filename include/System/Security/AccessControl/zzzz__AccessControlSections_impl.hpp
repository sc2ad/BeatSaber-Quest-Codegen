#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::AccessControl::AccessControlSections::AccessControlSections(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::AccessControl::AccessControlSections::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::AccessControl::AccessControlSections::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::None{0};
constexpr System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Audit{1};
constexpr System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Access{2};
constexpr System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Owner{4};
constexpr System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Group{8};
constexpr System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::All{15};
