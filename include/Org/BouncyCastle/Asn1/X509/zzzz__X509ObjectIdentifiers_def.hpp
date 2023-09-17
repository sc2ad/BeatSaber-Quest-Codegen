#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509ObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.X509::X509ObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(410))
// CS Name: Org.BouncyCastle.Asn1.X509.X509ObjectIdentifiers
class CORDL_TYPE X509ObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509ObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr X509ObjectIdentifiers(X509ObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr X509ObjectIdentifiers(X509ObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ObjectIdentifiers& operator=(X509ObjectIdentifiers&& o) noexcept = default;
  constexpr X509ObjectIdentifiers& operator=(X509ObjectIdentifiers const& o) noexcept = default;
                


// Fields

/// @brief Field ID offset 0
static constexpr ::ConstString  ID{u"2.5.4"};

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CommonName, put=__set_CommonName))  CommonName;

static void __set_CommonName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CommonName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CountryName, put=__set_CountryName))  CountryName;

static void __set_CountryName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CountryName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_LocalityName, put=__set_LocalityName))  LocalityName;

static void __set_LocalityName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_LocalityName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_StateOrProvinceName, put=__set_StateOrProvinceName))  StateOrProvinceName;

static void __set_StateOrProvinceName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_StateOrProvinceName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Organization, put=__set_Organization))  Organization;

static void __set_Organization(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Organization() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_OrganizationalUnitName, put=__set_OrganizationalUnitName))  OrganizationalUnitName;

static void __set_OrganizationalUnitName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_OrganizationalUnitName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_at_telephoneNumber, put=__set_id_at_telephoneNumber))  id_at_telephoneNumber;

static void __set_id_at_telephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_at_telephoneNumber() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_at_name, put=__set_id_at_name))  id_at_name;

static void __set_id_at_name(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_at_name() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_at_organizationIdentifier, put=__set_id_at_organizationIdentifier))  id_at_organizationIdentifier;

static void __set_id_at_organizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_at_organizationIdentifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha1, put=__set_IdSha1))  IdSha1;

static void __set_IdSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RipeMD160, put=__set_RipeMD160))  RipeMD160;

static void __set_RipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RipeMD160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RipeMD160WithRsaEncryption, put=__set_RipeMD160WithRsaEncryption))  RipeMD160WithRsaEncryption;

static void __set_RipeMD160WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RipeMD160WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEARsa, put=__set_IdEARsa))  IdEARsa;

static void __set_IdEARsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEARsa() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdPkix, put=__set_IdPkix))  IdPkix;

static void __set_IdPkix(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdPkix() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdPE, put=__set_IdPE))  IdPE;

static void __set_IdPE(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdPE() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAD, put=__set_IdAD))  IdAD;

static void __set_IdAD(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAD() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdADCAIssuers, put=__set_IdADCAIssuers))  IdADCAIssuers;

static void __set_IdADCAIssuers(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdADCAIssuers() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdADOcsp, put=__set_IdADOcsp))  IdADOcsp;

static void __set_IdADOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdADOcsp() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_OcspAccessMethod, put=__set_OcspAccessMethod))  OcspAccessMethod;

static void __set_OcspAccessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_OcspAccessMethod() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CrlAccessMethod, put=__set_CrlAccessMethod))  CrlAccessMethod;

static void __set_CrlAccessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CrlAccessMethod() ;


// Methods

// Ctor Parameters []
explicit X509ObjectIdentifiers() ;

/// @brief Method .ctor addr 0x111db50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509ObjectIdentifiers, "Org.BouncyCastle.Asn1.X509", "X509ObjectIdentifiers");
