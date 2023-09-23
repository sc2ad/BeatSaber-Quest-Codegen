#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.X9::X9ObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(448))
// CS Name: Org.BouncyCastle.Asn1.X9.X9ObjectIdentifiers
class CORDL_TYPE X9ObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X9ObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr X9ObjectIdentifiers(X9ObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr X9ObjectIdentifiers(X9ObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9ObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X9ObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9ObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9ObjectIdentifiers& operator=(X9ObjectIdentifiers&& o) noexcept = default;
  constexpr X9ObjectIdentifiers& operator=(X9ObjectIdentifiers const& o) noexcept = default;
                


// Fields

/// @brief Field AnsiX962 offset 0
static constexpr ::ConstString  AnsiX962{u"1.2.840.10045"};

/// @brief Field IdECSigType offset 0
static constexpr ::ConstString  IdECSigType{u"1.2.840.10045.4"};

/// @brief Field IdPublicKeyType offset 0
static constexpr ::ConstString  IdPublicKeyType{u"1.2.840.10045.2"};

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ansi_X9_62, put=__set_ansi_X9_62))  ansi_X9_62;

static void __set_ansi_X9_62(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ansi_X9_62() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdFieldType, put=__set_IdFieldType))  IdFieldType;

static void __set_IdFieldType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdFieldType() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PrimeField, put=__set_PrimeField))  PrimeField;

static void __set_PrimeField(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PrimeField() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CharacteristicTwoField, put=__set_CharacteristicTwoField))  CharacteristicTwoField;

static void __set_CharacteristicTwoField(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CharacteristicTwoField() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GNBasis, put=__set_GNBasis))  GNBasis;

static void __set_GNBasis(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GNBasis() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_TPBasis, put=__set_TPBasis))  TPBasis;

static void __set_TPBasis(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_TPBasis() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PPBasis, put=__set_PPBasis))  PPBasis;

static void __set_PPBasis(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PPBasis() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_ecSigType, put=__set_id_ecSigType))  id_ecSigType;

static void __set_id_ecSigType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_ecSigType() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECDsaWithSha1, put=__set_ECDsaWithSha1))  ECDsaWithSha1;

static void __set_ECDsaWithSha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECDsaWithSha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_publicKeyType, put=__set_id_publicKeyType))  id_publicKeyType;

static void __set_id_publicKeyType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_publicKeyType() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdECPublicKey, put=__set_IdECPublicKey))  IdECPublicKey;

static void __set_IdECPublicKey(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdECPublicKey() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECDsaWithSha2, put=__set_ECDsaWithSha2))  ECDsaWithSha2;

static void __set_ECDsaWithSha2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECDsaWithSha2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECDsaWithSha224, put=__set_ECDsaWithSha224))  ECDsaWithSha224;

static void __set_ECDsaWithSha224(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECDsaWithSha224() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECDsaWithSha256, put=__set_ECDsaWithSha256))  ECDsaWithSha256;

static void __set_ECDsaWithSha256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECDsaWithSha256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECDsaWithSha384, put=__set_ECDsaWithSha384))  ECDsaWithSha384;

static void __set_ECDsaWithSha384(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECDsaWithSha384() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ECDsaWithSha512, put=__set_ECDsaWithSha512))  ECDsaWithSha512;

static void __set_ECDsaWithSha512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ECDsaWithSha512() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EllipticCurve, put=__set_EllipticCurve))  EllipticCurve;

static void __set_EllipticCurve(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EllipticCurve() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CTwoCurve, put=__set_CTwoCurve))  CTwoCurve;

static void __set_CTwoCurve(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CTwoCurve() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb163v1, put=__set_C2Pnb163v1))  C2Pnb163v1;

static void __set_C2Pnb163v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb163v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb163v2, put=__set_C2Pnb163v2))  C2Pnb163v2;

static void __set_C2Pnb163v2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb163v2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb163v3, put=__set_C2Pnb163v3))  C2Pnb163v3;

static void __set_C2Pnb163v3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb163v3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb176w1, put=__set_C2Pnb176w1))  C2Pnb176w1;

static void __set_C2Pnb176w1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb176w1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb191v1, put=__set_C2Tnb191v1))  C2Tnb191v1;

static void __set_C2Tnb191v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb191v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb191v2, put=__set_C2Tnb191v2))  C2Tnb191v2;

static void __set_C2Tnb191v2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb191v2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb191v3, put=__set_C2Tnb191v3))  C2Tnb191v3;

static void __set_C2Tnb191v3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb191v3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Onb191v4, put=__set_C2Onb191v4))  C2Onb191v4;

static void __set_C2Onb191v4(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Onb191v4() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Onb191v5, put=__set_C2Onb191v5))  C2Onb191v5;

static void __set_C2Onb191v5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Onb191v5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb208w1, put=__set_C2Pnb208w1))  C2Pnb208w1;

static void __set_C2Pnb208w1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb208w1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb239v1, put=__set_C2Tnb239v1))  C2Tnb239v1;

