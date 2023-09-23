#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Gnu {
class GnuObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Gnu::GnuObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Gnu {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(172))
// CS Name: Org.BouncyCastle.Asn1.Gnu.GnuObjectIdentifiers
class CORDL_TYPE GnuObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GnuObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "GnuObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr GnuObjectIdentifiers(GnuObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GnuObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr GnuObjectIdentifiers(GnuObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GnuObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GnuObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GnuObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GnuObjectIdentifiers& operator=(GnuObjectIdentifiers&& o) noexcept = default;
  constexpr GnuObjectIdentifiers& operator=(GnuObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Gnu, put=__set_Gnu))  Gnu;

static void __set_Gnu(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Gnu() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GnuPG, put=__set_GnuPG))  GnuPG;

static void __set_GnuPG(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GnuPG() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Notation, put=__set_Notation))  Notation;

static void __set_Notation(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Notation() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PkaAddress, put=__set_PkaAddress))  PkaAddress;

static void __set_PkaAddress(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PkaAddress() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GnuRadar, put=__set_GnuRadar))  GnuRadar;

static void __set_GnuRadar(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GnuRadar() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DigestAlgorithm, put=__set_DigestAlgorithm))  DigestAlgorithm;

static void __set_DigestAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DigestAlgorithm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Tiger192, put=__set_Tiger192))  Tiger192;

static void __set_Tiger192(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Tiger192() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EncryptionAlgorithm, put=__set_EncryptionAlgorithm))  EncryptionAlgorithm;

static void __set_EncryptionAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EncryptionAlgorithm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent, put=__set_Serpent))  Serpent;

static void __set_Serpent(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent128Ecb, put=__set_Serpent128Ecb))  Serpent128Ecb;

static void __set_Serpent128Ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent128Ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent128Cbc, put=__set_Serpent128Cbc))  Serpent128Cbc;

static void __set_Serpent128Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent128Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent128Ofb, put=__set_Serpent128Ofb))  Serpent128Ofb;

static void __set_Serpent128Ofb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent128Ofb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent128Cfb, put=__set_Serpent128Cfb))  Serpent128Cfb;

static void __set_Serpent128Cfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent128Cfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent192Ecb, put=__set_Serpent192Ecb))  Serpent192Ecb;

static void __set_Serpent192Ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent192Ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent192Cbc, put=__set_Serpent192Cbc))  Serpent192Cbc;

static void __set_Serpent192Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent192Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent192Ofb, put=__set_Serpent192Ofb))  Serpent192Ofb;

static void __set_Serpent192Ofb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent192Ofb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent192Cfb, put=__set_Serpent192Cfb))  Serpent192Cfb;

static void __set_Serpent192Cfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent192Cfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent256Ecb, put=__set_Serpent256Ecb))  Serpent256Ecb;

static void __set_Serpent256Ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent256Ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent256Cbc, put=__set_Serpent256Cbc))  Serpent256Cbc;

static void __set_Serpent256Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent256Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent256Ofb, put=__set_Serpent256Ofb))  Serpent256Ofb;

static void __set_Serpent256Ofb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent256Ofb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Serpent256Cfb, put=__set_Serpent256Cfb))  Serpent256Cfb;

static void __set_Serpent256Cfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Serpent256Cfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Crc, put=__set_Crc))  Crc;

static void __set_Crc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Crc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Crc32, put=__set_Crc32))  Crc32;

static void __set_Crc32(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Crc32() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EllipticCurve, put=__set_EllipticCurve))  EllipticCurve;

static void __set_EllipticCurve(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EllipticCurve() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Ed25519, put=__set_Ed25519))  Ed25519;

static void __set_Ed25519(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Ed25519() ;


// Methods

// Ctor Parameters []
explicit GnuObjectIdentifiers() ;

/// @brief Method .ctor addr 0xe10ba8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Gnu
NEED_NO_BOX(Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Gnu::GnuObjectIdentifiers, "Org.BouncyCastle.Asn1.Gnu", "GnuObjectIdentifiers");
