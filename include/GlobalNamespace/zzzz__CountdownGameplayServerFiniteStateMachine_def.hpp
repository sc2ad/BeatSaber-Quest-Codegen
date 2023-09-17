#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownGameplayServerFiniteStateMachine;
}
// Type: ::CountdownGameplayServerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12702))
// CS Name: CountdownGameplayServerFiniteStateMachine
class CORDL_TYPE CountdownGameplayServerFiniteStateMachine : public ::GlobalNamespace::GameplayServerFiniteStateMachine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~CountdownGameplayServerFiniteStateMachine() = default;

// Ctor Parameters [CppParam { name: "", ty: "CountdownGameplayServerFiniteStateMachine", modifiers: " const&", def_value: None }]
constexpr CountdownGameplayServerFiniteStateMachine(CountdownGameplayServerFiniteStateMachine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CountdownGameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
constexpr CountdownGameplayServerFiniteStateMachine(CountdownGameplayServerFiniteStateMachine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CountdownGameplayServerFiniteStateMachine(void* ptr) noexcept : ::GlobalNamespace::GameplayServerFiniteStateMachine(ptr) {
}


  constexpr CountdownGameplayServerFiniteStateMachine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CountdownGameplayServerFiniteStateMachine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CountdownGameplayServerFiniteStateMachine& operator=(CountdownGameplayServerFiniteStateMachine&& o) noexcept = default;
  constexpr CountdownGameplayServerFiniteStateMachine& operator=(CountdownGameplayServerFiniteStateMachine const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "initParams", ty: "::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
explicit CountdownGameplayServerFiniteStateMachine(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

/// @brief Method .ctor addr 0xdaeedc size 0x30 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownGameplayServerFiniteStateMachine, "", "CountdownGameplayServerFiniteStateMachine");
