#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
// Ctor Parameters [CppParam { name: "P", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Q", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "G", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Y", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "J", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "X", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Counter", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::Cryptography::DSAParameters::DSAParameters(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> Q, ::ArrayW<uint8_t> G, ::ArrayW<uint8_t> Y, ::ArrayW<uint8_t> J, ::ArrayW<uint8_t> X, ::ArrayW<uint8_t> Seed, int32_t Counter) noexcept : ::bs_hook::ValueTypeWrapper() {this->P = P;
this->Q = Q;
this->G = G;
this->Y = Y;
this->J = J;
this->X = X;
this->Seed = Seed;
this->Counter = Counter;
}
constexpr void System::Security::Cryptography::DSAParameters::__set_P(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_P() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_Q(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_Q() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_G(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_G() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_Y(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_Y() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_J(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_J() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_X(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_X() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_Seed(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Security::Cryptography::DSAParameters::__get_Seed() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void System::Security::Cryptography::DSAParameters::__set_Counter(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::DSAParameters::__get_Counter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
