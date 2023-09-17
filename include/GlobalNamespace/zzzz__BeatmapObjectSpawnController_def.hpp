#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapObjectSpawnController__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4835))
// CS Name: BeatmapObjectSpawnController::InitData
class CORDL_TYPE ____GlobalNamespace__BeatmapObjectSpawnController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__BeatmapObjectSpawnController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectSpawnController__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectSpawnController__InitData(____GlobalNamespace__BeatmapObjectSpawnController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapObjectSpawnController__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapObjectSpawnController__InitData(____GlobalNamespace__BeatmapObjectSpawnController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapObjectSpawnController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapObjectSpawnController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectSpawnController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapObjectSpawnController__InitData& operator=(____GlobalNamespace__BeatmapObjectSpawnController__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapObjectSpawnController__InitData& operator=(____GlobalNamespace__BeatmapObjectSpawnController__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_beatsPerMinute, put=__set_beatsPerMinute))  beatsPerMinute;

constexpr void __set_beatsPerMinute(float_t value) ;

constexpr float_t __get_beatsPerMinute() const;

 int32_t __declspec(property(get=__get_noteLinesCount, put=__set_noteLinesCount))  noteLinesCount;

constexpr void __set_noteLinesCount(int32_t value) ;

constexpr int32_t __get_noteLinesCount() const;

 float_t __declspec(property(get=__get_noteJumpMovementSpeed, put=__set_noteJumpMovementSpeed))  noteJumpMovementSpeed;

constexpr void __set_noteJumpMovementSpeed(float_t value) ;

constexpr float_t __get_noteJumpMovementSpeed() const;

 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType __declspec(property(get=__get_noteJumpValueType, put=__set_noteJumpValueType))  noteJumpValueType;

constexpr void __set_noteJumpValueType(::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType __get_noteJumpValueType() const;

 float_t __declspec(property(get=__get_noteJumpValue, put=__set_noteJumpValue))  noteJumpValue;

constexpr void __set_noteJumpValue(float_t value) ;

constexpr float_t __get_noteJumpValue() const;


// Methods

// Ctor Parameters [CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteLinesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpValueType", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType", modifiers: "", def_value: None }, CppParam { name: "noteJumpValue", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapObjectSpawnController__InitData(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue) ;

/// @brief Method .ctor addr 0x2236cdc size 0x58 virtual false final false
 void _ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectSpawnController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4836))
// CS Name: BeatmapObjectSpawnController
class CORDL_TYPE BeatmapObjectSpawnController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData;

/// @brief Convert operator to ::GlobalNamespace::IBeatmapObjectSpawnController
constexpr operator  ::GlobalNamespace::IBeatmapObjectSpawnController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~BeatmapObjectSpawnController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectSpawnController(BeatmapObjectSpawnController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectSpawnController(BeatmapObjectSpawnController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectSpawnController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapObjectSpawnController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectSpawnController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectSpawnController& operator=(BeatmapObjectSpawnController&& o) noexcept = default;
  constexpr BeatmapObjectSpawnController& operator=(BeatmapObjectSpawnController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapObjectSpawnMovementData __declspec(property(get=__get__beatmapObjectSpawnMovementData, put=__set__beatmapObjectSpawnMovementData))  _beatmapObjectSpawnMovementData;

constexpr void __set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData __get__beatmapObjectSpawnMovementData() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::IBeatmapObjectSpawner __declspec(property(get=__get__beatmapObjectSpawner, put=__set__beatmapObjectSpawner))  _beatmapObjectSpawner;

constexpr void __set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner value) ;

constexpr ::GlobalNamespace::IBeatmapObjectSpawner __get__beatmapObjectSpawner() const;

 ::GlobalNamespace::IJumpOffsetYProvider __declspec(property(get=__get__jumpOffsetYProvider, put=__set__jumpOffsetYProvider))  _jumpOffsetYProvider;

constexpr void __set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider value) ;

constexpr ::GlobalNamespace::IJumpOffsetYProvider __get__jumpOffsetYProvider() const;

 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData __get__initData() const;

 ::System::Action __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent))  didInitEvent;

constexpr void __set_didInitEvent(::System::Action value) ;

constexpr ::System::Action __get_didInitEvent() const;

 bool __declspec(property(get=__get__disableSpawning, put=__set__disableSpawning))  _disableSpawning;

constexpr void __set__disableSpawning(bool value) ;

constexpr bool __get__disableSpawning() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__obstacleDataCallbackWrapper, put=__set__obstacleDataCallbackWrapper))  _obstacleDataCallbackWrapper;

