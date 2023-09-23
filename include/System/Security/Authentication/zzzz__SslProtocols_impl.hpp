#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Authentication::SslProtocols::SslProtocols(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Authentication::SslProtocols::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Authentication::SslProtocols::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::None{0};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Ssl2{12};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Ssl3{48};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls{192};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls11{768};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls12{3072};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls13{12288};
constexpr System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Default{240};
