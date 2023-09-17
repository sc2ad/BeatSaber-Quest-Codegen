#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics {
class TraceSwitch;
}
// Type: System.Diagnostics::TraceSwitch
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7786))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7797))
// CS Name: System.Diagnostics.TraceSwitch
class CORDL_TYPE TraceSwitch : public ::System::Diagnostics::Switch {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TraceSwitch() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceSwitch", modifiers: " const&", def_value: None }]
constexpr TraceSwitch(TraceSwitch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceSwitch", modifiers: "&&", def_value: None }]
constexpr TraceSwitch(TraceSwitch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceSwitch(void* ptr) noexcept : ::System::Diagnostics::Switch(ptr) {
}


  constexpr TraceSwitch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceSwitch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceSwitch& operator=(TraceSwitch&& o) noexcept = default;
  constexpr TraceSwitch& operator=(TraceSwitch const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }]
explicit TraceSwitch(::StringW displayName, ::StringW description) ;

/// @brief Method .ctor addr 0x27dc61c size 0x6c virtual false final false
 void _ctor(::StringW displayName, ::StringW description) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::TraceSwitch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceSwitch, "System.Diagnostics", "TraceSwitch");
