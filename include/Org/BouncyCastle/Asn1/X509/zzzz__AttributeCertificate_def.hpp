#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
// Type: Org.BouncyCastle.Asn1.X509::AttributeCertificate
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(341))
// CS Name: Org.BouncyCastle.Asn1.X509.AttributeCertificate
class CORDL_TYPE AttributeCertificate : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AttributeCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificate", modifiers: " const&", def_value: None }]
constexpr AttributeCertificate(AttributeCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificate", modifiers: "&&", def_value: None }]
constexpr AttributeCertificate(AttributeCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeCertificate(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttributeCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeCertificate& operator=(AttributeCertificate&& o) noexcept = default;
  constexpr AttributeCertificate& operator=(AttributeCertificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo __declspec(property(get=__get_acinfo, put=__set_acinfo))  acinfo;

constexpr void __set_acinfo(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo __get_acinfo() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signatureAlgorithm, put=__set_signatureAlgorithm))  signatureAlgorithm;

constexpr void __set_signatureAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signatureAlgorithm() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_signatureValue, put=__set_signatureValue))  signatureValue;

constexpr void __set_signatureValue(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_signatureValue() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo __declspec(property(get=get_ACInfo))  ACInfo;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_SignatureValue))  SignatureValue;


// Methods

/// @brief Method GetInstance addr 0xff719c size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttributeCertificate GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "acinfo", ty: "Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo", modifiers: "", def_value: None }, CppParam { name: "signatureAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "signatureValue", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit AttributeCertificate(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo acinfo, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signatureValue) ;

/// @brief Method .ctor addr 0xff73bc size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo acinfo, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signatureValue) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AttributeCertificate(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff7240 size 0x17c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_ACInfo addr 0xff7580 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo get_ACInfo() ;

/// @brief Method get_SignatureAlgorithm addr 0xff7588 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method get_SignatureValue addr 0xff7590 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_SignatureValue() ;

/// @brief Method GetSignatureOctets addr 0xff7598 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSignatureOctets() ;

/// @brief Method ToAsn1Object addr 0xff75b8 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeCertificate, "Org.BouncyCastle.Asn1.X509", "AttributeCertificate");
