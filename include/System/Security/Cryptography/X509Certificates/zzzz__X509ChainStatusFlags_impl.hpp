#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::X509ChainStatusFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NoError{0};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotTimeValid{1};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotTimeNested{2};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::Revoked{4};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotSignatureValid{8};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NotValidForUsage{16};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::UntrustedRoot{32};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::RevocationStatusUnknown{64};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::Cyclic{128};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidExtension{256};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidPolicyConstraints{512};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidBasicConstraints{1024};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::InvalidNameConstraints{2048};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotSupportedNameConstraint{4096};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotDefinedNameConstraint{8192};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotPermittedNameConstraint{16384};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasExcludedNameConstraint{32768};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::PartialChain{65536};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::CtlNotTimeValid{131072};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::CtlNotSignatureValid{262144};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::CtlNotValidForUsage{524288};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::OfflineRevocation{16777216};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::NoIssuanceChainPolicy{33554432};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::ExplicitDistrust{67108864};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasNotSupportedCriticalExtension{134217728};
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  System::Security::Cryptography::X509Certificates::X509ChainStatusFlags::HasWeakSignature{1048576};
