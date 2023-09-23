#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace TMPro {
class TextMeshPro;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerScoreDiffText__State;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
// Type: ::HorizontalPosition
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5230))
// CS Name: MultiplayerScoreDiffText::HorizontalPosition
struct CORDL_TYPE GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition(GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition const&) = default;
                    constexpr GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition(GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition&&) = default;
                    constexpr GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition& operator=(GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition& operator=(GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition_Unwrapped : int32_t {
__Left = 0,
__Right = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition const Left;

/// @brief Field Right offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5231))
// CS Name: MultiplayerScoreDiffText::State
struct CORDL_TYPE GlobalNamespace__MultiplayerScoreDiffText__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreDiffText__State(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerScoreDiffText__State(GlobalNamespace__MultiplayerScoreDiffText__State const&) = default;
                    constexpr GlobalNamespace__MultiplayerScoreDiffText__State(GlobalNamespace__MultiplayerScoreDiffText__State&&) = default;
                    constexpr GlobalNamespace__MultiplayerScoreDiffText__State& operator=(GlobalNamespace__MultiplayerScoreDiffText__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerScoreDiffText__State& operator=(GlobalNamespace__MultiplayerScoreDiffText__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerScoreDiffText__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerScoreDiffText__State_Unwrapped : int32_t {
__Hidden = 0,
__Displayed = 1,
__AnimatingDisplay = 2,
__AnimatingHide = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerScoreDiffText__State_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerScoreDiffText__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Hidden offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State const Hidden;

/// @brief Field Displayed offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State const Displayed;

/// @brief Field AnimatingDisplay offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State const AnimatingDisplay;

/// @brief Field AnimatingHide offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State const AnimatingHide;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerScoreDiffText
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5232))
// CS Name: MultiplayerScoreDiffText
class CORDL_TYPE MultiplayerScoreDiffText : public UnityEngine::MonoBehaviour {
public:
// Declarations
using State = GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State;

using HorizontalPosition = GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerScoreDiffText() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreDiffText", modifiers: " const&", def_value: None }]
constexpr MultiplayerScoreDiffText(MultiplayerScoreDiffText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreDiffText", modifiers: "&&", def_value: None }]
constexpr MultiplayerScoreDiffText(MultiplayerScoreDiffText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerScoreDiffText(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerScoreDiffText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerScoreDiffText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerScoreDiffText& operator=(MultiplayerScoreDiffText&& o) noexcept = default;
  constexpr MultiplayerScoreDiffText& operator=(MultiplayerScoreDiffText const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__activeTextColor, put=__set__activeTextColor))  _activeTextColor;

constexpr void __set__activeTextColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__activeTextColor() const;

 UnityEngine::Color __declspec(property(get=__get__normalBackgroundColor, put=__set__normalBackgroundColor))  _normalBackgroundColor;

constexpr void __set__normalBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__normalBackgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get__leadingBackgroundColor, put=__set__leadingBackgroundColor))  _leadingBackgroundColor;

constexpr void __set__leadingBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__leadingBackgroundColor() const;

 bool __declspec(property(get=__get__useAutomaticLeadPlayerSelection, put=__set__useAutomaticLeadPlayerSelection))  _useAutomaticLeadPlayerSelection;

constexpr void __set__useAutomaticLeadPlayerSelection(bool value) ;

constexpr bool __get__useAutomaticLeadPlayerSelection() const;

 TMPro::TextMeshPro __declspec(property(get=__get__onPlatformText, put=__set__onPlatformText))  _onPlatformText;

constexpr void __set__onPlatformText(TMPro::TextMeshPro value) ;

constexpr TMPro::TextMeshPro __get__onPlatformText() const;

 UnityEngine::SpriteRenderer __declspec(property(get=__get__backgroundSpriteRenderer, put=__set__backgroundSpriteRenderer))  _backgroundSpriteRenderer;

constexpr void __set__backgroundSpriteRenderer(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__backgroundSpriteRenderer() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 GlobalNamespace::MultiplayerLeadPlayerProvider __declspec(property(get=__get__leadPlayerProvider, put=__set__leadPlayerProvider))  _leadPlayerProvider;

constexpr void __set__leadPlayerProvider(GlobalNamespace::MultiplayerLeadPlayerProvider value) ;

constexpr GlobalNamespace::MultiplayerLeadPlayerProvider __get__leadPlayerProvider() const;

 UnityEngine::Color __declspec(property(get=__get__currentBackgroundColor, put=__set__currentBackgroundColor))  _currentBackgroundColor;

constexpr void __set__currentBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__currentBackgroundColor() const;

 GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State __get__state() const;

 Tweening::FloatTween __declspec(property(get=__get__onPlatformTextAlphaTween, put=__set__onPlatformTextAlphaTween))  _onPlatformTextAlphaTween;

constexpr void __set__onPlatformTextAlphaTween(Tweening::FloatTween value) ;

constexpr Tweening::FloatTween __get__onPlatformTextAlphaTween() const;


// Methods

/// @brief Method Start addr 0x20e1958 size 0x158 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e1ab0 size 0x110 virtual false final false
 void OnDestroy() ;

/// @brief Method SetHorizontalPositionRelativeToLocalPlayer addr 0x20e1bc0 size 0xd8 virtual false final false
 void SetHorizontalPositionRelativeToLocalPlayer(GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition relativePosition) ;

/// @brief Method AnimateScoreDiff addr 0x20e1c98 size 0x1b0 virtual false final false
 void AnimateScoreDiff(int32_t scoreDiff) ;

/// @brief Method AnimateHide addr 0x20e1e48 size 0xf0 virtual false final false
 void AnimateHide() ;

/// @brief Method AnimateIsLeadPlayer addr 0x20e1f38 size 0x54 virtual false final false
 void AnimateIsLeadPlayer(bool isLeader) ;

/// @brief Method HandleNewLeaderWasSelected addr 0x20e1f8c size 0xc0 virtual false final false
 void HandleNewLeaderWasSelected(::StringW userId) ;

// Ctor Parameters []
explicit MultiplayerScoreDiffText() ;

/// @brief Method .ctor addr 0x20e204c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__14_0 addr 0x20e206c size 0x5c virtual false final false
 void _Start_b__14_0(float_t val) ;

/// @brief Method <AnimateScoreDiff>b__17_0 addr 0x20e20c8 size 0xc virtual false final false
 void _AnimateScoreDiff_b__17_0() ;

/// @brief Method <AnimateHide>b__18_0 addr 0x20e20d4 size 0x30 virtual false final false
 void _AnimateHide_b__18_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__HorizontalPosition, "", "MultiplayerScoreDiffText/HorizontalPosition");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerScoreDiffText__State, "", "MultiplayerScoreDiffText/State");
NEED_NO_BOX(GlobalNamespace::MultiplayerScoreDiffText);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreDiffText, "", "MultiplayerScoreDiffText");
