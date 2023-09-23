#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignaturePacket;
}
// Type: Org.BouncyCastle.Bcpg::SignaturePacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(589))
// CS Name: Org.BouncyCastle.Bcpg.SignaturePacket
class CORDL_TYPE SignaturePacket : public Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SignaturePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePacket", modifiers: " const&", def_value: None }]
constexpr SignaturePacket(SignaturePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePacket", modifiers: "&&", def_value: None }]
constexpr SignaturePacket(SignaturePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignaturePacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr SignaturePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignaturePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignaturePacket& operator=(SignaturePacket&& o) noexcept = default;
  constexpr SignaturePacket& operator=(SignaturePacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 int32_t __declspec(property(get=__get_signatureType, put=__set_signatureType))  signatureType;

constexpr void __set_signatureType(int32_t value) ;

constexpr int32_t __get_signatureType() const;

 int64_t __declspec(property(get=__get_creationTime, put=__set_creationTime))  creationTime;

constexpr void __set_creationTime(int64_t value) ;

constexpr int64_t __get_creationTime() const;

 int64_t __declspec(property(get=__get_keyId, put=__set_keyId))  keyId;

constexpr void __set_keyId(int64_t value) ;

constexpr int64_t __get_keyId() const;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=__get_keyAlgorithm, put=__set_keyAlgorithm))  keyAlgorithm;

constexpr void __set_keyAlgorithm(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __get_keyAlgorithm() const;

 Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Bcpg::HashAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::HashAlgorithmTag __get_hashAlgorithm() const;

 ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> __get_signature() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fingerprint, put=__set_fingerprint))  fingerprint;

constexpr void __set_fingerprint(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fingerprint() const;

 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> __declspec(property(get=__get_hashedData, put=__set_hashedData))  hashedData;

constexpr void __set_hashedData(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> __get_hashedData() const;

 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> __declspec(property(get=__get_unhashedData, put=__set_unhashedData))  unhashedData;

constexpr void __set_unhashedData(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> __get_unhashedData() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_signatureEncoding, put=__set_signatureEncoding))  signatureEncoding;

constexpr void __set_signatureEncoding(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_signatureEncoding() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 int32_t __declspec(property(get=get_SignatureType))  SignatureType;

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;

 Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 int64_t __declspec(property(get=get_CreationTime))  CreationTime;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit SignaturePacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1143498 size 0xd7c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "signatureType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "keyAlgorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashedData", ty: "::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>", modifiers: "", def_value: None }, CppParam { name: "unhashedData", ty: "::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>", modifiers: "", def_value: None }, CppParam { name: "fingerprint", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::ArrayW<Org::BouncyCastle::Bcpg::MPInteger>", modifiers: "", def_value: None }]
explicit SignaturePacket(int32_t signatureType, int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> hashedData, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> unhashedData, ::ArrayW<uint8_t> fingerprint, ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> signature) ;

/// @brief Method .ctor addr 0x1149d98 size 0x40 virtual false final false
 void _ctor(int32_t signatureType, int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> hashedData, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> unhashedData, ::ArrayW<uint8_t> fingerprint, ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> signature) ;

// Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "signatureType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "keyAlgorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "creationTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "fingerprint", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::ArrayW<Org::BouncyCastle::Bcpg::MPInteger>", modifiers: "", def_value: None }]
explicit SignaturePacket(int32_t version, int32_t signatureType, int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int64_t creationTime, ::ArrayW<uint8_t> fingerprint, ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> signature) ;

/// @brief Method .ctor addr 0x1149e70 size 0x6c virtual false final false
 void _ctor(int32_t version, int32_t signatureType, int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int64_t creationTime, ::ArrayW<uint8_t> fingerprint, ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> signature) ;

// Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "signatureType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "keyAlgorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashedData", ty: "::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>", modifiers: "", def_value: None }, CppParam { name: "unhashedData", ty: "::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket>", modifiers: "", def_value: None }, CppParam { name: "fingerprint", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::ArrayW<Org::BouncyCastle::Bcpg::MPInteger>", modifiers: "", def_value: None }]
explicit SignaturePacket(int32_t version, int32_t signatureType, int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> hashedData, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> unhashedData, ::ArrayW<uint8_t> fingerprint, ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> signature) ;

/// @brief Method .ctor addr 0x1149dd8 size 0x98 virtual false final false
 void _ctor(int32_t version, int32_t signatureType, int64_t keyId, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> hashedData, ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> unhashedData, ::ArrayW<uint8_t> fingerprint, ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> signature) ;

/// @brief Method get_Version addr 0x1149fd4 size 0x8 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_SignatureType addr 0x1149fdc size 0x8 virtual false final false
 int32_t get_SignatureType() ;

/// @brief Method get_KeyId addr 0x1149fe4 size 0x8 virtual false final false
 int64_t get_KeyId() ;

/// @brief Method GetSignatureTrailer addr 0x1149fec size 0x2fc virtual false final false
 ::ArrayW<uint8_t> GetSignatureTrailer() ;

/// @brief Method get_KeyAlgorithm addr 0x114a2e8 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm() ;

/// @brief Method get_HashAlgorithm addr 0x114a2f0 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm() ;

/// @brief Method GetSignature addr 0x114a2f8 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> GetSignature() ;

/// @brief Method GetSignatureBytes addr 0x114a300 size 0x21c virtual false final false
 ::ArrayW<uint8_t> GetSignatureBytes() ;

/// @brief Method GetHashedSubPackets addr 0x114a51c size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> GetHashedSubPackets() ;

/// @brief Method GetUnhashedSubPackets addr 0x114a524 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> GetUnhashedSubPackets() ;

/// @brief Method get_CreationTime addr 0x114a52c size 0x8 virtual false final false
 int64_t get_CreationTime() ;

/// @brief Method Encode addr 0x114a534 size 0x32c virtual true final false
 void Encode(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method EncodeLengthAndData addr 0x114a910 size 0x54 virtual false final false
static void EncodeLengthAndData(Org::BouncyCastle::Bcpg::BcpgOutputStream pOut, ::ArrayW<uint8_t> data) ;

/// @brief Method GetEncodedSubpackets addr 0x114a860 size 0xb0 virtual false final false
static ::ArrayW<uint8_t> GetEncodedSubpackets(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> ps) ;

/// @brief Method setCreationTime addr 0x1149edc size 0xf8 virtual false final false
 void setCreationTime() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::SignaturePacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::SignaturePacket, "Org.BouncyCastle.Bcpg", "SignaturePacket");
