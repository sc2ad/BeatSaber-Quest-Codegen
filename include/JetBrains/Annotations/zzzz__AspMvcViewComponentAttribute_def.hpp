#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewComponentAttribute;
}
// Type: JetBrains.Annotations::AspMvcViewComponentAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15719))
// CS Name: JetBrains.Annotations.AspMvcViewComponentAttribute
class CORDL_TYPE AspMvcViewComponentAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcViewComponentAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcViewComponentAttribute(AspMvcViewComponentAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcViewComponentAttribute(AspMvcViewComponentAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcViewComponentAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcViewComponentAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcViewComponentAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcViewComponentAttribute& operator=(AspMvcViewComponentAttribute&& o) noexcept = default;
  constexpr AspMvcViewComponentAttribute& operator=(AspMvcViewComponentAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::AspMvcViewComponentAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d41150 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcViewComponentAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcViewComponentAttribute, "JetBrains.Annotations", "AspMvcViewComponentAttribute");
