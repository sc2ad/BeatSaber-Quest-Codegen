#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/X509Certificates/zzzz__X509VerificationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::X509VerificationFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::NoFlag{0};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreNotTimeValid{1};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreCtlNotTimeValid{2};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreNotTimeNested{4};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreInvalidBasicConstraints{8};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::AllowUnknownCertificateAuthority{16};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreWrongUsage{32};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreInvalidName{64};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreInvalidPolicy{128};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreEndRevocationUnknown{256};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreCtlSignerRevocationUnknown{512};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreCertificateAuthorityRevocationUnknown{1024};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::IgnoreRootRevocationUnknown{2048};
constexpr ::System::Security::Cryptography::X509Certificates::X509VerificationFlags  ::System::Security::Cryptography::X509Certificates::X509VerificationFlags::AllFlags{4095};
} // end anonymous namespace
