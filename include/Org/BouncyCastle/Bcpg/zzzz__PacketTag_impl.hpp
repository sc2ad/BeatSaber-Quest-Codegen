#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::PacketTag::PacketTag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Bcpg::PacketTag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::PacketTag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Reserved{0};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::PublicKeyEncryptedSession{1};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Signature{2};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::SymmetricKeyEncryptedSessionKey{3};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::OnePassSignature{4};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::SecretKey{5};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::PublicKey{6};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::SecretSubkey{7};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::CompressedData{8};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::SymmetricKeyEncrypted{9};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Marker{10};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::LiteralData{11};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Trust{12};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::UserId{13};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::PublicSubkey{14};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::UserAttribute{17};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::SymmetricEncryptedIntegrityProtected{18};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::ModificationDetectionCode{19};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Experimental1{60};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Experimental2{61};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Experimental3{62};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag  ::Org::BouncyCastle::Bcpg::PacketTag::Experimental4{63};
} // end anonymous namespace
