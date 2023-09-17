#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Type: Org.BouncyCastle.Math.Field::IPolynomial
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1585))
// CS Name: Org.BouncyCastle.Math.Field.IPolynomial
class CORDL_TYPE IPolynomial : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPolynomial() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPolynomial(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Degree))  Degree;


// Methods

/// @brief Method get_Degree addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Degree() ;

/// @brief Method GetExponentsPresent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> GetExponentsPresent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IPolynomial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IPolynomial, "Org.BouncyCastle.Math.Field", "IPolynomial");
