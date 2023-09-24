#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerHeightDetector__InitData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PlayerHeightDetector__InitData;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5369))
// CS Name: PlayerHeightDetector::InitData
class CORDL_TYPE GlobalNamespace__PlayerHeightDetector__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PlayerHeightDetector__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerHeightDetector__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlayerHeightDetector__InitData(GlobalNamespace__PlayerHeightDetector__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlayerHeightDetector__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlayerHeightDetector__InitData(GlobalNamespace__PlayerHeightDetector__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerHeightDetector__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlayerHeightDetector__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlayerHeightDetector__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlayerHeightDetector__InitData& operator=(GlobalNamespace__PlayerHeightDetector__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__PlayerHeightDetector__InitData& operator=(GlobalNamespace__PlayerHeightDetector__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_headPosToPlayerHeightOffset, put=__set_headPosToPlayerHeightOffset))  headPosToPlayerHeightOffset;

constexpr void __set_headPosToPlayerHeightOffset(float_t value) ;

constexpr float_t __get_headPosToPlayerHeightOffset() const;

 float_t __declspec(property(get=__get_startPlayerHeight, put=__set_startPlayerHeight))  startPlayerHeight;

constexpr void __set_startPlayerHeight(float_t value) ;

constexpr float_t __get_startPlayerHeight() const;


// Methods

static GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData New_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight) ;

/// @brief Method .ctor addr 0x210983c size 0x2c virtual false final false
 void _ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerHeightDetector
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5370))
// CS Name: PlayerHeightDetector
class CORDL_TYPE PlayerHeightDetector : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~PlayerHeightDetector() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightDetector", modifiers: " const&", def_value: None }]
constexpr PlayerHeightDetector(PlayerHeightDetector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightDetector", modifiers: "&&", def_value: None }]
constexpr PlayerHeightDetector(PlayerHeightDetector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerHeightDetector(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerHeightDetector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerHeightDetector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerHeightDetector& operator=(PlayerHeightDetector&& o) noexcept = default;
  constexpr PlayerHeightDetector& operator=(PlayerHeightDetector const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSyncController() const;

 GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData __get__initData() const;

 System::Action_1<float_t> __declspec(property(get=__get_playerHeightDidChangeEvent, put=__set_playerHeightDidChangeEvent))  playerHeightDidChangeEvent;

constexpr void __set_playerHeightDidChangeEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_playerHeightDidChangeEvent() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapObjectCallbackWrapper, put=__set__beatmapObjectCallbackWrapper))  _beatmapObjectCallbackWrapper;

constexpr void __set__beatmapObjectCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapObjectCallbackWrapper() const;

 float_t __declspec(property(get=__get__noTopObstaclesStartTime, put=__set__noTopObstaclesStartTime))  _noTopObstaclesStartTime;

constexpr void __set__noTopObstaclesStartTime(float_t value) ;

constexpr float_t __get__noTopObstaclesStartTime() const;

 float_t __declspec(property(get=__get__computedPlayerHeight, put=__set__computedPlayerHeight))  _computedPlayerHeight;

constexpr void __set__computedPlayerHeight(float_t value) ;

constexpr float_t __get__computedPlayerHeight() const;

 float_t __declspec(property(get=__get__changeWeight, put=__set__changeWeight))  _changeWeight;

constexpr void __set__changeWeight(float_t value) ;

constexpr float_t __get__changeWeight() const;

 float_t __declspec(property(get=__get__lastReportedHeight, put=__set__lastReportedHeight))  _lastReportedHeight;

constexpr void __set__lastReportedHeight(float_t value) ;

constexpr float_t __get__lastReportedHeight() const;


// Properties

 float_t __declspec(property(get=get_playerHeight))  playerHeight;


// Methods

/// @brief Method add_playerHeightDidChangeEvent addr 0x21093bc size 0xb0 virtual false final false
 void add_playerHeightDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_playerHeightDidChangeEvent addr 0x210946c size 0xb0 virtual false final false
 void remove_playerHeightDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method get_playerHeight addr 0x210951c size 0x8 virtual false final false
 float_t get_playerHeight() ;

/// @brief Method Start addr 0x2109524 size 0xe4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2109608 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method LateUpdate addr 0x2109624 size 0x1cc virtual false final false
 void LateUpdate() ;

/// @brief Method BeatmapObjectSpawnCallback addr 0x21097f0 size 0x44 virtual false final false
 void BeatmapObjectSpawnCallback(GlobalNamespace::ObstacleData obstacleData) ;

static GlobalNamespace::PlayerHeightDetector New_ctor() ;

/// @brief Method .ctor addr 0x2109834 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData, "", "PlayerHeightDetector/InitData");
NEED_NO_BOX(GlobalNamespace::PlayerHeightDetector);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightDetector, "", "PlayerHeightDetector");
