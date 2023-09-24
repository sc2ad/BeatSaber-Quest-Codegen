#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AssertionMethodAttribute;
}
// Type: JetBrains.Annotations::AssertionMethodAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15727))
// CS Name: JetBrains.Annotations.AssertionMethodAttribute
class CORDL_TYPE AssertionMethodAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssertionMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionMethodAttribute", modifiers: " const&", def_value: None }]
constexpr AssertionMethodAttribute(AssertionMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionMethodAttribute", modifiers: "&&", def_value: None }]
constexpr AssertionMethodAttribute(AssertionMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssertionMethodAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssertionMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssertionMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssertionMethodAttribute& operator=(AssertionMethodAttribute&& o) noexcept = default;
  constexpr AssertionMethodAttribute& operator=(AssertionMethodAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::AssertionMethodAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d41220 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AssertionMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionMethodAttribute, "JetBrains.Annotations", "AssertionMethodAttribute");
