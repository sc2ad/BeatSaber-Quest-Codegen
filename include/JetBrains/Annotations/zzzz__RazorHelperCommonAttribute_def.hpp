#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class RazorHelperCommonAttribute;
}
// Type: JetBrains.Annotations::RazorHelperCommonAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15747))
// CS Name: JetBrains.Annotations.RazorHelperCommonAttribute
class CORDL_TYPE RazorHelperCommonAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RazorHelperCommonAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorHelperCommonAttribute", modifiers: " const&", def_value: None }]
constexpr RazorHelperCommonAttribute(RazorHelperCommonAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorHelperCommonAttribute", modifiers: "&&", def_value: None }]
constexpr RazorHelperCommonAttribute(RazorHelperCommonAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorHelperCommonAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr RazorHelperCommonAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorHelperCommonAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorHelperCommonAttribute& operator=(RazorHelperCommonAttribute&& o) noexcept = default;
  constexpr RazorHelperCommonAttribute& operator=(RazorHelperCommonAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RazorHelperCommonAttribute() ;

/// @brief Method .ctor addr 0x2d414a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::RazorHelperCommonAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorHelperCommonAttribute, "JetBrains.Annotations", "RazorHelperCommonAttribute");