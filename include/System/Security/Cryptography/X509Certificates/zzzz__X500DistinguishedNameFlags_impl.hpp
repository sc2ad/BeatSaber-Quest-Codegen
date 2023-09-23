#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedNameFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::X500DistinguishedNameFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::None{0};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::Reversed{1};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseSemicolons{16};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::DoNotUsePlusSign{32};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::DoNotUseQuotes{64};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseCommas{128};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseNewLines{256};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseUTF8Encoding{4096};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::UseT61Encoding{8192};
constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags::ForceUTF8Encoding{16384};
