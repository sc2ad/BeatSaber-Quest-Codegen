#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Principal/zzzz__WindowsAccountType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Principal::WindowsAccountType::WindowsAccountType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Principal::WindowsAccountType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Principal::WindowsAccountType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Principal::WindowsAccountType  ::System::Security::Principal::WindowsAccountType::Normal{0};
constexpr ::System::Security::Principal::WindowsAccountType  ::System::Security::Principal::WindowsAccountType::Guest{1};
constexpr ::System::Security::Principal::WindowsAccountType  ::System::Security::Principal::WindowsAccountType::System{2};
constexpr ::System::Security::Principal::WindowsAccountType  ::System::Security::Principal::WindowsAccountType::Anonymous{3};
} // end anonymous namespace
