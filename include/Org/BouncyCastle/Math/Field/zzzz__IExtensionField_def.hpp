#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IExtensionField;
}
// Type: Org.BouncyCastle.Math.Field::IExtensionField
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1582))
// CS Name: Org.BouncyCastle.Math.Field.IExtensionField
class CORDL_TYPE IExtensionField : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::Field::IFiniteField
constexpr operator  Org::BouncyCastle::Math::Field::IFiniteField() const noexcept;

~IExtensionField() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExtensionField(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=get_Subfield))  Subfield;

 int32_t __declspec(property(get=get_Degree))  Degree;


// Methods

/// @brief Method get_Subfield addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::Field::IFiniteField get_Subfield() ;

/// @brief Method get_Degree addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Degree() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Field
NEED_NO_BOX(Org::BouncyCastle::Math::Field::IExtensionField);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::IExtensionField, "Org.BouncyCastle.Math.Field", "IExtensionField");
