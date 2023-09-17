#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpV3SignatureGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpV3SignatureGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1674))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpV3SignatureGenerator
class CORDL_TYPE PgpV3SignatureGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PgpV3SignatureGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpV3SignatureGenerator", modifiers: " const&", def_value: None }]
constexpr PgpV3SignatureGenerator(PgpV3SignatureGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpV3SignatureGenerator", modifiers: "&&", def_value: None }]
constexpr PgpV3SignatureGenerator(PgpV3SignatureGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpV3SignatureGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpV3SignatureGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpV3SignatureGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpV3SignatureGenerator& operator=(PgpV3SignatureGenerator&& o) noexcept = default;
  constexpr PgpV3SignatureGenerator& operator=(PgpV3SignatureGenerator const& o) noexcept = default;
                


// Fields

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


// Methods

// Ctor Parameters [CppParam { name: "keyAlgorithm", ty: "::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }]
explicit PgpV3SignatureGenerator(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method .ctor addr 0x1042454 size 0xd8 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method InitSign addr 0x104252c size 0x8 virtual false final false
 void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey key) ;

/// @brief Method InitSign addr 0x1042534 size 0x268 virtual false final false
 void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey key, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Update addr 0x104279c size 0x14 virtual false final false
 void Update(uint8_t b) ;

/// @brief Method doCanonicalUpdateByte addr 0x10427b0 size 0x64 virtual false final false
 void doCanonicalUpdateByte(uint8_t b) ;

/// @brief Method doUpdateCRLF addr 0x104293c size 0x20 virtual false final false
 void doUpdateCRLF() ;

/// @brief Method doUpdateByte addr 0x1042814 size 0x128 virtual false final false
 void doUpdateByte(uint8_t b) ;

/// @brief Method Update addr 0x104295c size 0x1a4 virtual false final false
 void Update(::ArrayW<uint8_t> b) ;

/// @brief Method Update addr 0x1042b00 size 0x198 virtual false final false
 void Update(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method GenerateOnePassVersion addr 0x1042c98 size 0xcc virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature GenerateOnePassVersion(bool isNested) ;

/// @brief Method Generate addr 0x1042d64 size 0x3d0 virtual false final false
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature Generate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpV3SignatureGenerator");