static void __set_C2Tnb239v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb239v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb239v2, put=__set_C2Tnb239v2))  C2Tnb239v2;

static void __set_C2Tnb239v2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb239v2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb239v3, put=__set_C2Tnb239v3))  C2Tnb239v3;

static void __set_C2Tnb239v3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb239v3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Onb239v4, put=__set_C2Onb239v4))  C2Onb239v4;

static void __set_C2Onb239v4(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Onb239v4() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Onb239v5, put=__set_C2Onb239v5))  C2Onb239v5;

static void __set_C2Onb239v5(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Onb239v5() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb272w1, put=__set_C2Pnb272w1))  C2Pnb272w1;

static void __set_C2Pnb272w1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb272w1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb304w1, put=__set_C2Pnb304w1))  C2Pnb304w1;

static void __set_C2Pnb304w1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb304w1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb359v1, put=__set_C2Tnb359v1))  C2Tnb359v1;

static void __set_C2Tnb359v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb359v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Pnb368w1, put=__set_C2Pnb368w1))  C2Pnb368w1;

static void __set_C2Pnb368w1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Pnb368w1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C2Tnb431r1, put=__set_C2Tnb431r1))  C2Tnb431r1;

static void __set_C2Tnb431r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C2Tnb431r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PrimeCurve, put=__set_PrimeCurve))  PrimeCurve;

static void __set_PrimeCurve(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PrimeCurve() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime192v1, put=__set_Prime192v1))  Prime192v1;

static void __set_Prime192v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime192v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime192v2, put=__set_Prime192v2))  Prime192v2;

static void __set_Prime192v2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime192v2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime192v3, put=__set_Prime192v3))  Prime192v3;

static void __set_Prime192v3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime192v3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime239v1, put=__set_Prime239v1))  Prime239v1;

static void __set_Prime239v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime239v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime239v2, put=__set_Prime239v2))  Prime239v2;

static void __set_Prime239v2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime239v2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime239v3, put=__set_Prime239v3))  Prime239v3;

static void __set_Prime239v3(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime239v3() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Prime256v1, put=__set_Prime256v1))  Prime256v1;

static void __set_Prime256v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Prime256v1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsa, put=__set_IdDsa))  IdDsa;

static void __set_IdDsa(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsa() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdDsaWithSha1, put=__set_IdDsaWithSha1))  IdDsaWithSha1;

static void __set_IdDsaWithSha1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdDsaWithSha1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_X9x63Scheme, put=__set_X9x63Scheme))  X9x63Scheme;

static void __set_X9x63Scheme(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_X9x63Scheme() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHSinglePassStdDHSha1KdfScheme, put=__set_DHSinglePassStdDHSha1KdfScheme))  DHSinglePassStdDHSha1KdfScheme;

static void __set_DHSinglePassStdDHSha1KdfScheme(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHSinglePassStdDHSha1KdfScheme() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHSinglePassCofactorDHSha1KdfScheme, put=__set_DHSinglePassCofactorDHSha1KdfScheme))  DHSinglePassCofactorDHSha1KdfScheme;

static void __set_DHSinglePassCofactorDHSha1KdfScheme(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHSinglePassCofactorDHSha1KdfScheme() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MqvSinglePassSha1KdfScheme, put=__set_MqvSinglePassSha1KdfScheme))  MqvSinglePassSha1KdfScheme;

static void __set_MqvSinglePassSha1KdfScheme(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MqvSinglePassSha1KdfScheme() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ansi_x9_42, put=__set_ansi_x9_42))  ansi_x9_42;

static void __set_ansi_x9_42(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ansi_x9_42() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHPublicNumber, put=__set_DHPublicNumber))  DHPublicNumber;

static void __set_DHPublicNumber(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHPublicNumber() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_X9x42Schemes, put=__set_X9x42Schemes))  X9x42Schemes;

static void __set_X9x42Schemes(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_X9x42Schemes() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHStatic, put=__set_DHStatic))  DHStatic;

static void __set_DHStatic(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHStatic() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHEphem, put=__set_DHEphem))  DHEphem;

static void __set_DHEphem(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHEphem() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHOneFlow, put=__set_DHOneFlow))  DHOneFlow;

static void __set_DHOneFlow(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHOneFlow() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHHybrid1, put=__set_DHHybrid1))  DHHybrid1;

static void __set_DHHybrid1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHHybrid1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHHybrid2, put=__set_DHHybrid2))  DHHybrid2;

static void __set_DHHybrid2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHHybrid2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DHHybridOneFlow, put=__set_DHHybridOneFlow))  DHHybridOneFlow;

static void __set_DHHybridOneFlow(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DHHybridOneFlow() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Mqv2, put=__set_Mqv2))  Mqv2;

static void __set_Mqv2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Mqv2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Mqv1, put=__set_Mqv1))  Mqv1;

static void __set_Mqv1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Mqv1() ;


// Methods

// Ctor Parameters []
explicit X9ObjectIdentifiers() ;

/// @brief Method .ctor addr 0x11280e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers, "Org.BouncyCastle.Asn1.X9", "X9ObjectIdentifiers");
