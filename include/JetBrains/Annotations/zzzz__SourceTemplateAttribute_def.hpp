#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class SourceTemplateAttribute;
}
// Type: JetBrains.Annotations::SourceTemplateAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15700))
// CS Name: JetBrains.Annotations.SourceTemplateAttribute
class CORDL_TYPE SourceTemplateAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SourceTemplateAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SourceTemplateAttribute", modifiers: " const&", def_value: None }]
constexpr SourceTemplateAttribute(SourceTemplateAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SourceTemplateAttribute", modifiers: "&&", def_value: None }]
constexpr SourceTemplateAttribute(SourceTemplateAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SourceTemplateAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr SourceTemplateAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SourceTemplateAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SourceTemplateAttribute& operator=(SourceTemplateAttribute&& o) noexcept = default;
  constexpr SourceTemplateAttribute& operator=(SourceTemplateAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::SourceTemplateAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40ec0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::SourceTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::SourceTemplateAttribute, "JetBrains.Annotations", "SourceTemplateAttribute");
