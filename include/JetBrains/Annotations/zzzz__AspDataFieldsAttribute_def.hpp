#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspDataFieldsAttribute;
}
// Type: JetBrains.Annotations::AspDataFieldsAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15739))
// CS Name: JetBrains.Annotations.AspDataFieldsAttribute
class CORDL_TYPE AspDataFieldsAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspDataFieldsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspDataFieldsAttribute", modifiers: " const&", def_value: None }]
constexpr AspDataFieldsAttribute(AspDataFieldsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspDataFieldsAttribute", modifiers: "&&", def_value: None }]
constexpr AspDataFieldsAttribute(AspDataFieldsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspDataFieldsAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspDataFieldsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspDataFieldsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspDataFieldsAttribute& operator=(AspDataFieldsAttribute&& o) noexcept = default;
  constexpr AspDataFieldsAttribute& operator=(AspDataFieldsAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspDataFieldsAttribute() ;

/// @brief Method .ctor addr 0x2d412ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspDataFieldsAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspDataFieldsAttribute, "JetBrains.Annotations", "AspDataFieldsAttribute");
