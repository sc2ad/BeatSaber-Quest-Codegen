#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Oiw {
class OiwObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Oiw::OiwObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Oiw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(225))
// CS Name: Org.BouncyCastle.Asn1.Oiw.OiwObjectIdentifiers
class CORDL_TYPE OiwObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OiwObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "OiwObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr OiwObjectIdentifiers(OiwObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OiwObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr OiwObjectIdentifiers(OiwObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OiwObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OiwObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OiwObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OiwObjectIdentifiers& operator=(OiwObjectIdentifiers&& o) noexcept = default;
  constexpr OiwObjectIdentifiers& operator=(OiwObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD4WithRsa, put=__set_MD4WithRsa))  MD4WithRsa;

static void __set_MD4WithRsa(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD4WithRsa() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD5WithRsa, put=__set_MD5WithRsa))  MD5WithRsa;

static void __set_MD5WithRsa(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD5WithRsa() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD4WithRsaEncryption, put=__set_MD4WithRsaEncryption))  MD4WithRsaEncryption;

static void __set_MD4WithRsaEncryption(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD4WithRsaEncryption() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesEcb, put=__set_DesEcb))  DesEcb;

static void __set_DesEcb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesEcb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesCbc, put=__set_DesCbc))  DesCbc;

static void __set_DesCbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesCbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesOfb, put=__set_DesOfb))  DesOfb;

static void __set_DesOfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesOfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesCfb, put=__set_DesCfb))  DesCfb;

static void __set_DesCfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesCfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesEde, put=__set_DesEde))  DesEde;

static void __set_DesEde(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesEde() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha1, put=__set_IdSha1))  IdSha1;

static void __set_IdSha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DsaWithSha1, put=__set_DsaWithSha1))  DsaWithSha1;

static void __set_DsaWithSha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DsaWithSha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha1WithRsa, put=__set_Sha1WithRsa))  Sha1WithRsa;

static void __set_Sha1WithRsa(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha1WithRsa() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ElGamalAlgorithm, put=__set_ElGamalAlgorithm))  ElGamalAlgorithm;

static void __set_ElGamalAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ElGamalAlgorithm() ;


// Methods

// Ctor Parameters []
explicit OiwObjectIdentifiers() ;

/// @brief Method .ctor addr 0xef7470 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Oiw
NEED_NO_BOX(Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Oiw::OiwObjectIdentifiers, "Org.BouncyCastle.Asn1.Oiw", "OiwObjectIdentifiers");
