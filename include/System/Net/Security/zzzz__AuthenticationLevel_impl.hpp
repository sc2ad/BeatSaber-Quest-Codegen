#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Security/zzzz__AuthenticationLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Security::AuthenticationLevel::AuthenticationLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Security::AuthenticationLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Security::AuthenticationLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Security::AuthenticationLevel  System::Net::Security::AuthenticationLevel::None{0};
constexpr System::Net::Security::AuthenticationLevel  System::Net::Security::AuthenticationLevel::MutualAuthRequested{1};
constexpr System::Net::Security::AuthenticationLevel  System::Net::Security::AuthenticationLevel::MutualAuthRequired{2};
