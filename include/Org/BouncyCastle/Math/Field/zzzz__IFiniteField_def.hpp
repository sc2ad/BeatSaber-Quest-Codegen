#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Type: Org.BouncyCastle.Math.Field::IFiniteField
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1581))
// CS Name: Org.BouncyCastle.Math.Field.IFiniteField
class CORDL_TYPE IFiniteField : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFiniteField() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFiniteField(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Characteristic))  Characteristic;

 int32_t __declspec(property(get=get_Dimension))  Dimension;


// Methods

/// @brief Method get_Characteristic addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Characteristic() ;

/// @brief Method get_Dimension addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Dimension() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IFiniteField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IFiniteField, "Org.BouncyCastle.Math.Field", "IFiniteField");
