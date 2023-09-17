#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class SongTimeFixedUpdateController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicsPositionsMovementEventEffect;
}
// Type: ::PhysicsPositionsMovementEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5068))
// CS Name: PhysicsPositionsMovementEventEffect
class CORDL_TYPE PhysicsPositionsMovementEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~PhysicsPositionsMovementEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: " const&", def_value: None }]
constexpr PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsPositionsMovementEventEffect", modifiers: "&&", def_value: None }]
constexpr PhysicsPositionsMovementEventEffect(PhysicsPositionsMovementEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PhysicsPositionsMovementEventEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PhysicsPositionsMovementEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PhysicsPositionsMovementEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PhysicsPositionsMovementEventEffect& operator=(PhysicsPositionsMovementEventEffect&& o) noexcept = default;
  constexpr PhysicsPositionsMovementEventEffect& operator=(PhysicsPositionsMovementEventEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__event, put=__set__event))  _event;

constexpr void __set__event(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__event() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__movementVector, put=__set__movementVector))  _movementVector;

constexpr void __set__movementVector(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__movementVector() const;

 float_t __declspec(property(get=__get__stepSize, put=__set__stepSize))  _stepSize;

constexpr void __set__stepSize(float_t value) ;

constexpr float_t __get__stepSize() const;

 float_t __declspec(property(get=__get__elasticity, put=__set__elasticity))  _elasticity;

constexpr void __set__elasticity(float_t value) ;

constexpr float_t __get__elasticity() const;

 float_t __declspec(property(get=__get__friction, put=__set__friction))  _friction;

constexpr void __set__friction(float_t value) ;

constexpr float_t __get__friction() const;

 float_t __declspec(property(get=__get__minMaxSpeed, put=__set__minMaxSpeed))  _minMaxSpeed;

constexpr void __set__minMaxSpeed(float_t value) ;

constexpr float_t __get__minMaxSpeed() const;

 float_t __declspec(property(get=__get__maxMaxSpeed, put=__set__maxMaxSpeed))  _maxMaxSpeed;

constexpr void __set__maxMaxSpeed(float_t value) ;

constexpr float_t __get__maxMaxSpeed() const;

 float_t __declspec(property(get=__get__maxAcceleration, put=__set__maxAcceleration))  _maxAcceleration;

constexpr void __set__maxAcceleration(float_t value) ;

constexpr float_t __get__maxAcceleration() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::SongTimeFixedUpdateController __declspec(property(get=__get__songTimeFixedUpdateController, put=__set__songTimeFixedUpdateController))  _songTimeFixedUpdateController;

constexpr void __set__songTimeFixedUpdateController(::GlobalNamespace::SongTimeFixedUpdateController value) ;

constexpr ::GlobalNamespace::SongTimeFixedUpdateController __get__songTimeFixedUpdateController() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__startPos() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__velocity, put=__set__velocity))  _velocity;

constexpr void __set__velocity(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__velocity() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__prevPosition, put=__set__prevPosition))  _prevPosition;

constexpr void __set__prevPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__prevPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__position() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__targetPosition, put=__set__targetPosition))  _targetPosition;

constexpr void __set__targetPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__targetPosition() const;

 float_t __declspec(property(get=__get__maxSpeed, put=__set__maxSpeed))  _maxSpeed;

constexpr void __set__maxSpeed(float_t value) ;

constexpr float_t __get__maxSpeed() const;

 float_t __declspec(property(get=__get__sqrMaxSpeed, put=__set__sqrMaxSpeed))  _sqrMaxSpeed;

constexpr void __set__sqrMaxSpeed(float_t value) ;

constexpr float_t __get__sqrMaxSpeed() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2266bac size 0x248 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2266df4 size 0x154 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSongTimeFixedUpdate addr 0x2266f48 size 0xdc virtual false final false
 void HandleSongTimeFixedUpdate(float_t fixedDeltaTime) ;

/// @brief Method HandleSongTimeUpdate addr 0x2267024 size 0x70 virtual false final false
 void HandleSongTimeUpdate() ;

/// @brief Method HandleBeatmapEvent addr 0x2267094 size 0x7c virtual false final false
 void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

// Ctor Parameters []
explicit PhysicsPositionsMovementEventEffect() ;

/// @brief Method .ctor addr 0x2267110 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsPositionsMovementEventEffect, "", "PhysicsPositionsMovementEventEffect");
