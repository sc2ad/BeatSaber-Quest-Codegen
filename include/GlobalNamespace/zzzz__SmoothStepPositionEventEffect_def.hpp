#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace Tweening {
class Vector3Tween;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothStepPositionEventEffect;
}
// Type: ::SmoothStepPositionEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5070))
// CS Name: SmoothStepPositionEventEffect
class CORDL_TYPE SmoothStepPositionEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SmoothStepPositionEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionEventEffect", modifiers: " const&", def_value: None }]
constexpr SmoothStepPositionEventEffect(SmoothStepPositionEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmoothStepPositionEventEffect", modifiers: "&&", def_value: None }]
constexpr SmoothStepPositionEventEffect(SmoothStepPositionEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmoothStepPositionEventEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SmoothStepPositionEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmoothStepPositionEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmoothStepPositionEventEffect& operator=(SmoothStepPositionEventEffect&& o) noexcept = default;
  constexpr SmoothStepPositionEventEffect& operator=(SmoothStepPositionEventEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__event, put=__set__event))  _event;

constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__event() const;

 bool __declspec(property(get=__get__clampValue, put=__set__clampValue))  _clampValue;

constexpr void __set__clampValue(bool value) ;

constexpr bool __get__clampValue() const;

 int32_t __declspec(property(get=__get__eventValueMin, put=__set__eventValueMin))  _eventValueMin;

constexpr void __set__eventValueMin(int32_t value) ;

constexpr int32_t __get__eventValueMin() const;

 int32_t __declspec(property(get=__get__eventValueMax, put=__set__eventValueMax))  _eventValueMax;

constexpr void __set__eventValueMax(int32_t value) ;

constexpr int32_t __get__eventValueMax() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__movementVector, put=__set__movementVector))  _movementVector;

constexpr void __set__movementVector(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__movementVector() const;

 float_t __declspec(property(get=__get__stepSize, put=__set__stepSize))  _stepSize;

constexpr void __set__stepSize(float_t value) ;

constexpr float_t __get__stepSize() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::Tweening::SongTimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager value) ;

constexpr ::Tweening::SongTimeTweeningManager __get__tweeningManager() const;

 ::Tweening::Vector3Tween __declspec(property(get=__get__positionTween, put=__set__positionTween))  _positionTween;

constexpr void __set__positionTween(::Tweening::Vector3Tween value) ;

constexpr ::Tweening::Vector3Tween __get__positionTween() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__startPos() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Awake addr 0x2267450 size 0x110 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2267560 size 0x124 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2267684 size 0x9c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x2267720 size 0xdc virtual false final false
 void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method GetPositionForValue addr 0x22677fc size 0x60 virtual false final false
 ::UnityEngine::Vector3 GetPositionForValue(int32_t value) ;

/// @brief Method SetPosition addr 0x226785c size 0x48 virtual false final false
 void SetPosition(::UnityEngine::Vector3 position) ;

// Ctor Parameters []
explicit SmoothStepPositionEventEffect() ;

/// @brief Method .ctor addr 0x22678a4 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SmoothStepPositionEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothStepPositionEventEffect, "", "SmoothStepPositionEventEffect");
