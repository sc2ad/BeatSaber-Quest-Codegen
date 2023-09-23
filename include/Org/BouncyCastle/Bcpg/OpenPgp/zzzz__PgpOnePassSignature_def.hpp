#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
class OnePassSignaturePacket;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpOnePassSignature
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1654))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpOnePassSignature
class CORDL_TYPE PgpOnePassSignature : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PgpOnePassSignature() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignature", modifiers: " const&", def_value: None }]
constexpr PgpOnePassSignature(PgpOnePassSignature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpOnePassSignature", modifiers: "&&", def_value: None }]
constexpr PgpOnePassSignature(PgpOnePassSignature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpOnePassSignature(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpOnePassSignature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpOnePassSignature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpOnePassSignature& operator=(PgpOnePassSignature&& o) noexcept = default;
  constexpr PgpOnePassSignature& operator=(PgpOnePassSignature const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::OnePassSignaturePacket __declspec(property(get=__get_sigPack, put=__set_sigPack))  sigPack;

constexpr void __set_sigPack(Org::BouncyCastle::Bcpg::OnePassSignaturePacket value) ;

constexpr Org::BouncyCastle::Bcpg::OnePassSignaturePacket __get_sigPack() const;

 int32_t __declspec(property(get=__get_signatureType, put=__set_signatureType))  signatureType;

constexpr void __set_signatureType(int32_t value) ;

constexpr int32_t __get_signatureType() const;

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_sig, put=__set_sig))  sig;

constexpr void __set_sig(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get_sig() const;

 uint8_t __declspec(property(get=__get_lastb, put=__set_lastb))  lastb;

constexpr void __set_lastb(uint8_t value) ;

constexpr uint8_t __get_lastb() const;


// Properties

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 int32_t __declspec(property(get=get_SignatureType))  SignatureType;

 Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;


// Methods

/// @brief Method Cast addr 0x10254ac size 0xd0 virtual false final false
static Org::BouncyCastle::Bcpg::OnePassSignaturePacket Cast(Org::BouncyCastle::Bcpg::Packet packet) ;

// Ctor Parameters [CppParam { name: "bcpgInput", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit PgpOnePassSignature(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method .ctor addr 0x1025188 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

// Ctor Parameters [CppParam { name: "sigPack", ty: "Org::BouncyCastle::Bcpg::OnePassSignaturePacket", modifiers: "", def_value: None }]
explicit PgpOnePassSignature(Org::BouncyCastle::Bcpg::OnePassSignaturePacket sigPack) ;

/// @brief Method .ctor addr 0x102557c size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OnePassSignaturePacket sigPack) ;

/// @brief Method InitVerify addr 0x10255b4 size 0x274 virtual false final false
 void InitVerify(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method Update addr 0x1025828 size 0xcc virtual false final false
 void Update(uint8_t b) ;

/// @brief Method doCanonicalUpdateByte addr 0x10258f4 size 0xe0 virtual false final false
 void doCanonicalUpdateByte(uint8_t b) ;

/// @brief Method doUpdateCRLF addr 0x10259d4 size 0x110 virtual false final false
 void doUpdateCRLF() ;

/// @brief Method Update addr 0x1025ae4 size 0x110 virtual false final false
 void Update(::ArrayW<uint8_t> bytes) ;

/// @brief Method Update addr 0x1025bf4 size 0x114 virtual false final false
 void Update(::ArrayW<uint8_t> bytes, int32_t off, int32_t length) ;

/// @brief Method Verify addr 0x1025d08 size 0x158 virtual false final false
 bool Verify(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature pgpSig) ;

/// @brief Method get_KeyId addr 0x1025e60 size 0x1c virtual false final false
 int64_t get_KeyId() ;

/// @brief Method get_SignatureType addr 0x1025e7c size 0x1c virtual false final false
 int32_t get_SignatureType() ;

/// @brief Method get_HashAlgorithm addr 0x1025e98 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm() ;

/// @brief Method get_KeyAlgorithm addr 0x1025eb4 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm() ;

/// @brief Method GetEncoded addr 0x1025ed0 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1025f48 size 0x2c virtual false final false
 void Encode(System::IO::Stream outStr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpOnePassSignature");
