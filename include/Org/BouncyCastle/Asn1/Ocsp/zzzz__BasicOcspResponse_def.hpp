#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::BasicOcspResponse
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(206))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.BasicOcspResponse
class CORDL_TYPE BasicOcspResponse : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BasicOcspResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspResponse", modifiers: " const&", def_value: None }]
constexpr BasicOcspResponse(BasicOcspResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspResponse", modifiers: "&&", def_value: None }]
constexpr BasicOcspResponse(BasicOcspResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicOcspResponse(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr BasicOcspResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicOcspResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicOcspResponse& operator=(BasicOcspResponse&& o) noexcept = default;
  constexpr BasicOcspResponse& operator=(BasicOcspResponse const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::ResponseData __declspec(property(get=__get_tbsResponseData, put=__set_tbsResponseData))  tbsResponseData;

constexpr void __set_tbsResponseData(Org::BouncyCastle::Asn1::Ocsp::ResponseData value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::ResponseData __get_tbsResponseData() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signatureAlgorithm, put=__set_signatureAlgorithm))  signatureAlgorithm;

constexpr void __set_signatureAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signatureAlgorithm() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_signature() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_certs() const;


// Properties

 Org::BouncyCastle::Asn1::Ocsp::ResponseData __declspec(property(get=get_TbsResponseData))  TbsResponseData;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Signature))  Signature;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_Certs))  Certs;


// Methods

/// @brief Method GetInstance addr 0xef1230 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef1248 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tbsResponseData", ty: "Org::BouncyCastle::Asn1::Ocsp::ResponseData", modifiers: "", def_value: None }, CppParam { name: "signatureAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "certs", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit BasicOcspResponse(Org::BouncyCastle::Asn1::Ocsp::ResponseData tbsResponseData, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signature, Org::BouncyCastle::Asn1::Asn1Sequence certs) ;

/// @brief Method .ctor addr 0xef1588 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::ResponseData tbsResponseData, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signature, Org::BouncyCastle::Asn1::Asn1Sequence certs) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit BasicOcspResponse(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef13d0 size 0x1b8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetTbsResponseData addr 0xef1750 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::ResponseData GetTbsResponseData() ;

/// @brief Method get_TbsResponseData addr 0xef1758 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::ResponseData get_TbsResponseData() ;

/// @brief Method GetSignatureAlgorithm addr 0xef1760 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetSignatureAlgorithm() ;

/// @brief Method get_SignatureAlgorithm addr 0xef1768 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method GetSignature addr 0xef1770 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString GetSignature() ;

/// @brief Method get_Signature addr 0xef1778 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_Signature() ;

/// @brief Method GetSignatureOctets addr 0xef1780 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSignatureOctets() ;

/// @brief Method GetCerts addr 0xef17a0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence GetCerts() ;

/// @brief Method get_Certs addr 0xef17a8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_Certs() ;

/// @brief Method ToAsn1Object addr 0xef17b0 size 0x16c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, "Org.BouncyCastle.Asn1.Ocsp", "BasicOcspResponse");
