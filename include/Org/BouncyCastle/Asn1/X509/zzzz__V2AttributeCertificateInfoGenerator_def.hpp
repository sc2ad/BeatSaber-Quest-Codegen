#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2AttributeCertificateInfoGenerator;
}
// Type: Org.BouncyCastle.Asn1.X509::V2AttributeCertificateInfoGenerator
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(397))
// CS Name: Org.BouncyCastle.Asn1.X509.V2AttributeCertificateInfoGenerator
class CORDL_TYPE V2AttributeCertificateInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~V2AttributeCertificateInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "V2AttributeCertificateInfoGenerator", modifiers: " const&", def_value: None }]
constexpr V2AttributeCertificateInfoGenerator(V2AttributeCertificateInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "V2AttributeCertificateInfoGenerator", modifiers: "&&", def_value: None }]
constexpr V2AttributeCertificateInfoGenerator(V2AttributeCertificateInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit V2AttributeCertificateInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr V2AttributeCertificateInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr V2AttributeCertificateInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr V2AttributeCertificateInfoGenerator& operator=(V2AttributeCertificateInfoGenerator&& o) noexcept = default;
  constexpr V2AttributeCertificateInfoGenerator& operator=(V2AttributeCertificateInfoGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::X509::Holder __declspec(property(get=__get_holder, put=__set_holder))  holder;

constexpr void __set_holder(Org::BouncyCastle::Asn1::X509::Holder value) ;

constexpr Org::BouncyCastle::Asn1::X509::Holder __get_holder() const;

 Org::BouncyCastle::Asn1::X509::AttCertIssuer __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::AttCertIssuer value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttCertIssuer __get_issuer() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signature() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;

 Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr Org::BouncyCastle::Asn1::Asn1EncodableVector __get_attributes() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_issuerUniqueID, put=__set_issuerUniqueID))  issuerUniqueID;

constexpr void __set_issuerUniqueID(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_issuerUniqueID() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_startDate, put=__set_startDate))  startDate;

constexpr void __set_startDate(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_startDate() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_endDate, put=__set_endDate))  endDate;

constexpr void __set_endDate(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_endDate() const;


// Methods

static Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator New_ctor() ;

/// @brief Method .ctor addr 0x1110bdc size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method SetHolder addr 0x1110c7c size 0x8 virtual false final false
 void SetHolder(Org::BouncyCastle::Asn1::X509::Holder holder) ;

/// @brief Method AddAttribute addr 0x1110c84 size 0xe8 virtual false final false
 void AddAttribute(::StringW oid, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method AddAttribute addr 0x1110d6c size 0x1c virtual false final false
 void AddAttribute(Org::BouncyCastle::Asn1::X509::AttributeX509 attribute) ;

/// @brief Method SetSerialNumber addr 0x1110d88 size 0x8 virtual false final false
 void SetSerialNumber(Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

/// @brief Method SetSignature addr 0x1110d90 size 0x8 virtual false final false
 void SetSignature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signature) ;

/// @brief Method SetIssuer addr 0x1110d98 size 0x8 virtual false final false
 void SetIssuer(Org::BouncyCastle::Asn1::X509::AttCertIssuer issuer) ;

/// @brief Method SetStartDate addr 0x1110da0 size 0x8 virtual false final false
 void SetStartDate(Org::BouncyCastle::Asn1::DerGeneralizedTime startDate) ;

/// @brief Method SetEndDate addr 0x1110da8 size 0x8 virtual false final false
 void SetEndDate(Org::BouncyCastle::Asn1::DerGeneralizedTime endDate) ;

/// @brief Method SetIssuerUniqueID addr 0x1110db0 size 0x8 virtual false final false
 void SetIssuerUniqueID(Org::BouncyCastle::Asn1::DerBitString issuerUniqueID) ;

/// @brief Method SetExtensions addr 0x1110db8 size 0x8 virtual false final false
 void SetExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method GenerateAttributeCertificateInfo addr 0x1110dc0 size 0x2dc virtual false final false
 Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo GenerateAttributeCertificateInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, "Org.BouncyCastle.Asn1.X509", "V2AttributeCertificateInfoGenerator");