constexpr void __set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__obstacleDataCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__noteDataCallbackWrapper, put=__set__noteDataCallbackWrapper))  _noteDataCallbackWrapper;

constexpr void __set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__noteDataCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__sliderDataCallbackWrapper, put=__set__sliderDataCallbackWrapper))  _sliderDataCallbackWrapper;

constexpr void __set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__sliderDataCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__spawnRotationCallbackWrapper, put=__set__spawnRotationCallbackWrapper))  _spawnRotationCallbackWrapper;

constexpr void __set__spawnRotationCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__spawnRotationCallbackWrapper() const;

 float_t __declspec(property(get=__get__spawnRotation, put=__set__spawnRotation))  _spawnRotation;

constexpr void __set__spawnRotation(float_t value) ;

constexpr float_t __get__spawnRotation() const;


// Properties

 int32_t __declspec(property(get=get_noteLinesCount))  noteLinesCount;

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;

 float_t __declspec(property(get=get_moveDuration))  moveDuration;

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 float_t __declspec(property(get=get_jumpDistance))  jumpDistance;

 float_t __declspec(property(get=get_verticalLayerDistance))  verticalLayerDistance;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteLinesDistance))  noteLinesDistance;

 ::GlobalNamespace::BeatmapObjectSpawnMovementData __declspec(property(get=get_beatmapObjectSpawnMovementData))  beatmapObjectSpawnMovementData;

 bool __declspec(property(get=get_isInitialized))  isInitialized;


// Methods

/// @brief Method get_noteLinesCount addr 0x2235c04 size 0x1c virtual true final true
 int32_t get_noteLinesCount() ;

/// @brief Method get_jumpOffsetY addr 0x2235c20 size 0x18 virtual true final true
 float_t get_jumpOffsetY() ;

/// @brief Method get_moveDuration addr 0x2235cd8 size 0x1c virtual true final true
 float_t get_moveDuration() ;

/// @brief Method get_jumpDuration addr 0x2235cf4 size 0x1c virtual true final true
 float_t get_jumpDuration() ;

/// @brief Method get_jumpDistance addr 0x2235d10 size 0x1c virtual true final true
 float_t get_jumpDistance() ;

/// @brief Method get_verticalLayerDistance addr 0x2235d2c size 0x20 virtual true final true
 float_t get_verticalLayerDistance() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x2235d58 size 0x1c virtual true final true
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteLinesDistance addr 0x2235d74 size 0x20 virtual true final true
 float_t get_noteLinesDistance() ;

/// @brief Method get_beatmapObjectSpawnMovementData addr 0x2235da0 size 0x8 virtual true final true
 ::GlobalNamespace::BeatmapObjectSpawnMovementData get_beatmapObjectSpawnMovementData() ;

/// @brief Method get_isInitialized addr 0x2235da8 size 0x8 virtual true final true
 bool get_isInitialized() ;

/// @brief Method add_didInitEvent addr 0x2235db0 size 0x9c virtual true final true
 void add_didInitEvent(::System::Action value) ;

/// @brief Method remove_didInitEvent addr 0x2235e4c size 0x9c virtual true final true
 void remove_didInitEvent(::System::Action value) ;

/// @brief Method Start addr 0x2235ee8 size 0x384 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x22363bc size 0x58 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleObstacleDataCallback addr 0x2236414 size 0x110 virtual false final false
 void HandleObstacleDataCallback(::GlobalNamespace::ObstacleData obstacleData) ;

/// @brief Method HandleNoteDataCallback addr 0x2236694 size 0x108 virtual false final false
 void HandleNoteDataCallback(::GlobalNamespace::NoteData noteData) ;

/// @brief Method HandleSliderDataCallback addr 0x2236894 size 0x118 virtual false final false
 void HandleSliderDataCallback(::GlobalNamespace::SliderData sliderNoteData) ;

/// @brief Method HandleSpawnRotationCallback addr 0x2236b34 size 0x1c virtual false final false
 void HandleSpawnRotationCallback(::GlobalNamespace::SpawnRotationBeatmapEventData beatmapEventData) ;

/// @brief Method StopSpawning addr 0x2236b50 size 0xc virtual false final false
 void StopSpawning() ;

/// @brief Method Get2DNoteOffset addr 0x2236b5c size 0x24 virtual true final true
 ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset addr 0x2236b94 size 0x18 virtual true final true
 float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer) ;

// Ctor Parameters []
explicit BeatmapObjectSpawnController() ;

/// @brief Method .ctor addr 0x2236c1c size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnController, "", "BeatmapObjectSpawnController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData, "", "BeatmapObjectSpawnController/InitData");
