#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Diagnostics {
class DebuggerHiddenAttribute;
}
// Type: System.Diagnostics::DebuggerHiddenAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3715))
// CS Name: System.Diagnostics.DebuggerHiddenAttribute
class CORDL_TYPE DebuggerHiddenAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DebuggerHiddenAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerHiddenAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggerHiddenAttribute(DebuggerHiddenAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerHiddenAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggerHiddenAttribute(DebuggerHiddenAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerHiddenAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DebuggerHiddenAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerHiddenAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerHiddenAttribute& operator=(DebuggerHiddenAttribute&& o) noexcept = default;
  constexpr DebuggerHiddenAttribute& operator=(DebuggerHiddenAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DebuggerHiddenAttribute() ;

/// @brief Method .ctor addr 0x240bf40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::DebuggerHiddenAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerHiddenAttribute, "System.Diagnostics", "DebuggerHiddenAttribute");
