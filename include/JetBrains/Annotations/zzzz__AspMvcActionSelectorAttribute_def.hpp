#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcActionSelectorAttribute;
}
// Type: JetBrains.Annotations::AspMvcActionSelectorAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15721))
// CS Name: JetBrains.Annotations.AspMvcActionSelectorAttribute
class CORDL_TYPE AspMvcActionSelectorAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcActionSelectorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcActionSelectorAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcActionSelectorAttribute(AspMvcActionSelectorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcActionSelectorAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcActionSelectorAttribute(AspMvcActionSelectorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcActionSelectorAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcActionSelectorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcActionSelectorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcActionSelectorAttribute& operator=(AspMvcActionSelectorAttribute&& o) noexcept = default;
  constexpr AspMvcActionSelectorAttribute& operator=(AspMvcActionSelectorAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcActionSelectorAttribute() ;

/// @brief Method .ctor addr 0x2d41160 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcActionSelectorAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcActionSelectorAttribute, "JetBrains.Annotations", "AspMvcActionSelectorAttribute");
