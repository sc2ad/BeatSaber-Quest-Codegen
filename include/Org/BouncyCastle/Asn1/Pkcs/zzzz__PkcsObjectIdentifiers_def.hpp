#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PkcsObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::PkcsObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(245))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PkcsObjectIdentifiers
class CORDL_TYPE PkcsObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkcsObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkcsObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr PkcsObjectIdentifiers(PkcsObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkcsObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr PkcsObjectIdentifiers(PkcsObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkcsObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkcsObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkcsObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkcsObjectIdentifiers& operator=(PkcsObjectIdentifiers&& o) noexcept = default;
  constexpr PkcsObjectIdentifiers& operator=(PkcsObjectIdentifiers const& o) noexcept = default;
                


// Fields

/// @brief Field Pkcs1 offset 0
static constexpr ::ConstString  Pkcs1{u"1.2.840.113549.1.1"};

/// @brief Field Pkcs3 offset 0
static constexpr ::ConstString  Pkcs3{u"1.2.840.113549.1.3"};

/// @brief Field Pkcs5 offset 0
static constexpr ::ConstString  Pkcs5{u"1.2.840.113549.1.5"};

/// @brief Field EncryptionAlgorithm offset 0
static constexpr ::ConstString  EncryptionAlgorithm{u"1.2.840.113549.3"};

/// @brief Field DigestAlgorithm offset 0
static constexpr ::ConstString  DigestAlgorithm{u"1.2.840.113549.2"};

/// @brief Field Pkcs7 offset 0
static constexpr ::ConstString  Pkcs7{u"1.2.840.113549.1.7"};

/// @brief Field Pkcs9 offset 0
static constexpr ::ConstString  Pkcs9{u"1.2.840.113549.1.9"};

/// @brief Field CertTypes offset 0
static constexpr ::ConstString  CertTypes{u"1.2.840.113549.1.9.22"};

/// @brief Field CrlTypes offset 0
static constexpr ::ConstString  CrlTypes{u"1.2.840.113549.1.9.23"};

/// @brief Field IdCT offset 0
static constexpr ::ConstString  IdCT{u"1.2.840.113549.1.9.16.1"};

/// @brief Field IdCti offset 0
static constexpr ::ConstString  IdCti{u"1.2.840.113549.1.9.16.6"};

/// @brief Field IdAA offset 0
static constexpr ::ConstString  IdAA{u"1.2.840.113549.1.9.16.2"};

/// @brief Field IdSpq offset 0
static constexpr ::ConstString  IdSpq{u"1.2.840.113549.1.9.16.5"};

/// @brief Field Pkcs12 offset 0
static constexpr ::ConstString  Pkcs12{u"1.2.840.113549.1.12"};

/// @brief Field BagTypes offset 0
static constexpr ::ConstString  BagTypes{u"1.2.840.113549.1.12.10.1"};

/// @brief Field Pkcs12PbeIds offset 0
static constexpr ::ConstString  Pkcs12PbeIds{u"1.2.840.113549.1.12.1"};

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs1Oid, put=__set_Pkcs1Oid))  Pkcs1Oid;

static void __set_Pkcs1Oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs1Oid() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RsaEncryption, put=__set_RsaEncryption))  RsaEncryption;

static void __set_RsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD2WithRsaEncryption, put=__set_MD2WithRsaEncryption))  MD2WithRsaEncryption;

static void __set_MD2WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD2WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD4WithRsaEncryption, put=__set_MD4WithRsaEncryption))  MD4WithRsaEncryption;

static void __set_MD4WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD4WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD5WithRsaEncryption, put=__set_MD5WithRsaEncryption))  MD5WithRsaEncryption;

static void __set_MD5WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD5WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha1WithRsaEncryption, put=__set_Sha1WithRsaEncryption))  Sha1WithRsaEncryption;

static void __set_Sha1WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha1WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SrsaOaepEncryptionSet, put=__set_SrsaOaepEncryptionSet))  SrsaOaepEncryptionSet;

static void __set_SrsaOaepEncryptionSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SrsaOaepEncryptionSet() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsaesOaep, put=__set_IdRsaesOaep))  IdRsaesOaep;

