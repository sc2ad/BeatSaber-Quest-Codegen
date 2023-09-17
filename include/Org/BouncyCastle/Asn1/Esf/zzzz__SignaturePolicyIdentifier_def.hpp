#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Esf::SignaturePolicyIdentifier
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(156))
// CS Name: Org.BouncyCastle.Asn1.Esf.SignaturePolicyIdentifier
class CORDL_TYPE SignaturePolicyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignaturePolicyIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyIdentifier", modifiers: " const&", def_value: None }]
constexpr SignaturePolicyIdentifier(SignaturePolicyIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyIdentifier", modifiers: "&&", def_value: None }]
constexpr SignaturePolicyIdentifier(SignaturePolicyIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignaturePolicyIdentifier(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignaturePolicyIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignaturePolicyIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignaturePolicyIdentifier& operator=(SignaturePolicyIdentifier&& o) noexcept = default;
  constexpr SignaturePolicyIdentifier& operator=(SignaturePolicyIdentifier const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId __declspec(property(get=__get_sigPolicy, put=__set_sigPolicy))  sigPolicy;

constexpr void __set_sigPolicy(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId __get_sigPolicy() const;


// Properties

 ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId __declspec(property(get=get_SignaturePolicyId))  SignaturePolicyId;


// Methods

/// @brief Method GetInstance addr 0xe0a310 size 0x1dc virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit SignaturePolicyIdentifier() ;

/// @brief Method .ctor addr 0xe0a564 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "signaturePolicyId", ty: "::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId", modifiers: "", def_value: None }]
explicit SignaturePolicyIdentifier(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId signaturePolicyId) ;

/// @brief Method .ctor addr 0xe0a4ec size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId signaturePolicyId) ;

/// @brief Method get_SignaturePolicyId addr 0xe0a580 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId get_SignaturePolicyId() ;

/// @brief Method ToAsn1Object addr 0xe0a588 size 0x78 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier, "Org.BouncyCastle.Asn1.Esf", "SignaturePolicyIdentifier");
