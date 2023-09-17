#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::X509KeyStorageFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::DefaultKeySet{0};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::UserKeySet{1};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::MachineKeySet{2};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::Exportable{4};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::UserProtected{8};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::PersistKeySet{16};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::EphemeralKeySet{32};
} // end anonymous namespace
