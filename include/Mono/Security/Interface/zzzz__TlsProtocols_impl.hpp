#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::TlsProtocols::TlsProtocols(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Security::Interface::TlsProtocols::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Security::Interface::TlsProtocols::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Zero{0};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls10Client{128};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls10Server{64};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls10{192};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls11Client{512};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls11Server{256};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls11{768};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls12Client{2048};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls12Server{1024};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::Tls12{3072};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::ClientMask{2688};
constexpr ::Mono::Security::Interface::TlsProtocols  ::Mono::Security::Interface::TlsProtocols::ServerMask{1344};
} // end anonymous namespace
