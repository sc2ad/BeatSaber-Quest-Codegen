#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
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
class BasicBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LightPairRotationEventEffect__RotationData;
}
namespace GlobalNamespace {
class LightPairRotationEventEffect;
}
// Type: ::RotationData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5049))
// CS Name: LightPairRotationEventEffect::RotationData
class CORDL_TYPE GlobalNamespace__LightPairRotationEventEffect__RotationData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__LightPairRotationEventEffect__RotationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightPairRotationEventEffect__RotationData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LightPairRotationEventEffect__RotationData(GlobalNamespace__LightPairRotationEventEffect__RotationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightPairRotationEventEffect__RotationData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LightPairRotationEventEffect__RotationData(GlobalNamespace__LightPairRotationEventEffect__RotationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightPairRotationEventEffect__RotationData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LightPairRotationEventEffect__RotationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LightPairRotationEventEffect__RotationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LightPairRotationEventEffect__RotationData& operator=(GlobalNamespace__LightPairRotationEventEffect__RotationData&& o) noexcept = default;
  constexpr GlobalNamespace__LightPairRotationEventEffect__RotationData& operator=(GlobalNamespace__LightPairRotationEventEffect__RotationData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_enabled, put=__set_enabled))  enabled;

constexpr void __set_enabled(bool value) ;

constexpr bool __get_enabled() const;

 float_t __declspec(property(get=__get_rotationSpeed, put=__set_rotationSpeed))  rotationSpeed;

constexpr void __set_rotationSpeed(float_t value) ;

constexpr float_t __get_rotationSpeed() const;

 UnityEngine::Quaternion __declspec(property(get=__get_startRotation, put=__set_startRotation))  startRotation;

constexpr void __set_startRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_startRotation() const;

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 float_t __declspec(property(get=__get_startRotationAngle, put=__set_startRotationAngle))  startRotationAngle;

constexpr void __set_startRotationAngle(float_t value) ;

constexpr float_t __get_startRotationAngle() const;

 float_t __declspec(property(get=__get_rotationAngle, put=__set_rotationAngle))  rotationAngle;

constexpr void __set_rotationAngle(float_t value) ;

constexpr float_t __get_rotationAngle() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LightPairRotationEventEffect__RotationData() ;

/// @brief Method .ctor addr 0x22612f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightPairRotationEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5050))
// CS Name: LightPairRotationEventEffect
class CORDL_TYPE LightPairRotationEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationData = GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~LightPairRotationEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect", modifiers: " const&", def_value: None }]
constexpr LightPairRotationEventEffect(LightPairRotationEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect", modifiers: "&&", def_value: None }]
constexpr LightPairRotationEventEffect(LightPairRotationEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightPairRotationEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightPairRotationEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightPairRotationEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightPairRotationEventEffect& operator=(LightPairRotationEventEffect&& o) noexcept = default;
  constexpr LightPairRotationEventEffect& operator=(LightPairRotationEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__eventL, put=__set__eventL))  _eventL;

constexpr void __set__eventL(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__eventL() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__eventR, put=__set__eventR))  _eventR;

constexpr void __set__eventR(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__eventR() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__switchOverrideRandomValuesEvent, put=__set__switchOverrideRandomValuesEvent))  _switchOverrideRandomValuesEvent;

constexpr void __set__switchOverrideRandomValuesEvent(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__switchOverrideRandomValuesEvent() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rotationVector, put=__set__rotationVector))  _rotationVector;

constexpr void __set__rotationVector(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rotationVector() const;

 bool __declspec(property(get=__get__overrideRandomValues, put=__set__overrideRandomValues))  _overrideRandomValues;

constexpr void __set__overrideRandomValues(bool value) ;

constexpr bool __get__overrideRandomValues() const;

 bool __declspec(property(get=__get__useZPositionForAngleOffset, put=__set__useZPositionForAngleOffset))  _useZPositionForAngleOffset;

constexpr void __set__useZPositionForAngleOffset(bool value) ;

constexpr bool __get__useZPositionForAngleOffset() const;

 float_t __declspec(property(get=__get__zPositionAngleOffsetScale, put=__set__zPositionAngleOffsetScale))  _zPositionAngleOffsetScale;

constexpr void __set__zPositionAngleOffsetScale(float_t value) ;

constexpr float_t __get__zPositionAngleOffsetScale() const;

 float_t __declspec(property(get=__get__startRotation, put=__set__startRotation))  _startRotation;

constexpr void __set__startRotation(float_t value) ;

constexpr float_t __get__startRotation() const;

 UnityEngine::Transform __declspec(property(get=__get__transformL, put=__set__transformL))  _transformL;

constexpr void __set__transformL(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transformL() const;

 UnityEngine::Transform __declspec(property(get=__get__transformR, put=__set__transformR))  _transformR;

constexpr void __set__transformR(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transformR() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

/// @brief Field kSpeedMultiplier offset 0
static constexpr float_t  kSpeedMultiplier{20};

 GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData __declspec(property(get=__get__rotationDataL, put=__set__rotationDataL))  _rotationDataL;

constexpr void __set__rotationDataL(GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData value) ;

constexpr GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData __get__rotationDataL() const;

 GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData __declspec(property(get=__get__rotationDataR, put=__set__rotationDataR))  _rotationDataR;

constexpr void __set__rotationDataR(GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData value) ;

constexpr GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData __get__rotationDataR() const;

 int32_t __declspec(property(get=__get__randomGenerationFrameNum, put=__set__randomGenerationFrameNum))  _randomGenerationFrameNum;

constexpr void __set__randomGenerationFrameNum(int32_t value) ;

constexpr int32_t __get__randomGenerationFrameNum() const;

 float_t __declspec(property(get=__get__randomStartRotation, put=__set__randomStartRotation))  _randomStartRotation;

constexpr void __set__randomStartRotation(float_t value) ;

constexpr float_t __get__randomStartRotation() const;

 float_t __declspec(property(get=__get__randomDirection, put=__set__randomDirection))  _randomDirection;

constexpr void __set__randomDirection(float_t value) ;

constexpr float_t __get__randomDirection() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2260f30 size 0x3c8 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2261300 size 0x2a4 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x22615a4 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x22615c0 size 0x380 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method UpdateRotationData addr 0x2261940 size 0x21c virtual false final false
 void UpdateRotationData(int32_t beatmapEventDataValue, GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData rotationData, float_t startRotationOffset, float_t direction) ;

// Ctor Parameters []
explicit LightPairRotationEventEffect() ;

/// @brief Method .ctor addr 0x2261b5c size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightPairRotationEventEffect__RotationData, "", "LightPairRotationEventEffect/RotationData");
NEED_NO_BOX(GlobalNamespace::LightPairRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairRotationEventEffect, "", "LightPairRotationEventEffect");
