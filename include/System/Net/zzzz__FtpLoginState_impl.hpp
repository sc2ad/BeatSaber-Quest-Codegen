#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__FtpLoginState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FtpLoginState::FtpLoginState(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::FtpLoginState::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::FtpLoginState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::System::Net::FtpLoginState  ::System::Net::FtpLoginState::NotLoggedIn{0u};
constexpr ::System::Net::FtpLoginState  ::System::Net::FtpLoginState::LoggedIn{1u};
constexpr ::System::Net::FtpLoginState  ::System::Net::FtpLoginState::LoggedInButNeedsRelogin{2u};
constexpr ::System::Net::FtpLoginState  ::System::Net::FtpLoginState::ReloginFailed{3u};
} // end anonymous namespace
