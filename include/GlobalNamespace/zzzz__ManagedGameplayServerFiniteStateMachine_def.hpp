#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class ManagedGameplayServerFiniteStateMachine;
}
// Type: ::ManagedGameplayServerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12708))
// CS Name: ManagedGameplayServerFiniteStateMachine
class CORDL_TYPE ManagedGameplayServerFiniteStateMachine : public ::GlobalNamespace::GameplayServerFiniteStateMachine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ManagedGameplayServerFiniteStateMachine() = default;

// Ctor Parameters [CppParam { name: "", ty: "ManagedGameplayServerFiniteStateMachine", modifiers: " const&", def_value: None }]
constexpr ManagedGameplayServerFiniteStateMachine(ManagedGameplayServerFiniteStateMachine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ManagedGameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
constexpr ManagedGameplayServerFiniteStateMachine(ManagedGameplayServerFiniteStateMachine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ManagedGameplayServerFiniteStateMachine(void* ptr) noexcept : ::GlobalNamespace::GameplayServerFiniteStateMachine(ptr) {
}


  constexpr ManagedGameplayServerFiniteStateMachine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ManagedGameplayServerFiniteStateMachine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ManagedGameplayServerFiniteStateMachine& operator=(ManagedGameplayServerFiniteStateMachine&& o) noexcept = default;
  constexpr ManagedGameplayServerFiniteStateMachine& operator=(ManagedGameplayServerFiniteStateMachine const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "initParams", ty: "::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
explicit ManagedGameplayServerFiniteStateMachine(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

/// @brief Method .ctor addr 0xdaf2b0 size 0x30 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ManagedGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ManagedGameplayServerFiniteStateMachine, "", "ManagedGameplayServerFiniteStateMachine");
