#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
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
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeQualifier;
}
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeQualifier
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(137))
// CS Name: Org.BouncyCastle.Asn1.Esf.CommitmentTypeQualifier
class CORDL_TYPE CommitmentTypeQualifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CommitmentTypeQualifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeQualifier", modifiers: " const&", def_value: None }]
constexpr CommitmentTypeQualifier(CommitmentTypeQualifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeQualifier", modifiers: "&&", def_value: None }]
constexpr CommitmentTypeQualifier(CommitmentTypeQualifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommitmentTypeQualifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CommitmentTypeQualifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommitmentTypeQualifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommitmentTypeQualifier& operator=(CommitmentTypeQualifier&& o) noexcept = default;
  constexpr CommitmentTypeQualifier& operator=(CommitmentTypeQualifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_commitmentTypeIdentifier, put=__set_commitmentTypeIdentifier))  commitmentTypeIdentifier;

constexpr void __set_commitmentTypeIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_commitmentTypeIdentifier() const;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_qualifier, put=__set_qualifier))  qualifier;

constexpr void __set_qualifier(Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Object __get_qualifier() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_CommitmentTypeIdentifier))  CommitmentTypeIdentifier;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_Qualifier))  Qualifier;


// Methods

// Ctor Parameters [CppParam { name: "commitmentTypeIdentifier", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit CommitmentTypeQualifier(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeIdentifier) ;

/// @brief Method .ctor addr 0xe018c0 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeIdentifier) ;

// Ctor Parameters [CppParam { name: "commitmentTypeIdentifier", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "qualifier", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit CommitmentTypeQualifier(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeIdentifier, Org::BouncyCastle::Asn1::Asn1Encodable qualifier) ;

/// @brief Method .ctor addr 0xe018c8 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeIdentifier, Org::BouncyCastle::Asn1::Asn1Encodable qualifier) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CommitmentTypeQualifier(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0195c size 0x24c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xe01ba8 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_CommitmentTypeIdentifier addr 0xe01d30 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_CommitmentTypeIdentifier() ;

/// @brief Method get_Qualifier addr 0xe01d38 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_Qualifier() ;

/// @brief Method ToAsn1Object addr 0xe01d40 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::CommitmentTypeQualifier, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeQualifier");
