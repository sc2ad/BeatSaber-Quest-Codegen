#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::PaddingMode::PaddingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::PaddingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::PaddingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::PaddingMode  ::System::Security::Cryptography::PaddingMode::None{1};
constexpr ::System::Security::Cryptography::PaddingMode  ::System::Security::Cryptography::PaddingMode::PKCS7{2};
constexpr ::System::Security::Cryptography::PaddingMode  ::System::Security::Cryptography::PaddingMode::Zeros{3};
constexpr ::System::Security::Cryptography::PaddingMode  ::System::Security::Cryptography::PaddingMode::ANSIX923{4};
constexpr ::System::Security::Cryptography::PaddingMode  ::System::Security::Cryptography::PaddingMode::ISO10126{5};
} // end anonymous namespace
