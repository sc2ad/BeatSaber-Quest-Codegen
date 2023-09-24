#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertValidityPeriod;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
// Type: Org.BouncyCastle.Asn1.X509::AttributeCertificateInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(342))
// CS Name: Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo
class CORDL_TYPE AttributeCertificateInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~AttributeCertificateInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateInfo", modifiers: " const&", def_value: None }]
constexpr AttributeCertificateInfo(AttributeCertificateInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateInfo", modifiers: "&&", def_value: None }]
constexpr AttributeCertificateInfo(AttributeCertificateInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeCertificateInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttributeCertificateInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeCertificateInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeCertificateInfo& operator=(AttributeCertificateInfo&& o) noexcept = default;
  constexpr AttributeCertificateInfo& operator=(AttributeCertificateInfo const& o) noexcept = default;
                


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

 Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod __declspec(property(get=__get_attrCertValidityPeriod, put=__set_attrCertValidityPeriod))  attrCertValidityPeriod;

constexpr void __set_attrCertValidityPeriod(Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod __get_attrCertValidityPeriod() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_attributes() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_issuerUniqueID, put=__set_issuerUniqueID))  issuerUniqueID;

constexpr void __set_issuerUniqueID(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_issuerUniqueID() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::Holder __declspec(property(get=get_Holder))  Holder;

 Org::BouncyCastle::Asn1::X509::AttCertIssuer __declspec(property(get=get_Issuer))  Issuer;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Signature))  Signature;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod __declspec(property(get=get_AttrCertValidityPeriod))  AttrCertValidityPeriod;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_Attributes))  Attributes;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_IssuerUniqueID))  IssuerUniqueID;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;


// Methods

/// @brief Method GetInstance addr 0xff76d4 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xff73f8 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff76ec size 0x384 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xff7a70 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_Holder addr 0xff7a78 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::Holder get_Holder() ;

/// @brief Method get_Issuer addr 0xff7a80 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AttCertIssuer get_Issuer() ;

/// @brief Method get_Signature addr 0xff7a88 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Signature() ;

/// @brief Method get_SerialNumber addr 0xff7a90 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method get_AttrCertValidityPeriod addr 0xff7a98 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod get_AttrCertValidityPeriod() ;

/// @brief Method get_Attributes addr 0xff7aa0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_Attributes() ;

/// @brief Method get_IssuerUniqueID addr 0xff7aa8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_IssuerUniqueID() ;

/// @brief Method get_Extensions addr 0xff7ab0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method ToAsn1Object addr 0xff7ab8 size 0x27c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, "Org.BouncyCastle.Asn1.X509", "AttributeCertificateInfo");
