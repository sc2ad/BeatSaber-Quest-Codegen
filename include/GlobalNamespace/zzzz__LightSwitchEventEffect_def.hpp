#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class LightSwitchEventEffect;
}
// Type: ::LightSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5054))
// CS Name: LightSwitchEventEffect
class CORDL_TYPE LightSwitchEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~LightSwitchEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightSwitchEventEffect", modifiers: " const&", def_value: None }]
constexpr LightSwitchEventEffect(LightSwitchEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightSwitchEventEffect", modifiers: "&&", def_value: None }]
constexpr LightSwitchEventEffect(LightSwitchEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightSwitchEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightSwitchEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightSwitchEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightSwitchEventEffect& operator=(LightSwitchEventEffect&& o) noexcept = default;
  constexpr LightSwitchEventEffect& operator=(LightSwitchEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSO __declspec(property(get=__get__lightColor0, put=__set__lightColor0))  _lightColor0;

constexpr void __set__lightColor0(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__lightColor0() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__lightColor1, put=__set__lightColor1))  _lightColor1;

constexpr void __set__lightColor1(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__lightColor1() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor0, put=__set__highlightColor0))  _highlightColor0;

constexpr void __set__highlightColor0(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightColor0() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor1, put=__set__highlightColor1))  _highlightColor1;

constexpr void __set__highlightColor1(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightColor1() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__lightColor0Boost, put=__set__lightColor0Boost))  _lightColor0Boost;

constexpr void __set__lightColor0Boost(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__lightColor0Boost() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__lightColor1Boost, put=__set__lightColor1Boost))  _lightColor1Boost;

constexpr void __set__lightColor1Boost(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__lightColor1Boost() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor0Boost, put=__set__highlightColor0Boost))  _highlightColor0Boost;

constexpr void __set__highlightColor0Boost(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightColor0Boost() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor1Boost, put=__set__highlightColor1Boost))  _highlightColor1Boost;

constexpr void __set__highlightColor1Boost(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightColor1Boost() const;

 float_t __declspec(property(get=__get__offColorIntensity, put=__set__offColorIntensity))  _offColorIntensity;

constexpr void __set__offColorIntensity(float_t value) ;

constexpr float_t __get__offColorIntensity() const;

 bool __declspec(property(get=__get__lightOnStart, put=__set__lightOnStart))  _lightOnStart;

constexpr void __set__lightOnStart(bool value) ;

constexpr bool __get__lightOnStart() const;

 int32_t __declspec(property(get=__get__lightsID, put=__set__lightsID))  _lightsID;

constexpr void __set__lightsID(int32_t value) ;

constexpr int32_t __get__lightsID() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__event, put=__set__event))  _event;

constexpr void __set__event(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__event() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 Tweening::SongTimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::SongTimeTweeningManager value) ;

constexpr Tweening::SongTimeTweeningManager __get__tweeningManager() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 Tweening::ColorTween __declspec(property(get=__get__colorTween, put=__set__colorTween))  _colorTween;

constexpr void __set__colorTween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__colorTween() const;

 UnityEngine::Color __declspec(property(get=__get__alternativeFromColor, put=__set__alternativeFromColor))  _alternativeFromColor;

constexpr void __set__alternativeFromColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__alternativeFromColor() const;

 UnityEngine::Color __declspec(property(get=__get__alternativeToColor, put=__set__alternativeToColor))  _alternativeToColor;

constexpr void __set__alternativeToColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__alternativeToColor() const;

 bool __declspec(property(get=__get__usingBoostColors, put=__set__usingBoostColors))  _usingBoostColors;

constexpr void __set__usingBoostColors(bool value) ;

constexpr bool __get__usingBoostColors() const;

/// @brief Field kFlashAndFadeDuration offset 0
static constexpr float_t  kFlashAndFadeDuration{1.5};

/// @brief Field kHighlightDuration offset 0
static constexpr float_t  kHighlightDuration{0.6};

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__colorChangeBeatmapDataCallbackWrapper, put=__set__colorChangeBeatmapDataCallbackWrapper))  _colorChangeBeatmapDataCallbackWrapper;

constexpr void __set__colorChangeBeatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__colorChangeBeatmapDataCallbackWrapper() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__colorBoostBeatmapDataCallbackWrapper, put=__set__colorBoostBeatmapDataCallbackWrapper))  _colorBoostBeatmapDataCallbackWrapper;

constexpr void __set__colorBoostBeatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__colorBoostBeatmapDataCallbackWrapper() const;


// Properties

 int32_t __declspec(property(get=get_lightsId))  lightsId;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=get_eventType))  eventType;


// Methods

/// @brief Method get_lightsId addr 0x2263778 size 0x8 virtual false final false
 int32_t get_lightsId() ;

/// @brief Method get_eventType addr 0x2263780 size 0x8 virtual false final false
 GlobalNamespace::BasicBeatmapEventType get_eventType() ;

/// @brief Method Awake addr 0x2263788 size 0x1cc virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x226398c size 0x1c0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2263b4c size 0xb0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x2263bfc size 0x348 virtual false final false
 void HandleColorChangeBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method HandleColorBoostBeatmapEvent addr 0x22642b8 size 0xcc virtual false final false
 void HandleColorBoostBeatmapEvent(GlobalNamespace::ColorBoostBeatmapEventData eventData) ;

/// @brief Method SetupTweenAndSaveOtherColors addr 0x2263954 size 0x38 virtual false final false
 void SetupTweenAndSaveOtherColors(UnityEngine::Color fromColor, UnityEngine::Color toColor, UnityEngine::Color alternativeFromColor, UnityEngine::Color alternativeToColor) ;

/// @brief Method CheckNextEventForFade addr 0x2263f68 size 0x218 virtual false final false
 void CheckNextEventForFade(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method GetNormalColor addr 0x2264180 size 0x9c virtual false final false
 UnityEngine::Color GetNormalColor(int32_t beatmapEventValue, bool colorBoost) ;

/// @brief Method GetHighlightColor addr 0x226421c size 0x9c virtual false final false
 UnityEngine::Color GetHighlightColor(int32_t beatmapEventValue, bool colorBoost) ;

/// @brief Method SetColor addr 0x2263f44 size 0x24 virtual false final false
 void SetColor(UnityEngine::Color color) ;

// Ctor Parameters []
explicit LightSwitchEventEffect() ;

/// @brief Method .ctor addr 0x2264384 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightSwitchEventEffect, "", "LightSwitchEventEffect");
