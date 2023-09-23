#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsPositionStepEffectSpawner;
}
// Type: ::TrackLaneRingsPositionStepEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5105))
// CS Name: TrackLaneRingsPositionStepEffectSpawner
class CORDL_TYPE TrackLaneRingsPositionStepEffectSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TrackLaneRingsPositionStepEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsPositionStepEffectSpawner", modifiers: " const&", def_value: None }]
constexpr TrackLaneRingsPositionStepEffectSpawner(TrackLaneRingsPositionStepEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsPositionStepEffectSpawner", modifiers: "&&", def_value: None }]
constexpr TrackLaneRingsPositionStepEffectSpawner(TrackLaneRingsPositionStepEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackLaneRingsPositionStepEffectSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackLaneRingsPositionStepEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackLaneRingsPositionStepEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackLaneRingsPositionStepEffectSpawner& operator=(TrackLaneRingsPositionStepEffectSpawner&& o) noexcept = default;
  constexpr TrackLaneRingsPositionStepEffectSpawner& operator=(TrackLaneRingsPositionStepEffectSpawner const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TrackLaneRingsManager __declspec(property(get=__get__trackLaneRingsManager, put=__set__trackLaneRingsManager))  _trackLaneRingsManager;

constexpr void __set__trackLaneRingsManager(GlobalNamespace::TrackLaneRingsManager value) ;

constexpr GlobalNamespace::TrackLaneRingsManager __get__trackLaneRingsManager() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEventType, put=__set__beatmapEventType))  _beatmapEventType;

constexpr void __set__beatmapEventType(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__beatmapEventType() const;

 float_t __declspec(property(get=__get__minPositionStep, put=__set__minPositionStep))  _minPositionStep;

constexpr void __set__minPositionStep(float_t value) ;

constexpr float_t __get__minPositionStep() const;

 float_t __declspec(property(get=__get__maxPositionStep, put=__set__maxPositionStep))  _maxPositionStep;

constexpr void __set__maxPositionStep(float_t value) ;

constexpr float_t __get__maxPositionStep() const;

 float_t __declspec(property(get=__get__moveSpeed, put=__set__moveSpeed))  _moveSpeed;

constexpr void __set__moveSpeed(float_t value) ;

constexpr float_t __get__moveSpeed() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x226cf7c size 0x124 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x226d0a0 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x226d0bc size 0x78 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

// Ctor Parameters []
explicit TrackLaneRingsPositionStepEffectSpawner() ;

/// @brief Method .ctor addr 0x226d134 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner, "", "TrackLaneRingsPositionStepEffectSpawner");
