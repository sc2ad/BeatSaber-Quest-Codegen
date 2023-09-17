#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSASignaturePaddingMode_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::RSASignaturePaddingMode::RSASignaturePaddingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::Cryptography::RSASignaturePaddingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::RSASignaturePaddingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::Cryptography::RSASignaturePaddingMode  System::Security::Cryptography::RSASignaturePaddingMode::Pkcs1{0};
constexpr System::Security::Cryptography::RSASignaturePaddingMode  System::Security::Cryptography::RSASignaturePaddingMode::Pss{1};
} // end anonymous namespace
