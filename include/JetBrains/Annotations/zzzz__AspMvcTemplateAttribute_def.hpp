#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcTemplateAttribute;
}
// Type: JetBrains.Annotations::AspMvcTemplateAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15717))
// CS Name: JetBrains.Annotations.AspMvcTemplateAttribute
class CORDL_TYPE AspMvcTemplateAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcTemplateAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcTemplateAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcTemplateAttribute(AspMvcTemplateAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcTemplateAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcTemplateAttribute(AspMvcTemplateAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcTemplateAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcTemplateAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcTemplateAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcTemplateAttribute& operator=(AspMvcTemplateAttribute&& o) noexcept = default;
  constexpr AspMvcTemplateAttribute& operator=(AspMvcTemplateAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcTemplateAttribute() ;

/// @brief Method .ctor addr 0x2d41140 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcTemplateAttribute, "JetBrains.Annotations", "AspMvcTemplateAttribute");
