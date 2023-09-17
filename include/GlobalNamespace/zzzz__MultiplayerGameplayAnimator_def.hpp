#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class LightsAnimator;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerGameplayAnimator;
}
// Type: ::MultiplayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5306))
// CS Name: MultiplayerGameplayAnimator
class CORDL_TYPE MultiplayerGameplayAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MultiplayerGameplayAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameplayAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerGameplayAnimator(MultiplayerGameplayAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameplayAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerGameplayAnimator(MultiplayerGameplayAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerGameplayAnimator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerGameplayAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerGameplayAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerGameplayAnimator& operator=(MultiplayerGameplayAnimator&& o) noexcept = default;
  constexpr MultiplayerGameplayAnimator& operator=(MultiplayerGameplayAnimator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__activeLightsColor, put=__set__activeLightsColor))  _activeLightsColor;

constexpr void __set__activeLightsColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__activeLightsColor() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__leadingLightsColor, put=__set__leadingLightsColor))  _leadingLightsColor;

constexpr void __set__leadingLightsColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__leadingLightsColor() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__failedLightsColor, put=__set__failedLightsColor))  _failedLightsColor;

constexpr void __set__failedLightsColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__failedLightsColor() const;

 float_t __declspec(property(get=__get__leadingSwitchCrossFadeDuration, put=__set__leadingSwitchCrossFadeDuration))  _leadingSwitchCrossFadeDuration;

constexpr void __set__leadingSwitchCrossFadeDuration(float_t value) ;

constexpr float_t __get__leadingSwitchCrossFadeDuration() const;

 ::ArrayW<::GlobalNamespace::LightsAnimator> __declspec(property(get=__get__gameplayLightsAnimators, put=__set__gameplayLightsAnimators))  _gameplayLightsAnimators;

constexpr void __set__gameplayLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator> value) ;

constexpr ::ArrayW<::GlobalNamespace::LightsAnimator> __get__gameplayLightsAnimators() const;

 ::ArrayW<::GlobalNamespace::LightsAnimator> __declspec(property(get=__get__allLightsAnimators, put=__set__allLightsAnimators))  _allLightsAnimators;

constexpr void __set__allLightsAnimators(::ArrayW<::GlobalNamespace::LightsAnimator> value) ;

constexpr ::ArrayW<::GlobalNamespace::LightsAnimator> __get__allLightsAnimators() const;

 ::GlobalNamespace::MultiplayerLeadPlayerProvider __declspec(property(get=__get__leadPlayerProvider, put=__set__leadPlayerProvider))  _leadPlayerProvider;

constexpr void __set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider value) ;

constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider __get__leadPlayerProvider() const;

 ::GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController value) ;

constexpr ::GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get_tweeningManager, put=__set_tweeningManager))  tweeningManager;

constexpr void __set_tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get_tweeningManager() const;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get_connectedPlayer, put=__set_connectedPlayer))  connectedPlayer;

constexpr void __set_connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get_connectedPlayer() const;


// Methods

/// @brief Method Start addr 0x20f77a0 size 0x94 virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e65bc size 0x18c virtual true final false
 void OnDestroy() ;

/// @brief Method AnimateNewLeaderSelected addr 0x0 size 0xffffffffffffffff virtual true final false
 void AnimateNewLeaderSelected(bool isLeading) ;

/// @brief Method HandleStateChanged addr 0x20e69bc size 0x164 virtual true final false
 void HandleStateChanged(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State state) ;

/// @brief Method HandleNewLeaderWasSelected addr 0x20f7994 size 0xe8 virtual false final false
 void HandleNewLeaderWasSelected(::StringW userId) ;

// Ctor Parameters []
explicit MultiplayerGameplayAnimator() ;

/// @brief Method .ctor addr 0x20e6d08 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerGameplayAnimator, "", "MultiplayerGameplayAnimator");
