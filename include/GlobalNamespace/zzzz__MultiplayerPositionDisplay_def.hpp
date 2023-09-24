#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPositionDisplay;
}
// Type: ::MultiplayerPositionDisplay
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5329))
// CS Name: MultiplayerPositionDisplay
class CORDL_TYPE MultiplayerPositionDisplay : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MultiplayerPositionDisplay() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionDisplay", modifiers: " const&", def_value: None }]
constexpr MultiplayerPositionDisplay(MultiplayerPositionDisplay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionDisplay", modifiers: "&&", def_value: None }]
constexpr MultiplayerPositionDisplay(MultiplayerPositionDisplay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPositionDisplay(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerPositionDisplay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPositionDisplay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPositionDisplay& operator=(MultiplayerPositionDisplay&& o) noexcept = default;
  constexpr MultiplayerPositionDisplay& operator=(MultiplayerPositionDisplay const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshPro __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshPro value) ;

constexpr TMPro::TextMeshPro __get__text() const;

 UnityEngine::Color __declspec(property(get=__get__normalColor, put=__set__normalColor))  _normalColor;

constexpr void __set__normalColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__normalColor() const;

 UnityEngine::Color __declspec(property(get=__get__leadingColor, put=__set__leadingColor))  _leadingColor;

constexpr void __set__leadingColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__leadingColor() const;

 UnityEngine::Color __declspec(property(get=__get__failedColor, put=__set__failedColor))  _failedColor;

constexpr void __set__failedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__failedColor() const;

 float_t __declspec(property(get=__get__fadeInDuration, put=__set__fadeInDuration))  _fadeInDuration;

constexpr void __set__fadeInDuration(float_t value) ;

constexpr float_t __get__fadeInDuration() const;

 float_t __declspec(property(get=__get__crossFadeDuration, put=__set__crossFadeDuration))  _crossFadeDuration;

constexpr void __set__crossFadeDuration(float_t value) ;

constexpr float_t __get__crossFadeDuration() const;

 float_t __declspec(property(get=__get__fadeOutDuration, put=__set__fadeOutDuration))  _fadeOutDuration;

constexpr void __set__fadeOutDuration(float_t value) ;

constexpr float_t __get__fadeOutDuration() const;

 GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 bool __declspec(property(get=__get__wasFirst, put=__set__wasFirst))  _wasFirst;

constexpr void __set__wasFirst(bool value) ;

constexpr bool __get__wasFirst() const;

 bool __declspec(property(get=__get__isFailed, put=__set__isFailed))  _isFailed;

constexpr void __set__isFailed(bool value) ;

constexpr bool __get__isFailed() const;

 bool __declspec(property(get=__get__updatingColor, put=__set__updatingColor))  _updatingColor;

constexpr void __set__updatingColor(bool value) ;

constexpr bool __get__updatingColor() const;

 UnityEngine::Color __declspec(property(get=__get__startColor, put=__set__startColor))  _startColor;

constexpr void __set__startColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__startColor() const;

 UnityEngine::Color __declspec(property(get=__get__targetColor, put=__set__targetColor))  _targetColor;

constexpr void __set__targetColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__targetColor() const;

 float_t __declspec(property(get=__get__colorAnimationStartTime, put=__set__colorAnimationStartTime))  _colorAnimationStartTime;

constexpr void __set__colorAnimationStartTime(float_t value) ;

constexpr float_t __get__colorAnimationStartTime() const;

 float_t __declspec(property(get=__get__colorAnimationStartDuration, put=__set__colorAnimationStartDuration))  _colorAnimationStartDuration;

constexpr void __set__colorAnimationStartDuration(float_t value) ;

constexpr float_t __get__colorAnimationStartDuration() const;


// Methods

/// @brief Method Start addr 0x210080c size 0x10c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2100918 size 0xe4 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x2100a78 size 0x44 virtual false final false
 void Update() ;

/// @brief Method UpdateColors addr 0x2100abc size 0x94 virtual false final false
 void UpdateColors() ;

/// @brief Method UpdatePosition addr 0x2100b50 size 0x174 virtual false final false
 void UpdatePosition() ;

/// @brief Method HandlePlayerFailed addr 0x2100cc4 size 0x18 virtual false final false
 void HandlePlayerFailed() ;

/// @brief Method HandleFirstPlayerDidChange addr 0x2100cdc size 0xb0 virtual false final false
 void HandleFirstPlayerDidChange(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer obj) ;

/// @brief Method ChangeColor addr 0x21009fc size 0x7c virtual false final false
 void ChangeColor(UnityEngine::Color toColor, float_t duration) ;

static GlobalNamespace::MultiplayerPositionDisplay New_ctor() ;

/// @brief Method .ctor addr 0x2100d8c size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerPositionDisplay);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPositionDisplay, "", "MultiplayerPositionDisplay");
