#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationEventEffect;
}
// Type: ::LightRotationEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5053))
// CS Name: LightRotationEventEffect
class CORDL_TYPE LightRotationEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~LightRotationEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: " const&", def_value: None }]
constexpr LightRotationEventEffect(LightRotationEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationEventEffect", modifiers: "&&", def_value: None }]
constexpr LightRotationEventEffect(LightRotationEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightRotationEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationEventEffect& operator=(LightRotationEventEffect&& o) noexcept = default;
  constexpr LightRotationEventEffect& operator=(LightRotationEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__event, put=__set__event))  _event;

constexpr void __set__event(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__event() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rotationVector, put=__set__rotationVector))  _rotationVector;

constexpr void __set__rotationVector(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rotationVector() const;

 float_t __declspec(property(get=__get__rotationSpeedMultiplier, put=__set__rotationSpeedMultiplier))  _rotationSpeedMultiplier;

constexpr void __set__rotationSpeedMultiplier(float_t value) ;

constexpr float_t __get__rotationSpeedMultiplier() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

/// @brief Field kSpeedMultiplier offset 0
static constexpr float_t  kSpeedMultiplier{20};

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Quaternion __declspec(property(get=__get__startRotation, put=__set__startRotation))  _startRotation;

constexpr void __set__startRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__startRotation() const;

 float_t __declspec(property(get=__get__rotationSpeed, put=__set__rotationSpeed))  _rotationSpeed;

constexpr void __set__rotationSpeed(float_t value) ;

constexpr float_t __get__rotationSpeed() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2263398 size 0x154 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x22634ec size 0xe8 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x22635d4 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x22635f0 size 0x124 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

static GlobalNamespace::LightRotationEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x2263714 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationEventEffect, "", "LightRotationEventEffect");
