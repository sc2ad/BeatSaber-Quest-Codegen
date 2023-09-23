#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__CookieToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::CookieToken::CookieToken(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::CookieToken::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::CookieToken::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::CookieToken  System::Net::CookieToken::Nothing{0};
constexpr System::Net::CookieToken  System::Net::CookieToken::NameValuePair{1};
constexpr System::Net::CookieToken  System::Net::CookieToken::Attribute{2};
constexpr System::Net::CookieToken  System::Net::CookieToken::EndToken{3};
constexpr System::Net::CookieToken  System::Net::CookieToken::EndCookie{4};
constexpr System::Net::CookieToken  System::Net::CookieToken::End{5};
constexpr System::Net::CookieToken  System::Net::CookieToken::Equals{6};
constexpr System::Net::CookieToken  System::Net::CookieToken::Comment{7};
constexpr System::Net::CookieToken  System::Net::CookieToken::CommentUrl{8};
constexpr System::Net::CookieToken  System::Net::CookieToken::CookieName{9};
constexpr System::Net::CookieToken  System::Net::CookieToken::Discard{10};
constexpr System::Net::CookieToken  System::Net::CookieToken::Domain{11};
constexpr System::Net::CookieToken  System::Net::CookieToken::Expires{12};
constexpr System::Net::CookieToken  System::Net::CookieToken::MaxAge{13};
constexpr System::Net::CookieToken  System::Net::CookieToken::Path{14};
constexpr System::Net::CookieToken  System::Net::CookieToken::Port{15};
constexpr System::Net::CookieToken  System::Net::CookieToken::Secure{16};
constexpr System::Net::CookieToken  System::Net::CookieToken::HttpOnly{17};
constexpr System::Net::CookieToken  System::Net::CookieToken::Unknown{18};
constexpr System::Net::CookieToken  System::Net::CookieToken::Version{19};