static void __set_IdRsaesOaep(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsaesOaep() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdMgf1, put=__set_IdMgf1))  IdMgf1;

static void __set_IdMgf1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdMgf1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdPSpecified, put=__set_IdPSpecified))  IdPSpecified;

static void __set_IdPSpecified(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdPSpecified() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsassaPss, put=__set_IdRsassaPss))  IdRsassaPss;

static void __set_IdRsassaPss(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsassaPss() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha256WithRsaEncryption, put=__set_Sha256WithRsaEncryption))  Sha256WithRsaEncryption;

static void __set_Sha256WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha256WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha384WithRsaEncryption, put=__set_Sha384WithRsaEncryption))  Sha384WithRsaEncryption;

static void __set_Sha384WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha384WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha512WithRsaEncryption, put=__set_Sha512WithRsaEncryption))  Sha512WithRsaEncryption;

static void __set_Sha512WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha512WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha224WithRsaEncryption, put=__set_Sha224WithRsaEncryption))  Sha224WithRsaEncryption;

static void __set_Sha224WithRsaEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha224WithRsaEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha512_224WithRSAEncryption, put=__set_Sha512_224WithRSAEncryption))  Sha512_224WithRSAEncryption;

static void __set_Sha512_224WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha512_224WithRSAEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Sha512_256WithRSAEncryption, put=__set_Sha512_256WithRSAEncryption))  Sha512_256WithRSAEncryption;

static void __set_Sha512_256WithRSAEncryption(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Sha512_256WithRSAEncryption() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DhKeyAgreement, put=__set_DhKeyAgreement))  DhKeyAgreement;

static void __set_DhKeyAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DhKeyAgreement() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithMD2AndDesCbc, put=__set_PbeWithMD2AndDesCbc))  PbeWithMD2AndDesCbc;

static void __set_PbeWithMD2AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithMD2AndDesCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithMD2AndRC2Cbc, put=__set_PbeWithMD2AndRC2Cbc))  PbeWithMD2AndRC2Cbc;

static void __set_PbeWithMD2AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithMD2AndRC2Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithMD5AndDesCbc, put=__set_PbeWithMD5AndDesCbc))  PbeWithMD5AndDesCbc;

static void __set_PbeWithMD5AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithMD5AndDesCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithMD5AndRC2Cbc, put=__set_PbeWithMD5AndRC2Cbc))  PbeWithMD5AndRC2Cbc;

static void __set_PbeWithMD5AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithMD5AndRC2Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithSha1AndDesCbc, put=__set_PbeWithSha1AndDesCbc))  PbeWithSha1AndDesCbc;

static void __set_PbeWithSha1AndDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithSha1AndDesCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithSha1AndRC2Cbc, put=__set_PbeWithSha1AndRC2Cbc))  PbeWithSha1AndRC2Cbc;

static void __set_PbeWithSha1AndRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithSha1AndRC2Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdPbeS2, put=__set_IdPbeS2))  IdPbeS2;

static void __set_IdPbeS2(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdPbeS2() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdPbkdf2, put=__set_IdPbkdf2))  IdPbkdf2;

static void __set_IdPbkdf2(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdPbkdf2() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesEde3Cbc, put=__set_DesEde3Cbc))  DesEde3Cbc;

static void __set_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesEde3Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RC2Cbc, put=__set_RC2Cbc))  RC2Cbc;

static void __set_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RC2Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_rc4, put=__set_rc4))  rc4;

static void __set_rc4(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_rc4() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD2, put=__set_MD2))  MD2;

static void __set_MD2(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD2() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD4, put=__set_MD4))  MD4;

static void __set_MD4(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD4() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MD5, put=__set_MD5))  MD5;

static void __set_MD5(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MD5() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHmacWithSha1, put=__set_IdHmacWithSha1))  IdHmacWithSha1;

static void __set_IdHmacWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHmacWithSha1() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHmacWithSha224, put=__set_IdHmacWithSha224))  IdHmacWithSha224;

static void __set_IdHmacWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHmacWithSha224() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHmacWithSha256, put=__set_IdHmacWithSha256))  IdHmacWithSha256;

