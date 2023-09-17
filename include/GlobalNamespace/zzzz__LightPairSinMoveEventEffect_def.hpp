#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LightPairSinMoveEventEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData;
}
// Type: ::MovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5051))
// CS Name: LightPairSinMoveEventEffect::MovementData
class CORDL_TYPE ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__LightPairSinMoveEventEffect__MovementData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightPairSinMoveEventEffect__MovementData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData(____GlobalNamespace__LightPairSinMoveEventEffect__MovementData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightPairSinMoveEventEffect__MovementData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData(____GlobalNamespace__LightPairSinMoveEventEffect__MovementData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData& operator=(____GlobalNamespace__LightPairSinMoveEventEffect__MovementData&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData& operator=(____GlobalNamespace__LightPairSinMoveEventEffect__MovementData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_enabled, put=__set_enabled))  enabled;

constexpr void __set_enabled(bool value) ;

constexpr bool __get_enabled() const;

 float_t __declspec(property(get=__get_speed, put=__set_speed))  speed;

constexpr void __set_speed(float_t value) ;

constexpr float_t __get_speed() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_startPosition, put=__set_startPosition))  startPosition;

constexpr void __set_startPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_startPosition() const;

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 float_t __declspec(property(get=__get_startMovementValue, put=__set_startMovementValue))  startMovementValue;

constexpr void __set_startMovementValue(float_t value) ;

constexpr float_t __get_startMovementValue() const;

 float_t __declspec(property(get=__get_movementValue, put=__set_movementValue))  movementValue;

constexpr void __set_movementValue(float_t value) ;

constexpr float_t __get_movementValue() const;

 float_t __declspec(property(get=__get_side, put=__set_side))  side;

constexpr void __set_side(float_t value) ;

constexpr float_t __get_side() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LightPairSinMoveEventEffect__MovementData() ;

/// @brief Method .ctor addr 0x2263390 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightPairSinMoveEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5052))
// CS Name: LightPairSinMoveEventEffect
class CORDL_TYPE LightPairSinMoveEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MovementData = ::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~LightPairSinMoveEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightPairSinMoveEventEffect", modifiers: " const&", def_value: None }]
constexpr LightPairSinMoveEventEffect(LightPairSinMoveEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightPairSinMoveEventEffect", modifiers: "&&", def_value: None }]
constexpr LightPairSinMoveEventEffect(LightPairSinMoveEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightPairSinMoveEventEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightPairSinMoveEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightPairSinMoveEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightPairSinMoveEventEffect& operator=(LightPairSinMoveEventEffect&& o) noexcept = default;
  constexpr LightPairSinMoveEventEffect& operator=(LightPairSinMoveEventEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__eventL, put=__set__eventL))  _eventL;

constexpr void __set__eventL(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__eventL() const;

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__eventR, put=__set__eventR))  _eventR;

constexpr void __set__eventR(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__eventR() const;

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__switchOverrideRandomValuesEvent, put=__set__switchOverrideRandomValuesEvent))  _switchOverrideRandomValuesEvent;

constexpr void __set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__switchOverrideRandomValuesEvent() const;

 bool __declspec(property(get=__get__overrideRandomValues, put=__set__overrideRandomValues))  _overrideRandomValues;

constexpr void __set__overrideRandomValues(bool value) ;

constexpr bool __get__overrideRandomValues() const;

 float_t __declspec(property(get=__get__startValueOffset, put=__set__startValueOffset))  _startValueOffset;

constexpr void __set__startValueOffset(float_t value) ;

constexpr float_t __get__startValueOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__startPositionOffset, put=__set__startPositionOffset))  _startPositionOffset;

constexpr void __set__startPositionOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__startPositionOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__endPositionOffset, put=__set__endPositionOffset))  _endPositionOffset;

constexpr void __set__endPositionOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__endPositionOffset() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transformL, put=__set__transformL))  _transformL;

constexpr void __set__transformL(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transformL() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transformR, put=__set__transformR))  _transformR;

constexpr void __set__transformR(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transformR() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

/// @brief Field kSpeedMultiplier offset 0
static constexpr float_t  kSpeedMultiplier{1};

 ::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData __declspec(property(get=__get__movementDataL, put=__set__movementDataL))  _movementDataL;

constexpr void __set__movementDataL(::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData __get__movementDataL() const;

 ::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData __declspec(property(get=__get__movementDataR, put=__set__movementDataR))  _movementDataR;

constexpr void __set__movementDataR(::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData __get__movementDataR() const;

 int32_t __declspec(property(get=__get__randomGenerationFrameNum, put=__set__randomGenerationFrameNum))  _randomGenerationFrameNum;

constexpr void __set__randomGenerationFrameNum(int32_t value) ;

constexpr int32_t __get__randomGenerationFrameNum() const;

 float_t __declspec(property(get=__get__randomStartOffset, put=__set__randomStartOffset))  _randomStartOffset;

constexpr void __set__randomStartOffset(float_t value) ;

constexpr float_t __get__randomStartOffset() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2261bd0 size 0x310 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2261ee0 size 0x1d8 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x22620b8 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x22620d4 size 0x15c virtual false final false
 void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method UpdateMovementData addr 0x2262230 size 0x138 virtual false final false
 void UpdateMovementData(int32_t beatmapEventDataValue, ::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData movementData, float_t movementValueOffset) ;

// Ctor Parameters []
explicit LightPairSinMoveEventEffect() ;

/// @brief Method .ctor addr 0x2262368 size 0x1028 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightPairSinMoveEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairSinMoveEventEffect, "", "LightPairSinMoveEventEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightPairSinMoveEventEffect__MovementData, "", "LightPairSinMoveEventEffect/MovementData");
