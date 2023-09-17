#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics {
class StackTraceHiddenAttribute;
}
// Type: System.Diagnostics::StackTraceHiddenAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3713))
// CS Name: System.Diagnostics.StackTraceHiddenAttribute
class CORDL_TYPE StackTraceHiddenAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StackTraceHiddenAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackTraceHiddenAttribute", modifiers: " const&", def_value: None }]
constexpr StackTraceHiddenAttribute(StackTraceHiddenAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackTraceHiddenAttribute", modifiers: "&&", def_value: None }]
constexpr StackTraceHiddenAttribute(StackTraceHiddenAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackTraceHiddenAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr StackTraceHiddenAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackTraceHiddenAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackTraceHiddenAttribute& operator=(StackTraceHiddenAttribute&& o) noexcept = default;
  constexpr StackTraceHiddenAttribute& operator=(StackTraceHiddenAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit StackTraceHiddenAttribute() ;

/// @brief Method .ctor addr 0x240bf30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::StackTraceHiddenAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTraceHiddenAttribute, "System.Diagnostics", "StackTraceHiddenAttribute");
