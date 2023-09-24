#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyRingGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyRingGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1648))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyRingGenerator
class CORDL_TYPE PgpKeyRingGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PgpKeyRingGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyRingGenerator", modifiers: " const&", def_value: None }]
constexpr PgpKeyRingGenerator(PgpKeyRingGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyRingGenerator", modifiers: "&&", def_value: None }]
constexpr PgpKeyRingGenerator(PgpKeyRingGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpKeyRingGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpKeyRingGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpKeyRingGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpKeyRingGenerator& operator=(PgpKeyRingGenerator&& o) noexcept = default;
  constexpr PgpKeyRingGenerator& operator=(PgpKeyRingGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(System::Collections::IList value) ;

constexpr System::Collections::IList __get_keys() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=__get_encAlgorithm, put=__set_encAlgorithm))  encAlgorithm;

constexpr void __set_encAlgorithm(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __get_encAlgorithm() const;

 Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Bcpg::HashAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::HashAlgorithmTag __get_hashAlgorithm() const;

 int32_t __declspec(property(get=__get_certificationLevel, put=__set_certificationLevel))  certificationLevel;

constexpr void __set_certificationLevel(int32_t value) ;

constexpr int32_t __get_certificationLevel() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_rawPassPhrase, put=__set_rawPassPhrase))  rawPassPhrase;

constexpr void __set_rawPassPhrase(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_rawPassPhrase() const;

 bool __declspec(property(get=__get_useSha1, put=__set_useSha1))  useSha1;

constexpr void __set_useSha1(bool value) ;

constexpr bool __get_useSha1() const;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair __declspec(property(get=__get_masterKey, put=__set_masterKey))  masterKey;

constexpr void __set_masterKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair __get_masterKey() const;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector __declspec(property(get=__get_hashedPacketVector, put=__set_hashedPacketVector))  hashedPacketVector;

constexpr void __set_hashedPacketVector(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector __get_hashedPacketVector() const;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector __declspec(property(get=__get_unhashedPacketVector, put=__set_unhashedPacketVector))  unhashedPacketVector;

constexpr void __set_unhashedPacketVector(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector __get_unhashedPacketVector() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_rand, put=__set_rand))  rand;

constexpr void __set_rand(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_rand() const;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x10223fc size 0x8c virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1022488 size 0x80 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1022508 size 0x80 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1022588 size 0x1a4 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x102272c size 0x90 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x10227bc size 0x90 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator New_ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x102284c size 0x1b0 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair masterKey, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method AddSubKey addr 0x10229fc size 0x8 virtual false final false
 void AddSubKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair) ;

/// @brief Method AddSubKey addr 0x1022e2c size 0xc virtual false final false
 void AddSubKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method AddSubKey addr 0x1022a04 size 0x428 virtual false final false
 void AddSubKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets) ;

/// @brief Method AddSubKey addr 0x1022e38 size 0x41c virtual false final false
 void AddSubKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method GenerateSecretKeyRing addr 0x1023320 size 0x68 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing GenerateSecretKeyRing() ;

/// @brief Method GeneratePublicKeyRing addr 0x1023388 size 0x4c4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing GeneratePublicKeyRing() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyRingGenerator");
