#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameState;
}
// Type: ::GameState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12706))
// CS Name: GameState
class CORDL_TYPE GameState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GameState() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: " const&", def_value: None }]
constexpr GameState(GameState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "&&", def_value: None }]
constexpr GameState(GameState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameState& operator=(GameState&& o) noexcept = default;
  constexpr GameState& operator=(GameState const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GameplayServerFiniteStateMachine __declspec(property(get=__get_fsm, put=__set_fsm))  fsm;

constexpr void __set_fsm(::GlobalNamespace::GameplayServerFiniteStateMachine value) ;

constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine __get_fsm() const;


// Methods

// Ctor Parameters [CppParam { name: "fsm", ty: "::GlobalNamespace::GameplayServerFiniteStateMachine", modifiers: "", def_value: None }]
explicit GameState(::GlobalNamespace::GameplayServerFiniteStateMachine fsm) ;

/// @brief Method .ctor addr 0xdaf310 size 0x28 virtual false final false
 void _ctor(::GlobalNamespace::GameplayServerFiniteStateMachine fsm) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameState, "", "GameState");
