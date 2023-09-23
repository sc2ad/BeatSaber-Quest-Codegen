#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::CspProviderFlags::CspProviderFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::CspProviderFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::CspProviderFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::NoFlags{0};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseMachineKeyStore{1};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseDefaultKeyContainer{2};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseNonExportableKey{4};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseExistingKey{8};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseArchivableKey{16};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::UseUserProtectedKey{32};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::NoPrompt{64};
constexpr System::Security::Cryptography::CspProviderFlags  System::Security::Cryptography::CspProviderFlags::CreateEphemeralKey{128};
