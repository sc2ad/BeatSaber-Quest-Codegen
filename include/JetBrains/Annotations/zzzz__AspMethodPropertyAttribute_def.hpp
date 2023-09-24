#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMethodPropertyAttribute;
}
// Type: JetBrains.Annotations::AspMethodPropertyAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15740))
// CS Name: JetBrains.Annotations.AspMethodPropertyAttribute
class CORDL_TYPE AspMethodPropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMethodPropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMethodPropertyAttribute", modifiers: " const&", def_value: None }]
constexpr AspMethodPropertyAttribute(AspMethodPropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMethodPropertyAttribute", modifiers: "&&", def_value: None }]
constexpr AspMethodPropertyAttribute(AspMethodPropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMethodPropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMethodPropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMethodPropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMethodPropertyAttribute& operator=(AspMethodPropertyAttribute&& o) noexcept = default;
  constexpr AspMethodPropertyAttribute& operator=(AspMethodPropertyAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::AspMethodPropertyAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d412f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMethodPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMethodPropertyAttribute, "JetBrains.Annotations", "AspMethodPropertyAttribute");
