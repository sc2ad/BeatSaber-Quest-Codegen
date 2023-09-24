#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcPartialViewAttribute;
}
// Type: JetBrains.Annotations::AspMvcPartialViewAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15713))
// CS Name: JetBrains.Annotations.AspMvcPartialViewAttribute
class CORDL_TYPE AspMvcPartialViewAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcPartialViewAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcPartialViewAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcPartialViewAttribute(AspMvcPartialViewAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcPartialViewAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcPartialViewAttribute(AspMvcPartialViewAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcPartialViewAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcPartialViewAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcPartialViewAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcPartialViewAttribute& operator=(AspMvcPartialViewAttribute&& o) noexcept = default;
  constexpr AspMvcPartialViewAttribute& operator=(AspMvcPartialViewAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::AspMvcPartialViewAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d41120 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcPartialViewAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcPartialViewAttribute, "JetBrains.Annotations", "AspMvcPartialViewAttribute");
