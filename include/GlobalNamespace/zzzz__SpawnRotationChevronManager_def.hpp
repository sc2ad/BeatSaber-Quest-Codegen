#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SpawnRotationChevron__Pool;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class SpawnRotationChevron;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevronManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SpawnRotationChevronManager__DirectionData;
}
// Type: ::DirectionData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5096))
// CS Name: SpawnRotationChevronManager::DirectionData
class CORDL_TYPE ____GlobalNamespace__SpawnRotationChevronManager__DirectionData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__SpawnRotationChevronManager__DirectionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SpawnRotationChevronManager__DirectionData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SpawnRotationChevronManager__DirectionData(____GlobalNamespace__SpawnRotationChevronManager__DirectionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SpawnRotationChevronManager__DirectionData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SpawnRotationChevronManager__DirectionData(____GlobalNamespace__SpawnRotationChevronManager__DirectionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SpawnRotationChevronManager__DirectionData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SpawnRotationChevronManager__DirectionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SpawnRotationChevronManager__DirectionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SpawnRotationChevronManager__DirectionData& operator=(____GlobalNamespace__SpawnRotationChevronManager__DirectionData&& o) noexcept = default;
  constexpr ____GlobalNamespace__SpawnRotationChevronManager__DirectionData& operator=(____GlobalNamespace__SpawnRotationChevronManager__DirectionData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::SpawnRotationChevron __declspec(property(get=__get_chevron, put=__set_chevron))  chevron;

constexpr void __set_chevron(::GlobalNamespace::SpawnRotationChevron value) ;

constexpr ::GlobalNamespace::SpawnRotationChevron __get_chevron() const;

 bool __declspec(property(get=__get_fullyLid, put=__set_fullyLid))  fullyLid;

constexpr void __set_fullyLid(bool value) ;

constexpr bool __get_fullyLid() const;

 float_t __declspec(property(get=__get_fadeOutStartTime, put=__set_fadeOutStartTime))  fadeOutStartTime;

constexpr void __set_fadeOutStartTime(float_t value) ;

constexpr float_t __get_fadeOutStartTime() const;

 float_t __declspec(property(get=__get_fadeInEndTime, put=__set_fadeInEndTime))  fadeInEndTime;

constexpr void __set_fadeInEndTime(float_t value) ;

constexpr float_t __get_fadeInEndTime() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SpawnRotationChevronManager__DirectionData() ;

/// @brief Method .ctor addr 0x226b8b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpawnRotationChevronManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5097))
// CS Name: SpawnRotationChevronManager
class CORDL_TYPE SpawnRotationChevronManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DirectionData = ::GlobalNamespace::____GlobalNamespace__SpawnRotationChevronManager__DirectionData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SpawnRotationChevronManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager", modifiers: " const&", def_value: None }]
constexpr SpawnRotationChevronManager(SpawnRotationChevronManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager", modifiers: "&&", def_value: None }]
constexpr SpawnRotationChevronManager(SpawnRotationChevronManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpawnRotationChevronManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SpawnRotationChevronManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpawnRotationChevronManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpawnRotationChevronManager& operator=(SpawnRotationChevronManager&& o) noexcept = default;
  constexpr SpawnRotationChevronManager& operator=(SpawnRotationChevronManager const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fadeInTime, put=__set__fadeInTime))  _fadeInTime;

constexpr void __set__fadeInTime(float_t value) ;

constexpr float_t __get__fadeInTime() const;

 float_t __declspec(property(get=__get__fadeOutTime, put=__set__fadeOutTime))  _fadeOutTime;

constexpr void __set__fadeOutTime(float_t value) ;

constexpr float_t __get__fadeOutTime() const;

 float_t __declspec(property(get=__get__jumpStartOffsetTime, put=__set__jumpStartOffsetTime))  _jumpStartOffsetTime;

constexpr void __set__jumpStartOffsetTime(float_t value) ;

constexpr float_t __get__jumpStartOffsetTime() const;

 float_t __declspec(property(get=__get__cutOffsetTime, put=__set__cutOffsetTime))  _cutOffsetTime;

constexpr void __set__cutOffsetTime(float_t value) ;

constexpr float_t __get__cutOffsetTime() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__fadeInLightAmountCurve, put=__set__fadeInLightAmountCurve))  _fadeInLightAmountCurve;

constexpr void __set__fadeInLightAmountCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__fadeInLightAmountCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__fadeOutLightAmountCurve, put=__set__fadeOutLightAmountCurve))  _fadeOutLightAmountCurve;

