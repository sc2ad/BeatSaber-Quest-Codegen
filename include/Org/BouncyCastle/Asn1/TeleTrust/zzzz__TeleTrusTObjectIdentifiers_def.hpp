#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::TeleTrust {
class TeleTrusTObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.TeleTrust::TeleTrusTObjectIdentifiers
namespace Org::BouncyCastle::Asn1::TeleTrust {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(313))
// CS Name: Org.BouncyCastle.Asn1.TeleTrust.TeleTrusTObjectIdentifiers
class CORDL_TYPE TeleTrusTObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TeleTrusTObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "TeleTrusTObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr TeleTrusTObjectIdentifiers(TeleTrusTObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TeleTrusTObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr TeleTrusTObjectIdentifiers(TeleTrusTObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TeleTrusTObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TeleTrusTObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TeleTrusTObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TeleTrusTObjectIdentifiers& operator=(TeleTrusTObjectIdentifiers&& o) noexcept = default;
  constexpr TeleTrusTObjectIdentifiers& operator=(TeleTrusTObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_TeleTrusTAlgorithm, put=__set_TeleTrusTAlgorithm))  TeleTrusTAlgorithm;

static void __set_TeleTrusTAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_TeleTrusTAlgorithm() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RipeMD160, put=__set_RipeMD160))  RipeMD160;

static void __set_RipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RipeMD160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RipeMD128, put=__set_RipeMD128))  RipeMD128;

static void __set_RipeMD128(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RipeMD128() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RipeMD256, put=__set_RipeMD256))  RipeMD256;

static void __set_RipeMD256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RipeMD256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_TeleTrusTRsaSignatureAlgorithm, put=__set_TeleTrusTRsaSignatureAlgorithm))  TeleTrusTRsaSignatureAlgorithm;

static void __set_TeleTrusTRsaSignatureAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_TeleTrusTRsaSignatureAlgorithm() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RsaSignatureWithRipeMD160, put=__set_RsaSignatureWithRipeMD160))  RsaSignatureWithRipeMD160;

static void __set_RsaSignatureWithRipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RsaSignatureWithRipeMD160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RsaSignatureWithRipeMD128, put=__set_RsaSignatureWithRipeMD128))  RsaSignatureWithRipeMD128;

static void __set_RsaSignatureWithRipeMD128(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RsaSignatureWithRipeMD128() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RsaSignatureWithRipeMD256, put=__set_RsaSignatureWithRipeMD256))  RsaSignatureWithRipeMD256;

static void __set_RsaSignatureWithRipeMD256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RsaSignatureWithRipeMD256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECSign, put=__set_ECSign))  ECSign;

static void __set_ECSign(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECSign() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECSignWithSha1, put=__set_ECSignWithSha1))  ECSignWithSha1;

static void __set_ECSignWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECSignWithSha1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECSignWithRipeMD160, put=__set_ECSignWithRipeMD160))  ECSignWithRipeMD160;

static void __set_ECSignWithRipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECSignWithRipeMD160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EccBrainpool, put=__set_EccBrainpool))  EccBrainpool;

static void __set_EccBrainpool(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EccBrainpool() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EllipticCurve, put=__set_EllipticCurve))  EllipticCurve;

static void __set_EllipticCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EllipticCurve() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VersionOne, put=__set_VersionOne))  VersionOne;

static void __set_VersionOne(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VersionOne() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP160R1, put=__set_BrainpoolP160R1))  BrainpoolP160R1;

static void __set_BrainpoolP160R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP160R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP160T1, put=__set_BrainpoolP160T1))  BrainpoolP160T1;

static void __set_BrainpoolP160T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP160T1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP192R1, put=__set_BrainpoolP192R1))  BrainpoolP192R1;

static void __set_BrainpoolP192R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP192R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP192T1, put=__set_BrainpoolP192T1))  BrainpoolP192T1;

static void __set_BrainpoolP192T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP192T1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP224R1, put=__set_BrainpoolP224R1))  BrainpoolP224R1;

static void __set_BrainpoolP224R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP224R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP224T1, put=__set_BrainpoolP224T1))  BrainpoolP224T1;

static void __set_BrainpoolP224T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP224T1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP256R1, put=__set_BrainpoolP256R1))  BrainpoolP256R1;

static void __set_BrainpoolP256R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP256R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP256T1, put=__set_BrainpoolP256T1))  BrainpoolP256T1;

static void __set_BrainpoolP256T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP256T1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP320R1, put=__set_BrainpoolP320R1))  BrainpoolP320R1;

static void __set_BrainpoolP320R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP320R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP320T1, put=__set_BrainpoolP320T1))  BrainpoolP320T1;

static void __set_BrainpoolP320T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP320T1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP384R1, put=__set_BrainpoolP384R1))  BrainpoolP384R1;

static void __set_BrainpoolP384R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP384R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP384T1, put=__set_BrainpoolP384T1))  BrainpoolP384T1;

static void __set_BrainpoolP384T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP384T1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP512R1, put=__set_BrainpoolP512R1))  BrainpoolP512R1;

static void __set_BrainpoolP512R1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP512R1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BrainpoolP512T1, put=__set_BrainpoolP512T1))  BrainpoolP512T1;

static void __set_BrainpoolP512T1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BrainpoolP512T1() ;


// Methods

// Ctor Parameters []
explicit TeleTrusTObjectIdentifiers() ;

/// @brief Method .ctor addr 0xfeaec8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::TeleTrust
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::TeleTrust::TeleTrusTObjectIdentifiers, "Org.BouncyCastle.Asn1.TeleTrust", "TeleTrusTObjectIdentifiers");
