#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/X509Certificates/zzzz__X509FindType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType::X509FindType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::X509Certificates::X509FindType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::X509Certificates::X509FindType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByThumbprint{0};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindBySubjectName{1};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindBySubjectDistinguishedName{2};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByIssuerName{3};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByIssuerDistinguishedName{4};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindBySerialNumber{5};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByTimeValid{6};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByTimeNotYetValid{7};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByTimeExpired{8};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByTemplateName{9};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByApplicationPolicy{10};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByCertificatePolicy{11};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByExtension{12};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindByKeyUsage{13};
constexpr ::System::Security::Cryptography::X509Certificates::X509FindType  ::System::Security::Cryptography::X509Certificates::X509FindType::FindBySubjectKeyIdentifier{14};
} // end anonymous namespace
