#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertificationRequestInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertificationRequest;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::CertificationRequest
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(229))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
class CORDL_TYPE CertificationRequest : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertificationRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificationRequest", modifiers: " const&", def_value: None }]
constexpr CertificationRequest(CertificationRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificationRequest", modifiers: "&&", def_value: None }]
constexpr CertificationRequest(CertificationRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificationRequest(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertificationRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificationRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificationRequest& operator=(CertificationRequest&& o) noexcept = default;
  constexpr CertificationRequest& operator=(CertificationRequest const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo __declspec(property(get=__get_reqInfo, put=__set_reqInfo))  reqInfo;

constexpr void __set_reqInfo(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo __get_reqInfo() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_sigAlgId, put=__set_sigAlgId))  sigAlgId;

constexpr void __set_sigAlgId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_sigAlgId() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_sigBits, put=__set_sigBits))  sigBits;

constexpr void __set_sigBits(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_sigBits() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Signature))  Signature;


// Methods

/// @brief Method GetInstance addr 0xef7f60 size 0xd8 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::CertificationRequest GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit CertificationRequest() ;

/// @brief Method .ctor addr 0xef8180 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "requestInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo", modifiers: "", def_value: None }, CppParam { name: "algorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit CertificationRequest(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo requestInfo, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, Org::BouncyCastle::Asn1::DerBitString signature) ;

/// @brief Method .ctor addr 0xef8188 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo requestInfo, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, Org::BouncyCastle::Asn1::DerBitString signature) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertificationRequest(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef8038 size 0x148 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetCertificationRequestInfo addr 0xef8268 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo GetCertificationRequestInfo() ;

/// @brief Method get_SignatureAlgorithm addr 0xef8270 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method get_Signature addr 0xef8278 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_Signature() ;

/// @brief Method GetSignatureOctets addr 0xef8280 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSignatureOctets() ;

/// @brief Method ToAsn1Object addr 0xef82a0 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::CertificationRequest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::CertificationRequest, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequest");
