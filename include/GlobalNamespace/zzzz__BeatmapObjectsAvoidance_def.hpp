#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidancePathEvaluator;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectsAvoidance;
}
// Type: ::BeatmapObjectsAvoidance
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3946))
// CS Name: BeatmapObjectsAvoidance
class CORDL_TYPE BeatmapObjectsAvoidance : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BeatmapObjectsAvoidance() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsAvoidance", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectsAvoidance(BeatmapObjectsAvoidance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsAvoidance", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectsAvoidance(BeatmapObjectsAvoidance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectsAvoidance(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapObjectsAvoidance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectsAvoidance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectsAvoidance& operator=(BeatmapObjectsAvoidance&& o) noexcept = default;
  constexpr BeatmapObjectsAvoidance& operator=(BeatmapObjectsAvoidance const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__zOffset, put=__set__zOffset))  _zOffset;

constexpr void __set__zOffset(float_t value) ;

constexpr float_t __get__zOffset() const;

 float_t __declspec(property(get=__get__yOffset, put=__set__yOffset))  _yOffset;

constexpr void __set__yOffset(float_t value) ;

constexpr float_t __get__yOffset() const;

 UnityEngine::Vector2 __declspec(property(get=__get__gravity, put=__set__gravity))  _gravity;

constexpr void __set__gravity(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__gravity() const;

 UnityEngine::Transform __declspec(property(get=__get__towardsPlayerWrapperTransform, put=__set__towardsPlayerWrapperTransform))  _towardsPlayerWrapperTransform;

constexpr void __set__towardsPlayerWrapperTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__towardsPlayerWrapperTransform() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get__beatmapData() const;

 GlobalNamespace::IBeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::IBeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator __declspec(property(get=__get__avoidanceYOffsetEvaluatorProvider, put=__set__avoidanceYOffsetEvaluatorProvider))  _avoidanceYOffsetEvaluatorProvider;

constexpr void __set__avoidanceYOffsetEvaluatorProvider(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator value) ;

constexpr GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator __get__avoidanceYOffsetEvaluatorProvider() const;

 GlobalNamespace::BeatmapObjectAvoidancePathEvaluator __declspec(property(get=__get__pathEvaluator, put=__set__pathEvaluator))  _pathEvaluator;

constexpr void __set__pathEvaluator(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator value) ;

constexpr GlobalNamespace::BeatmapObjectAvoidancePathEvaluator __get__pathEvaluator() const;

 GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator __declspec(property(get=__get__tiltEvaluator, put=__set__tiltEvaluator))  _tiltEvaluator;

constexpr void __set__tiltEvaluator(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator value) ;

constexpr GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator __get__tiltEvaluator() const;

 GlobalNamespace::BezierSplineEvaluator __declspec(property(get=__get__pathBezierSplineEvaluator, put=__set__pathBezierSplineEvaluator))  _pathBezierSplineEvaluator;

constexpr void __set__pathBezierSplineEvaluator(GlobalNamespace::BezierSplineEvaluator value) ;

constexpr GlobalNamespace::BezierSplineEvaluator __get__pathBezierSplineEvaluator() const;

 GlobalNamespace::BezierSplineEvaluator __declspec(property(get=__get__accelerationBezierSplineEvaluator, put=__set__accelerationBezierSplineEvaluator))  _accelerationBezierSplineEvaluator;

constexpr void __set__accelerationBezierSplineEvaluator(GlobalNamespace::BezierSplineEvaluator value) ;

constexpr GlobalNamespace::BezierSplineEvaluator __get__accelerationBezierSplineEvaluator() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Awake addr 0x20a5418 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20a5434 size 0x184 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20a5978 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20a5a80 size 0x190 virtual false final false
 void Update() ;

/// @brief Method SetupAndRun addr 0x20a55b8 size 0x3c0 virtual false final false
 void SetupAndRun() ;

/// @brief Method BuildAnimationCurvePath addr 0x20a5c10 size 0x584 virtual false final false
 bool BuildAnimationCurvePath() ;

/// @brief Method AdjustPositionWithOffsetDirection addr 0x20a6254 size 0x2f0 virtual false final false
 void AdjustPositionWithOffsetDirection(ByRef<UnityEngine::Vector2> position, int32_t lineIndex, GlobalNamespace::OffsetDirection offsetDirection) ;

/// @brief Method HandleBeatmapObjectSpawnControllerDidInit addr 0x20a6da4 size 0x4 virtual false final false
 void HandleBeatmapObjectSpawnControllerDidInit() ;

static GlobalNamespace::BeatmapObjectsAvoidance New_ctor() ;

/// @brief Method .ctor addr 0x20a6da8 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectsAvoidance);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsAvoidance, "", "BeatmapObjectsAvoidance");
