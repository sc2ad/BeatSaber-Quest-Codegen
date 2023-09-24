#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidancePathEvaluator;
}
// Type: ::BeatmapObjectAvoidancePathEvaluator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3942))
// CS Name: BeatmapObjectAvoidancePathEvaluator
class CORDL_TYPE BeatmapObjectAvoidancePathEvaluator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapObjectAvoidancePathEvaluator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidancePathEvaluator", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectAvoidancePathEvaluator(BeatmapObjectAvoidancePathEvaluator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidancePathEvaluator", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectAvoidancePathEvaluator(BeatmapObjectAvoidancePathEvaluator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectAvoidancePathEvaluator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectAvoidancePathEvaluator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectAvoidancePathEvaluator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectAvoidancePathEvaluator& operator=(BeatmapObjectAvoidancePathEvaluator&& o) noexcept = default;
  constexpr BeatmapObjectAvoidancePathEvaluator& operator=(BeatmapObjectAvoidancePathEvaluator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__jumpStartZ, put=__set__jumpStartZ))  _jumpStartZ;

constexpr void __set__jumpStartZ(float_t value) ;

constexpr float_t __get__jumpStartZ() const;

 float_t __declspec(property(get=__get__jumpEndZ, put=__set__jumpEndZ))  _jumpEndZ;

constexpr void __set__jumpEndZ(float_t value) ;

constexpr float_t __get__jumpEndZ() const;

 float_t __declspec(property(get=__get__zOffset, put=__set__zOffset))  _zOffset;

constexpr void __set__zOffset(float_t value) ;

constexpr float_t __get__zOffset() const;

 float_t __declspec(property(get=__get__yOffset, put=__set__yOffset))  _yOffset;

constexpr void __set__yOffset(float_t value) ;

constexpr float_t __get__yOffset() const;

 float_t __declspec(property(get=__get__noteJumpSpeed, put=__set__noteJumpSpeed))  _noteJumpSpeed;

constexpr void __set__noteJumpSpeed(float_t value) ;

constexpr float_t __get__noteJumpSpeed() const;

 float_t __declspec(property(get=__get__moveToPlayerHeadTParam, put=__set__moveToPlayerHeadTParam))  _moveToPlayerHeadTParam;

constexpr void __set__moveToPlayerHeadTParam(float_t value) ;

constexpr float_t __get__moveToPlayerHeadTParam() const;

 GlobalNamespace::BezierSplineEvaluator __declspec(property(get=__get__pathBezierCurveEvaluator, put=__set__pathBezierCurveEvaluator))  _pathBezierCurveEvaluator;

constexpr void __set__pathBezierCurveEvaluator(GlobalNamespace::BezierSplineEvaluator value) ;

constexpr GlobalNamespace::BezierSplineEvaluator __get__pathBezierCurveEvaluator() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;


// Methods

static GlobalNamespace::BeatmapObjectAvoidancePathEvaluator New_ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::PlayerTransforms playerTransforms, GlobalNamespace::BezierSplineEvaluator pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam) ;

/// @brief Method .ctor addr 0x20a48f4 size 0x78 virtual false final false
 void _ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::PlayerTransforms playerTransforms, GlobalNamespace::BezierSplineEvaluator pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam) ;

/// @brief Method GetCurrentPathPosition addr 0x20a496c size 0x104 virtual false final false
 UnityEngine::Vector3 GetCurrentPathPosition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, "", "BeatmapObjectAvoidancePathEvaluator");
