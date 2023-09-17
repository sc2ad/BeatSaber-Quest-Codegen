#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Principal/zzzz__TokenImpersonationLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Principal::TokenImpersonationLevel::TokenImpersonationLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Principal::TokenImpersonationLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Principal::TokenImpersonationLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Principal::TokenImpersonationLevel  ::System::Security::Principal::TokenImpersonationLevel::None{0};
constexpr ::System::Security::Principal::TokenImpersonationLevel  ::System::Security::Principal::TokenImpersonationLevel::Anonymous{1};
constexpr ::System::Security::Principal::TokenImpersonationLevel  ::System::Security::Principal::TokenImpersonationLevel::Identification{2};
constexpr ::System::Security::Principal::TokenImpersonationLevel  ::System::Security::Principal::TokenImpersonationLevel::Impersonation{3};
constexpr ::System::Security::Principal::TokenImpersonationLevel  ::System::Security::Principal::TokenImpersonationLevel::Delegation{4};
} // end anonymous namespace
