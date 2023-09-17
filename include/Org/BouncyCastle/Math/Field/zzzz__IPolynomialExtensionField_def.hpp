#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Math::Field {
class IExtensionField;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
// Type: Org.BouncyCastle.Math.Field::IPolynomialExtensionField
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1583))
// CS Name: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
class CORDL_TYPE IPolynomialExtensionField : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IExtensionField
constexpr operator  ::Org::BouncyCastle::Math::Field::IExtensionField() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IFiniteField
constexpr operator  ::Org::BouncyCastle::Math::Field::IFiniteField() const noexcept;

~IPolynomialExtensionField() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPolynomialExtensionField(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Org::BouncyCastle::Math::Field::IPolynomial __declspec(property(get=get_MinimalPolynomial))  MinimalPolynomial;


// Methods

/// @brief Method get_MinimalPolynomial addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::Field::IPolynomial get_MinimalPolynomial() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField, "Org.BouncyCastle.Math.Field", "IPolynomialExtensionField");
