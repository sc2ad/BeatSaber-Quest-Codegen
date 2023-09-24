#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
class Rigidbody;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class HydraulicCarJumpEffect;
}
// Type: ::HydraulicCarJumpEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3985))
// CS Name: HydraulicCarJumpEffect
class CORDL_TYPE HydraulicCarJumpEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~HydraulicCarJumpEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "HydraulicCarJumpEffect", modifiers: " const&", def_value: None }]
constexpr HydraulicCarJumpEffect(HydraulicCarJumpEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HydraulicCarJumpEffect", modifiers: "&&", def_value: None }]
constexpr HydraulicCarJumpEffect(HydraulicCarJumpEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HydraulicCarJumpEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HydraulicCarJumpEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HydraulicCarJumpEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HydraulicCarJumpEffect& operator=(HydraulicCarJumpEffect&& o) noexcept = default;
  constexpr HydraulicCarJumpEffect& operator=(HydraulicCarJumpEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__event, put=__set__event))  _event;

constexpr void __set__event(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__event() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__eventValues, put=__set__eventValues))  _eventValues;

constexpr void __set__eventValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__eventValues() const;

 UnityEngine::Vector3 __declspec(property(get=__get__impulse, put=__set__impulse))  _impulse;

constexpr void __set__impulse(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__impulse() const;

 float_t __declspec(property(get=__get__randomness, put=__set__randomness))  _randomness;

constexpr void __set__randomness(float_t value) ;

constexpr float_t __get__randomness() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position() const;

 float_t __declspec(property(get=__get__minDelayBetweenEvents, put=__set__minDelayBetweenEvents))  _minDelayBetweenEvents;

constexpr void __set__minDelayBetweenEvents(float_t value) ;

constexpr float_t __get__minDelayBetweenEvents() const;

 UnityEngine::Rigidbody __declspec(property(get=__get__rigidbody, put=__set__rigidbody))  _rigidbody;

constexpr void __set__rigidbody(UnityEngine::Rigidbody value) ;

constexpr UnityEngine::Rigidbody __get__rigidbody() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 float_t __declspec(property(get=__get__lastEventTime, put=__set__lastEventTime))  _lastEventTime;

constexpr void __set__lastEventTime(float_t value) ;

constexpr float_t __get__lastEventTime() const;

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get__eventValuesHashSet, put=__set__eventValuesHashSet))  _eventValuesHashSet;

constexpr void __set__eventValuesHashSet(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get__eventValuesHashSet() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x20ada50 size 0x170 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20adbc0 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x20adbdc size 0x11c virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

static GlobalNamespace::HydraulicCarJumpEffect New_ctor() ;

/// @brief Method .ctor addr 0x20adcf8 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HydraulicCarJumpEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HydraulicCarJumpEffect, "", "HydraulicCarJumpEffect");
