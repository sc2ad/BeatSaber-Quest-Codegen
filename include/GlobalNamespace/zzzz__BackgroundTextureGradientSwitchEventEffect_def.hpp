#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
// Forward declare root types
namespace GlobalNamespace {
class BackgroundTextureGradientSwitchEventEffect;
}
// Type: ::BackgroundTextureGradientSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5010))
// CS Name: BackgroundTextureGradientSwitchEventEffect
class CORDL_TYPE BackgroundTextureGradientSwitchEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BackgroundTextureGradientSwitchEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BackgroundTextureGradientSwitchEventEffect", modifiers: " const&", def_value: None }]
constexpr BackgroundTextureGradientSwitchEventEffect(BackgroundTextureGradientSwitchEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BackgroundTextureGradientSwitchEventEffect", modifiers: "&&", def_value: None }]
constexpr BackgroundTextureGradientSwitchEventEffect(BackgroundTextureGradientSwitchEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BackgroundTextureGradientSwitchEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BackgroundTextureGradientSwitchEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BackgroundTextureGradientSwitchEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BackgroundTextureGradientSwitchEventEffect& operator=(BackgroundTextureGradientSwitchEventEffect&& o) noexcept = default;
  constexpr BackgroundTextureGradientSwitchEventEffect& operator=(BackgroundTextureGradientSwitchEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassBackgroundTextureGradient __declspec(property(get=__get__defaultTextureGradient, put=__set__defaultTextureGradient))  _defaultTextureGradient;

constexpr void __set__defaultTextureGradient(GlobalNamespace::BloomPrePassBackgroundTextureGradient value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundTextureGradient __get__defaultTextureGradient() const;

 GlobalNamespace::BloomPrePassBackgroundTextureGradient __declspec(property(get=__get__boostTextureGradient, put=__set__boostTextureGradient))  _boostTextureGradient;

constexpr void __set__boostTextureGradient(GlobalNamespace::BloomPrePassBackgroundTextureGradient value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundTextureGradient __get__boostTextureGradient() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x225bb70 size 0xa8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225bc18 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x225bc34 size 0x50 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::ColorBoostBeatmapEventData eventData) ;

// Ctor Parameters []
explicit BackgroundTextureGradientSwitchEventEffect() ;

/// @brief Method .ctor addr 0x225bc84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BackgroundTextureGradientSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, "", "BackgroundTextureGradientSwitchEventEffect");
