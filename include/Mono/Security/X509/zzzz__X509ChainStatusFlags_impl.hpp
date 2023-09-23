#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Security::X509::X509ChainStatusFlags::X509ChainStatusFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Security::X509::X509ChainStatusFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Security::X509::X509ChainStatusFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::InvalidBasicConstraints{1024};
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NoError{0};
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotSignatureValid{8};
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotTimeNested{2};
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::NotTimeValid{1};
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::PartialChain{65536};
constexpr Mono::Security::X509::X509ChainStatusFlags  Mono::Security::X509::X509ChainStatusFlags::UntrustedRoot{32};
