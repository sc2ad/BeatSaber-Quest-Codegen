#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1667))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureGenerator
class CORDL_TYPE PgpSignatureGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PgpSignatureGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureGenerator", modifiers: " const&", def_value: None }]
constexpr PgpSignatureGenerator(PgpSignatureGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureGenerator", modifiers: "&&", def_value: None }]
constexpr PgpSignatureGenerator(PgpSignatureGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSignatureGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpSignatureGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSignatureGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSignatureGenerator& operator=(PgpSignatureGenerator&& o) noexcept = default;
  constexpr PgpSignatureGenerator& operator=(PgpSignatureGenerator const& o) noexcept = default;
                


// Fields

static ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> __declspec(property(get=__get_EmptySignatureSubpackets, put=__set_EmptySignatureSubpackets))  EmptySignatureSubpackets;

static void __set_EmptySignatureSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> value) ;

static ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> __get_EmptySignatureSubpackets() ;

 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=__get_keyAlgorithm, put=__set_keyAlgorithm))  keyAlgorithm;

constexpr void __set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __get_keyAlgorithm() const;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __get_hashAlgorithm() const;

 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey __declspec(property(get=__get_privKey, put=__set_privKey))  privKey;

constexpr void __set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey value) ;

constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey __get_privKey() const;

 ::Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_sig, put=__set_sig))  sig;

constexpr void __set_sig(::Org::BouncyCastle::Crypto::ISigner value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner __get_sig() const;

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_dig, put=__set_dig))  dig;

constexpr void __set_dig(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_dig() const;

 int32_t __declspec(property(get=__get_signatureType, put=__set_signatureType))  signatureType;

constexpr void __set_signatureType(int32_t value) ;

constexpr int32_t __get_signatureType() const;

 uint8_t __declspec(property(get=__get_lastb, put=__set_lastb))  lastb;

constexpr void __set_lastb(uint8_t value) ;

constexpr uint8_t __get_lastb() const;

 ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> __declspec(property(get=__get_unhashed, put=__set_unhashed))  unhashed;

constexpr void __set_unhashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> __get_unhashed() const;

 ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> __declspec(property(get=__get_hashed, put=__set_hashed))  hashed;

constexpr void __set_hashed(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> __get_hashed() const;


// Methods

// Ctor Parameters [CppParam { name: "keyAlgorithm", ty: "::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }]
explicit PgpSignatureGenerator(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method .ctor addr 0x1032c88 size 0x10c virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method InitSign addr 0x1032d94 size 0x8 virtual false final false
 void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey key) ;

/// @brief Method InitSign addr 0x103d7a0 size 0x268 virtual false final false
 void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey key, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Update addr 0x103da08 size 0x14 virtual false final false
 void Update(uint8_t b) ;

/// @brief Method doCanonicalUpdateByte addr 0x103da1c size 0x64 virtual false final false
 void doCanonicalUpdateByte(uint8_t b) ;

/// @brief Method doUpdateCRLF addr 0x103dba8 size 0x20 virtual false final false
 void doUpdateCRLF() ;

/// @brief Method doUpdateByte addr 0x103da80 size 0x128 virtual false final false
 void doUpdateByte(uint8_t b) ;

/// @brief Method Update addr 0x103dbc8 size 0x1c virtual false final false
 void Update(::ArrayW<uint8_t> b) ;

/// @brief Method Update addr 0x103dbe4 size 0x198 virtual false final false
 void Update(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method SetHashedSubpackets addr 0x1032d9c size 0x78 virtual false final false
 void SetHashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets) ;

/// @brief Method SetUnhashedSubpackets addr 0x1032e14 size 0x78 virtual false final false
 void SetUnhashedSubpackets(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets) ;

/// @brief Method GenerateOnePassVersion addr 0x103dd7c size 0xcc virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature GenerateOnePassVersion(bool isNested) ;

/// @brief Method Generate addr 0x103de48 size 0x814 virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature Generate() ;

/// @brief Method GenerateCertification addr 0x1032e8c size 0x44 virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature GenerateCertification(::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method GenerateCertification addr 0x103ec48 size 0x1dc virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method GenerateCertification addr 0x103ee24 size 0x30 virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey masterKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method GenerateCertification addr 0x103ee54 size 0x18 virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature GenerateCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method GetEncodedPublicKey addr 0x103ee6c size 0xfc virtual false final false
 ::ArrayW<uint8_t> GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method packetPresent addr 0x103e65c size 0x50 virtual false final false
 bool packetPresent(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> packets, ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) ;

/// @brief Method insertSubpacket addr 0x103e6ac size 0xb0 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> insertSubpacket(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket> packets, ::Org::BouncyCastle::Bcpg::SignatureSubpacket subpacket) ;

/// @brief Method UpdateWithIdData addr 0x103eb78 size 0xd0 virtual false final false
 void UpdateWithIdData(int32_t header, ::ArrayW<uint8_t> idBytes) ;

/// @brief Method UpdateWithPublicKey addr 0x103eab8 size 0xc0 virtual false final false
 void UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureGenerator");
