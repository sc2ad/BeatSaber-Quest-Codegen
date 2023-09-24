#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
// Type: ::BeatmapObjectAvoidanceTiltEvaluator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3943))
// CS Name: BeatmapObjectAvoidanceTiltEvaluator
class CORDL_TYPE BeatmapObjectAvoidanceTiltEvaluator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapObjectAvoidanceTiltEvaluator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidanceTiltEvaluator", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectAvoidanceTiltEvaluator(BeatmapObjectAvoidanceTiltEvaluator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectAvoidanceTiltEvaluator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectAvoidanceTiltEvaluator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectAvoidanceTiltEvaluator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectAvoidanceTiltEvaluator& operator=(BeatmapObjectAvoidanceTiltEvaluator&& o) noexcept = default;
  constexpr BeatmapObjectAvoidanceTiltEvaluator& operator=(BeatmapObjectAvoidanceTiltEvaluator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 UnityEngine::Vector2 __declspec(property(get=__get__gravity, put=__set__gravity))  _gravity;

constexpr void __set__gravity(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__gravity() const;

 UnityEngine::Vector2 __declspec(property(get=__get__normalizedGravity, put=__set__normalizedGravity))  _normalizedGravity;

constexpr void __set__normalizedGravity(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__normalizedGravity() const;

 GlobalNamespace::BezierSplineEvaluator __declspec(property(get=__get__bezierSplineEvaluator, put=__set__bezierSplineEvaluator))  _bezierSplineEvaluator;

constexpr void __set__bezierSplineEvaluator(GlobalNamespace::BezierSplineEvaluator value) ;

constexpr GlobalNamespace::BezierSplineEvaluator __get__bezierSplineEvaluator() const;

 float_t __declspec(property(get=__get__currentAcceleration, put=__set__currentAcceleration))  _currentAcceleration;

constexpr void __set__currentAcceleration(float_t value) ;

constexpr float_t __get__currentAcceleration() const;

/// @brief Field kLookAheadTime offset 0
static constexpr float_t  kLookAheadTime{0.2};


// Methods

static GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator New_ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BezierSplineEvaluator bezierSplineEvaluator, UnityEngine::Vector2 gravity) ;

/// @brief Method .ctor addr 0x20a4a88 size 0xe0 virtual false final false
 void _ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BezierSplineEvaluator bezierSplineEvaluator, UnityEngine::Vector2 gravity) ;

/// @brief Method GetTiltAngle addr 0x20a4b68 size 0x2cc virtual false final false
 float_t GetTiltAngle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator, "", "BeatmapObjectAvoidanceTiltEvaluator");
