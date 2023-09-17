#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System::Diagnostics {
struct DebuggerBrowsableState;
}
// Forward declare root types
namespace System::Diagnostics {
class DebuggerBrowsableAttribute;
}
// Type: System.Diagnostics::DebuggerBrowsableAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3720))
// CS Name: System.Diagnostics.DebuggerBrowsableAttribute
class CORDL_TYPE DebuggerBrowsableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DebuggerBrowsableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerBrowsableAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggerBrowsableAttribute(DebuggerBrowsableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerBrowsableAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggerBrowsableAttribute(DebuggerBrowsableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerBrowsableAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DebuggerBrowsableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerBrowsableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerBrowsableAttribute& operator=(DebuggerBrowsableAttribute&& o) noexcept = default;
  constexpr DebuggerBrowsableAttribute& operator=(DebuggerBrowsableAttribute const& o) noexcept = default;
                


// Fields

 ::System::Diagnostics::DebuggerBrowsableState __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::System::Diagnostics::DebuggerBrowsableState value) ;

constexpr ::System::Diagnostics::DebuggerBrowsableState __get_state() const;


// Methods

// Ctor Parameters [CppParam { name: "state", ty: "::System::Diagnostics::DebuggerBrowsableState", modifiers: "", def_value: None }]
explicit DebuggerBrowsableAttribute(::System::Diagnostics::DebuggerBrowsableState state) ;

/// @brief Method .ctor addr 0x240bf78 size 0x7c virtual false final false
 void _ctor(::System::Diagnostics::DebuggerBrowsableState state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::DebuggerBrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerBrowsableAttribute, "System.Diagnostics", "DebuggerBrowsableAttribute");
