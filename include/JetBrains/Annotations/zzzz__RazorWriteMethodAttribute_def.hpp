#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorWriteMethodAttribute;
}
// Type: JetBrains.Annotations::RazorWriteMethodAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15750))
// CS Name: JetBrains.Annotations.RazorWriteMethodAttribute
class CORDL_TYPE RazorWriteMethodAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RazorWriteMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: " const&", def_value: None }]
constexpr RazorWriteMethodAttribute(RazorWriteMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "&&", def_value: None }]
constexpr RazorWriteMethodAttribute(RazorWriteMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorWriteMethodAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorWriteMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorWriteMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorWriteMethodAttribute& operator=(RazorWriteMethodAttribute&& o) noexcept = default;
  constexpr RazorWriteMethodAttribute& operator=(RazorWriteMethodAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RazorWriteMethodAttribute() ;

/// @brief Method .ctor addr 0x2d414bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorWriteMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorWriteMethodAttribute, "JetBrains.Annotations", "RazorWriteMethodAttribute");
