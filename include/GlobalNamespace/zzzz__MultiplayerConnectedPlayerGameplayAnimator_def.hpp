#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class ScaleAnimator;
}
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameplayAnimator;
}
// Type: ::MultiplayerConnectedPlayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5306))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5223))
// CS Name: MultiplayerConnectedPlayerGameplayAnimator
class CORDL_TYPE MultiplayerConnectedPlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerConnectedPlayerGameplayAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameplayAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerGameplayAnimator(MultiplayerConnectedPlayerGameplayAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameplayAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerGameplayAnimator(MultiplayerConnectedPlayerGameplayAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerGameplayAnimator(void* ptr) noexcept : ::GlobalNamespace::MultiplayerGameplayAnimator(ptr) {
}


  constexpr MultiplayerConnectedPlayerGameplayAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerGameplayAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerGameplayAnimator& operator=(MultiplayerConnectedPlayerGameplayAnimator&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerGameplayAnimator& operator=(MultiplayerConnectedPlayerGameplayAnimator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerBigAvatarAnimator __declspec(property(get=__get__bigAvatarAnimator, put=__set__bigAvatarAnimator))  _bigAvatarAnimator;

constexpr void __set__bigAvatarAnimator(::GlobalNamespace::MultiplayerBigAvatarAnimator value) ;

constexpr ::GlobalNamespace::MultiplayerBigAvatarAnimator __get__bigAvatarAnimator() const;

 ::GlobalNamespace::ScaleAnimator __declspec(property(get=__get__avatarScaleAnimator, put=__set__avatarScaleAnimator))  _avatarScaleAnimator;

constexpr void __set__avatarScaleAnimator(::GlobalNamespace::ScaleAnimator value) ;

constexpr ::GlobalNamespace::ScaleAnimator __get__avatarScaleAnimator() const;

 float_t __declspec(property(get=__get__defaultLightsWidth, put=__set__defaultLightsWidth))  _defaultLightsWidth;

constexpr void __set__defaultLightsWidth(float_t value) ;

constexpr float_t __get__defaultLightsWidth() const;

 float_t __declspec(property(get=__get__observedLightsWidth, put=__set__observedLightsWidth))  _observedLightsWidth;

constexpr void __set__observedLightsWidth(float_t value) ;

constexpr float_t __get__observedLightsWidth() const;

 ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController __declspec(property(get=__get__failController, put=__set__failController))  _failController;

constexpr void __set__failController(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController __get__failController() const;

 ::GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__multiplayerLayoutProvider, put=__set__multiplayerLayoutProvider))  _multiplayerLayoutProvider;

constexpr void __set__multiplayerLayoutProvider(::GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr ::GlobalNamespace::MultiplayerLayoutProvider __get__multiplayerLayoutProvider() const;

 ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot __declspec(property(get=__get__playerSpectatingSpot, put=__set__playerSpectatingSpot))  _playerSpectatingSpot;

constexpr void __set__playerSpectatingSpot(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot __get__playerSpectatingSpot() const;


// Methods

/// @brief Method Start addr 0x20df92c size 0xa8 virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20df9d4 size 0x170 virtual true final false
 void OnDestroy() ;

/// @brief Method TransitionIntoFailedState addr 0x20dfbe0 size 0xf4 virtual false final false
 void TransitionIntoFailedState() ;

/// @brief Method AnimateNewLeaderSelected addr 0x20dfdd0 size 0x148 virtual true final false
 void AnimateNewLeaderSelected(bool isLeading) ;

/// @brief Method HandleStateChanged addr 0x20dff18 size 0x110 virtual true final false
 void HandleStateChanged(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State state) ;

/// @brief Method HandlePlayerDidFail addr 0x20e00c4 size 0x4 virtual false final false
 void HandlePlayerDidFail() ;

/// @brief Method HandleIsObservedChanged addr 0x20e00c8 size 0x7c virtual false final false
 void HandleIsObservedChanged(bool isObserved) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerGameplayAnimator() ;

/// @brief Method .ctor addr 0x20e01b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, "", "MultiplayerConnectedPlayerGameplayAnimator");
