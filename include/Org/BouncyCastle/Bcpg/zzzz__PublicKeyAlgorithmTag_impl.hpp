#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::PublicKeyAlgorithmTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::RsaGeneral{1};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::RsaEncrypt{2};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::RsaSign{3};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::ElGamalEncrypt{16};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Dsa{17};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::EC{18};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::ECDH{18};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::ECDsa{19};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::ElGamalGeneral{20};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::DiffieHellman{21};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::EdDsa{22};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_1{100};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_2{101};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_3{102};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_4{103};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_5{104};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_6{105};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_7{106};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_8{107};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_9{108};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_10{109};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag::Experimental_11{110};
} // end anonymous namespace
