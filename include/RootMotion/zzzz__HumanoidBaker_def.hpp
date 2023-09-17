#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "RootMotion/zzzz__Baker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class HumanPoseHandler;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct HumanPose;
}
namespace RootMotion {
class BakerHumanoidQT;
}
namespace RootMotion {
class BakerMuscle;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace RootMotion {
class HumanoidBaker;
}
// Type: RootMotion::HumanoidBaker
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12421))
// CS Name: RootMotion.HumanoidBaker
class CORDL_TYPE HumanoidBaker : public ::RootMotion::Baker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~HumanoidBaker() = default;

// Ctor Parameters [CppParam { name: "", ty: "HumanoidBaker", modifiers: " const&", def_value: None }]
constexpr HumanoidBaker(HumanoidBaker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HumanoidBaker", modifiers: "&&", def_value: None }]
constexpr HumanoidBaker(HumanoidBaker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HumanoidBaker(void* ptr) noexcept : ::RootMotion::Baker(ptr) {
}


  constexpr HumanoidBaker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HumanoidBaker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HumanoidBaker& operator=(HumanoidBaker&& o) noexcept = default;
  constexpr HumanoidBaker& operator=(HumanoidBaker const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_bakeHandIK, put=__set_bakeHandIK))  bakeHandIK;

constexpr void __set_bakeHandIK(bool value) ;

constexpr bool __get_bakeHandIK() const;

 float_t __declspec(property(get=__get_IKKeyReductionError, put=__set_IKKeyReductionError))  IKKeyReductionError;

constexpr void __set_IKKeyReductionError(float_t value) ;

constexpr float_t __get_IKKeyReductionError() const;

 int32_t __declspec(property(get=__get_muscleFrameRateDiv, put=__set_muscleFrameRateDiv))  muscleFrameRateDiv;

constexpr void __set_muscleFrameRateDiv(int32_t value) ;

constexpr int32_t __get_muscleFrameRateDiv() const;

 ::ArrayW<::RootMotion::BakerMuscle> __declspec(property(get=__get_bakerMuscles, put=__set_bakerMuscles))  bakerMuscles;

constexpr void __set_bakerMuscles(::ArrayW<::RootMotion::BakerMuscle> value) ;

constexpr ::ArrayW<::RootMotion::BakerMuscle> __get_bakerMuscles() const;

 ::RootMotion::BakerHumanoidQT __declspec(property(get=__get_rootQT, put=__set_rootQT))  rootQT;

constexpr void __set_rootQT(::RootMotion::BakerHumanoidQT value) ;

constexpr ::RootMotion::BakerHumanoidQT __get_rootQT() const;

 ::RootMotion::BakerHumanoidQT __declspec(property(get=__get_leftFootQT, put=__set_leftFootQT))  leftFootQT;

constexpr void __set_leftFootQT(::RootMotion::BakerHumanoidQT value) ;

constexpr ::RootMotion::BakerHumanoidQT __get_leftFootQT() const;

 ::RootMotion::BakerHumanoidQT __declspec(property(get=__get_rightFootQT, put=__set_rightFootQT))  rightFootQT;

constexpr void __set_rightFootQT(::RootMotion::BakerHumanoidQT value) ;

constexpr ::RootMotion::BakerHumanoidQT __get_rightFootQT() const;

 ::RootMotion::BakerHumanoidQT __declspec(property(get=__get_leftHandQT, put=__set_leftHandQT))  leftHandQT;

constexpr void __set_leftHandQT(::RootMotion::BakerHumanoidQT value) ;

constexpr ::RootMotion::BakerHumanoidQT __get_leftHandQT() const;

 ::RootMotion::BakerHumanoidQT __declspec(property(get=__get_rightHandQT, put=__set_rightHandQT))  rightHandQT;

constexpr void __set_rightHandQT(::RootMotion::BakerHumanoidQT value) ;

constexpr ::RootMotion::BakerHumanoidQT __get_rightHandQT() const;

 ::ArrayW<float_t> __declspec(property(get=__get_muscles, put=__set_muscles))  muscles;

constexpr void __set_muscles(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_muscles() const;

 ::UnityEngine::HumanPose __declspec(property(get=__get_pose, put=__set_pose))  pose;

constexpr void __set_pose(::UnityEngine::HumanPose value) ;

constexpr ::UnityEngine::HumanPose __get_pose() const;

 ::UnityEngine::HumanPoseHandler __declspec(property(get=__get_handler, put=__set_handler))  handler;

constexpr void __set_handler(::UnityEngine::HumanPoseHandler value) ;

constexpr ::UnityEngine::HumanPoseHandler __get_handler() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_bodyPosition, put=__set_bodyPosition))  bodyPosition;

constexpr void __set_bodyPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_bodyPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_bodyRotation, put=__set_bodyRotation))  bodyRotation;

constexpr void __set_bodyRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_bodyRotation() const;

 int32_t __declspec(property(get=__get_mN, put=__set_mN))  mN;

constexpr void __set_mN(int32_t value) ;

constexpr int32_t __get_mN() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_lastBodyRotation, put=__set_lastBodyRotation))  lastBodyRotation;

constexpr void __set_lastBodyRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_lastBodyRotation() const;


// Methods

/// @brief Method Awake addr 0x11aa670 size 0x4b8 virtual false final false
 void Awake() ;

/// @brief Method GetCharacterRoot addr 0x11aab28 size 0x1c virtual true final false
 ::UnityEngine::Transform GetCharacterRoot() ;

/// @brief Method OnStartBaking addr 0x11aab44 size 0xdc virtual true final false
 void OnStartBaking() ;

/// @brief Method OnSetLoopFrame addr 0x11aac20 size 0xbc virtual true final false
 void OnSetLoopFrame(float_t time) ;

/// @brief Method OnSetCurves addr 0x11aacdc size 0x1a0 virtual true final false
 void OnSetCurves(ByRef<::UnityEngine::AnimationClip> clip) ;

/// @brief Method OnSetKeyframes addr 0x11aae7c size 0x2a4 virtual true final false
 void OnSetKeyframes(float_t time, bool lastFrame) ;

/// @brief Method UpdateHumanPose addr 0x11ab120 size 0xd8 virtual false final false
 void UpdateHumanPose() ;

// Ctor Parameters []
explicit HumanoidBaker() ;

/// @brief Method .ctor addr 0x11ab1f8 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::HumanoidBaker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::HumanoidBaker, "RootMotion", "HumanoidBaker");
