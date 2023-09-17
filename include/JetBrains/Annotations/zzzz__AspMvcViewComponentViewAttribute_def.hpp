#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewComponentViewAttribute;
}
// Type: JetBrains.Annotations::AspMvcViewComponentViewAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15720))
// CS Name: JetBrains.Annotations.AspMvcViewComponentViewAttribute
class CORDL_TYPE AspMvcViewComponentViewAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcViewComponentViewAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentViewAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcViewComponentViewAttribute(AspMvcViewComponentViewAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentViewAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcViewComponentViewAttribute(AspMvcViewComponentViewAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcViewComponentViewAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AspMvcViewComponentViewAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcViewComponentViewAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcViewComponentViewAttribute& operator=(AspMvcViewComponentViewAttribute&& o) noexcept = default;
  constexpr AspMvcViewComponentViewAttribute& operator=(AspMvcViewComponentViewAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcViewComponentViewAttribute() ;

/// @brief Method .ctor addr 0x2d41158 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::AspMvcViewComponentViewAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcViewComponentViewAttribute, "JetBrains.Annotations", "AspMvcViewComponentViewAttribute");
