// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
  // Skipping declaration: Foot because it is already included!
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: GrounderQuadruped
  class GrounderQuadruped;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::GrounderQuadruped);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderQuadruped*, "RootMotion.FinalIK", "GrounderQuadruped");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x140
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 1136EA4
  // [AddComponentMenu] Offset: 1136EA4
  class GrounderQuadruped : public ::RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: ::RootMotion::FinalIK::GrounderQuadruped::Foot
    struct Foot;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped/RootMotion.FinalIK.Foot
    // [TokenAttribute] Offset: FFFFFFFF
    struct Foot/*, public ::System::ValueType*/ {
      public:
      public:
      // public RootMotion.FinalIK.IKSolver solver
      // Size: 0x8
      // Offset: 0x0
      ::RootMotion::FinalIK::IKSolver* solver;
      // Field size check
      static_assert(sizeof(::RootMotion::FinalIK::IKSolver*) == 0x8);
      // public UnityEngine.Transform transform
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Transform* transform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // public UnityEngine.Quaternion rotation
      // Size: 0x10
      // Offset: 0x10
      ::UnityEngine::Quaternion rotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
      // public RootMotion.FinalIK.Grounding/RootMotion.FinalIK.Leg leg
      // Size: 0x8
      // Offset: 0x20
      ::RootMotion::FinalIK::Grounding::Leg* leg;
      // Field size check
      static_assert(sizeof(::RootMotion::FinalIK::Grounding::Leg*) == 0x8);
      public:
      // Creating value type constructor for type: Foot
      constexpr Foot(::RootMotion::FinalIK::IKSolver* solver_ = {}, ::UnityEngine::Transform* transform_ = {}, ::UnityEngine::Quaternion rotation_ = {}, ::RootMotion::FinalIK::Grounding::Leg* leg_ = {}) noexcept : solver{solver_}, transform{transform_}, rotation{rotation_}, leg{leg_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public RootMotion.FinalIK.IKSolver solver
      [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver*& dyn_solver();
      // Get instance field reference: public UnityEngine.Transform transform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
      // Get instance field reference: public UnityEngine.Quaternion rotation
      [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
      // Get instance field reference: public RootMotion.FinalIK.Grounding/RootMotion.FinalIK.Leg leg
      [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::Grounding::Leg*& dyn_leg();
      // public System.Void .ctor(RootMotion.FinalIK.IKSolver solver, UnityEngine.Transform transform)
      // Offset: 0x22F7458
      Foot(::RootMotion::FinalIK::IKSolver* solver, ::UnityEngine::Transform* transform);
    }; // RootMotion.FinalIK.GrounderQuadruped/RootMotion.FinalIK.Foot
    #pragma pack(pop)
    static check_size<sizeof(GrounderQuadruped::Foot), 32 + sizeof(::RootMotion::FinalIK::Grounding::Leg*)> __RootMotion_FinalIK_GrounderQuadruped_FootSizeCheck;
    static_assert(sizeof(GrounderQuadruped::Foot) == 0x28);
    public:
    // [TooltipAttribute] Offset: 0x1138368
    // public RootMotion.FinalIK.Grounding forelegSolver
    // Size: 0x8
    // Offset: 0x40
    ::RootMotion::FinalIK::Grounding* forelegSolver;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::Grounding*) == 0x8);
    // [TooltipAttribute] Offset: 0x11383A0
    // [RangeAttribute] Offset: 0x11383A0
    // public System.Single rootRotationWeight
    // Size: 0x4
    // Offset: 0x48
    float rootRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x11383F4
    // [RangeAttribute] Offset: 0x11383F4
    // public System.Single minRootRotation
    // Size: 0x4
    // Offset: 0x4C
    float minRootRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x113844C
    // [RangeAttribute] Offset: 0x113844C
    // public System.Single maxRootRotation
    // Size: 0x4
    // Offset: 0x50
    float maxRootRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x11384A4
    // public System.Single rootRotationSpeed
    // Size: 0x4
    // Offset: 0x54
    float rootRotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x11384DC
    // public System.Single maxLegOffset
    // Size: 0x4
    // Offset: 0x58
    float maxLegOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1138514
    // public System.Single maxForeLegOffset
    // Size: 0x4
    // Offset: 0x5C
    float maxForeLegOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x113854C
    // [RangeAttribute] Offset: 0x113854C
    // public System.Single maintainHeadRotationWeight
    // Size: 0x4
    // Offset: 0x60
    float maintainHeadRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maintainHeadRotationWeight and: characterRoot
    char __padding7[0x4] = {};
    // [TooltipAttribute] Offset: 0x11385A0
    // public UnityEngine.Transform characterRoot
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* characterRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x11385D8
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x1138610
    // public UnityEngine.Transform lastSpineBone
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Transform* lastSpineBone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x1138648
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public RootMotion.FinalIK.IK[] legs
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::RootMotion::FinalIK::IK*> legs;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IK*>) == 0x8);
    // public RootMotion.FinalIK.IK[] forelegs
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::RootMotion::FinalIK::IK*> forelegs;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IK*>) == 0x8);
    // public UnityEngine.Vector3 gravity
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::Vector3 gravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: gravity and: feet
    char __padding14[0x4] = {};
    // private RootMotion.FinalIK.GrounderQuadruped/RootMotion.FinalIK.Foot[] feet
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<::RootMotion::FinalIK::GrounderQuadruped::Foot> feet;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::GrounderQuadruped::Foot>) == 0x8);
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0xB0
    ::UnityEngine::Vector3 animatedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion animatedPelvisLocalRotation
    // Size: 0x10
    // Offset: 0xBC
    ::UnityEngine::Quaternion animatedPelvisLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion animatedHeadLocalRotation
    // Size: 0x10
    // Offset: 0xCC
    ::UnityEngine::Quaternion animatedHeadLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0xDC
    ::UnityEngine::Vector3 solvedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion solvedPelvisLocalRotation
    // Size: 0x10
    // Offset: 0xE8
    ::UnityEngine::Quaternion solvedPelvisLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion solvedHeadLocalRotation
    // Size: 0x10
    // Offset: 0xF8
    ::UnityEngine::Quaternion solvedHeadLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Int32 solvedFeet
    // Size: 0x4
    // Offset: 0x108
    int solvedFeet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean solved
    // Size: 0x1
    // Offset: 0x10C
    bool solved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: solved and: angle
    char __padding23[0x3] = {};
    // private System.Single angle
    // Size: 0x4
    // Offset: 0x110
    float angle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: angle and: forefeetRoot
    char __padding24[0x4] = {};
    // private UnityEngine.Transform forefeetRoot
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::Transform* forefeetRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion headRotation
    // Size: 0x10
    // Offset: 0x120
    ::UnityEngine::Quaternion headRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single lastWeight
    // Size: 0x4
    // Offset: 0x130
    float lastWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastWeight and: characterRootRigidbody
    char __padding27[0x4] = {};
    // private UnityEngine.Rigidbody characterRootRigidbody
    // Size: 0x8
    // Offset: 0x138
    ::UnityEngine::Rigidbody* characterRootRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.Grounding forelegSolver
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::Grounding*& dyn_forelegSolver();
    // Get instance field reference: public System.Single rootRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_rootRotationWeight();
    // Get instance field reference: public System.Single minRootRotation
    [[deprecated("Use field access instead!")]] float& dyn_minRootRotation();
    // Get instance field reference: public System.Single maxRootRotation
    [[deprecated("Use field access instead!")]] float& dyn_maxRootRotation();
    // Get instance field reference: public System.Single rootRotationSpeed
    [[deprecated("Use field access instead!")]] float& dyn_rootRotationSpeed();
    // Get instance field reference: public System.Single maxLegOffset
    [[deprecated("Use field access instead!")]] float& dyn_maxLegOffset();
    // Get instance field reference: public System.Single maxForeLegOffset
    [[deprecated("Use field access instead!")]] float& dyn_maxForeLegOffset();
    // Get instance field reference: public System.Single maintainHeadRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_maintainHeadRotationWeight();
    // Get instance field reference: public UnityEngine.Transform characterRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_characterRoot();
    // Get instance field reference: public UnityEngine.Transform pelvis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pelvis();
    // Get instance field reference: public UnityEngine.Transform lastSpineBone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_lastSpineBone();
    // Get instance field reference: public UnityEngine.Transform head
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_head();
    // Get instance field reference: public RootMotion.FinalIK.IK[] legs
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IK*>& dyn_legs();
    // Get instance field reference: public RootMotion.FinalIK.IK[] forelegs
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IK*>& dyn_forelegs();
    // Get instance field reference: public UnityEngine.Vector3 gravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_gravity();
    // Get instance field reference: private RootMotion.FinalIK.GrounderQuadruped/RootMotion.FinalIK.Foot[] feet
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::GrounderQuadruped::Foot>& dyn_feet();
    // Get instance field reference: private UnityEngine.Vector3 animatedPelvisLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_animatedPelvisLocalPosition();
    // Get instance field reference: private UnityEngine.Quaternion animatedPelvisLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_animatedPelvisLocalRotation();
    // Get instance field reference: private UnityEngine.Quaternion animatedHeadLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_animatedHeadLocalRotation();
    // Get instance field reference: private UnityEngine.Vector3 solvedPelvisLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_solvedPelvisLocalPosition();
    // Get instance field reference: private UnityEngine.Quaternion solvedPelvisLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_solvedPelvisLocalRotation();
    // Get instance field reference: private UnityEngine.Quaternion solvedHeadLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_solvedHeadLocalRotation();
    // Get instance field reference: private System.Int32 solvedFeet
    [[deprecated("Use field access instead!")]] int& dyn_solvedFeet();
    // Get instance field reference: private System.Boolean solved
    [[deprecated("Use field access instead!")]] bool& dyn_solved();
    // Get instance field reference: private System.Single angle
    [[deprecated("Use field access instead!")]] float& dyn_angle();
    // Get instance field reference: private UnityEngine.Transform forefeetRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_forefeetRoot();
    // Get instance field reference: private UnityEngine.Quaternion headRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_headRotation();
    // Get instance field reference: private System.Single lastWeight
    [[deprecated("Use field access instead!")]] float& dyn_lastWeight();
    // Get instance field reference: private UnityEngine.Rigidbody characterRootRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_characterRootRigidbody();
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x22F6A28
    bool IsReadyToInitiate();
    // private System.Boolean IsReadyToInitiateLegs(RootMotion.FinalIK.IK[] ikComponents)
    // Offset: 0x22F6B58
    bool IsReadyToInitiateLegs(::ArrayW<::RootMotion::FinalIK::IK*> ikComponents);
    // private System.Void OnDisable()
    // Offset: 0x22F6D18
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x22F6D80
    void Update();
    // private System.Void Initiate()
    // Offset: 0x22F6E38
    void Initiate();
    // private UnityEngine.Transform[] InitiateFeet(RootMotion.FinalIK.IK[] ikComponents, ref RootMotion.FinalIK.GrounderQuadruped/RootMotion.FinalIK.Foot[] f, System.Int32 indexOffset)
    // Offset: 0x22F7138
    ::ArrayW<::UnityEngine::Transform*> InitiateFeet(::ArrayW<::RootMotion::FinalIK::IK*> ikComponents, ByRef<::ArrayW<::RootMotion::FinalIK::GrounderQuadruped::Foot>> f, int indexOffset);
    // private System.Void LateUpdate()
    // Offset: 0x22F7498
    void LateUpdate();
    // private System.Void RootRotation()
    // Offset: 0x22F75E4
    void RootRotation();
    // private System.Void OnSolverUpdate()
    // Offset: 0x22F7A88
    void OnSolverUpdate();
    // private System.Void UpdateForefeetRoot()
    // Offset: 0x22F8278
    void UpdateForefeetRoot();
    // private System.Void SetFootIK(RootMotion.FinalIK.GrounderQuadruped/RootMotion.FinalIK.Foot foot, System.Single maxOffset)
    // Offset: 0x22F8538
    void SetFootIK(::RootMotion::FinalIK::GrounderQuadruped::Foot foot, float maxOffset);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x22F8698
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x22F8974
    void OnDestroy();
    // private System.Void DestroyLegs(RootMotion.FinalIK.IK[] ikComponents)
    // Offset: 0x22F89AC
    void DestroyLegs(::ArrayW<::RootMotion::FinalIK::IK*> ikComponents);
    // public System.Void .ctor()
    // Offset: 0x22F8B6C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderQuadruped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::GrounderQuadruped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderQuadruped*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x22F695C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x22F69A8
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x22F69F4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
  }; // RootMotion.FinalIK.GrounderQuadruped
  #pragma pack(pop)
  static check_size<sizeof(GrounderQuadruped), 312 + sizeof(::UnityEngine::Rigidbody*)> __RootMotion_FinalIK_GrounderQuadrupedSizeCheck;
  static_assert(sizeof(GrounderQuadruped) == 0x140);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderQuadruped::Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate
// Il2CppName: IsReadyToInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "IsReadyToInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs
// Il2CppName: IsReadyToInitiateLegs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK*>)>(&RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs)> {
  static const MethodInfo* get() {
    static auto* ikComponents = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IK"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "IsReadyToInitiateLegs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ikComponents});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::InitiateFeet
// Il2CppName: InitiateFeet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK*>, ByRef<::ArrayW<::RootMotion::FinalIK::GrounderQuadruped::Foot>>, int)>(&RootMotion::FinalIK::GrounderQuadruped::InitiateFeet)> {
  static const MethodInfo* get() {
    static auto* ikComponents = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IK"), 1)->byval_arg;
    static auto* f = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "GrounderQuadruped/Foot"), 1)->this_arg;
    static auto* indexOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "InitiateFeet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ikComponents, f, indexOffset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::RootRotation
// Il2CppName: RootRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::RootRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "RootRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate
// Il2CppName: OnSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot
// Il2CppName: UpdateForefeetRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "UpdateForefeetRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::SetFootIK
// Il2CppName: SetFootIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)(::RootMotion::FinalIK::GrounderQuadruped::Foot, float)>(&RootMotion::FinalIK::GrounderQuadruped::SetFootIK)> {
  static const MethodInfo* get() {
    static auto* foot = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "GrounderQuadruped/Foot")->byval_arg;
    static auto* maxOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "SetFootIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{foot, maxOffset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate
// Il2CppName: OnPostSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnPostSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::DestroyLegs
// Il2CppName: DestroyLegs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK*>)>(&RootMotion::FinalIK::GrounderQuadruped::DestroyLegs)> {
  static const MethodInfo* get() {
    static auto* ikComponents = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IK"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "DestroyLegs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ikComponents});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::ResetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
