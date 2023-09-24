#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcEditorTemplateAttribute;
}
// Type: JetBrains.Annotations::AspMvcEditorTemplateAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15716))
// CS Name: JetBrains.Annotations.AspMvcEditorTemplateAttribute
class CORDL_TYPE AspMvcEditorTemplateAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcEditorTemplateAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcEditorTemplateAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcEditorTemplateAttribute(AspMvcEditorTemplateAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcEditorTemplateAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcEditorTemplateAttribute(AspMvcEditorTemplateAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcEditorTemplateAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcEditorTemplateAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcEditorTemplateAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcEditorTemplateAttribute& operator=(AspMvcEditorTemplateAttribute&& o) noexcept = default;
  constexpr AspMvcEditorTemplateAttribute& operator=(AspMvcEditorTemplateAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::AspMvcEditorTemplateAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d41138 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcEditorTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcEditorTemplateAttribute, "JetBrains.Annotations", "AspMvcEditorTemplateAttribute");
