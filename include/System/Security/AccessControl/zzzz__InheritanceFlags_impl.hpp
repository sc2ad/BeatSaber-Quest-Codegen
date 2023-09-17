#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::InheritanceFlags::InheritanceFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::AccessControl::InheritanceFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::AccessControl::InheritanceFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::AccessControl::InheritanceFlags  ::System::Security::AccessControl::InheritanceFlags::None{0};
constexpr ::System::Security::AccessControl::InheritanceFlags  ::System::Security::AccessControl::InheritanceFlags::ContainerInherit{1};
constexpr ::System::Security::AccessControl::InheritanceFlags  ::System::Security::AccessControl::InheritanceFlags::ObjectInherit{2};
} // end anonymous namespace
