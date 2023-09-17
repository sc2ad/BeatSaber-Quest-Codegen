#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode::RijndaelManagedTransformMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Cryptography::RijndaelManagedTransformMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Cryptography::RijndaelManagedTransformMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode  ::System::Security::Cryptography::RijndaelManagedTransformMode::Encrypt{0};
constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode  ::System::Security::Cryptography::RijndaelManagedTransformMode::Decrypt{1};
} // end anonymous namespace
