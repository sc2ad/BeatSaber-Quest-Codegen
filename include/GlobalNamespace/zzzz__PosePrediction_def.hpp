#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PosePrediction;
}
// Type: ::PosePrediction
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12915))
// CS Name: PosePrediction
class CORDL_TYPE PosePrediction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PosePrediction() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosePrediction", modifiers: " const&", def_value: None }]
constexpr PosePrediction(PosePrediction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosePrediction", modifiers: "&&", def_value: None }]
constexpr PosePrediction(PosePrediction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosePrediction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PosePrediction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosePrediction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosePrediction& operator=(PosePrediction&& o) noexcept = default;
  constexpr PosePrediction& operator=(PosePrediction const& o) noexcept = default;
                


// Methods

/// @brief Method PredictPose addr 0xdccf04 size 0xb4 virtual false final false
static UnityEngine::Pose PredictPose(UnityEngine::Pose prev, float_t prevTime, UnityEngine::Pose curr, float_t currTime, float_t time) ;

/// @brief Method InterpolatePose addr 0xdccfb8 size 0x2cc virtual false final false
static UnityEngine::Pose InterpolatePose(UnityEngine::Pose prev, UnityEngine::Pose curr, float_t t) ;

/// @brief Method PredictPoseSerializable addr 0xdcd284 size 0xe0 virtual false final false
static GlobalNamespace::PoseSerializable PredictPoseSerializable(GlobalNamespace::PoseSerializable prev, float_t prevTime, GlobalNamespace::PoseSerializable curr, float_t currTime, float_t time) ;

/// @brief Method InterpolatePoseSerializable addr 0xdcd364 size 0xf0 virtual false final false
static GlobalNamespace::PoseSerializable InterpolatePoseSerializable(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float_t t) ;

static GlobalNamespace::PosePrediction New_ctor() ;

/// @brief Method .ctor addr 0xdcd454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PosePrediction);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosePrediction, "", "PosePrediction");
