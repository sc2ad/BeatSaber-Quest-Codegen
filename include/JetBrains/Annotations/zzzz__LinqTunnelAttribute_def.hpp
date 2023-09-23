#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class LinqTunnelAttribute;
}
// Type: JetBrains.Annotations::LinqTunnelAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15731))
// CS Name: JetBrains.Annotations.LinqTunnelAttribute
class CORDL_TYPE LinqTunnelAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LinqTunnelAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinqTunnelAttribute", modifiers: " const&", def_value: None }]
constexpr LinqTunnelAttribute(LinqTunnelAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinqTunnelAttribute", modifiers: "&&", def_value: None }]
constexpr LinqTunnelAttribute(LinqTunnelAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinqTunnelAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr LinqTunnelAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinqTunnelAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinqTunnelAttribute& operator=(LinqTunnelAttribute&& o) noexcept = default;
  constexpr LinqTunnelAttribute& operator=(LinqTunnelAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LinqTunnelAttribute() ;

/// @brief Method .ctor addr 0x2d41268 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::LinqTunnelAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::LinqTunnelAttribute, "JetBrains.Annotations", "LinqTunnelAttribute");
