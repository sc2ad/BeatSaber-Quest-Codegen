#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags::NtlmFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Security::Protocol::Ntlm::NtlmFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Security::Protocol::Ntlm::NtlmFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateUnicode{1};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateOem{2};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::RequestTarget{4};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateNtlm{512};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateDomainSupplied{4096};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateWorkstationSupplied{8192};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateAlwaysSign{32768};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::NegotiateNtlm2Key{524288};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::Negotiate128{536870912};
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags  Mono::Security::Protocol::Ntlm::NtlmFlags::Negotiate56{-2147483648};