static void __set_IdHmacWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHmacWithSha256() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHmacWithSha384, put=__set_IdHmacWithSha384))  IdHmacWithSha384;

static void __set_IdHmacWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHmacWithSha384() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHmacWithSha512, put=__set_IdHmacWithSha512))  IdHmacWithSha512;

static void __set_IdHmacWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHmacWithSha512() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Data, put=__set_Data))  Data;

static void __set_Data(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Data() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SignedData, put=__set_SignedData))  SignedData;

static void __set_SignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SignedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EnvelopedData, put=__set_EnvelopedData))  EnvelopedData;

static void __set_EnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EnvelopedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SignedAndEnvelopedData, put=__set_SignedAndEnvelopedData))  SignedAndEnvelopedData;

static void __set_SignedAndEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SignedAndEnvelopedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DigestedData, put=__set_DigestedData))  DigestedData;

static void __set_DigestedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DigestedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EncryptedData, put=__set_EncryptedData))  EncryptedData;

static void __set_EncryptedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EncryptedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtEmailAddress, put=__set_Pkcs9AtEmailAddress))  Pkcs9AtEmailAddress;

static void __set_Pkcs9AtEmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtEmailAddress() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtUnstructuredName, put=__set_Pkcs9AtUnstructuredName))  Pkcs9AtUnstructuredName;

static void __set_Pkcs9AtUnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtUnstructuredName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtContentType, put=__set_Pkcs9AtContentType))  Pkcs9AtContentType;

static void __set_Pkcs9AtContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtContentType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtMessageDigest, put=__set_Pkcs9AtMessageDigest))  Pkcs9AtMessageDigest;

static void __set_Pkcs9AtMessageDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtMessageDigest() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtSigningTime, put=__set_Pkcs9AtSigningTime))  Pkcs9AtSigningTime;

static void __set_Pkcs9AtSigningTime(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtSigningTime() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtCounterSignature, put=__set_Pkcs9AtCounterSignature))  Pkcs9AtCounterSignature;

static void __set_Pkcs9AtCounterSignature(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtCounterSignature() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtChallengePassword, put=__set_Pkcs9AtChallengePassword))  Pkcs9AtChallengePassword;

static void __set_Pkcs9AtChallengePassword(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtChallengePassword() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtUnstructuredAddress, put=__set_Pkcs9AtUnstructuredAddress))  Pkcs9AtUnstructuredAddress;

static void __set_Pkcs9AtUnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtUnstructuredAddress() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtExtendedCertificateAttributes, put=__set_Pkcs9AtExtendedCertificateAttributes))  Pkcs9AtExtendedCertificateAttributes;

static void __set_Pkcs9AtExtendedCertificateAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtExtendedCertificateAttributes() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtSigningDescription, put=__set_Pkcs9AtSigningDescription))  Pkcs9AtSigningDescription;

static void __set_Pkcs9AtSigningDescription(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtSigningDescription() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtExtensionRequest, put=__set_Pkcs9AtExtensionRequest))  Pkcs9AtExtensionRequest;

static void __set_Pkcs9AtExtensionRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtExtensionRequest() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtSmimeCapabilities, put=__set_Pkcs9AtSmimeCapabilities))  Pkcs9AtSmimeCapabilities;

static void __set_Pkcs9AtSmimeCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtSmimeCapabilities() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSmime, put=__set_IdSmime))  IdSmime;

static void __set_IdSmime(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSmime() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtFriendlyName, put=__set_Pkcs9AtFriendlyName))  Pkcs9AtFriendlyName;

static void __set_Pkcs9AtFriendlyName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtFriendlyName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs9AtLocalKeyID, put=__set_Pkcs9AtLocalKeyID))  Pkcs9AtLocalKeyID;

static void __set_Pkcs9AtLocalKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs9AtLocalKeyID() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_X509CertType, put=__set_X509CertType))  X509CertType;

static void __set_X509CertType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_X509CertType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_X509Certificate, put=__set_X509Certificate))  X509Certificate;

static void __set_X509Certificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_X509Certificate() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SdsiCertificate, put=__set_SdsiCertificate))  SdsiCertificate;

static void __set_SdsiCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SdsiCertificate() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_X509Crl, put=__set_X509Crl))  X509Crl;

