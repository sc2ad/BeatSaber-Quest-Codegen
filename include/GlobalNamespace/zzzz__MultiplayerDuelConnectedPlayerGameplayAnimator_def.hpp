#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
namespace GlobalNamespace {
class ScaleAnimator;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerDuelConnectedPlayerGameplayAnimator;
}
// Type: ::MultiplayerDuelConnectedPlayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5306))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5229))
// CS Name: MultiplayerDuelConnectedPlayerGameplayAnimator
class CORDL_TYPE MultiplayerDuelConnectedPlayerGameplayAnimator : public GlobalNamespace::MultiplayerGameplayAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~MultiplayerDuelConnectedPlayerGameplayAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelConnectedPlayerGameplayAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerDuelConnectedPlayerGameplayAnimator(MultiplayerDuelConnectedPlayerGameplayAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelConnectedPlayerGameplayAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerDuelConnectedPlayerGameplayAnimator(MultiplayerDuelConnectedPlayerGameplayAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerDuelConnectedPlayerGameplayAnimator(void* ptr) noexcept : GlobalNamespace::MultiplayerGameplayAnimator(ptr) {
}


  constexpr MultiplayerDuelConnectedPlayerGameplayAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerDuelConnectedPlayerGameplayAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerDuelConnectedPlayerGameplayAnimator& operator=(MultiplayerDuelConnectedPlayerGameplayAnimator&& o) noexcept = default;
  constexpr MultiplayerDuelConnectedPlayerGameplayAnimator& operator=(MultiplayerDuelConnectedPlayerGameplayAnimator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScaleAnimator __declspec(property(get=__get__avatarScaleAnimator, put=__set__avatarScaleAnimator))  _avatarScaleAnimator;

constexpr void __set__avatarScaleAnimator(GlobalNamespace::ScaleAnimator value) ;

constexpr GlobalNamespace::ScaleAnimator __get__avatarScaleAnimator() const;

 GlobalNamespace::MultiplayerConnectedPlayerLevelFailController __declspec(property(get=__get__failController, put=__set__failController))  _failController;

constexpr void __set__failController(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerLevelFailController __get__failController() const;


// Methods

/// @brief Method OnDestroy addr 0x20e15b0 size 0xdc virtual true final false
 void OnDestroy() ;

/// @brief Method TransitionIntoFailedState addr 0x20e168c size 0xd4 virtual false final false
 void TransitionIntoFailedState() ;

/// @brief Method AnimateNewLeaderSelected addr 0x20e1760 size 0xdc virtual true final false
 void AnimateNewLeaderSelected(bool isLeading) ;

/// @brief Method HandleStateChanged addr 0x20e183c size 0x110 virtual true final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

/// @brief Method HandlePlayerDidFail addr 0x20e194c size 0x4 virtual false final false
 void HandlePlayerDidFail() ;

// Ctor Parameters []
explicit MultiplayerDuelConnectedPlayerGameplayAnimator() ;

/// @brief Method .ctor addr 0x20e1950 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator, "", "MultiplayerDuelConnectedPlayerGameplayAnimator");
