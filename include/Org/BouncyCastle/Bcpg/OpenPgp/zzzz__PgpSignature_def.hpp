#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignaturePacket;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignature
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1666))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignature
class CORDL_TYPE PgpSignature : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PgpSignature() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignature", modifiers: " const&", def_value: None }]
constexpr PgpSignature(PgpSignature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignature", modifiers: "&&", def_value: None }]
constexpr PgpSignature(PgpSignature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSignature(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpSignature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSignature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSignature& operator=(PgpSignature&& o) noexcept = default;
  constexpr PgpSignature& operator=(PgpSignature const& o) noexcept = default;
                


// Fields

/// @brief Field BinaryDocument offset 0
static constexpr int32_t  BinaryDocument{0};

/// @brief Field CanonicalTextDocument offset 0
static constexpr int32_t  CanonicalTextDocument{1};

/// @brief Field StandAlone offset 0
static constexpr int32_t  StandAlone{2};

/// @brief Field DefaultCertification offset 0
static constexpr int32_t  DefaultCertification{16};

/// @brief Field NoCertification offset 0
static constexpr int32_t  NoCertification{17};

/// @brief Field CasualCertification offset 0
static constexpr int32_t  CasualCertification{18};

/// @brief Field PositiveCertification offset 0
static constexpr int32_t  PositiveCertification{19};

/// @brief Field SubkeyBinding offset 0
static constexpr int32_t  SubkeyBinding{24};

/// @brief Field PrimaryKeyBinding offset 0
static constexpr int32_t  PrimaryKeyBinding{25};

/// @brief Field DirectKey offset 0
static constexpr int32_t  DirectKey{31};

/// @brief Field KeyRevocation offset 0
static constexpr int32_t  KeyRevocation{32};

/// @brief Field SubkeyRevocation offset 0
static constexpr int32_t  SubkeyRevocation{40};

/// @brief Field CertificationRevocation offset 0
static constexpr int32_t  CertificationRevocation{48};

/// @brief Field Timestamp offset 0
static constexpr int32_t  Timestamp{64};

 Org::BouncyCastle::Bcpg::SignaturePacket __declspec(property(get=__get_sigPck, put=__set_sigPck))  sigPck;

constexpr void __set_sigPck(Org::BouncyCastle::Bcpg::SignaturePacket value) ;

constexpr Org::BouncyCastle::Bcpg::SignaturePacket __get_sigPck() const;

 int32_t __declspec(property(get=__get_signatureType, put=__set_signatureType))  signatureType;

constexpr void __set_signatureType(int32_t value) ;

constexpr int32_t __get_signatureType() const;

 Org::BouncyCastle::Bcpg::TrustPacket __declspec(property(get=__get_trustPck, put=__set_trustPck))  trustPck;

constexpr void __set_trustPck(Org::BouncyCastle::Bcpg::TrustPacket value) ;

constexpr Org::BouncyCastle::Bcpg::TrustPacket __get_trustPck() const;

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_sig, put=__set_sig))  sig;

constexpr void __set_sig(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get_sig() const;

 uint8_t __declspec(property(get=__get_lastb, put=__set_lastb))  lastb;

constexpr void __set_lastb(uint8_t value) ;

constexpr uint8_t __get_lastb() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;

 Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 int32_t __declspec(property(get=get_SignatureType))  SignatureType;

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 System::DateTime __declspec(property(get=get_CreationTime))  CreationTime;

 bool __declspec(property(get=get_HasSubpackets))  HasSubpackets;


// Methods

/// @brief Method Cast addr 0x103bf54 size 0xd0 virtual false final false
static Org::BouncyCastle::Bcpg::SignaturePacket Cast(Org::BouncyCastle::Bcpg::Packet packet) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method .ctor addr 0x103c024 size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature New_ctor(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket) ;

/// @brief Method .ctor addr 0x103c058 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature New_ctor(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket, Org::BouncyCastle::Bcpg::TrustPacket trustPacket) ;

/// @brief Method .ctor addr 0x103c060 size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SignaturePacket sigPacket, Org::BouncyCastle::Bcpg::TrustPacket trustPacket) ;

/// @brief Method GetSig addr 0x103c0e8 size 0x7c virtual false final false
 void GetSig() ;

/// @brief Method get_Version addr 0x103c2e4 size 0x1c virtual false final false
 int32_t get_Version() ;

/// @brief Method get_KeyAlgorithm addr 0x103c300 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm() ;

/// @brief Method get_HashAlgorithm addr 0x103c31c size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm() ;

/// @brief Method IsCertification addr 0x103c338 size 0x28 virtual false final false
 bool IsCertification() ;

/// @brief Method InitVerify addr 0x103c38c size 0x1a4 virtual false final false
 void InitVerify(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method Update addr 0x103c530 size 0xcc virtual false final false
 void Update(uint8_t b) ;

/// @brief Method doCanonicalUpdateByte addr 0x103c5fc size 0xe0 virtual false final false
 void doCanonicalUpdateByte(uint8_t b) ;

/// @brief Method doUpdateCRLF addr 0x103c6dc size 0x110 virtual false final false
 void doUpdateCRLF() ;

/// @brief Method Update addr 0x103c7ec size 0x1c virtual false final false
 void Update(::ArrayW<uint8_t> bytes) ;

/// @brief Method Update addr 0x103c808 size 0x114 virtual false final false
 void Update(::ArrayW<uint8_t> bytes, int32_t off, int32_t length) ;

/// @brief Method Verify addr 0x103c91c size 0x148 virtual false final false
 bool Verify() ;

/// @brief Method UpdateWithIdData addr 0x103cd50 size 0xd0 virtual false final false
 void UpdateWithIdData(int32_t header, ::ArrayW<uint8_t> idBytes) ;

/// @brief Method UpdateWithPublicKey addr 0x103ce20 size 0xc0 virtual false final false
 void UpdateWithPublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key) ;

/// @brief Method VerifyCertification addr 0x103cfdc size 0x27c virtual false final false
 bool VerifyCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector userAttributes, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key) ;

/// @brief Method VerifyCertification addr 0x103d258 size 0x108 virtual false final false
 bool VerifyCertification(::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey key) ;

/// @brief Method VerifyCertification addr 0x103d360 size 0xf8 virtual false final false
 bool VerifyCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey masterKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method VerifyCertification addr 0x103d458 size 0x144 virtual false final false
 bool VerifyCertification(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method get_SignatureType addr 0x103c360 size 0x1c virtual false final false
 int32_t get_SignatureType() ;

/// @brief Method get_KeyId addr 0x103d59c size 0x1c virtual false final false
 int64_t get_KeyId() ;

/// @brief Method GetCreationTime addr 0x103d5b8 size 0x4 virtual false final false
 System::DateTime GetCreationTime() ;

/// @brief Method get_CreationTime addr 0x103d5bc size 0x68 virtual false final false
 System::DateTime get_CreationTime() ;

/// @brief Method GetSignatureTrailer addr 0x103ca64 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetSignatureTrailer() ;

/// @brief Method get_HasSubpackets addr 0x103d624 size 0x34 virtual false final false
 bool get_HasSubpackets() ;

/// @brief Method GetHashedSubPackets addr 0x103d658 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector GetHashedSubPackets() ;

/// @brief Method GetUnhashedSubPackets addr 0x103d6e4 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector GetUnhashedSubPackets() ;

/// @brief Method createSubpacketVector addr 0x103d674 size 0x70 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector createSubpacketVector(::ArrayW<Org::BouncyCastle::Bcpg::SignatureSubpacket> pcks) ;

/// @brief Method GetSignature addr 0x103ca80 size 0x2d0 virtual false final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method GetEncoded addr 0x103d728 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1035d30 size 0x58 virtual false final false
 void Encode(System::IO::Stream outStream) ;

/// @brief Method GetEncodedPublicKey addr 0x103cee0 size 0xfc virtual false final false
 ::ArrayW<uint8_t> GetEncodedPublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method IsCertification addr 0x103c37c size 0x10 virtual false final false
static bool IsCertification(int32_t signatureType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignature");
