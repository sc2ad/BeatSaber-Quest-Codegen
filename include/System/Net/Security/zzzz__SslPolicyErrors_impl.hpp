#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Security::SslPolicyErrors::SslPolicyErrors(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Security::SslPolicyErrors::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Security::SslPolicyErrors::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Security::SslPolicyErrors  ::System::Net::Security::SslPolicyErrors::None{0};
constexpr ::System::Net::Security::SslPolicyErrors  ::System::Net::Security::SslPolicyErrors::RemoteCertificateNotAvailable{1};
constexpr ::System::Net::Security::SslPolicyErrors  ::System::Net::Security::SslPolicyErrors::RemoteCertificateNameMismatch{2};
constexpr ::System::Net::Security::SslPolicyErrors  ::System::Net::Security::SslPolicyErrors::RemoteCertificateChainErrors{4};
} // end anonymous namespace
