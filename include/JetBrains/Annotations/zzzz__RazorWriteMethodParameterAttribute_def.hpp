#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorWriteMethodParameterAttribute;
}
// Type: JetBrains.Annotations::RazorWriteMethodParameterAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15751))
// CS Name: JetBrains.Annotations.RazorWriteMethodParameterAttribute
class CORDL_TYPE RazorWriteMethodParameterAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RazorWriteMethodParameterAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodParameterAttribute", modifiers: " const&", def_value: None }]
constexpr RazorWriteMethodParameterAttribute(RazorWriteMethodParameterAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodParameterAttribute", modifiers: "&&", def_value: None }]
constexpr RazorWriteMethodParameterAttribute(RazorWriteMethodParameterAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorWriteMethodParameterAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorWriteMethodParameterAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorWriteMethodParameterAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorWriteMethodParameterAttribute& operator=(RazorWriteMethodParameterAttribute&& o) noexcept = default;
  constexpr RazorWriteMethodParameterAttribute& operator=(RazorWriteMethodParameterAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RazorWriteMethodParameterAttribute() ;

/// @brief Method .ctor addr 0x2d414c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorWriteMethodParameterAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorWriteMethodParameterAttribute, "JetBrains.Annotations", "RazorWriteMethodParameterAttribute");
