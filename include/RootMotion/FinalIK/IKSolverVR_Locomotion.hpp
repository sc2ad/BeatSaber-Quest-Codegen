// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: RootMotion.InterpolationMode
#include "RootMotion/InterpolationMode.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Locomotion
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::Locomotion : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [TooltipAttribute] Offset: 0xEF5A4C
    // [RangeAttribute] Offset: 0xEF5A4C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x10
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5AA0
    // public System.Single footDistance
    // Size: 0x4
    // Offset: 0x14
    float footDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5AD8
    // public System.Single stepThreshold
    // Size: 0x4
    // Offset: 0x18
    float stepThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5B10
    // public System.Single angleThreshold
    // Size: 0x4
    // Offset: 0x1C
    float angleThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5B48
    // public System.Single comAngleMlp
    // Size: 0x4
    // Offset: 0x20
    float comAngleMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5B80
    // public System.Single maxVelocity
    // Size: 0x4
    // Offset: 0x24
    float maxVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5BB8
    // public System.Single velocityFactor
    // Size: 0x4
    // Offset: 0x28
    float velocityFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5BF0
    // [RangeAttribute] Offset: 0xEF5BF0
    // public System.Single maxLegStretch
    // Size: 0x4
    // Offset: 0x2C
    float maxLegStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5C48
    // public System.Single rootSpeed
    // Size: 0x4
    // Offset: 0x30
    float rootSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5C80
    // public System.Single stepSpeed
    // Size: 0x4
    // Offset: 0x34
    float stepSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5CB8
    // public UnityEngine.AnimationCurve stepHeight
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* stepHeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xEF5CF0
    // public UnityEngine.AnimationCurve heelHeight
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* heelHeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xEF5D28
    // [RangeAttribute] Offset: 0xEF5D28
    // public System.Single relaxLegTwistMinAngle
    // Size: 0x4
    // Offset: 0x48
    float relaxLegTwistMinAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5D80
    // public System.Single relaxLegTwistSpeed
    // Size: 0x4
    // Offset: 0x4C
    float relaxLegTwistSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5DB8
    // public RootMotion.InterpolationMode stepInterpolation
    // Size: 0x4
    // Offset: 0x50
    RootMotion::InterpolationMode stepInterpolation;
    // Field size check
    static_assert(sizeof(RootMotion::InterpolationMode) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5DF0
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Boolean blockingEnabled
    // Size: 0x1
    // Offset: 0x60
    bool blockingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: blockingEnabled and: blockingLayers
    char __padding16[0x3] = {};
    // public UnityEngine.LayerMask blockingLayers
    // Size: 0x4
    // Offset: 0x64
    UnityEngine::LayerMask blockingLayers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // public System.Single raycastRadius
    // Size: 0x4
    // Offset: 0x68
    float raycastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single raycastHeight
    // Size: 0x4
    // Offset: 0x6C
    float raycastHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF5E68
    // public UnityEngine.Events.UnityEvent onLeftFootstep
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Events::UnityEvent* onLeftFootstep;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // [TooltipAttribute] Offset: 0xEF5EA0
    // public UnityEngine.Events.UnityEvent onRightFootstep
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Events::UnityEvent* onRightFootstep;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Vector3 <centerOfMass>k__BackingField
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 centerOfMass;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: centerOfMass and: footsteps
    char __padding22[0x4] = {};
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep[] footsteps
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<RootMotion::FinalIK::IKSolverVR::Footstep*> footsteps;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::IKSolverVR::Footstep*>) == 0x8);
    // private UnityEngine.Vector3 lastComPosition
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 lastComPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 comVelocity
    // Size: 0xC
    // Offset: 0xA4
    UnityEngine::Vector3 comVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 leftFootIndex
    // Size: 0x4
    // Offset: 0xB0
    int leftFootIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 rightFootIndex
    // Size: 0x4
    // Offset: 0xB4
    int rightFootIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: public System.Single footDistance
    float& dyn_footDistance();
    // Get instance field reference: public System.Single stepThreshold
    float& dyn_stepThreshold();
    // Get instance field reference: public System.Single angleThreshold
    float& dyn_angleThreshold();
    // Get instance field reference: public System.Single comAngleMlp
    float& dyn_comAngleMlp();
    // Get instance field reference: public System.Single maxVelocity
    float& dyn_maxVelocity();
    // Get instance field reference: public System.Single velocityFactor
    float& dyn_velocityFactor();
    // Get instance field reference: public System.Single maxLegStretch
    float& dyn_maxLegStretch();
    // Get instance field reference: public System.Single rootSpeed
    float& dyn_rootSpeed();
    // Get instance field reference: public System.Single stepSpeed
    float& dyn_stepSpeed();
    // Get instance field reference: public UnityEngine.AnimationCurve stepHeight
    UnityEngine::AnimationCurve*& dyn_stepHeight();
    // Get instance field reference: public UnityEngine.AnimationCurve heelHeight
    UnityEngine::AnimationCurve*& dyn_heelHeight();
    // Get instance field reference: public System.Single relaxLegTwistMinAngle
    float& dyn_relaxLegTwistMinAngle();
    // Get instance field reference: public System.Single relaxLegTwistSpeed
    float& dyn_relaxLegTwistSpeed();
    // Get instance field reference: public RootMotion.InterpolationMode stepInterpolation
    RootMotion::InterpolationMode& dyn_stepInterpolation();
    // Get instance field reference: public UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: public System.Boolean blockingEnabled
    bool& dyn_blockingEnabled();
    // Get instance field reference: public UnityEngine.LayerMask blockingLayers
    UnityEngine::LayerMask& dyn_blockingLayers();
    // Get instance field reference: public System.Single raycastRadius
    float& dyn_raycastRadius();
    // Get instance field reference: public System.Single raycastHeight
    float& dyn_raycastHeight();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onLeftFootstep
    UnityEngine::Events::UnityEvent*& dyn_onLeftFootstep();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onRightFootstep
    UnityEngine::Events::UnityEvent*& dyn_onRightFootstep();
    // Get instance field reference: private UnityEngine.Vector3 <centerOfMass>k__BackingField
    UnityEngine::Vector3& dyn_$centerOfMass$k__BackingField();
    // Get instance field reference: private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep[] footsteps
    ::ArrayW<RootMotion::FinalIK::IKSolverVR::Footstep*>& dyn_footsteps();
    // Get instance field reference: private UnityEngine.Vector3 lastComPosition
    UnityEngine::Vector3& dyn_lastComPosition();
    // Get instance field reference: private UnityEngine.Vector3 comVelocity
    UnityEngine::Vector3& dyn_comVelocity();
    // Get instance field reference: private System.Int32 leftFootIndex
    int& dyn_leftFootIndex();
    // Get instance field reference: private System.Int32 rightFootIndex
    int& dyn_rightFootIndex();
    // public UnityEngine.Vector3 get_centerOfMass()
    // Offset: 0x1FDFAC4
    UnityEngine::Vector3 get_centerOfMass();
    // private System.Void set_centerOfMass(UnityEngine.Vector3 value)
    // Offset: 0x1FDFAD0
    void set_centerOfMass(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_leftFootstepPosition()
    // Offset: 0x1FE1FAC
    UnityEngine::Vector3 get_leftFootstepPosition();
    // public UnityEngine.Vector3 get_rightFootstepPosition()
    // Offset: 0x1FE1FEC
    UnityEngine::Vector3 get_rightFootstepPosition();
    // public UnityEngine.Quaternion get_leftFootstepRotation()
    // Offset: 0x1FE2030
    UnityEngine::Quaternion get_leftFootstepRotation();
    // public UnityEngine.Quaternion get_rightFootstepRotation()
    // Offset: 0x1FE2070
    UnityEngine::Quaternion get_rightFootstepRotation();
    // public System.Void Initiate(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasToes)
    // Offset: 0x1FDFADC
    void Initiate(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasToes);
    // public System.Void Reset(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations)
    // Offset: 0x1FDFDD4
    void Reset(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations);
    // public System.Void AddDeltaRotation(UnityEngine.Quaternion delta, UnityEngine.Vector3 pivot)
    // Offset: 0x1FE0048
    void AddDeltaRotation(UnityEngine::Quaternion delta, UnityEngine::Vector3 pivot);
    // public System.Void AddDeltaPosition(UnityEngine.Vector3 delta)
    // Offset: 0x1FE0420
    void AddDeltaPosition(UnityEngine::Vector3 delta);
    // public System.Void Solve(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone rootBone, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Spine spine, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg leftLeg, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg rightLeg, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm leftArm, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm rightArm, System.Int32 supportLegIndex, out UnityEngine.Vector3 leftFootPosition, out UnityEngine.Vector3 rightFootPosition, out UnityEngine.Quaternion leftFootRotation, out UnityEngine.Quaternion rightFootRotation, out System.Single leftFootOffset, out System.Single rightFootOffset, out System.Single leftHeelOffset, out System.Single rightHeelOffset)
    // Offset: 0x1FE05D0
    void Solve(RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone, RootMotion::FinalIK::IKSolverVR::Spine* spine, RootMotion::FinalIK::IKSolverVR::Leg* leftLeg, RootMotion::FinalIK::IKSolverVR::Leg* rightLeg, RootMotion::FinalIK::IKSolverVR::Arm* leftArm, RootMotion::FinalIK::IKSolverVR::Arm* rightArm, int supportLegIndex, ByRef<UnityEngine::Vector3> leftFootPosition, ByRef<UnityEngine::Vector3> rightFootPosition, ByRef<UnityEngine::Quaternion> leftFootRotation, ByRef<UnityEngine::Quaternion> rightFootRotation, ByRef<float> leftFootOffset, ByRef<float> rightFootOffset, ByRef<float> leftHeelOffset, ByRef<float> rightHeelOffset);
    // private System.Boolean StepBlocked(UnityEngine.Vector3 fromPosition, UnityEngine.Vector3 toPosition, UnityEngine.Vector3 rootPosition)
    // Offset: 0x1FE1BB8
    bool StepBlocked(UnityEngine::Vector3 fromPosition, UnityEngine::Vector3 toPosition, UnityEngine::Vector3 rootPosition);
    // private System.Boolean CanStep()
    // Offset: 0x1FE1D5C
    bool CanStep();
    // static private System.Boolean GetLineSphereCollision(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x1FE1DE0
    static bool GetLineSphereCollision(UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // public System.Void .ctor()
    // Offset: 0x1FE20B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Locomotion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Locomotion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Locomotion*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Locomotion
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Locomotion), 180 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_LocomotionSizeCheck;
  static_assert(sizeof(IKSolverVR::Locomotion) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Locomotion*, "RootMotion.FinalIK", "IKSolverVR/Locomotion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_centerOfMass
// Il2CppName: get_centerOfMass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_centerOfMass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_centerOfMass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::set_centerOfMass
// Il2CppName: set_centerOfMass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::set_centerOfMass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "set_centerOfMass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepPosition
// Il2CppName: get_leftFootstepPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_leftFootstepPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepPosition
// Il2CppName: get_rightFootstepPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_rightFootstepPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepRotation
// Il2CppName: get_leftFootstepRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_leftFootstepRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepRotation
// Il2CppName: get_rightFootstepRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_rightFootstepRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::Initiate)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasToes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::Reset)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaRotation
// Il2CppName: AddDeltaRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaRotation)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* pivot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "AddDeltaRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, pivot});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaPosition
// Il2CppName: AddDeltaPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaPosition)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "AddDeltaPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(RootMotion::FinalIK::IKSolverVR::VirtualBone*, RootMotion::FinalIK::IKSolverVR::Spine*, RootMotion::FinalIK::IKSolverVR::Leg*, RootMotion::FinalIK::IKSolverVR::Leg*, RootMotion::FinalIK::IKSolverVR::Arm*, RootMotion::FinalIK::IKSolverVR::Arm*, int, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>, ByRef<UnityEngine::Quaternion>, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::Solve)> {
  static const MethodInfo* get() {
    static auto* rootBone = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    static auto* spine = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Spine")->byval_arg;
    static auto* leftLeg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Leg")->byval_arg;
    static auto* rightLeg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Leg")->byval_arg;
    static auto* leftArm = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Arm")->byval_arg;
    static auto* rightArm = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Arm")->byval_arg;
    static auto* supportLegIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* leftFootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rightFootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* leftFootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* rightFootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* leftFootOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* rightFootOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* leftHeelOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* rightHeelOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootBone, spine, leftLeg, rightLeg, leftArm, rightArm, supportLegIndex, leftFootPosition, rightFootPosition, leftFootRotation, rightFootRotation, leftFootOffset, rightFootOffset, leftHeelOffset, rightHeelOffset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::StepBlocked
// Il2CppName: StepBlocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::StepBlocked)> {
  static const MethodInfo* get() {
    static auto* fromPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "StepBlocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPosition, toPosition, rootPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::CanStep
// Il2CppName: CanStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::CanStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "CanStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::GetLineSphereCollision
// Il2CppName: GetLineSphereCollision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::GetLineSphereCollision)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "GetLineSphereCollision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, sphereCenter, sphereRadius});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
