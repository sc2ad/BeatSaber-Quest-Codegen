#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
// Ctor Parameters [CppParam { name: "Exponent", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Modulus", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "P", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Q", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "DP", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "DQ", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "InverseQ", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "D", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Security::Cryptography::RSAParameters::RSAParameters(::ArrayW<uint8_t> Exponent, ::ArrayW<uint8_t> Modulus, ::ArrayW<uint8_t> P, ::ArrayW<uint8_t> Q, ::ArrayW<uint8_t> DP, ::ArrayW<uint8_t> DQ, ::ArrayW<uint8_t> InverseQ, ::ArrayW<uint8_t> D) noexcept : ::bs_hook::ValueTypeWrapper() {this->Exponent = Exponent;
this->Modulus = Modulus;
this->P = P;
this->Q = Q;
this->DP = DP;
this->DQ = DQ;
this->InverseQ = InverseQ;
this->D = D;
}
constexpr void System::Security::Cryptography::RSAParameters::__set_Exponent(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_Exponent() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_Modulus(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_Modulus() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_P(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_P() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_Q(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_Q() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_DP(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_DP() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_DQ(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_DQ() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_InverseQ(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_InverseQ() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::Security::Cryptography::RSAParameters::__set_D(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::RSAParameters::__get_D() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance);
}
