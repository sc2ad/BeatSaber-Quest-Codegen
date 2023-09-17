#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::SecurityAction::SecurityAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Permissions::SecurityAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Permissions::SecurityAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::Demand{2};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::Assert{3};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::Deny{4};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::PermitOnly{5};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::LinkDemand{6};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::InheritanceDemand{7};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::RequestMinimum{8};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::RequestOptional{9};
constexpr ::System::Security::Permissions::SecurityAction  ::System::Security::Permissions::SecurityAction::RequestRefuse{10};
} // end anonymous namespace
