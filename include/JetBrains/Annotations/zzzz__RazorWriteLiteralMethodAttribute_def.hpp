#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class RazorWriteLiteralMethodAttribute;
}
// Type: JetBrains.Annotations::RazorWriteLiteralMethodAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15749))
// CS Name: JetBrains.Annotations.RazorWriteLiteralMethodAttribute
class CORDL_TYPE RazorWriteLiteralMethodAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RazorWriteLiteralMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteLiteralMethodAttribute", modifiers: " const&", def_value: None }]
constexpr RazorWriteLiteralMethodAttribute(RazorWriteLiteralMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteLiteralMethodAttribute", modifiers: "&&", def_value: None }]
constexpr RazorWriteLiteralMethodAttribute(RazorWriteLiteralMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorWriteLiteralMethodAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr RazorWriteLiteralMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorWriteLiteralMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorWriteLiteralMethodAttribute& operator=(RazorWriteLiteralMethodAttribute&& o) noexcept = default;
  constexpr RazorWriteLiteralMethodAttribute& operator=(RazorWriteLiteralMethodAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RazorWriteLiteralMethodAttribute() ;

/// @brief Method .ctor addr 0x2d414b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::RazorWriteLiteralMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorWriteLiteralMethodAttribute, "JetBrains.Annotations", "RazorWriteLiteralMethodAttribute");
