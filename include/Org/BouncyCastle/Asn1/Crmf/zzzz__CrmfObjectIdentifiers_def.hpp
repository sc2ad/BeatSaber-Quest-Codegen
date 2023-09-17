#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CrmfObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CrmfObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(110))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CrmfObjectIdentifiers
class CORDL_TYPE CrmfObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CrmfObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrmfObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr CrmfObjectIdentifiers(CrmfObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrmfObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr CrmfObjectIdentifiers(CrmfObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrmfObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CrmfObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrmfObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrmfObjectIdentifiers& operator=(CrmfObjectIdentifiers&& o) noexcept = default;
  constexpr CrmfObjectIdentifiers& operator=(CrmfObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_pkix, put=__set_id_pkix))  id_pkix;

static void __set_id_pkix(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_pkix() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_pkip, put=__set_id_pkip))  id_pkip;

static void __set_id_pkip(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_pkip() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_regCtrl, put=__set_id_regCtrl))  id_regCtrl;

static void __set_id_regCtrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_regCtrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_regCtrl_regToken, put=__set_id_regCtrl_regToken))  id_regCtrl_regToken;

static void __set_id_regCtrl_regToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_regCtrl_regToken() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_regCtrl_authenticator, put=__set_id_regCtrl_authenticator))  id_regCtrl_authenticator;

static void __set_id_regCtrl_authenticator(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_regCtrl_authenticator() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_regCtrl_pkiPublicationInfo, put=__set_id_regCtrl_pkiPublicationInfo))  id_regCtrl_pkiPublicationInfo;

static void __set_id_regCtrl_pkiPublicationInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_regCtrl_pkiPublicationInfo() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_regCtrl_pkiArchiveOptions, put=__set_id_regCtrl_pkiArchiveOptions))  id_regCtrl_pkiArchiveOptions;

static void __set_id_regCtrl_pkiArchiveOptions(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_regCtrl_pkiArchiveOptions() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_ct_encKeyWithID, put=__set_id_ct_encKeyWithID))  id_ct_encKeyWithID;

static void __set_id_ct_encKeyWithID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_ct_encKeyWithID() ;


// Methods

// Ctor Parameters []
explicit CrmfObjectIdentifiers() ;

/// @brief Method .ctor addr 0xdf7a04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CrmfObjectIdentifiers, "Org.BouncyCastle.Asn1.Crmf", "CrmfObjectIdentifiers");
