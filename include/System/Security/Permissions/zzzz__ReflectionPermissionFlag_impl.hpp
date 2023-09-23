#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Permissions::ReflectionPermissionFlag::ReflectionPermissionFlag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Permissions::ReflectionPermissionFlag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Permissions::ReflectionPermissionFlag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::AllFlags{7};
constexpr System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::MemberAccess{2};
constexpr System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::NoFlags{0};
constexpr System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::ReflectionEmit{4};
constexpr System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::RestrictedMemberAccess{8};
constexpr System::Security::Permissions::ReflectionPermissionFlag  System::Security::Permissions::ReflectionPermissionFlag::TypeInformation{1};
