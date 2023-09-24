#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CmpObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(20))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CmpObjectIdentifiers
class CORDL_TYPE CmpObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmpObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmpObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr CmpObjectIdentifiers(CmpObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmpObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr CmpObjectIdentifiers(CmpObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmpObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmpObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmpObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmpObjectIdentifiers& operator=(CmpObjectIdentifiers&& o) noexcept = default;
  constexpr CmpObjectIdentifiers& operator=(CmpObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_passwordBasedMac, put=__set_passwordBasedMac))  passwordBasedMac;

static void __set_passwordBasedMac(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_passwordBasedMac() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_dhBasedMac, put=__set_dhBasedMac))  dhBasedMac;

static void __set_dhBasedMac(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_dhBasedMac() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_caProtEncCert, put=__set_it_caProtEncCert))  it_caProtEncCert;

static void __set_it_caProtEncCert(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_caProtEncCert() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_signKeyPairTypes, put=__set_it_signKeyPairTypes))  it_signKeyPairTypes;

static void __set_it_signKeyPairTypes(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_signKeyPairTypes() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_encKeyPairTypes, put=__set_it_encKeyPairTypes))  it_encKeyPairTypes;

static void __set_it_encKeyPairTypes(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_encKeyPairTypes() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_preferredSymAlg, put=__set_it_preferredSymAlg))  it_preferredSymAlg;

static void __set_it_preferredSymAlg(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_preferredSymAlg() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_caKeyUpdateInfo, put=__set_it_caKeyUpdateInfo))  it_caKeyUpdateInfo;

static void __set_it_caKeyUpdateInfo(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_caKeyUpdateInfo() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_currentCRL, put=__set_it_currentCRL))  it_currentCRL;

static void __set_it_currentCRL(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_currentCRL() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_unsupportedOIDs, put=__set_it_unsupportedOIDs))  it_unsupportedOIDs;

static void __set_it_unsupportedOIDs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_unsupportedOIDs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_keyPairParamReq, put=__set_it_keyPairParamReq))  it_keyPairParamReq;

static void __set_it_keyPairParamReq(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_keyPairParamReq() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_keyPairParamRep, put=__set_it_keyPairParamRep))  it_keyPairParamRep;

static void __set_it_keyPairParamRep(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_keyPairParamRep() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_revPassphrase, put=__set_it_revPassphrase))  it_revPassphrase;

static void __set_it_revPassphrase(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_revPassphrase() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_implicitConfirm, put=__set_it_implicitConfirm))  it_implicitConfirm;

static void __set_it_implicitConfirm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_implicitConfirm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_confirmWaitTime, put=__set_it_confirmWaitTime))  it_confirmWaitTime;

static void __set_it_confirmWaitTime(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_confirmWaitTime() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_origPKIMessage, put=__set_it_origPKIMessage))  it_origPKIMessage;

static void __set_it_origPKIMessage(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_origPKIMessage() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_it_suppLangTags, put=__set_it_suppLangTags))  it_suppLangTags;

static void __set_it_suppLangTags(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_it_suppLangTags() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_regToken, put=__set_regCtrl_regToken))  regCtrl_regToken;

static void __set_regCtrl_regToken(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_regToken() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_authenticator, put=__set_regCtrl_authenticator))  regCtrl_authenticator;

static void __set_regCtrl_authenticator(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_authenticator() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_pkiPublicationInfo, put=__set_regCtrl_pkiPublicationInfo))  regCtrl_pkiPublicationInfo;

static void __set_regCtrl_pkiPublicationInfo(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_pkiPublicationInfo() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_pkiArchiveOptions, put=__set_regCtrl_pkiArchiveOptions))  regCtrl_pkiArchiveOptions;

static void __set_regCtrl_pkiArchiveOptions(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_pkiArchiveOptions() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_oldCertID, put=__set_regCtrl_oldCertID))  regCtrl_oldCertID;

static void __set_regCtrl_oldCertID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_oldCertID() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_protocolEncrKey, put=__set_regCtrl_protocolEncrKey))  regCtrl_protocolEncrKey;

static void __set_regCtrl_protocolEncrKey(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_protocolEncrKey() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regCtrl_altCertTemplate, put=__set_regCtrl_altCertTemplate))  regCtrl_altCertTemplate;

static void __set_regCtrl_altCertTemplate(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regCtrl_altCertTemplate() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regInfo_utf8Pairs, put=__set_regInfo_utf8Pairs))  regInfo_utf8Pairs;

static void __set_regInfo_utf8Pairs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regInfo_utf8Pairs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_regInfo_certReq, put=__set_regInfo_certReq))  regInfo_certReq;

static void __set_regInfo_certReq(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_regInfo_certReq() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ct_encKeyWithID, put=__set_ct_encKeyWithID))  ct_encKeyWithID;

static void __set_ct_encKeyWithID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ct_encKeyWithID() ;


// Methods

static Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xdd9b54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CmpObjectIdentifiers, "Org.BouncyCastle.Asn1.Cmp", "CmpObjectIdentifiers");
