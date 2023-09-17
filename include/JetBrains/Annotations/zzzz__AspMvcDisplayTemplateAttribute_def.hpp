#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcDisplayTemplateAttribute;
}
// Type: JetBrains.Annotations::AspMvcDisplayTemplateAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15715))
// CS Name: JetBrains.Annotations.AspMvcDisplayTemplateAttribute
class CORDL_TYPE AspMvcDisplayTemplateAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcDisplayTemplateAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcDisplayTemplateAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcDisplayTemplateAttribute(AspMvcDisplayTemplateAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcDisplayTemplateAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcDisplayTemplateAttribute(AspMvcDisplayTemplateAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcDisplayTemplateAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AspMvcDisplayTemplateAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcDisplayTemplateAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcDisplayTemplateAttribute& operator=(AspMvcDisplayTemplateAttribute&& o) noexcept = default;
  constexpr AspMvcDisplayTemplateAttribute& operator=(AspMvcDisplayTemplateAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcDisplayTemplateAttribute() ;

/// @brief Method .ctor addr 0x2d41130 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::AspMvcDisplayTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcDisplayTemplateAttribute, "JetBrains.Annotations", "AspMvcDisplayTemplateAttribute");
