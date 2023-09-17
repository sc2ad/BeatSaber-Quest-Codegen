#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NtlmAuthLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::LM_and_NTLM{0};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::LM_and_NTLM_and_try_NTLMv2_Session{1};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NTLM_only{2};
constexpr ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel  ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel::NTLMv2_only{3};
} // end anonymous namespace
