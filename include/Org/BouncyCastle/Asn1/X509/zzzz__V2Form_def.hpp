#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2Form;
}
// Type: Org.BouncyCastle.Asn1.X509::V2Form
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(398))
// CS Name: Org.BouncyCastle.Asn1.X509.V2Form
class CORDL_TYPE V2Form : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~V2Form() = default;

// Ctor Parameters [CppParam { name: "", ty: "V2Form", modifiers: " const&", def_value: None }]
constexpr V2Form(V2Form const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "V2Form", modifiers: "&&", def_value: None }]
constexpr V2Form(V2Form&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit V2Form(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr V2Form& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr V2Form& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr V2Form& operator=(V2Form&& o) noexcept = default;
  constexpr V2Form& operator=(V2Form const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_issuerName, put=__set_issuerName))  issuerName;

constexpr void __set_issuerName(::Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames __get_issuerName() const;

 ::Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=__get_baseCertificateID, put=__set_baseCertificateID))  baseCertificateID;

constexpr void __set_baseCertificateID(::Org::BouncyCastle::Asn1::X509::IssuerSerial value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial __get_baseCertificateID() const;

 ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo __declspec(property(get=__get_objectDigestInfo, put=__set_objectDigestInfo))  objectDigestInfo;

constexpr void __set_objectDigestInfo(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo __get_objectDigestInfo() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_IssuerName))  IssuerName;

 ::Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_BaseCertificateID))  BaseCertificateID;

 ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo __declspec(property(get=get_ObjectDigestInfo))  ObjectDigestInfo;


// Methods

/// @brief Method GetInstance addr 0x111109c size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::V2Form GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x11110b4 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::V2Form GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "issuerName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }]
explicit V2Form(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName) ;

/// @brief Method .ctor addr 0x1111388 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName) ;

// Ctor Parameters [CppParam { name: "issuerName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "baseCertificateID", ty: "::Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }]
explicit V2Form(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID) ;

/// @brief Method .ctor addr 0x11113f0 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID) ;

// Ctor Parameters [CppParam { name: "issuerName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "objectDigestInfo", ty: "::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo", modifiers: "", def_value: None }]
explicit V2Form(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo objectDigestInfo) ;

/// @brief Method .ctor addr 0x1111420 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo objectDigestInfo) ;

// Ctor Parameters [CppParam { name: "issuerName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "baseCertificateID", ty: "::Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }, CppParam { name: "objectDigestInfo", ty: "::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo", modifiers: "", def_value: None }]
explicit V2Form(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo objectDigestInfo) ;

/// @brief Method .ctor addr 0x11113b4 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames issuerName, ::Org::BouncyCastle::Asn1::X509::IssuerSerial baseCertificateID, ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo objectDigestInfo) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit V2Form(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1111158 size 0x230 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_IssuerName addr 0x1111450 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralNames get_IssuerName() ;

/// @brief Method get_BaseCertificateID addr 0x1111458 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::IssuerSerial get_BaseCertificateID() ;

/// @brief Method get_ObjectDigestInfo addr 0x1111460 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo get_ObjectDigestInfo() ;

/// @brief Method ToAsn1Object addr 0x1111468 size 0x138 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::V2Form);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::V2Form, "Org.BouncyCastle.Asn1.X509", "V2Form");
