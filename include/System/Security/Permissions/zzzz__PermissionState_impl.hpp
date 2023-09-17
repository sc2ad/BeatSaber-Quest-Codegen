#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::PermissionState::PermissionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Permissions::PermissionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Permissions::PermissionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Permissions::PermissionState  ::System::Security::Permissions::PermissionState::None{0};
constexpr ::System::Security::Permissions::PermissionState  ::System::Security::Permissions::PermissionState::Unrestricted{1};
} // end anonymous namespace
