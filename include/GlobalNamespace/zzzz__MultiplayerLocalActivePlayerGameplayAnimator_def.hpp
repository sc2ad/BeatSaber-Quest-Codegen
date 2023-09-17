#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class CoreGameHUDController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class MultiplayerPositionHUDController;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayAnimator;
}
// Type: ::MultiplayerLocalActivePlayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5306))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5252))
// CS Name: MultiplayerLocalActivePlayerGameplayAnimator
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MultiplayerLocalActivePlayerGameplayAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerGameplayAnimator(void* ptr) noexcept : ::GlobalNamespace::MultiplayerGameplayAnimator(ptr) {
}


  constexpr MultiplayerLocalActivePlayerGameplayAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerGameplayAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerGameplayAnimator& operator=(MultiplayerLocalActivePlayerGameplayAnimator&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerGameplayAnimator& operator=(MultiplayerLocalActivePlayerGameplayAnimator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::CoreGameHUDController __declspec(property(get=__get__coreGameHUDController, put=__set__coreGameHUDController))  _coreGameHUDController;

constexpr void __set__coreGameHUDController(::GlobalNamespace::CoreGameHUDController value) ;

constexpr ::GlobalNamespace::CoreGameHUDController __get__coreGameHUDController() const;

 ::GlobalNamespace::MultiplayerPositionHUDController __declspec(property(get=__get__multiplayerPositionHUDController, put=__set__multiplayerPositionHUDController))  _multiplayerPositionHUDController;

constexpr void __set__multiplayerPositionHUDController(::GlobalNamespace::MultiplayerPositionHUDController value) ;

constexpr ::GlobalNamespace::MultiplayerPositionHUDController __get__multiplayerPositionHUDController() const;

 ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher __declspec(property(get=__get__levelEndActionsPublisher, put=__set__levelEndActionsPublisher))  _levelEndActionsPublisher;

constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher __get__levelEndActionsPublisher() const;

 ::Tweening::FloatTween __declspec(property(get=__get__fadeOutHUDTween, put=__set__fadeOutHUDTween))  _fadeOutHUDTween;

constexpr void __set__fadeOutHUDTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__fadeOutHUDTween() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method OnDestroy addr 0x20e64ac size 0x110 virtual true final false
 void OnDestroy() ;

/// @brief Method InitializeIfNeeded addr 0x20e6748 size 0xd0 virtual false final false
 void InitializeIfNeeded() ;

/// @brief Method HandleStateChanged addr 0x20e6818 size 0x1a4 virtual true final false
 void HandleStateChanged(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State state) ;

/// @brief Method AnimateNewLeaderSelected addr 0x20e6bd4 size 0xec virtual true final false
 void AnimateNewLeaderSelected(bool isLeading) ;

/// @brief Method TransitionIntoFailedState addr 0x20e6b20 size 0xb4 virtual false final false
 void TransitionIntoFailedState() ;

/// @brief Method HandlePlayerDidFinish addr 0x20e6cc0 size 0x34 virtual false final false
 void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit MultiplayerLocalActivePlayerGameplayAnimator() ;

/// @brief Method .ctor addr 0x20e6cf4 size 0x14 virtual false final false
 void _ctor() ;

/// @brief Method <InitializeIfNeeded>b__6_0 addr 0x20e6d1c size 0x40 virtual false final false
 void _InitializeIfNeeded_b__6_0(float_t f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, "", "MultiplayerLocalActivePlayerGameplayAnimator");
