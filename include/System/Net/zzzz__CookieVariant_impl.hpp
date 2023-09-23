#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__CookieVariant_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::CookieVariant::CookieVariant(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::CookieVariant::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::CookieVariant::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::CookieVariant  System::Net::CookieVariant::Unknown{0};
constexpr System::Net::CookieVariant  System::Net::CookieVariant::Plain{1};
constexpr System::Net::CookieVariant  System::Net::CookieVariant::Rfc2109{2};
constexpr System::Net::CookieVariant  System::Net::CookieVariant::Rfc2965{3};
constexpr System::Net::CookieVariant  System::Net::CookieVariant::Default{2};
