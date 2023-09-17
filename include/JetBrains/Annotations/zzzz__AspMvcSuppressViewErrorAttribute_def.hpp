#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcSuppressViewErrorAttribute;
}
// Type: JetBrains.Annotations::AspMvcSuppressViewErrorAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15714))
// CS Name: JetBrains.Annotations.AspMvcSuppressViewErrorAttribute
class CORDL_TYPE AspMvcSuppressViewErrorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcSuppressViewErrorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcSuppressViewErrorAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcSuppressViewErrorAttribute(AspMvcSuppressViewErrorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcSuppressViewErrorAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcSuppressViewErrorAttribute(AspMvcSuppressViewErrorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcSuppressViewErrorAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AspMvcSuppressViewErrorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcSuppressViewErrorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcSuppressViewErrorAttribute& operator=(AspMvcSuppressViewErrorAttribute&& o) noexcept = default;
  constexpr AspMvcSuppressViewErrorAttribute& operator=(AspMvcSuppressViewErrorAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcSuppressViewErrorAttribute() ;

/// @brief Method .ctor addr 0x2d41128 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcSuppressViewErrorAttribute, "JetBrains.Annotations", "AspMvcSuppressViewErrorAttribute");
