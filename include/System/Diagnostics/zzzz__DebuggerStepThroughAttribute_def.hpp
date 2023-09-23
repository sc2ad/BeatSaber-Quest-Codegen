#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Diagnostics {
class DebuggerStepThroughAttribute;
}
// Type: System.Diagnostics::DebuggerStepThroughAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3714))
// CS Name: System.Diagnostics.DebuggerStepThroughAttribute
class CORDL_TYPE DebuggerStepThroughAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DebuggerStepThroughAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerStepThroughAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggerStepThroughAttribute(DebuggerStepThroughAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerStepThroughAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggerStepThroughAttribute(DebuggerStepThroughAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerStepThroughAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DebuggerStepThroughAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerStepThroughAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerStepThroughAttribute& operator=(DebuggerStepThroughAttribute&& o) noexcept = default;
  constexpr DebuggerStepThroughAttribute& operator=(DebuggerStepThroughAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DebuggerStepThroughAttribute() ;

/// @brief Method .ctor addr 0x240bf38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::DebuggerStepThroughAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerStepThroughAttribute, "System.Diagnostics", "DebuggerStepThroughAttribute");
