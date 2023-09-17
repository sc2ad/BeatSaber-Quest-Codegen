#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::CipherMode::CipherMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::CipherMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::CipherMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::CipherMode  ::System::Security::Cryptography::CipherMode::CBC{1};
constexpr ::System::Security::Cryptography::CipherMode  ::System::Security::Cryptography::CipherMode::ECB{2};
constexpr ::System::Security::Cryptography::CipherMode  ::System::Security::Cryptography::CipherMode::OFB{3};
constexpr ::System::Security::Cryptography::CipherMode  ::System::Security::Cryptography::CipherMode::CFB{4};
constexpr ::System::Security::Cryptography::CipherMode  ::System::Security::Cryptography::CipherMode::CTS{5};
} // end anonymous namespace
