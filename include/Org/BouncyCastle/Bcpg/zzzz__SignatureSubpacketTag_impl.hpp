#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureSubpacketTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacketTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Bcpg::SignatureSubpacketTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::CreationTime{2};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::ExpireTime{3};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Exportable{4};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::TrustSig{5};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RegExp{6};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Revocable{7};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyExpireTime{9};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Placeholder{10};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredSymmetricAlgorithms{11};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RevocationKey{12};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::IssuerKeyId{16};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::NotationData{20};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredHashAlgorithms{21};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredCompressionAlgorithms{22};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyServerPreferences{23};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PreferredKeyServer{24};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PrimaryUserId{25};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::PolicyUrl{26};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::KeyFlags{27};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignerUserId{28};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::RevocationReason{29};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::Features{30};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::SignatureTarget{31};
constexpr Org::BouncyCastle::Bcpg::SignatureSubpacketTag  Org::BouncyCastle::Bcpg::SignatureSubpacketTag::EmbeddedSignature{32};
