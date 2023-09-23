#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Nist {
class NistObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Nist::NistObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Nist {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(204))
// CS Name: Org.BouncyCastle.Asn1.Nist.NistObjectIdentifiers
class CORDL_TYPE NistObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NistObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "NistObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr NistObjectIdentifiers(NistObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NistObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr NistObjectIdentifiers(NistObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NistObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NistObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NistObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NistObjectIdentifiers& operator=(NistObjectIdentifiers&& o) noexcept = default;
  constexpr NistObjectIdentifiers& operator=(NistObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NistAlgorithm, put=__set_NistAlgorithm))  NistAlgorithm;

static void __set_NistAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NistAlgorithm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_HashAlgs, put=__set_HashAlgs))  HashAlgs;

static void __set_HashAlgs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_HashAlgs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha256, put=__set_IdSha256))  IdSha256;

static void __set_IdSha256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha384, put=__set_IdSha384))  IdSha384;

static void __set_IdSha384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha512, put=__set_IdSha512))  IdSha512;

static void __set_IdSha512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha224, put=__set_IdSha224))  IdSha224;

static void __set_IdSha224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha512_224, put=__set_IdSha512_224))  IdSha512_224;

static void __set_IdSha512_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha512_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha512_256, put=__set_IdSha512_256))  IdSha512_256;

static void __set_IdSha512_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha512_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha3_224, put=__set_IdSha3_224))  IdSha3_224;

static void __set_IdSha3_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha3_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha3_256, put=__set_IdSha3_256))  IdSha3_256;

static void __set_IdSha3_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha3_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha3_384, put=__set_IdSha3_384))  IdSha3_384;

static void __set_IdSha3_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha3_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdSha3_512, put=__set_IdSha3_512))  IdSha3_512;

static void __set_IdSha3_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdSha3_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdShake128, put=__set_IdShake128))  IdShake128;

static void __set_IdShake128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdShake128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdShake256, put=__set_IdShake256))  IdShake256;

static void __set_IdShake256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdShake256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHMacWithSha3_224, put=__set_IdHMacWithSha3_224))  IdHMacWithSha3_224;

static void __set_IdHMacWithSha3_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHMacWithSha3_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHMacWithSha3_256, put=__set_IdHMacWithSha3_256))  IdHMacWithSha3_256;

static void __set_IdHMacWithSha3_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHMacWithSha3_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHMacWithSha3_384, put=__set_IdHMacWithSha3_384))  IdHMacWithSha3_384;

static void __set_IdHMacWithSha3_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHMacWithSha3_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdHMacWithSha3_512, put=__set_IdHMacWithSha3_512))  IdHMacWithSha3_512;

static void __set_IdHMacWithSha3_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdHMacWithSha3_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdShake128Len, put=__set_IdShake128Len))  IdShake128Len;

static void __set_IdShake128Len(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdShake128Len() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdShake256Len, put=__set_IdShake256Len))  IdShake256Len;

static void __set_IdShake256Len(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdShake256Len() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdKmacWithShake128, put=__set_IdKmacWithShake128))  IdKmacWithShake128;

static void __set_IdKmacWithShake128(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdKmacWithShake128() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdKmacWithShake256, put=__set_IdKmacWithShake256))  IdKmacWithShake256;

static void __set_IdKmacWithShake256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdKmacWithShake256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Aes, put=__set_Aes))  Aes;

static void __set_Aes(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Aes() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Ecb, put=__set_IdAes128Ecb))  IdAes128Ecb;

static void __set_IdAes128Ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Cbc, put=__set_IdAes128Cbc))  IdAes128Cbc;

static void __set_IdAes128Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Ofb, put=__set_IdAes128Ofb))  IdAes128Ofb;

static void __set_IdAes128Ofb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Ofb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Cfb, put=__set_IdAes128Cfb))  IdAes128Cfb;

static void __set_IdAes128Cfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Cfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Wrap, put=__set_IdAes128Wrap))  IdAes128Wrap;

static void __set_IdAes128Wrap(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Wrap() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Gcm, put=__set_IdAes128Gcm))  IdAes128Gcm;

static void __set_IdAes128Gcm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Gcm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes128Ccm, put=__set_IdAes128Ccm))  IdAes128Ccm;

static void __set_IdAes128Ccm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes128Ccm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Ecb, put=__set_IdAes192Ecb))  IdAes192Ecb;

static void __set_IdAes192Ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Cbc, put=__set_IdAes192Cbc))  IdAes192Cbc;

static void __set_IdAes192Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Ofb, put=__set_IdAes192Ofb))  IdAes192Ofb;

static void __set_IdAes192Ofb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Ofb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Cfb, put=__set_IdAes192Cfb))  IdAes192Cfb;

static void __set_IdAes192Cfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Cfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Wrap, put=__set_IdAes192Wrap))  IdAes192Wrap;

