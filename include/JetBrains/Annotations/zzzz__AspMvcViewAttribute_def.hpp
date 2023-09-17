#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewAttribute;
}
// Type: JetBrains.Annotations::AspMvcViewAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15718))
// CS Name: JetBrains.Annotations.AspMvcViewAttribute
class CORDL_TYPE AspMvcViewAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcViewAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcViewAttribute(AspMvcViewAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcViewAttribute(AspMvcViewAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcViewAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AspMvcViewAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcViewAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcViewAttribute& operator=(AspMvcViewAttribute&& o) noexcept = default;
  constexpr AspMvcViewAttribute& operator=(AspMvcViewAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcViewAttribute() ;

/// @brief Method .ctor addr 0x2d41148 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::AspMvcViewAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcViewAttribute, "JetBrains.Annotations", "AspMvcViewAttribute");