static void __set_X509Crl(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_X509Crl() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlg, put=__set_IdAlg))  IdAlg;

static void __set_IdAlg(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlg() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlgEsdh, put=__set_IdAlgEsdh))  IdAlgEsdh;

static void __set_IdAlgEsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlgEsdh() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlgCms3DesWrap, put=__set_IdAlgCms3DesWrap))  IdAlgCms3DesWrap;

static void __set_IdAlgCms3DesWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlgCms3DesWrap() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlgCmsRC2Wrap, put=__set_IdAlgCmsRC2Wrap))  IdAlgCmsRC2Wrap;

static void __set_IdAlgCmsRC2Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlgCmsRC2Wrap() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlgPwriKek, put=__set_IdAlgPwriKek))  IdAlgPwriKek;

static void __set_IdAlgPwriKek(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlgPwriKek() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlgSsdh, put=__set_IdAlgSsdh))  IdAlgSsdh;

static void __set_IdAlgSsdh(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlgSsdh() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsaKem, put=__set_IdRsaKem))  IdRsaKem;

static void __set_IdRsaKem(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsaKem() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAlgAeadChaCha20Poly1305, put=__set_IdAlgAeadChaCha20Poly1305))  IdAlgAeadChaCha20Poly1305;

static void __set_IdAlgAeadChaCha20Poly1305(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAlgAeadChaCha20Poly1305() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PreferSignedData, put=__set_PreferSignedData))  PreferSignedData;

static void __set_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PreferSignedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CannotDecryptAny, put=__set_CannotDecryptAny))  CannotDecryptAny;

static void __set_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CannotDecryptAny() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SmimeCapabilitiesVersions, put=__set_SmimeCapabilitiesVersions))  SmimeCapabilitiesVersions;

static void __set_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SmimeCapabilitiesVersions() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAReceiptRequest, put=__set_IdAAReceiptRequest))  IdAAReceiptRequest;

static void __set_IdAAReceiptRequest(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAReceiptRequest() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCTAuthData, put=__set_IdCTAuthData))  IdCTAuthData;

static void __set_IdCTAuthData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCTAuthData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCTTstInfo, put=__set_IdCTTstInfo))  IdCTTstInfo;

static void __set_IdCTTstInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCTTstInfo() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCTCompressedData, put=__set_IdCTCompressedData))  IdCTCompressedData;

static void __set_IdCTCompressedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCTCompressedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCTAuthEnvelopedData, put=__set_IdCTAuthEnvelopedData))  IdCTAuthEnvelopedData;

static void __set_IdCTAuthEnvelopedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCTAuthEnvelopedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCTTimestampedData, put=__set_IdCTTimestampedData))  IdCTTimestampedData;

static void __set_IdCTTimestampedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCTTimestampedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCtiEtsProofOfOrigin, put=__set_IdCtiEtsProofOfOrigin))  IdCtiEtsProofOfOrigin;

static void __set_IdCtiEtsProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCtiEtsProofOfOrigin() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCtiEtsProofOfReceipt, put=__set_IdCtiEtsProofOfReceipt))  IdCtiEtsProofOfReceipt;

static void __set_IdCtiEtsProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCtiEtsProofOfReceipt() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCtiEtsProofOfDelivery, put=__set_IdCtiEtsProofOfDelivery))  IdCtiEtsProofOfDelivery;

static void __set_IdCtiEtsProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCtiEtsProofOfDelivery() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCtiEtsProofOfSender, put=__set_IdCtiEtsProofOfSender))  IdCtiEtsProofOfSender;

static void __set_IdCtiEtsProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCtiEtsProofOfSender() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCtiEtsProofOfApproval, put=__set_IdCtiEtsProofOfApproval))  IdCtiEtsProofOfApproval;

static void __set_IdCtiEtsProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCtiEtsProofOfApproval() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdCtiEtsProofOfCreation, put=__set_IdCtiEtsProofOfCreation))  IdCtiEtsProofOfCreation;

static void __set_IdCtiEtsProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdCtiEtsProofOfCreation() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAOid, put=__set_IdAAOid))  IdAAOid;