static void __set_IdAes192Wrap(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Wrap() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Gcm, put=__set_IdAes192Gcm))  IdAes192Gcm;

static void __set_IdAes192Gcm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Gcm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes192Ccm, put=__set_IdAes192Ccm))  IdAes192Ccm;

static void __set_IdAes192Ccm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes192Ccm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Ecb, put=__set_IdAes256Ecb))  IdAes256Ecb;

static void __set_IdAes256Ecb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Ecb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Cbc, put=__set_IdAes256Cbc))  IdAes256Cbc;

static void __set_IdAes256Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Ofb, put=__set_IdAes256Ofb))  IdAes256Ofb;

static void __set_IdAes256Ofb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Ofb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Cfb, put=__set_IdAes256Cfb))  IdAes256Cfb;

static void __set_IdAes256Cfb(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Cfb() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Wrap, put=__set_IdAes256Wrap))  IdAes256Wrap;

static void __set_IdAes256Wrap(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Wrap() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Gcm, put=__set_IdAes256Gcm))  IdAes256Gcm;

static void __set_IdAes256Gcm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Gcm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdAes256Ccm, put=__set_IdAes256Ccm))  IdAes256Ccm;

static void __set_IdAes256Ccm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdAes256Ccm() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsaWithSha2, put=__set_IdDsaWithSha2))  IdDsaWithSha2;

static void __set_IdDsaWithSha2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsaWithSha2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DsaWithSha224, put=__set_DsaWithSha224))  DsaWithSha224;

static void __set_DsaWithSha224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DsaWithSha224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DsaWithSha256, put=__set_DsaWithSha256))  DsaWithSha256;

static void __set_DsaWithSha256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DsaWithSha256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DsaWithSha384, put=__set_DsaWithSha384))  DsaWithSha384;

static void __set_DsaWithSha384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DsaWithSha384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DsaWithSha512, put=__set_DsaWithSha512))  DsaWithSha512;

static void __set_DsaWithSha512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DsaWithSha512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsaWithSha3_224, put=__set_IdDsaWithSha3_224))  IdDsaWithSha3_224;

static void __set_IdDsaWithSha3_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsaWithSha3_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsaWithSha3_256, put=__set_IdDsaWithSha3_256))  IdDsaWithSha3_256;

static void __set_IdDsaWithSha3_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsaWithSha3_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsaWithSha3_384, put=__set_IdDsaWithSha3_384))  IdDsaWithSha3_384;

static void __set_IdDsaWithSha3_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsaWithSha3_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsaWithSha3_512, put=__set_IdDsaWithSha3_512))  IdDsaWithSha3_512;

static void __set_IdDsaWithSha3_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsaWithSha3_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEcdsaWithSha3_224, put=__set_IdEcdsaWithSha3_224))  IdEcdsaWithSha3_224;

static void __set_IdEcdsaWithSha3_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEcdsaWithSha3_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEcdsaWithSha3_256, put=__set_IdEcdsaWithSha3_256))  IdEcdsaWithSha3_256;

static void __set_IdEcdsaWithSha3_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEcdsaWithSha3_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEcdsaWithSha3_384, put=__set_IdEcdsaWithSha3_384))  IdEcdsaWithSha3_384;

static void __set_IdEcdsaWithSha3_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEcdsaWithSha3_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEcdsaWithSha3_512, put=__set_IdEcdsaWithSha3_512))  IdEcdsaWithSha3_512;

static void __set_IdEcdsaWithSha3_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEcdsaWithSha3_512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsassaPkcs1V15WithSha3_224, put=__set_IdRsassaPkcs1V15WithSha3_224))  IdRsassaPkcs1V15WithSha3_224;

static void __set_IdRsassaPkcs1V15WithSha3_224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsassaPkcs1V15WithSha3_224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsassaPkcs1V15WithSha3_256, put=__set_IdRsassaPkcs1V15WithSha3_256))  IdRsassaPkcs1V15WithSha3_256;

static void __set_IdRsassaPkcs1V15WithSha3_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsassaPkcs1V15WithSha3_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsassaPkcs1V15WithSha3_384, put=__set_IdRsassaPkcs1V15WithSha3_384))  IdRsassaPkcs1V15WithSha3_384;

static void __set_IdRsassaPkcs1V15WithSha3_384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsassaPkcs1V15WithSha3_384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdRsassaPkcs1V15WithSha3_512, put=__set_IdRsassaPkcs1V15WithSha3_512))  IdRsassaPkcs1V15WithSha3_512;

static void __set_IdRsassaPkcs1V15WithSha3_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdRsassaPkcs1V15WithSha3_512() ;


// Methods

// Ctor Parameters []
explicit NistObjectIdentifiers() ;

/// @brief Method .ctor addr 0xeefec0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Nist
NEED_NO_BOX(Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers, "Org.BouncyCastle.Asn1.Nist", "NistObjectIdentifiers");
