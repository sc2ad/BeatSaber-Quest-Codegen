#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspDataFieldAttribute;
}
// Type: JetBrains.Annotations::AspDataFieldAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15738))
// CS Name: JetBrains.Annotations.AspDataFieldAttribute
class CORDL_TYPE AspDataFieldAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspDataFieldAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspDataFieldAttribute", modifiers: " const&", def_value: None }]
constexpr AspDataFieldAttribute(AspDataFieldAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspDataFieldAttribute", modifiers: "&&", def_value: None }]
constexpr AspDataFieldAttribute(AspDataFieldAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspDataFieldAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspDataFieldAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspDataFieldAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspDataFieldAttribute& operator=(AspDataFieldAttribute&& o) noexcept = default;
  constexpr AspDataFieldAttribute& operator=(AspDataFieldAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspDataFieldAttribute() ;

/// @brief Method .ctor addr 0x2d412e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspDataFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspDataFieldAttribute, "JetBrains.Annotations", "AspDataFieldAttribute");