constexpr void __set__fadeOutLightAmountCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__fadeOutLightAmountCurve() const;

 ::GlobalNamespace::____GlobalNamespace__SpawnRotationChevron__Pool __declspec(property(get=__get__chevronPool, put=__set__chevronPool))  _chevronPool;

constexpr void __set__chevronPool(::GlobalNamespace::____GlobalNamespace__SpawnRotationChevron__Pool value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__SpawnRotationChevron__Pool __get__chevronPool() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSyncController() const;

 ::GlobalNamespace::BeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__spawnRotationDataCallbackWrapper, put=__set__spawnRotationDataCallbackWrapper))  _spawnRotationDataCallbackWrapper;

constexpr void __set__spawnRotationDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__spawnRotationDataCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapObjectDataCallbackWrapper, put=__set__beatmapObjectDataCallbackWrapper))  _beatmapObjectDataCallbackWrapper;

constexpr void __set__beatmapObjectDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapObjectDataCallbackWrapper() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::____GlobalNamespace__SpawnRotationChevronManager__DirectionData> __declspec(property(get=__get__directionToDataDictionary, put=__set__directionToDataDictionary))  _directionToDataDictionary;

constexpr void __set__directionToDataDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::____GlobalNamespace__SpawnRotationChevronManager__DirectionData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::____GlobalNamespace__SpawnRotationChevronManager__DirectionData> __get__directionToDataDictionary() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get__activeDirections, put=__set__activeDirections))  _activeDirections;

constexpr void __set__activeDirections(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get__activeDirections() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__reusableDirectionsList, put=__set__reusableDirectionsList))  _reusableDirectionsList;

constexpr void __set__reusableDirectionsList(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get__reusableDirectionsList() const;

 float_t __declspec(property(get=__get__moveDuration, put=__set__moveDuration))  _moveDuration;

constexpr void __set__moveDuration(float_t value) ;

constexpr float_t __get__moveDuration() const;

 float_t __declspec(property(get=__get__halfJumpDuration, put=__set__halfJumpDuration))  _halfJumpDuration;

constexpr void __set__halfJumpDuration(float_t value) ;

constexpr float_t __get__halfJumpDuration() const;

 float_t __declspec(property(get=__get__currentSpawnRotation, put=__set__currentSpawnRotation))  _currentSpawnRotation;

constexpr void __set__currentSpawnRotation(float_t value) ;

constexpr float_t __get__currentSpawnRotation() const;


// Methods

/// @brief Method Start addr 0x226a748 size 0x170 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x226a9fc size 0xa64 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x226b460 size 0xfc virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapObjectCallback addr 0x226b55c size 0x35c virtual false final false
 void HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData beatmapObjectData) ;

/// @brief Method HandleSpawnRotationBeatmapEvent addr 0x226b8c0 size 0x1c virtual false final false
 void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData beatmapEventData) ;

/// @brief Method HandleBeatmapObjectSpawnControllerDidInit addr 0x226a8b8 size 0x144 virtual false final false
 void HandleBeatmapObjectSpawnControllerDidInit() ;

/// @brief Method ComputeAheadTime addr 0x226b8dc size 0x5c virtual false final false
 float_t ComputeAheadTime() ;

// Ctor Parameters []
explicit SpawnRotationChevronManager() ;

/// @brief Method .ctor addr 0x226b938 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager, "", "SpawnRotationChevronManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SpawnRotationChevronManager__DirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SpawnRotationChevronManager__DirectionData, "", "SpawnRotationChevronManager/DirectionData");
