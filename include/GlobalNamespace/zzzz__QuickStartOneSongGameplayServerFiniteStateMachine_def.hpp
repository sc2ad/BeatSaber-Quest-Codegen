#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickStartOneSongGameplayServerFiniteStateMachine;
}
// Type: ::QuickStartOneSongGameplayServerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12709))
// CS Name: QuickStartOneSongGameplayServerFiniteStateMachine
class CORDL_TYPE QuickStartOneSongGameplayServerFiniteStateMachine : public GlobalNamespace::GameplayServerFiniteStateMachine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~QuickStartOneSongGameplayServerFiniteStateMachine() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickStartOneSongGameplayServerFiniteStateMachine", modifiers: " const&", def_value: None }]
constexpr QuickStartOneSongGameplayServerFiniteStateMachine(QuickStartOneSongGameplayServerFiniteStateMachine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickStartOneSongGameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
constexpr QuickStartOneSongGameplayServerFiniteStateMachine(QuickStartOneSongGameplayServerFiniteStateMachine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuickStartOneSongGameplayServerFiniteStateMachine(void* ptr) noexcept : GlobalNamespace::GameplayServerFiniteStateMachine(ptr) {
}


  constexpr QuickStartOneSongGameplayServerFiniteStateMachine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuickStartOneSongGameplayServerFiniteStateMachine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuickStartOneSongGameplayServerFiniteStateMachine& operator=(QuickStartOneSongGameplayServerFiniteStateMachine&& o) noexcept = default;
  constexpr QuickStartOneSongGameplayServerFiniteStateMachine& operator=(QuickStartOneSongGameplayServerFiniteStateMachine const& o) noexcept = default;
                


// Methods

static GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine New_ctor(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

/// @brief Method .ctor addr 0xdaf2e0 size 0x30 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine, "", "QuickStartOneSongGameplayServerFiniteStateMachine");
