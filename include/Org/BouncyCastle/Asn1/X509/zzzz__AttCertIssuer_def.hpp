#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V2Form;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
// Type: Org.BouncyCastle.Asn1.X509::AttCertIssuer
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(339))
// CS Name: Org.BouncyCastle.Asn1.X509.AttCertIssuer
class CORDL_TYPE AttCertIssuer : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AttCertIssuer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttCertIssuer", modifiers: " const&", def_value: None }]
constexpr AttCertIssuer(AttCertIssuer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttCertIssuer", modifiers: "&&", def_value: None }]
constexpr AttCertIssuer(AttCertIssuer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttCertIssuer(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttCertIssuer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttCertIssuer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttCertIssuer& operator=(AttCertIssuer&& o) noexcept = default;
  constexpr AttCertIssuer& operator=(AttCertIssuer const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_choiceObj, put=__set_choiceObj))  choiceObj;

constexpr void __set_choiceObj(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_choiceObj() const;


// Properties

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Issuer))  Issuer;


// Methods

/// @brief Method GetInstance addr 0xff6a24 size 0x2a4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AttCertIssuer GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xff6d94 size 0x1c virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AttCertIssuer GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "names", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }]
explicit AttCertIssuer(::Org::BouncyCastle::Asn1::X509::GeneralNames names) ;

/// @brief Method .ctor addr 0xff6d50 size 0x44 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames names) ;

// Ctor Parameters [CppParam { name: "v2Form", ty: "::Org::BouncyCastle::Asn1::X509::V2Form", modifiers: "", def_value: None }]
explicit AttCertIssuer(::Org::BouncyCastle::Asn1::X509::V2Form v2Form) ;

/// @brief Method .ctor addr 0xff6cc8 size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::V2Form v2Form) ;

/// @brief Method get_Issuer addr 0xff6db0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Issuer() ;

/// @brief Method ToAsn1Object addr 0xff6db8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttCertIssuer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttCertIssuer, "Org.BouncyCastle.Asn1.X509", "AttCertIssuer");
