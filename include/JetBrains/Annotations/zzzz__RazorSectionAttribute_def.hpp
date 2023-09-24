#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RazorSectionAttribute;
}
// Type: JetBrains.Annotations::RazorSectionAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15724))
// CS Name: JetBrains.Annotations.RazorSectionAttribute
class CORDL_TYPE RazorSectionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RazorSectionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorSectionAttribute", modifiers: " const&", def_value: None }]
constexpr RazorSectionAttribute(RazorSectionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RazorSectionAttribute", modifiers: "&&", def_value: None }]
constexpr RazorSectionAttribute(RazorSectionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RazorSectionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RazorSectionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RazorSectionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RazorSectionAttribute& operator=(RazorSectionAttribute&& o) noexcept = default;
  constexpr RazorSectionAttribute& operator=(RazorSectionAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::RazorSectionAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d411e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RazorSectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorSectionAttribute, "JetBrains.Annotations", "RazorSectionAttribute");
