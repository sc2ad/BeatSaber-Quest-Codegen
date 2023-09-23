#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::X509Certificates::X509ContentType::X509ContentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ContentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::X509Certificates::X509ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Unknown{0};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Cert{1};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::SerializedCert{2};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Pfx{3};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Pkcs12{3};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::SerializedStore{4};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Pkcs7{5};
constexpr System::Security::Cryptography::X509Certificates::X509ContentType  System::Security::Cryptography::X509Certificates::X509ContentType::Authenticode{6};
