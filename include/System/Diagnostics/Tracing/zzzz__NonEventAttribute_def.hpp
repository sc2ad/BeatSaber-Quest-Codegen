#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics::Tracing {
class NonEventAttribute;
}
// Type: System.Diagnostics.Tracing::NonEventAttribute
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3734))
// CS Name: System.Diagnostics.Tracing.NonEventAttribute
class CORDL_TYPE NonEventAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NonEventAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NonEventAttribute", modifiers: " const&", def_value: None }]
constexpr NonEventAttribute(NonEventAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NonEventAttribute", modifiers: "&&", def_value: None }]
constexpr NonEventAttribute(NonEventAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NonEventAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NonEventAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NonEventAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NonEventAttribute& operator=(NonEventAttribute&& o) noexcept = default;
  constexpr NonEventAttribute& operator=(NonEventAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NonEventAttribute() ;

/// @brief Method .ctor addr 0x240e264 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::Tracing::NonEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::NonEventAttribute, "System.Diagnostics.Tracing", "NonEventAttribute");
