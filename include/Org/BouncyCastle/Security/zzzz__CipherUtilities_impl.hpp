#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Security/zzzz__CipherUtilities_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::AES{0};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::ARC4{1};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::BLOWFISH{2};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::CAMELLIA{3};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::CAST5{4};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::CAST6{5};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::CHACHA{6};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::CHACHA20_POLY1305{7};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::CHACHA7539{8};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::DES{9};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::DESEDE{10};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::ELGAMAL{11};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::GOST28147{12};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::HC128{13};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::HC256{14};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::IDEA{15};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::NOEKEON{16};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::PBEWITHSHAAND128BITRC4{17};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::PBEWITHSHAAND40BITRC4{18};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::RC2{19};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::RC5{20};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::RC5_64{21};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::RC6{22};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::RIJNDAEL{23};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::RSA{24};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::SALSA20{25};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::SEED{26};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::SERPENT{27};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::SKIPJACK{28};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::SM4{29};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::TEA{30};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::THREEFISH_256{31};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::THREEFISH_512{32};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::THREEFISH_1024{33};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::TNEPRES{34};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::TWOFISH{35};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::VMPC{36};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::VMPC_KSA3{37};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm::XTEA{38};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::Org__BouncyCastle__Security__CipherUtilities__CipherMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::ECB{0};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::NONE{1};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::CBC{2};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::CCM{3};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::CFB{4};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::CTR{5};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::CTS{6};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::EAX{7};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::GCM{8};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::GOFB{9};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::OCB{10};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::OFB{11};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::OPENPGPCFB{12};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherMode::SIC{13};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::Org__BouncyCastle__Security__CipherUtilities__CipherPadding(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::NOPADDING{0};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::RAW{1};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO10126PADDING{2};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO10126D2PADDING{3};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO10126_2PADDING{4};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO7816_4PADDING{5};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO9797_1PADDING{6};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO9796_1{7};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ISO9796_1PADDING{8};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEP{9};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPPADDING{10};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHMD5ANDMGF1PADDING{11};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA1ANDMGF1PADDING{12};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA_1ANDMGF1PADDING{13};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA224ANDMGF1PADDING{14};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA_224ANDMGF1PADDING{15};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA256ANDMGF1PADDING{16};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA_256ANDMGF1PADDING{17};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA384ANDMGF1PADDING{18};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA_384ANDMGF1PADDING{19};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA512ANDMGF1PADDING{20};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::OAEPWITHSHA_512ANDMGF1PADDING{21};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::PKCS1{22};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::PKCS1PADDING{23};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::PKCS5{24};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::PKCS5PADDING{25};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::PKCS7{26};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::PKCS7PADDING{27};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::TBCPADDING{28};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::WITHCTS{29};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::X923PADDING{30};
constexpr Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding  Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherPadding::ZEROBYTEPADDING{31};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::CipherUtilities::*)()>(&Org::BouncyCastle::Security::CipherUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10953cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.GetObjectIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier (*)(::StringW)>(&Org::BouncyCastle::Security::CipherUtilities::GetObjectIdentifier)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x10953d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetObjectIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.get_Algorithms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)()>(&Org::BouncyCastle::Security::CipherUtilities::get_Algorithms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1095630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "get_Algorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.GetCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBufferedCipher (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::CipherUtilities::GetCipher)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10956fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.GetCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBufferedCipher (*)(::StringW)>(&Org::BouncyCastle::Security::CipherUtilities::GetCipher)> {
  constexpr static std::size_t size = 0x21cc;
  constexpr static std::size_t addrs = 0x109575c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.GetAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::CipherUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1097f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.GetDigitIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&Org::BouncyCastle::Security::CipherUtilities::GetDigitIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1097928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetDigitIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::CipherUtilities.CreateBlockCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBlockCipher (*)(Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm)>(&Org::BouncyCastle::Security::CipherUtilities::CreateBlockCipher)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x10979d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "CreateBlockCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Security::CipherUtilities::__set_algorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::CipherUtilities::__get_algorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get>();
}
 void Org::BouncyCastle::Security::CipherUtilities::__set_oids(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::CipherUtilities::__get_oids()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Security::CipherUtilities::CipherUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CipherUtilities>())) {}
 void Org::BouncyCastle::Security::CipherUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Security::CipherUtilities::GetObjectIdentifier(::StringW mechanism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetObjectIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(nullptr, ___internal_method, mechanism);
}
 System::Collections::ICollection Org::BouncyCastle::Security::CipherUtilities::get_Algorithms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "get_Algorithms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method);
}
 Org::BouncyCastle::Crypto::IBufferedCipher Org::BouncyCastle::Security::CipherUtilities::GetCipher(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBufferedCipher, false>(nullptr, ___internal_method, oid);
}
 Org::BouncyCastle::Crypto::IBufferedCipher Org::BouncyCastle::Security::CipherUtilities::GetCipher(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBufferedCipher, false>(nullptr, ___internal_method, algorithm);
}
 ::StringW Org::BouncyCastle::Security::CipherUtilities::GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
 int32_t Org::BouncyCastle::Security::CipherUtilities::GetDigitIndex(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "GetDigitIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
 Org::BouncyCastle::Crypto::IBlockCipher Org::BouncyCastle::Security::CipherUtilities::CreateBlockCipher(Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm cipherAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::CipherUtilities>::get(),
                            "CreateBlockCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::Org__BouncyCastle__Security__CipherUtilities__CipherAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBlockCipher, false>(nullptr, ___internal_method, cipherAlgorithm);
}