static void __set_IdAAOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAOid() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAContentHint, put=__set_IdAAContentHint))  IdAAContentHint;

static void __set_IdAAContentHint(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAContentHint() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAMsgSigDigest, put=__set_IdAAMsgSigDigest))  IdAAMsgSigDigest;

static void __set_IdAAMsgSigDigest(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAMsgSigDigest() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAContentReference, put=__set_IdAAContentReference))  IdAAContentReference;

static void __set_IdAAContentReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAContentReference() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEncrypKeyPref, put=__set_IdAAEncrypKeyPref))  IdAAEncrypKeyPref;

static void __set_IdAAEncrypKeyPref(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEncrypKeyPref() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAASigningCertificate, put=__set_IdAASigningCertificate))  IdAASigningCertificate;

static void __set_IdAASigningCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAASigningCertificate() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAASigningCertificateV2, put=__set_IdAASigningCertificateV2))  IdAASigningCertificateV2;

static void __set_IdAASigningCertificateV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAASigningCertificateV2() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAContentIdentifier, put=__set_IdAAContentIdentifier))  IdAAContentIdentifier;

static void __set_IdAAContentIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAContentIdentifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAASignatureTimeStampToken, put=__set_IdAASignatureTimeStampToken))  IdAASignatureTimeStampToken;

static void __set_IdAASignatureTimeStampToken(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAASignatureTimeStampToken() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsSigPolicyID, put=__set_IdAAEtsSigPolicyID))  IdAAEtsSigPolicyID;

static void __set_IdAAEtsSigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsSigPolicyID() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsCommitmentType, put=__set_IdAAEtsCommitmentType))  IdAAEtsCommitmentType;

static void __set_IdAAEtsCommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsCommitmentType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsSignerLocation, put=__set_IdAAEtsSignerLocation))  IdAAEtsSignerLocation;

static void __set_IdAAEtsSignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsSignerLocation() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsSignerAttr, put=__set_IdAAEtsSignerAttr))  IdAAEtsSignerAttr;

static void __set_IdAAEtsSignerAttr(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsSignerAttr() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsOtherSigCert, put=__set_IdAAEtsOtherSigCert))  IdAAEtsOtherSigCert;

static void __set_IdAAEtsOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsOtherSigCert() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsContentTimestamp, put=__set_IdAAEtsContentTimestamp))  IdAAEtsContentTimestamp;

static void __set_IdAAEtsContentTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsContentTimestamp() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsCertificateRefs, put=__set_IdAAEtsCertificateRefs))  IdAAEtsCertificateRefs;

static void __set_IdAAEtsCertificateRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsCertificateRefs() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsRevocationRefs, put=__set_IdAAEtsRevocationRefs))  IdAAEtsRevocationRefs;

static void __set_IdAAEtsRevocationRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsRevocationRefs() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsCertValues, put=__set_IdAAEtsCertValues))  IdAAEtsCertValues;

static void __set_IdAAEtsCertValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsCertValues() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsRevocationValues, put=__set_IdAAEtsRevocationValues))  IdAAEtsRevocationValues;

static void __set_IdAAEtsRevocationValues(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsRevocationValues() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsEscTimeStamp, put=__set_IdAAEtsEscTimeStamp))  IdAAEtsEscTimeStamp;

static void __set_IdAAEtsEscTimeStamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsEscTimeStamp() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsCertCrlTimestamp, put=__set_IdAAEtsCertCrlTimestamp))  IdAAEtsCertCrlTimestamp;

static void __set_IdAAEtsCertCrlTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsCertCrlTimestamp() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAEtsArchiveTimestamp, put=__set_IdAAEtsArchiveTimestamp))  IdAAEtsArchiveTimestamp;

static void __set_IdAAEtsArchiveTimestamp(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAEtsArchiveTimestamp() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAADecryptKeyID, put=__set_IdAADecryptKeyID))  IdAADecryptKeyID;

static void __set_IdAADecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAADecryptKeyID() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAImplCryptoAlgs, put=__set_IdAAImplCryptoAlgs))  IdAAImplCryptoAlgs;

static void __set_IdAAImplCryptoAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAImplCryptoAlgs() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAAsymmDecryptKeyID, put=__set_IdAAAsymmDecryptKeyID))  IdAAAsymmDecryptKeyID;

static void __set_IdAAAsymmDecryptKeyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAAsymmDecryptKeyID() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAImplCompressAlgs, put=__set_IdAAImplCompressAlgs))  IdAAImplCompressAlgs;

static void __set_IdAAImplCompressAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAImplCompressAlgs() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAACommunityIdentifiers, put=__set_IdAACommunityIdentifiers))  IdAACommunityIdentifiers;

static void __set_IdAACommunityIdentifiers(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAACommunityIdentifiers() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAASigPolicyID, put=__set_IdAASigPolicyID))  IdAASigPolicyID;

static void __set_IdAASigPolicyID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAASigPolicyID() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAACommitmentType, put=__set_IdAACommitmentType))  IdAACommitmentType;

static void __set_IdAACommitmentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAACommitmentType() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAASignerLocation, put=__set_IdAASignerLocation))  IdAASignerLocation;

static void __set_IdAASignerLocation(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAASignerLocation() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAAOtherSigCert, put=__set_IdAAOtherSigCert))  IdAAOtherSigCert;

static void __set_IdAAOtherSigCert(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAAOtherSigCert() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSpqEtsUri, put=__set_IdSpqEtsUri))  IdSpqEtsUri;

static void __set_IdSpqEtsUri(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSpqEtsUri() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSpqEtsUNotice, put=__set_IdSpqEtsUNotice))  IdSpqEtsUNotice;

static void __set_IdSpqEtsUNotice(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSpqEtsUNotice() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_KeyBag, put=__set_KeyBag))  KeyBag;

static void __set_KeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_KeyBag() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pkcs8ShroudedKeyBag, put=__set_Pkcs8ShroudedKeyBag))  Pkcs8ShroudedKeyBag;

static void __set_Pkcs8ShroudedKeyBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pkcs8ShroudedKeyBag() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CertBag, put=__set_CertBag))  CertBag;

static void __set_CertBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CertBag() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CrlBag, put=__set_CrlBag))  CrlBag;

static void __set_CrlBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CrlBag() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecretBag, put=__set_SecretBag))  SecretBag;

static void __set_SecretBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecretBag() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SafeContentsBag, put=__set_SafeContentsBag))  SafeContentsBag;

static void __set_SafeContentsBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SafeContentsBag() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithShaAnd128BitRC4, put=__set_PbeWithShaAnd128BitRC4))  PbeWithShaAnd128BitRC4;

static void __set_PbeWithShaAnd128BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithShaAnd128BitRC4() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithShaAnd40BitRC4, put=__set_PbeWithShaAnd40BitRC4))  PbeWithShaAnd40BitRC4;

static void __set_PbeWithShaAnd40BitRC4(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithShaAnd40BitRC4() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithShaAnd3KeyTripleDesCbc, put=__set_PbeWithShaAnd3KeyTripleDesCbc))  PbeWithShaAnd3KeyTripleDesCbc;

static void __set_PbeWithShaAnd3KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithShaAnd3KeyTripleDesCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithShaAnd2KeyTripleDesCbc, put=__set_PbeWithShaAnd2KeyTripleDesCbc))  PbeWithShaAnd2KeyTripleDesCbc;

static void __set_PbeWithShaAnd2KeyTripleDesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithShaAnd2KeyTripleDesCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbeWithShaAnd128BitRC2Cbc, put=__set_PbeWithShaAnd128BitRC2Cbc))  PbeWithShaAnd128BitRC2Cbc;

static void __set_PbeWithShaAnd128BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbeWithShaAnd128BitRC2Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PbewithShaAnd40BitRC2Cbc, put=__set_PbewithShaAnd40BitRC2Cbc))  PbewithShaAnd40BitRC2Cbc;

static void __set_PbewithShaAnd40BitRC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PbewithShaAnd40BitRC2Cbc() ;


// Methods

// Ctor Parameters []
explicit PkcsObjectIdentifiers() ;

/// @brief Method .ctor addr 0xefebac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PkcsObjectIdentifiers, "Org.BouncyCastle.Asn1.Pkcs", "PkcsObjectIdentifiers");
