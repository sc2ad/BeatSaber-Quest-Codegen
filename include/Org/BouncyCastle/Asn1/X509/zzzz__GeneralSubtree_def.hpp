#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralSubtree;
}
// Type: Org.BouncyCastle.Asn1.X509::GeneralSubtree
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(363))
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralSubtree
class CORDL_TYPE GeneralSubtree : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GeneralSubtree() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralSubtree", modifiers: " const&", def_value: None }]
constexpr GeneralSubtree(GeneralSubtree const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralSubtree", modifiers: "&&", def_value: None }]
constexpr GeneralSubtree(GeneralSubtree&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneralSubtree(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr GeneralSubtree& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneralSubtree& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneralSubtree& operator=(GeneralSubtree&& o) noexcept = default;
  constexpr GeneralSubtree& operator=(GeneralSubtree const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_baseName, put=__set_baseName))  baseName;

constexpr void __set_baseName(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_baseName() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_minimum, put=__set_minimum))  minimum;

constexpr void __set_minimum(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_minimum() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_maximum, put=__set_maximum))  maximum;

constexpr void __set_maximum(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_maximum() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Base))  Base;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Minimum))  Minimum;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Maximum))  Maximum;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit GeneralSubtree(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x11054c4 size 0x28c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "baseName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "minimum", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "maximum", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit GeneralSubtree(::Org::BouncyCastle::Asn1::X509::GeneralName baseName, ::Org::BouncyCastle::Math::BigInteger minimum, ::Org::BouncyCastle::Math::BigInteger maximum) ;

/// @brief Method .ctor addr 0x1105750 size 0xb0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName baseName, ::Org::BouncyCastle::Math::BigInteger minimum, ::Org::BouncyCastle::Math::BigInteger maximum) ;

// Ctor Parameters [CppParam { name: "baseName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit GeneralSubtree(::Org::BouncyCastle::Asn1::X509::GeneralName baseName) ;

/// @brief Method .ctor addr 0x1105800 size 0x4c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName baseName) ;

/// @brief Method GetInstance addr 0x110584c size 0x84 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralSubtree GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject o, bool isExplicit) ;

/// @brief Method GetInstance addr 0x11058d0 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralSubtree GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Base addr 0x1105974 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_Base() ;

/// @brief Method get_Minimum addr 0x110597c size 0x74 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Minimum() ;

/// @brief Method get_Maximum addr 0x11059f0 size 0x14 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Maximum() ;

/// @brief Method ToAsn1Object addr 0x1105a04 size 0x17c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralSubtree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralSubtree, "Org.BouncyCastle.Asn1.X509", "GeneralSubtree");
