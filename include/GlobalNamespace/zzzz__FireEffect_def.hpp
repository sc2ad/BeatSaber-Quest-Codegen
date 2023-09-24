#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class FireEffect;
}
// Type: ::FireEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3989))
// CS Name: FireEffect
class CORDL_TYPE FireEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~FireEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FireEffect", modifiers: " const&", def_value: None }]
constexpr FireEffect(FireEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FireEffect", modifiers: "&&", def_value: None }]
constexpr FireEffect(FireEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FireEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FireEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FireEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FireEffect& operator=(FireEffect&& o) noexcept = default;
  constexpr FireEffect& operator=(FireEffect const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__groupId, put=__set__groupId))  _groupId;

constexpr void __set__groupId(int32_t value) ;

constexpr int32_t __get__groupId() const;

 int32_t __declspec(property(get=__get__elementId, put=__set__elementId))  _elementId;

constexpr void __set__elementId(int32_t value) ;

constexpr int32_t __get__elementId() const;

 int32_t __declspec(property(get=__get__lightId, put=__set__lightId))  _lightId;

constexpr void __set__lightId(int32_t value) ;

constexpr int32_t __get__lightId() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__flipBookPropertyBlockController, put=__set__flipBookPropertyBlockController))  _flipBookPropertyBlockController;

constexpr void __set__flipBookPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__flipBookPropertyBlockController() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__bloomPropertyBlockController, put=__set__bloomPropertyBlockController))  _bloomPropertyBlockController;

constexpr void __set__bloomPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__bloomPropertyBlockController() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__privatePointLightPropertyBlockController, put=__set__privatePointLightPropertyBlockController))  _privatePointLightPropertyBlockController;

constexpr void __set__privatePointLightPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__privatePointLightPropertyBlockController() const;

 GlobalNamespace::BloomPrePassBackgroundNonLightRenderer __declspec(property(get=__get__bloomPrePassRenderer, put=__set__bloomPrePassRenderer))  _bloomPrePassRenderer;

constexpr void __set__bloomPrePassRenderer(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundNonLightRenderer __get__bloomPrePassRenderer() const;

 float_t __declspec(property(get=__get__bloomIntensityMultiplier, put=__set__bloomIntensityMultiplier))  _bloomIntensityMultiplier;

constexpr void __set__bloomIntensityMultiplier(float_t value) ;

constexpr float_t __get__bloomIntensityMultiplier() const;

 UnityEngine::Color __declspec(property(get=__get__pointLightColor, put=__set__pointLightColor))  _pointLightColor;

constexpr void __set__pointLightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__pointLightColor() const;

 bool __declspec(property(get=__get__contributeCustomLightColor, put=__set__contributeCustomLightColor))  _contributeCustomLightColor;

constexpr void __set__contributeCustomLightColor(bool value) ;

constexpr bool __get__contributeCustomLightColor() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__customLightColorContribution, put=__set__customLightColorContribution))  _customLightColorContribution;

constexpr void __set__customLightColorContribution(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__customLightColorContribution() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightWithIdManager, put=__set__lightWithIdManager))  _lightWithIdManager;

constexpr void __set__lightWithIdManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightWithIdManager() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__lightColorBeatmapEventCallbackWrapper, put=__set__lightColorBeatmapEventCallbackWrapper))  _lightColorBeatmapEventCallbackWrapper;

constexpr void __set__lightColorBeatmapEventCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__lightColorBeatmapEventCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x20ae20c size 0x120 virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20ae478 size 0x1c virtual true final false
 void OnDestroy() ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleColorChangeBeatmapEvent(GlobalNamespace::LightColorBeatmapEventData e) ;

/// @brief Method SetRenderersEnabled addr 0x20ae6c8 size 0x8c virtual false final false
 void SetRenderersEnabled(bool enabled) ;

/// @brief Method NotifyAlphaWasChanged addr 0x20ae8e8 size 0x70 virtual false final false
 void NotifyAlphaWasChanged(float_t currentAlpha) ;

static GlobalNamespace::FireEffect New_ctor() ;

/// @brief Method .ctor addr 0x20ae9dc size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FireEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireEffect, "", "FireEffect");
