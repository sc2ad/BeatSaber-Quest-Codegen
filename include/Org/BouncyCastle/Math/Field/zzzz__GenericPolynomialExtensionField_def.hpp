#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::Field {
class IExtensionField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class GenericPolynomialExtensionField;
}
// Type: Org.BouncyCastle.Math.Field::GenericPolynomialExtensionField
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1584))
// CS Name: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
class CORDL_TYPE GenericPolynomialExtensionField : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField
constexpr operator  ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IExtensionField
constexpr operator  ::Org::BouncyCastle::Math::Field::IExtensionField() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IFiniteField
constexpr operator  ::Org::BouncyCastle::Math::Field::IFiniteField() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GenericPolynomialExtensionField() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPolynomialExtensionField", modifiers: " const&", def_value: None }]
constexpr GenericPolynomialExtensionField(GenericPolynomialExtensionField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPolynomialExtensionField", modifiers: "&&", def_value: None }]
constexpr GenericPolynomialExtensionField(GenericPolynomialExtensionField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPolynomialExtensionField(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericPolynomialExtensionField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPolynomialExtensionField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPolynomialExtensionField& operator=(GenericPolynomialExtensionField&& o) noexcept = default;
  constexpr GenericPolynomialExtensionField& operator=(GenericPolynomialExtensionField const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=__get_subfield, put=__set_subfield))  subfield;

constexpr void __set_subfield(::Org::BouncyCastle::Math::Field::IFiniteField value) ;

constexpr ::Org::BouncyCastle::Math::Field::IFiniteField __get_subfield() const;

 ::Org::BouncyCastle::Math::Field::IPolynomial __declspec(property(get=__get_minimalPolynomial, put=__set_minimalPolynomial))  minimalPolynomial;

constexpr void __set_minimalPolynomial(::Org::BouncyCastle::Math::Field::IPolynomial value) ;

constexpr ::Org::BouncyCastle::Math::Field::IPolynomial __get_minimalPolynomial() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Characteristic))  Characteristic;

 int32_t __declspec(property(get=get_Dimension))  Dimension;

 ::Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=get_Subfield))  Subfield;

 int32_t __declspec(property(get=get_Degree))  Degree;

 ::Org::BouncyCastle::Math::Field::IPolynomial __declspec(property(get=get_MinimalPolynomial))  MinimalPolynomial;


// Methods

// Ctor Parameters [CppParam { name: "subfield", ty: "::Org::BouncyCastle::Math::Field::IFiniteField", modifiers: "", def_value: None }, CppParam { name: "polynomial", ty: "::Org::BouncyCastle::Math::Field::IPolynomial", modifiers: "", def_value: None }]
explicit GenericPolynomialExtensionField(::Org::BouncyCastle::Math::Field::IFiniteField subfield, ::Org::BouncyCastle::Math::Field::IPolynomial polynomial) ;

/// @brief Method .ctor addr 0xfce12c size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Math::Field::IFiniteField subfield, ::Org::BouncyCastle::Math::Field::IPolynomial polynomial) ;

/// @brief Method get_Characteristic addr 0xfce400 size 0xa0 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Characteristic() ;

/// @brief Method get_Dimension addr 0xfce4a0 size 0x124 virtual true final false
 int32_t get_Dimension() ;

/// @brief Method get_Subfield addr 0xfce5c4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::Field::IFiniteField get_Subfield() ;

/// @brief Method get_Degree addr 0xfce5cc size 0xa0 virtual true final false
 int32_t get_Degree() ;

/// @brief Method get_MinimalPolynomial addr 0xfce66c size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::Field::IPolynomial get_MinimalPolynomial() ;

/// @brief Method Equals addr 0xfce674 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xfce744 size 0x54 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField, "Org.BouncyCastle.Math.Field", "GenericPolynomialExtensionField");
