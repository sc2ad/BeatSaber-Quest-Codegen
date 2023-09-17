#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
// Type: Org.BouncyCastle.Asn1.X509::PolicyInformation
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(374))
// CS Name: Org.BouncyCastle.Asn1.X509.PolicyInformation
class CORDL_TYPE PolicyInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PolicyInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyInformation", modifiers: " const&", def_value: None }]
constexpr PolicyInformation(PolicyInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyInformation", modifiers: "&&", def_value: None }]
constexpr PolicyInformation(PolicyInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolicyInformation(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PolicyInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolicyInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolicyInformation& operator=(PolicyInformation&& o) noexcept = default;
  constexpr PolicyInformation& operator=(PolicyInformation const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_policyIdentifier, put=__set_policyIdentifier))  policyIdentifier;

constexpr void __set_policyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_policyIdentifier() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_policyQualifiers, put=__set_policyQualifiers))  policyQualifiers;

constexpr void __set_policyQualifiers(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_policyQualifiers() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PolicyIdentifier))  PolicyIdentifier;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_PolicyQualifiers))  PolicyQualifiers;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PolicyInformation(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1109fd4 size 0x1a4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "policyIdentifier", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit PolicyInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier policyIdentifier) ;

/// @brief Method .ctor addr 0x110a178 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier policyIdentifier) ;

// Ctor Parameters [CppParam { name: "policyIdentifier", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "policyQualifiers", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PolicyInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier policyIdentifier, ::Org::BouncyCastle::Asn1::Asn1Sequence policyQualifiers) ;

/// @brief Method .ctor addr 0x110a1a0 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier policyIdentifier, ::Org::BouncyCastle::Asn1::Asn1Sequence policyQualifiers) ;

/// @brief Method GetInstance addr 0x110a1cc size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::PolicyInformation GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_PolicyIdentifier addr 0x110a270 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_PolicyIdentifier() ;

/// @brief Method get_PolicyQualifiers addr 0x110a278 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Sequence get_PolicyQualifiers() ;

/// @brief Method ToAsn1Object addr 0x110a280 size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyInformation, "Org.BouncyCastle.Asn1.X509", "PolicyInformation");
