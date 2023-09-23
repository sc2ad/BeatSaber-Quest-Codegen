#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::X509Certificates::StoreName::StoreName(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::X509Certificates::StoreName::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::X509Certificates::StoreName::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::AddressBook{1};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::AuthRoot{2};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::CertificateAuthority{3};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::Disallowed{4};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::My{5};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::Root{6};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::TrustedPeople{7};
constexpr System::Security::Cryptography::X509Certificates::StoreName  System::Security::Cryptography::X509Certificates::StoreName::TrustedPublisher{8};
