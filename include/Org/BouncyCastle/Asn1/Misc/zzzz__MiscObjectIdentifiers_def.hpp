#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class MiscObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Misc::MiscObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(197))
// CS Name: Org.BouncyCastle.Asn1.Misc.MiscObjectIdentifiers
class CORDL_TYPE MiscObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MiscObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr MiscObjectIdentifiers(MiscObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr MiscObjectIdentifiers(MiscObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MiscObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MiscObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MiscObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MiscObjectIdentifiers& operator=(MiscObjectIdentifiers&& o) noexcept = default;
  constexpr MiscObjectIdentifiers& operator=(MiscObjectIdentifiers const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Netscape, put=__set_Netscape))  Netscape;

static void __set_Netscape(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Netscape() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeCertType, put=__set_NetscapeCertType))  NetscapeCertType;

static void __set_NetscapeCertType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeCertType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeBaseUrl, put=__set_NetscapeBaseUrl))  NetscapeBaseUrl;

static void __set_NetscapeBaseUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeBaseUrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeRevocationUrl, put=__set_NetscapeRevocationUrl))  NetscapeRevocationUrl;

static void __set_NetscapeRevocationUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeRevocationUrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeCARevocationUrl, put=__set_NetscapeCARevocationUrl))  NetscapeCARevocationUrl;

static void __set_NetscapeCARevocationUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeCARevocationUrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeRenewalUrl, put=__set_NetscapeRenewalUrl))  NetscapeRenewalUrl;

static void __set_NetscapeRenewalUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeRenewalUrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeCAPolicyUrl, put=__set_NetscapeCAPolicyUrl))  NetscapeCAPolicyUrl;

static void __set_NetscapeCAPolicyUrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeCAPolicyUrl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeSslServerName, put=__set_NetscapeSslServerName))  NetscapeSslServerName;

static void __set_NetscapeSslServerName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeSslServerName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NetscapeCertComment, put=__set_NetscapeCertComment))  NetscapeCertComment;

static void __set_NetscapeCertComment(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NetscapeCertComment() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Verisign, put=__set_Verisign))  Verisign;

static void __set_Verisign(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Verisign() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VerisignCzagExtension, put=__set_VerisignCzagExtension))  VerisignCzagExtension;

static void __set_VerisignCzagExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VerisignCzagExtension() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VerisignPrivate_6_9, put=__set_VerisignPrivate_6_9))  VerisignPrivate_6_9;

static void __set_VerisignPrivate_6_9(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VerisignPrivate_6_9() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VerisignOnSiteJurisdictionHash, put=__set_VerisignOnSiteJurisdictionHash))  VerisignOnSiteJurisdictionHash;

static void __set_VerisignOnSiteJurisdictionHash(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VerisignOnSiteJurisdictionHash() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VerisignBitString_6_13, put=__set_VerisignBitString_6_13))  VerisignBitString_6_13;

static void __set_VerisignBitString_6_13(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VerisignBitString_6_13() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VerisignDnbDunsNumber, put=__set_VerisignDnbDunsNumber))  VerisignDnbDunsNumber;

static void __set_VerisignDnbDunsNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VerisignDnbDunsNumber() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_VerisignIssStrongCrypto, put=__set_VerisignIssStrongCrypto))  VerisignIssStrongCrypto;

static void __set_VerisignIssStrongCrypto(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_VerisignIssStrongCrypto() ;

static ::StringW __declspec(property(get=__get_Novell, put=__set_Novell))  Novell;

static void __set_Novell(::StringW value) ;

static ::StringW __get_Novell() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NovellSecurityAttribs, put=__set_NovellSecurityAttribs))  NovellSecurityAttribs;

static void __set_NovellSecurityAttribs(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NovellSecurityAttribs() ;

static ::StringW __declspec(property(get=__get_Entrust, put=__set_Entrust))  Entrust;

static void __set_Entrust(::StringW value) ;

static ::StringW __get_Entrust() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EntrustVersionExtension, put=__set_EntrustVersionExtension))  EntrustVersionExtension;

static void __set_EntrustVersionExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EntrustVersionExtension() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cast5CBC, put=__set_cast5CBC))  cast5CBC;

static void __set_cast5CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cast5CBC() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_HMAC_SHA1, put=__set_HMAC_SHA1))  HMAC_SHA1;

static void __set_HMAC_SHA1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_HMAC_SHA1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_as_sys_sec_alg_ideaCBC, put=__set_as_sys_sec_alg_ideaCBC))  as_sys_sec_alg_ideaCBC;

static void __set_as_sys_sec_alg_ideaCBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_as_sys_sec_alg_ideaCBC() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cryptlib, put=__set_cryptlib))  cryptlib;

static void __set_cryptlib(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cryptlib() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cryptlib_algorithm, put=__set_cryptlib_algorithm))  cryptlib_algorithm;

static void __set_cryptlib_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cryptlib_algorithm() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cryptlib_algorithm_blowfish_ECB, put=__set_cryptlib_algorithm_blowfish_ECB))  cryptlib_algorithm_blowfish_ECB;

static void __set_cryptlib_algorithm_blowfish_ECB(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cryptlib_algorithm_blowfish_ECB() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cryptlib_algorithm_blowfish_CBC, put=__set_cryptlib_algorithm_blowfish_CBC))  cryptlib_algorithm_blowfish_CBC;

static void __set_cryptlib_algorithm_blowfish_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cryptlib_algorithm_blowfish_CBC() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cryptlib_algorithm_blowfish_CFB, put=__set_cryptlib_algorithm_blowfish_CFB))  cryptlib_algorithm_blowfish_CFB;

static void __set_cryptlib_algorithm_blowfish_CFB(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cryptlib_algorithm_blowfish_CFB() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_cryptlib_algorithm_blowfish_OFB, put=__set_cryptlib_algorithm_blowfish_OFB))  cryptlib_algorithm_blowfish_OFB;

static void __set_cryptlib_algorithm_blowfish_OFB(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_cryptlib_algorithm_blowfish_OFB() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_blake2, put=__set_blake2))  blake2;

static void __set_blake2(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_blake2() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2b160, put=__set_id_blake2b160))  id_blake2b160;

static void __set_id_blake2b160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2b160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2b256, put=__set_id_blake2b256))  id_blake2b256;

static void __set_id_blake2b256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2b256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2b384, put=__set_id_blake2b384))  id_blake2b384;

static void __set_id_blake2b384(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2b384() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2b512, put=__set_id_blake2b512))  id_blake2b512;

static void __set_id_blake2b512(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2b512() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2s128, put=__set_id_blake2s128))  id_blake2s128;

static void __set_id_blake2s128(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2s128() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2s160, put=__set_id_blake2s160))  id_blake2s160;

static void __set_id_blake2s160(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2s160() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2s224, put=__set_id_blake2s224))  id_blake2s224;

static void __set_id_blake2s224(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2s224() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_blake2s256, put=__set_id_blake2s256))  id_blake2s256;

static void __set_id_blake2s256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_blake2s256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_scrypt, put=__set_id_scrypt))  id_scrypt;

static void __set_id_scrypt(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_scrypt() ;


// Methods

// Ctor Parameters []
explicit MiscObjectIdentifiers() ;

/// @brief Method .ctor addr 0xeeee00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Misc
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::MiscObjectIdentifiers, "Org.BouncyCastle.Asn1.Misc", "MiscObjectIdentifiers");
