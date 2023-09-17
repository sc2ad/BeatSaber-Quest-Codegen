#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/AccessControl/zzzz__ControlFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::ControlFlags::ControlFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::AccessControl::ControlFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::AccessControl::ControlFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::None{0};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::OwnerDefaulted{1};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::GroupDefaulted{2};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::DiscretionaryAclPresent{4};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::DiscretionaryAclDefaulted{8};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::SystemAclPresent{16};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::SystemAclDefaulted{32};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::DiscretionaryAclUntrusted{64};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::ServerSecurity{128};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::DiscretionaryAclAutoInheritRequired{256};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::SystemAclAutoInheritRequired{512};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::DiscretionaryAclAutoInherited{1024};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::SystemAclAutoInherited{2048};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::DiscretionaryAclProtected{4096};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::SystemAclProtected{8192};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::RMControlValid{16384};
constexpr ::System::Security::AccessControl::ControlFlags  ::System::Security::AccessControl::ControlFlags::SelfRelative{32768};
} // end anonymous namespace
