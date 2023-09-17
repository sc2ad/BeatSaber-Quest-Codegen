#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::X509KeyUsageFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::None{0};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::EncipherOnly{1};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::CrlSign{2};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyCertSign{4};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyAgreement{8};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DataEncipherment{16};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::KeyEncipherment{32};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::NonRepudiation{64};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DigitalSignature{128};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags::DecipherOnly{32768};
} // end anonymous namespace
