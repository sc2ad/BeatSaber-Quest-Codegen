#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::GM {
class GMObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.GM::GMObjectIdentifiers
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(171))
// CS Name: Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers
class CORDL_TYPE GMObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GMObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "GMObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr GMObjectIdentifiers(GMObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GMObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr GMObjectIdentifiers(GMObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GMObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GMObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GMObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GMObjectIdentifiers& operator=(GMObjectIdentifiers&& o) noexcept = default;
  constexpr GMObjectIdentifiers& operator=(GMObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm_scheme, put=__set_sm_scheme))  sm_scheme;

static void __set_sm_scheme(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm_scheme() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm6_ecb, put=__set_sm6_ecb))  sm6_ecb;

static void __set_sm6_ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm6_ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm6_cbc, put=__set_sm6_cbc))  sm6_cbc;

static void __set_sm6_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm6_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm6_ofb128, put=__set_sm6_ofb128))  sm6_ofb128;

static void __set_sm6_ofb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm6_ofb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm6_cfb128, put=__set_sm6_cfb128))  sm6_cfb128;

static void __set_sm6_cfb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm6_cfb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm1_ecb, put=__set_sm1_ecb))  sm1_ecb;

static void __set_sm1_ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm1_ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm1_cbc, put=__set_sm1_cbc))  sm1_cbc;

static void __set_sm1_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm1_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm1_ofb128, put=__set_sm1_ofb128))  sm1_ofb128;

static void __set_sm1_ofb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm1_ofb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm1_cfb128, put=__set_sm1_cfb128))  sm1_cfb128;

static void __set_sm1_cfb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm1_cfb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm1_cfb1, put=__set_sm1_cfb1))  sm1_cfb1;

static void __set_sm1_cfb1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm1_cfb1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm1_cfb8, put=__set_sm1_cfb8))  sm1_cfb8;

static void __set_sm1_cfb8(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm1_cfb8() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ssf33_ecb, put=__set_ssf33_ecb))  ssf33_ecb;

static void __set_ssf33_ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ssf33_ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ssf33_cbc, put=__set_ssf33_cbc))  ssf33_cbc;

static void __set_ssf33_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ssf33_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ssf33_ofb128, put=__set_ssf33_ofb128))  ssf33_ofb128;

static void __set_ssf33_ofb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ssf33_ofb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ssf33_cfb128, put=__set_ssf33_cfb128))  ssf33_cfb128;

static void __set_ssf33_cfb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ssf33_cfb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ssf33_cfb1, put=__set_ssf33_cfb1))  ssf33_cfb1;

static void __set_ssf33_cfb1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ssf33_cfb1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ssf33_cfb8, put=__set_ssf33_cfb8))  ssf33_cfb8;

static void __set_ssf33_cfb8(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ssf33_cfb8() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_ecb, put=__set_sms4_ecb))  sms4_ecb;

static void __set_sms4_ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_cbc, put=__set_sms4_cbc))  sms4_cbc;

static void __set_sms4_cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_ofb128, put=__set_sms4_ofb128))  sms4_ofb128;

static void __set_sms4_ofb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_ofb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_cfb128, put=__set_sms4_cfb128))  sms4_cfb128;

static void __set_sms4_cfb128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_cfb128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_cfb1, put=__set_sms4_cfb1))  sms4_cfb1;

static void __set_sms4_cfb1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_cfb1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_cfb8, put=__set_sms4_cfb8))  sms4_cfb8;

static void __set_sms4_cfb8(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_cfb8() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_ctr, put=__set_sms4_ctr))  sms4_ctr;

static void __set_sms4_ctr(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_ctr() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_gcm, put=__set_sms4_gcm))  sms4_gcm;

static void __set_sms4_gcm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_gcm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_ccm, put=__set_sms4_ccm))  sms4_ccm;

static void __set_sms4_ccm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_ccm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_xts, put=__set_sms4_xts))  sms4_xts;

static void __set_sms4_xts(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_xts() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_wrap, put=__set_sms4_wrap))  sms4_wrap;

static void __set_sms4_wrap(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_wrap() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_wrap_pad, put=__set_sms4_wrap_pad))  sms4_wrap_pad;

static void __set_sms4_wrap_pad(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_wrap_pad() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sms4_ocb, put=__set_sms4_ocb))  sms4_ocb;

static void __set_sms4_ocb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sms4_ocb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm5, put=__set_sm5))  sm5;

static void __set_sm5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2p256v1, put=__set_sm2p256v1))  sm2p256v1;

static void __set_sm2p256v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2p256v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign, put=__set_sm2sign))  sm2sign;

static void __set_sm2sign(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2exchange, put=__set_sm2exchange))  sm2exchange;

static void __set_sm2exchange(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2exchange() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt, put=__set_sm2encrypt))  sm2encrypt;

static void __set_sm2encrypt(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_wapip192v1, put=__set_wapip192v1))  wapip192v1;

