#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKey
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1659))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKey
class CORDL_TYPE PgpPublicKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PgpPublicKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKey", modifiers: " const&", def_value: None }]
constexpr PgpPublicKey(PgpPublicKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKey", modifiers: "&&", def_value: None }]
constexpr PgpPublicKey(PgpPublicKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPublicKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpPublicKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPublicKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPublicKey& operator=(PgpPublicKey&& o) noexcept = default;
  constexpr PgpPublicKey& operator=(PgpPublicKey const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_MasterKeyCertificationTypes, put=__set_MasterKeyCertificationTypes))  MasterKeyCertificationTypes;

static void __set_MasterKeyCertificationTypes(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_MasterKeyCertificationTypes() ;

 int64_t __declspec(property(get=__get_keyId, put=__set_keyId))  keyId;

constexpr void __set_keyId(int64_t value) ;

constexpr int64_t __get_keyId() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fingerprint, put=__set_fingerprint))  fingerprint;

constexpr void __set_fingerprint(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fingerprint() const;

 int32_t __declspec(property(get=__get_keyStrength, put=__set_keyStrength))  keyStrength;

constexpr void __set_keyStrength(int32_t value) ;

constexpr int32_t __get_keyStrength() const;

 ::Org::BouncyCastle::Bcpg::PublicKeyPacket __declspec(property(get=__get_publicPk, put=__set_publicPk))  publicPk;

constexpr void __set_publicPk(::Org::BouncyCastle::Bcpg::PublicKeyPacket value) ;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket __get_publicPk() const;

 ::Org::BouncyCastle::Bcpg::TrustPacket __declspec(property(get=__get_trustPk, put=__set_trustPk))  trustPk;

constexpr void __set_trustPk(::Org::BouncyCastle::Bcpg::TrustPacket value) ;

constexpr ::Org::BouncyCastle::Bcpg::TrustPacket __get_trustPk() const;

 ::System::Collections::IList __declspec(property(get=__get_keySigs, put=__set_keySigs))  keySigs;

constexpr void __set_keySigs(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_keySigs() const;

 ::System::Collections::IList __declspec(property(get=__get_ids, put=__set_ids))  ids;

constexpr void __set_ids(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_ids() const;

 ::System::Collections::IList __declspec(property(get=__get_idTrusts, put=__set_idTrusts))  idTrusts;

constexpr void __set_idTrusts(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_idTrusts() const;

 ::System::Collections::IList __declspec(property(get=__get_idSigs, put=__set_idSigs))  idSigs;

constexpr void __set_idSigs(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_idSigs() const;

 ::System::Collections::IList __declspec(property(get=__get_subSigs, put=__set_subSigs))  subSigs;

constexpr void __set_subSigs(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_subSigs() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 ::System::DateTime __declspec(property(get=get_CreationTime))  CreationTime;

 int32_t __declspec(property(get=get_ValidDays))  ValidDays;

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 bool __declspec(property(get=get_IsEncryptionKey))  IsEncryptionKey;

 bool __declspec(property(get=get_IsMasterKey))  IsMasterKey;

 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_Algorithm))  Algorithm;

 int32_t __declspec(property(get=get_BitStrength))  BitStrength;

 ::Org::BouncyCastle::Bcpg::PublicKeyPacket __declspec(property(get=get_PublicKeyPacket))  PublicKeyPacket;


// Methods

/// @brief Method CalculateFingerprint addr 0x1026c90 size 0x4e8 virtual false final false
static ::ArrayW<uint8_t> CalculateFingerprint(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk) ;

/// @brief Method UpdateDigest addr 0x1027178 size 0xcc virtual false final false
static void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest d, ::Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method Init addr 0x1027244 size 0x320 virtual false final false
 void Init() ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "time", ty: "::System::DateTime", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::System::DateTime time) ;

/// @brief Method .ctor addr 0x1021758 size 0x4f0 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::System::DateTime time) ;

// Ctor Parameters [CppParam { name: "publicPk", ty: "::Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk) ;

/// @brief Method .ctor addr 0x1027564 size 0x80 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk) ;

// Ctor Parameters [CppParam { name: "publicPk", ty: "::Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "trustPk", ty: "::Org::BouncyCastle::Bcpg::TrustPacket", modifiers: "", def_value: None }, CppParam { name: "sigs", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket trustPk, ::System::Collections::IList sigs) ;

/// @brief Method .ctor addr 0x102769c size 0xb4 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket trustPk, ::System::Collections::IList sigs) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey", modifiers: "", def_value: None }, CppParam { name: "trust", ty: "::Org::BouncyCastle::Bcpg::TrustPacket", modifiers: "", def_value: None }, CppParam { name: "subSigs", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::TrustPacket trust, ::System::Collections::IList subSigs) ;

/// @brief Method .ctor addr 0x1023254 size 0xcc virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::TrustPacket trust, ::System::Collections::IList subSigs) ;

// Ctor Parameters [CppParam { name: "pubKey", ty: "::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method .ctor addr 0x102384c size 0x508 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

// Ctor Parameters [CppParam { name: "publicPk", ty: "::Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "trustPk", ty: "::Org::BouncyCastle::Bcpg::TrustPacket", modifiers: "", def_value: None }, CppParam { name: "keySigs", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "ids", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "idTrusts", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "idSigs", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket trustPk, ::System::Collections::IList keySigs, ::System::Collections::IList ids, ::System::Collections::IList idTrusts, ::System::Collections::IList idSigs) ;

/// @brief Method .ctor addr 0x1027750 size 0xcc virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket trustPk, ::System::Collections::IList keySigs, ::System::Collections::IList ids, ::System::Collections::IList idTrusts, ::System::Collections::IList idSigs) ;

// Ctor Parameters [CppParam { name: "publicPk", ty: "::Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "ids", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "idSigs", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpPublicKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, ::System::Collections::IList ids, ::System::Collections::IList idSigs) ;

/// @brief Method .ctor addr 0x10275e4 size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket publicPk, ::System::Collections::IList ids, ::System::Collections::IList idSigs) ;

/// @brief Method get_Version addr 0x102781c size 0x20 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_CreationTime addr 0x1023d54 size 0x20 virtual false final false
 ::System::DateTime get_CreationTime() ;

/// @brief Method get_ValidDays addr 0x102783c size 0xd4 virtual false final false
 int32_t get_ValidDays() ;

/// @brief Method GetTrustData addr 0x1027a48 size 0x7c virtual false final false
 ::ArrayW<uint8_t> GetTrustData() ;

/// @brief Method GetValidSeconds addr 0x1027910 size 0x138 virtual false final false
 int64_t GetValidSeconds() ;

/// @brief Method GetExpirationTimeFromSig addr 0x1027b14 size 0x470 virtual false final false
 int64_t GetExpirationTimeFromSig(bool selfSigned, int32_t signatureType) ;

/// @brief Method get_KeyId addr 0x10283c8 size 0x8 virtual false final false
 int64_t get_KeyId() ;

/// @brief Method GetFingerprint addr 0x10283d0 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetFingerprint() ;

/// @brief Method get_IsEncryptionKey addr 0x101e084 size 0x54 virtual false final false
 bool get_IsEncryptionKey() ;

/// @brief Method get_IsMasterKey addr 0x1027ac4 size 0x50 virtual false final false
 bool get_IsMasterKey() ;

/// @brief Method get_Algorithm addr 0x10203b4 size 0x20 virtual false final false
 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm() ;

/// @brief Method get_BitStrength addr 0x1028448 size 0x8 virtual false final false
 int32_t get_BitStrength() ;

/// @brief Method GetKey addr 0x10203d4 size 0x58c virtual false final false
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetKey() ;

/// @brief Method GetECKey addr 0x1028450 size 0x14c virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters GetECKey(::StringW algorithm) ;

/// @brief Method GetUserIds addr 0x102859c size 0x3ec virtual false final false
 ::System::Collections::IEnumerable GetUserIds() ;

/// @brief Method GetUserAttributes addr 0x1028988 size 0x408 virtual false final false
 ::System::Collections::IEnumerable GetUserAttributes() ;

/// @brief Method GetSignaturesForId addr 0x1028d90 size 0x284 virtual false final false
 ::System::Collections::IEnumerable GetSignaturesForId(::StringW id) ;

/// @brief Method GetSignaturesForUserAttribute addr 0x1029014 size 0x23c virtual false final false
 ::System::Collections::IEnumerable GetSignaturesForUserAttribute(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes) ;

/// @brief Method GetSignaturesOfType addr 0x1027f84 size 0x444 virtual false final false
 ::System::Collections::IEnumerable GetSignaturesOfType(int32_t signatureType) ;

/// @brief Method GetSignatures addr 0x1029250 size 0x3a8 virtual false final false
 ::System::Collections::IEnumerable GetSignatures() ;

/// @brief Method GetKeySignatures addr 0x10295f8 size 0xa4 virtual false final false
 ::System::Collections::IEnumerable GetKeySignatures() ;

/// @brief Method get_PublicKeyPacket addr 0x102969c size 0x8 virtual false final false
 ::Org::BouncyCastle::Bcpg::PublicKeyPacket get_PublicKeyPacket() ;

/// @brief Method GetEncoded addr 0x10296a4 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x102971c size 0xd6c virtual false final false
 void Encode(::System::IO::Stream outStr) ;

/// @brief Method IsRevoked addr 0x102a488 size 0x2c8 virtual false final false
 bool IsRevoked() ;

/// @brief Method AddCertification addr 0x102a750 size 0x6c virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method AddCertification addr 0x102ac30 size 0x6c virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method AddCert addr 0x102a7bc size 0x474 virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey AddCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::bs_hook::Il2CppWrapperType id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method RemoveCertification addr 0x102ac9c size 0x64 virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes) ;

/// @brief Method RemoveCertification addr 0x102afdc size 0x64 virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::StringW id) ;

/// @brief Method RemoveCert addr 0x102ad00 size 0x2dc virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::bs_hook::Il2CppWrapperType id) ;

/// @brief Method RemoveCertification addr 0x102b040 size 0x6c virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method RemoveCertification addr 0x102b3b4 size 0x6c virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method RemoveCert addr 0x102b0ac size 0x308 virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::bs_hook::Il2CppWrapperType id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method AddCertification addr 0x102b420 size 0x1c8 virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

/// @brief Method RemoveCertification addr 0x102b5e8 size 0xd94 virtual false final false
static ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature certification) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKey");
