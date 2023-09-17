#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors::MonoSslPolicyErrors(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Security::Interface::MonoSslPolicyErrors::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Security::Interface::MonoSslPolicyErrors::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  ::Mono::Security::Interface::MonoSslPolicyErrors::None{0};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  ::Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateNotAvailable{1};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  ::Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateNameMismatch{2};
constexpr ::Mono::Security::Interface::MonoSslPolicyErrors  ::Mono::Security::Interface::MonoSslPolicyErrors::RemoteCertificateChainErrors{4};
} // end anonymous namespace
