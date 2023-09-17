#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X9 {
class DHValidationParms;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHDomainParameters;
}
// Type: Org.BouncyCastle.Asn1.X9::DHDomainParameters
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(411))
// CS Name: Org.BouncyCastle.Asn1.X9.DHDomainParameters
class CORDL_TYPE DHDomainParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DHDomainParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHDomainParameters", modifiers: " const&", def_value: None }]
constexpr DHDomainParameters(DHDomainParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHDomainParameters", modifiers: "&&", def_value: None }]
constexpr DHDomainParameters(DHDomainParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHDomainParameters(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DHDomainParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHDomainParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHDomainParameters& operator=(DHDomainParameters&& o) noexcept = default;
  constexpr DHDomainParameters& operator=(DHDomainParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_p() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_g() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_q() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_j, put=__set_j))  j;

constexpr void __set_j(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_j() const;

 ::Org::BouncyCastle::Asn1::X9::DHValidationParms __declspec(property(get=__get_validationParms, put=__set_validationParms))  validationParms;

constexpr void __set_validationParms(::Org::BouncyCastle::Asn1::X9::DHValidationParms value) ;

constexpr ::Org::BouncyCastle::Asn1::X9::DHValidationParms __get_validationParms() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_P))  P;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_G))  G;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Q))  Q;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_J))  J;

 ::Org::BouncyCastle::Asn1::X9::DHValidationParms __declspec(property(get=get_ValidationParms))  ValidationParms;


// Methods

/// @brief Method GetInstance addr 0x111db58 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::DHDomainParameters GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0x111db70 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::DHDomainParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "j", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "validationParms", ty: "::Org::BouncyCastle::Asn1::X9::DHValidationParms", modifiers: "", def_value: None }]
explicit DHDomainParameters(::Org::BouncyCastle::Asn1::DerInteger p, ::Org::BouncyCastle::Asn1::DerInteger g, ::Org::BouncyCastle::Asn1::DerInteger q, ::Org::BouncyCastle::Asn1::DerInteger j, ::Org::BouncyCastle::Asn1::X9::DHValidationParms validationParms) ;

/// @brief Method .ctor addr 0x111dee4 size 0xf0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerInteger p, ::Org::BouncyCastle::Asn1::DerInteger g, ::Org::BouncyCastle::Asn1::DerInteger q, ::Org::BouncyCastle::Asn1::DerInteger j, ::Org::BouncyCastle::Asn1::X9::DHValidationParms validationParms) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit DHDomainParameters(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x111dcf8 size 0x1ec virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetNext addr 0x111dfd4 size 0x150 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Encodable GetNext(::System::Collections::IEnumerator e) ;

/// @brief Method get_P addr 0x111e2ac size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_P() ;

/// @brief Method get_G addr 0x111e2b4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_G() ;

/// @brief Method get_Q addr 0x111e2bc size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Q() ;

/// @brief Method get_J addr 0x111e2c4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_J() ;

/// @brief Method get_ValidationParms addr 0x111e2cc size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X9::DHValidationParms get_ValidationParms() ;

/// @brief Method ToAsn1Object addr 0x111e2d4 size 0x1cc virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHDomainParameters, "Org.BouncyCastle.Asn1.X9", "DHDomainParameters");
