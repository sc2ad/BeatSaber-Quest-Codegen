#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace Tweening {
class SongTimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class IBpmController;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LightColorGroupEffect__InitData;
}
namespace GlobalNamespace {
class LightColorGroupEffect;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5020))
// CS Name: LightColorGroupEffect::InitData
class CORDL_TYPE GlobalNamespace__LightColorGroupEffect__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__LightColorGroupEffect__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightColorGroupEffect__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LightColorGroupEffect__InitData(GlobalNamespace__LightColorGroupEffect__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightColorGroupEffect__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LightColorGroupEffect__InitData(GlobalNamespace__LightColorGroupEffect__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightColorGroupEffect__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LightColorGroupEffect__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LightColorGroupEffect__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LightColorGroupEffect__InitData& operator=(GlobalNamespace__LightColorGroupEffect__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__LightColorGroupEffect__InitData& operator=(GlobalNamespace__LightColorGroupEffect__InitData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupId, put=__set_groupId))  groupId;

constexpr void __set_groupId(int32_t value) ;

constexpr int32_t __get_groupId() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 int32_t __declspec(property(get=__get_lightId, put=__set_lightId))  lightId;

constexpr void __set_lightId(int32_t value) ;

constexpr int32_t __get_lightId() const;


// Methods

// Ctor Parameters [CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__LightColorGroupEffect__InitData(int32_t groupId, int32_t elementId, int32_t lightId) ;

/// @brief Method .ctor addr 0x225d950 size 0x3c virtual false final false
 void _ctor(int32_t groupId, int32_t elementId, int32_t lightId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightColorGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5021))
// CS Name: LightColorGroupEffect
class CORDL_TYPE LightColorGroupEffect : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~LightColorGroupEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect", modifiers: " const&", def_value: None }]
constexpr LightColorGroupEffect(LightColorGroupEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffect", modifiers: "&&", def_value: None }]
constexpr LightColorGroupEffect(LightColorGroupEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorGroupEffect(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightColorGroupEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorGroupEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorGroupEffect& operator=(LightColorGroupEffect&& o) noexcept = default;
  constexpr LightColorGroupEffect& operator=(LightColorGroupEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 int32_t __declspec(property(get=__get__lightId, put=__set__lightId))  _lightId;

constexpr void __set__lightId(int32_t value) ;

constexpr int32_t __get__lightId() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;

 Tweening::SongTimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::SongTimeTweeningManager value) ;

constexpr Tweening::SongTimeTweeningManager __get__tweeningManager() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::IBpmController __declspec(property(get=__get__bpmController, put=__set__bpmController))  _bpmController;

constexpr void __set__bpmController(GlobalNamespace::IBpmController value) ;

constexpr GlobalNamespace::IBpmController __get__bpmController() const;

 Tweening::FloatTween __declspec(property(get=__get__floatTween, put=__set__floatTween))  _floatTween;

constexpr void __set__floatTween(Tweening::FloatTween value) ;

constexpr Tweening::FloatTween __get__floatTween() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__lightColorBeatmapEventCallbackWrapper, put=__set__lightColorBeatmapEventCallbackWrapper))  _lightColorBeatmapEventCallbackWrapper;

constexpr void __set__lightColorBeatmapEventCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__lightColorBeatmapEventCallbackWrapper() const;

 float_t __declspec(property(get=__get__fromStrobeFrequency, put=__set__fromStrobeFrequency))  _fromStrobeFrequency;

constexpr void __set__fromStrobeFrequency(float_t value) ;

constexpr float_t __get__fromStrobeFrequency() const;

 float_t __declspec(property(get=__get__toStrobeFrequency, put=__set__toStrobeFrequency))  _toStrobeFrequency;

constexpr void __set__toStrobeFrequency(float_t value) ;

constexpr float_t __get__toStrobeFrequency() const;

 UnityEngine::Color __declspec(property(get=__get__fromColor, put=__set__fromColor))  _fromColor;

constexpr void __set__fromColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__fromColor() const;

 UnityEngine::Color __declspec(property(get=__get__toColor, put=__set__toColor))  _toColor;

constexpr void __set__toColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__toColor() const;

 UnityEngine::Color __declspec(property(get=__get__alternativeFromColor, put=__set__alternativeFromColor))  _alternativeFromColor;

constexpr void __set__alternativeFromColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__alternativeFromColor() const;

 UnityEngine::Color __declspec(property(get=__get__alternativeToColor, put=__set__alternativeToColor))  _alternativeToColor;

constexpr void __set__alternativeToColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__alternativeToColor() const;

 bool __declspec(property(get=__get__usingBoostColors, put=__set__usingBoostColors))  _usingBoostColors;

constexpr void __set__usingBoostColors(bool value) ;

constexpr bool __get__usingBoostColors() const;

static UnityEngine::Color __declspec(property(get=__get_offColor, put=__set_offColor))  offColor;

static void __set_offColor(UnityEngine::Color value) ;

static UnityEngine::Color __get_offColor() ;


// Methods

// Ctor Parameters [CppParam { name: "initData", ty: "GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData", modifiers: "", def_value: None }, CppParam { name: "lightManager", ty: "GlobalNamespace::LightWithIdManager", modifiers: "", def_value: None }, CppParam { name: "tweeningManager", ty: "Tweening::SongTimeTweeningManager", modifiers: "", def_value: None }, CppParam { name: "colorManager", ty: "GlobalNamespace::ColorManager", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }, CppParam { name: "bpmController", ty: "GlobalNamespace::IBpmController", modifiers: "", def_value: None }]
explicit LightColorGroupEffect(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData initData, GlobalNamespace::LightWithIdManager lightManager, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::IBpmController bpmController) ;

/// @brief Method .ctor addr 0x225cc68 size 0x36c virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData initData, GlobalNamespace::LightWithIdManager lightManager, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::IBpmController bpmController) ;

/// @brief Method Cleanup addr 0x225cfd4 size 0x9c virtual false final false
 void Cleanup() ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x225d070 size 0x470 virtual false final false
 void HandleColorChangeBeatmapEvent(GlobalNamespace::LightColorBeatmapEventData currentEventData) ;

/// @brief Method UseBoostColors addr 0x225d5ec size 0x178 virtual false final false
 void UseBoostColors(bool useBoostColors) ;

/// @brief Method GetColor addr 0x225d764 size 0x34 virtual true final false
 UnityEngine::Color GetColor(GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) ;

/// @brief Method SetData addr 0x225d798 size 0x170 virtual false final false
 void SetData(UnityEngine::Color fromColor, UnityEngine::Color toColor, UnityEngine::Color alternativeFromColor, UnityEngine::Color alternativeToColor, float_t fromStrobeBeatFrequency, float_t toStrobeBeatFrequency) ;

/// @brief Method SetColor addr 0x225d4e0 size 0x10c virtual false final false
 void SetColor(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData, "", "LightColorGroupEffect/InitData");
NEED_NO_BOX(GlobalNamespace::LightColorGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorGroupEffect, "", "LightColorGroupEffect");
