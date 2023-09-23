#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Permissions::SecurityPermissionFlag::SecurityPermissionFlag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Permissions::SecurityPermissionFlag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Permissions::SecurityPermissionFlag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::NoFlags{0};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::Assertion{1};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::UnmanagedCode{2};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::SkipVerification{4};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::Execution{8};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlThread{16};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlEvidence{32};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlPolicy{64};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::SerializationFormatter{128};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlDomainPolicy{256};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlPrincipal{512};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::ControlAppDomain{1024};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::RemotingConfiguration{2048};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::Infrastructure{4096};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::BindingRedirects{8192};
constexpr System::Security::Permissions::SecurityPermissionFlag  System::Security::Permissions::SecurityPermissionFlag::AllFlags{16383};
