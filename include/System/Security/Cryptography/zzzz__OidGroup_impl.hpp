#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__OidGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::OidGroup::OidGroup(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::OidGroup::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::OidGroup::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::All{0};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::HashAlgorithm{1};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::EncryptionAlgorithm{2};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::PublicKeyAlgorithm{3};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::SignatureAlgorithm{4};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::Attribute{5};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::ExtensionOrAttribute{6};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::EnhancedKeyUsage{7};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::Policy{8};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::Template{9};
constexpr ::System::Security::Cryptography::OidGroup  ::System::Security::Cryptography::OidGroup::KeyDerivationFunction{10};
} // end anonymous namespace
