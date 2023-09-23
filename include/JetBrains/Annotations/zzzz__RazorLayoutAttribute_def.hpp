#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorLayoutAttribute;
}
// Type: JetBrains.Annotations::RazorLayoutAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15748))
// CS Name: JetBrains.Annotations.RazorLayoutAttribute
class CORDL_TYPE RazorLayoutAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RazorLayoutAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorLayoutAttribute", modifiers: " const&", def_value: None }]
constexpr RazorLayoutAttribute(RazorLayoutAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorLayoutAttribute", modifiers: "&&", def_value: None }]
constexpr RazorLayoutAttribute(RazorLayoutAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorLayoutAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorLayoutAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorLayoutAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorLayoutAttribute& operator=(RazorLayoutAttribute&& o) noexcept = default;
  constexpr RazorLayoutAttribute& operator=(RazorLayoutAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RazorLayoutAttribute() ;

/// @brief Method .ctor addr 0x2d414ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorLayoutAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorLayoutAttribute, "JetBrains.Annotations", "RazorLayoutAttribute");
