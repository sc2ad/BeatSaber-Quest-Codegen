#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class CannotApplyEqualityOperatorAttribute;
}
// Type: JetBrains.Annotations::CannotApplyEqualityOperatorAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15688))
// CS Name: JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
class CORDL_TYPE CannotApplyEqualityOperatorAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CannotApplyEqualityOperatorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CannotApplyEqualityOperatorAttribute", modifiers: " const&", def_value: None }]
constexpr CannotApplyEqualityOperatorAttribute(CannotApplyEqualityOperatorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CannotApplyEqualityOperatorAttribute", modifiers: "&&", def_value: None }]
constexpr CannotApplyEqualityOperatorAttribute(CannotApplyEqualityOperatorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CannotApplyEqualityOperatorAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CannotApplyEqualityOperatorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CannotApplyEqualityOperatorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CannotApplyEqualityOperatorAttribute& operator=(CannotApplyEqualityOperatorAttribute&& o) noexcept = default;
  constexpr CannotApplyEqualityOperatorAttribute& operator=(CannotApplyEqualityOperatorAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::CannotApplyEqualityOperatorAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40c18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::CannotApplyEqualityOperatorAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CannotApplyEqualityOperatorAttribute, "JetBrains.Annotations", "CannotApplyEqualityOperatorAttribute");