static void __set_wapip192v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_wapip192v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_recommendedParameters, put=__set_sm2encrypt_recommendedParameters))  sm2encrypt_recommendedParameters;

static void __set_sm2encrypt_recommendedParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_recommendedParameters() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_specifiedParameters, put=__set_sm2encrypt_specifiedParameters))  sm2encrypt_specifiedParameters;

static void __set_sm2encrypt_specifiedParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_specifiedParameters() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_sm3, put=__set_sm2encrypt_with_sm3))  sm2encrypt_with_sm3;

static void __set_sm2encrypt_with_sm3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_sm3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_sha1, put=__set_sm2encrypt_with_sha1))  sm2encrypt_with_sha1;

static void __set_sm2encrypt_with_sha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_sha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_sha224, put=__set_sm2encrypt_with_sha224))  sm2encrypt_with_sha224;

static void __set_sm2encrypt_with_sha224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_sha224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_sha256, put=__set_sm2encrypt_with_sha256))  sm2encrypt_with_sha256;

static void __set_sm2encrypt_with_sha256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_sha256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_sha384, put=__set_sm2encrypt_with_sha384))  sm2encrypt_with_sha384;

static void __set_sm2encrypt_with_sha384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_sha384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_sha512, put=__set_sm2encrypt_with_sha512))  sm2encrypt_with_sha512;

static void __set_sm2encrypt_with_sha512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_sha512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_rmd160, put=__set_sm2encrypt_with_rmd160))  sm2encrypt_with_rmd160;

static void __set_sm2encrypt_with_rmd160(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_rmd160() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_whirlpool, put=__set_sm2encrypt_with_whirlpool))  sm2encrypt_with_whirlpool;

static void __set_sm2encrypt_with_whirlpool(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_whirlpool() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_blake2b512, put=__set_sm2encrypt_with_blake2b512))  sm2encrypt_with_blake2b512;

static void __set_sm2encrypt_with_blake2b512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_blake2b512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_blake2s256, put=__set_sm2encrypt_with_blake2s256))  sm2encrypt_with_blake2s256;

static void __set_sm2encrypt_with_blake2s256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_blake2s256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2encrypt_with_md5, put=__set_sm2encrypt_with_md5))  sm2encrypt_with_md5;

static void __set_sm2encrypt_with_md5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2encrypt_with_md5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_sm9PublicKey, put=__set_id_sm9PublicKey))  id_sm9PublicKey;

static void __set_id_sm9PublicKey(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_sm9PublicKey() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm9sign, put=__set_sm9sign))  sm9sign;

static void __set_sm9sign(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm9sign() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm9keyagreement, put=__set_sm9keyagreement))  sm9keyagreement;

static void __set_sm9keyagreement(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm9keyagreement() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm9encrypt, put=__set_sm9encrypt))  sm9encrypt;

static void __set_sm9encrypt(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm9encrypt() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm3, put=__set_sm3))  sm3;

static void __set_sm3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_hmac_sm3, put=__set_hmac_sm3))  hmac_sm3;

static void __set_hmac_sm3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_hmac_sm3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_sm3, put=__set_sm2sign_with_sm3))  sm2sign_with_sm3;

static void __set_sm2sign_with_sm3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_sm3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_sha1, put=__set_sm2sign_with_sha1))  sm2sign_with_sha1;

static void __set_sm2sign_with_sha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_sha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_sha256, put=__set_sm2sign_with_sha256))  sm2sign_with_sha256;

static void __set_sm2sign_with_sha256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_sha256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_sha512, put=__set_sm2sign_with_sha512))  sm2sign_with_sha512;

static void __set_sm2sign_with_sha512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_sha512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_sha224, put=__set_sm2sign_with_sha224))  sm2sign_with_sha224;

static void __set_sm2sign_with_sha224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_sha224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_sha384, put=__set_sm2sign_with_sha384))  sm2sign_with_sha384;

static void __set_sm2sign_with_sha384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_sha384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_rmd160, put=__set_sm2sign_with_rmd160))  sm2sign_with_rmd160;

static void __set_sm2sign_with_rmd160(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_rmd160() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_whirlpool, put=__set_sm2sign_with_whirlpool))  sm2sign_with_whirlpool;

static void __set_sm2sign_with_whirlpool(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_whirlpool() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_blake2b512, put=__set_sm2sign_with_blake2b512))  sm2sign_with_blake2b512;

static void __set_sm2sign_with_blake2b512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_blake2b512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sm2sign_with_blake2s256, put=__set_sm2sign_with_blake2s256))  sm2sign_with_blake2s256;

static void __set_sm2sign_with_blake2s256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sm2sign_with_blake2s256() ;


// Methods

static Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xe10578 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::GM
NEED_NO_BOX(Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::GM::GMObjectIdentifiers, "Org.BouncyCastle.Asn1.GM", "GMObjectIdentifiers");
