#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics {
class DebuggerNonUserCodeAttribute;
}
// Type: System.Diagnostics::DebuggerNonUserCodeAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3716))
// CS Name: System.Diagnostics.DebuggerNonUserCodeAttribute
class CORDL_TYPE DebuggerNonUserCodeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DebuggerNonUserCodeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerNonUserCodeAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggerNonUserCodeAttribute(DebuggerNonUserCodeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerNonUserCodeAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggerNonUserCodeAttribute(DebuggerNonUserCodeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerNonUserCodeAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DebuggerNonUserCodeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerNonUserCodeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerNonUserCodeAttribute& operator=(DebuggerNonUserCodeAttribute&& o) noexcept = default;
  constexpr DebuggerNonUserCodeAttribute& operator=(DebuggerNonUserCodeAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DebuggerNonUserCodeAttribute() ;

/// @brief Method .ctor addr 0x240bf48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::DebuggerNonUserCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerNonUserCodeAttribute, "System.Diagnostics", "DebuggerNonUserCodeAttribute");
