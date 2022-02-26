// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.Baker
#include "RootMotion/Baker.hpp"
// Including type: UnityEngine.HumanPose
#include "UnityEngine/HumanPose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerMuscle
  class BakerMuscle;
  // Forward declaring type: BakerHumanoidQT
  class BakerHumanoidQT;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanPoseHandler
  class HumanPoseHandler;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: HumanoidBaker
  class HumanoidBaker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::HumanoidBaker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::HumanoidBaker*, "RootMotion", "HumanoidBaker");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x118
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.HumanoidBaker
  // [TokenAttribute] Offset: FFFFFFFF
  class HumanoidBaker : public ::RootMotion::Baker {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x12635CC
    // public System.Boolean bakeHandIK
    // Size: 0x1
    // Offset: 0x74
    bool bakeHandIK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bakeHandIK and: IKKeyReductionError
    char __padding0[0x3] = {};
    // [TooltipAttribute] Offset: 0x1263604
    // [RangeAttribute] Offset: 0x1263604
    // public System.Single IKKeyReductionError
    // Size: 0x4
    // Offset: 0x78
    float IKKeyReductionError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x126365C
    // [RangeAttribute] Offset: 0x126365C
    // public System.Int32 muscleFrameRateDiv
    // Size: 0x4
    // Offset: 0x7C
    int muscleFrameRateDiv;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private RootMotion.BakerMuscle[] bakerMuscles
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::RootMotion::BakerMuscle*> bakerMuscles;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::BakerMuscle*>) == 0x8);
    // private RootMotion.BakerHumanoidQT rootQT
    // Size: 0x8
    // Offset: 0x88
    ::RootMotion::BakerHumanoidQT* rootQT;
    // Field size check
    static_assert(sizeof(::RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT leftFootQT
    // Size: 0x8
    // Offset: 0x90
    ::RootMotion::BakerHumanoidQT* leftFootQT;
    // Field size check
    static_assert(sizeof(::RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT rightFootQT
    // Size: 0x8
    // Offset: 0x98
    ::RootMotion::BakerHumanoidQT* rightFootQT;
    // Field size check
    static_assert(sizeof(::RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT leftHandQT
    // Size: 0x8
    // Offset: 0xA0
    ::RootMotion::BakerHumanoidQT* leftHandQT;
    // Field size check
    static_assert(sizeof(::RootMotion::BakerHumanoidQT*) == 0x8);
    // private RootMotion.BakerHumanoidQT rightHandQT
    // Size: 0x8
    // Offset: 0xA8
    ::RootMotion::BakerHumanoidQT* rightHandQT;
    // Field size check
    static_assert(sizeof(::RootMotion::BakerHumanoidQT*) == 0x8);
    // private System.Single[] muscles
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<float> muscles;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private UnityEngine.HumanPose pose
    // Size: 0x28
    // Offset: 0xB8
    ::UnityEngine::HumanPose pose;
    // Field size check
    static_assert(sizeof(::UnityEngine::HumanPose) == 0x28);
    // private UnityEngine.HumanPoseHandler handler
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::HumanPoseHandler* handler;
    // Field size check
    static_assert(sizeof(::UnityEngine::HumanPoseHandler*) == 0x8);
    // private UnityEngine.Vector3 bodyPosition
    // Size: 0xC
    // Offset: 0xE8
    ::UnityEngine::Vector3 bodyPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion bodyRotation
    // Size: 0x10
    // Offset: 0xF4
    ::UnityEngine::Quaternion bodyRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Int32 mN
    // Size: 0x4
    // Offset: 0x104
    int mN;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Quaternion lastBodyRotation
    // Size: 0x10
    // Offset: 0x108
    ::UnityEngine::Quaternion lastBodyRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public System.Boolean bakeHandIK
    bool& dyn_bakeHandIK();
    // Get instance field reference: public System.Single IKKeyReductionError
    float& dyn_IKKeyReductionError();
    // Get instance field reference: public System.Int32 muscleFrameRateDiv
    int& dyn_muscleFrameRateDiv();
    // Get instance field reference: private RootMotion.BakerMuscle[] bakerMuscles
    ::ArrayW<::RootMotion::BakerMuscle*>& dyn_bakerMuscles();
    // Get instance field reference: private RootMotion.BakerHumanoidQT rootQT
    ::RootMotion::BakerHumanoidQT*& dyn_rootQT();
    // Get instance field reference: private RootMotion.BakerHumanoidQT leftFootQT
    ::RootMotion::BakerHumanoidQT*& dyn_leftFootQT();
    // Get instance field reference: private RootMotion.BakerHumanoidQT rightFootQT
    ::RootMotion::BakerHumanoidQT*& dyn_rightFootQT();
    // Get instance field reference: private RootMotion.BakerHumanoidQT leftHandQT
    ::RootMotion::BakerHumanoidQT*& dyn_leftHandQT();
    // Get instance field reference: private RootMotion.BakerHumanoidQT rightHandQT
    ::RootMotion::BakerHumanoidQT*& dyn_rightHandQT();
    // Get instance field reference: private System.Single[] muscles
    ::ArrayW<float>& dyn_muscles();
    // Get instance field reference: private UnityEngine.HumanPose pose
    ::UnityEngine::HumanPose& dyn_pose();
    // Get instance field reference: private UnityEngine.HumanPoseHandler handler
    ::UnityEngine::HumanPoseHandler*& dyn_handler();
    // Get instance field reference: private UnityEngine.Vector3 bodyPosition
    ::UnityEngine::Vector3& dyn_bodyPosition();
    // Get instance field reference: private UnityEngine.Quaternion bodyRotation
    ::UnityEngine::Quaternion& dyn_bodyRotation();
    // Get instance field reference: private System.Int32 mN
    int& dyn_mN();
    // Get instance field reference: private UnityEngine.Quaternion lastBodyRotation
    ::UnityEngine::Quaternion& dyn_lastBodyRotation();
    // private System.Void Awake()
    // Offset: 0x1F1AE0C
    void Awake();
    // private System.Void UpdateHumanPose()
    // Offset: 0x1F1B948
    void UpdateHumanPose();
    // public System.Void .ctor()
    // Offset: 0x1F1BA24
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HumanoidBaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::HumanoidBaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HumanoidBaker*, creationType>()));
    }
    // protected override UnityEngine.Transform GetCharacterRoot()
    // Offset: 0x1F1B238
    // Implemented from: RootMotion.Baker
    // Base method: UnityEngine.Transform Baker::GetCharacterRoot()
    ::UnityEngine::Transform* GetCharacterRoot();
    // protected override System.Void OnStartBaking()
    // Offset: 0x1F1B254
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnStartBaking()
    void OnStartBaking();
    // protected override System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0x1F1B374
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetLoopFrame(System.Single time)
    void OnSetLoopFrame(float time);
    // protected override System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x1F1B450
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetCurves(ref UnityEngine.AnimationClip clip)
    void OnSetCurves(ByRef<::UnityEngine::AnimationClip*> clip);
    // protected override System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0x1F1B620
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    void OnSetKeyframes(float time, bool lastFrame);
  }; // RootMotion.HumanoidBaker
  #pragma pack(pop)
  static check_size<sizeof(HumanoidBaker), 264 + sizeof(::UnityEngine::Quaternion)> __RootMotion_HumanoidBakerSizeCheck;
  static_assert(sizeof(HumanoidBaker) == 0x118);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::HumanoidBaker::*)()>(&RootMotion::HumanoidBaker::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::UpdateHumanPose
// Il2CppName: UpdateHumanPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::HumanoidBaker::*)()>(&RootMotion::HumanoidBaker::UpdateHumanPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "UpdateHumanPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::GetCharacterRoot
// Il2CppName: GetCharacterRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (RootMotion::HumanoidBaker::*)()>(&RootMotion::HumanoidBaker::GetCharacterRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "GetCharacterRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::OnStartBaking
// Il2CppName: OnStartBaking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::HumanoidBaker::*)()>(&RootMotion::HumanoidBaker::OnStartBaking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "OnStartBaking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::OnSetLoopFrame
// Il2CppName: OnSetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::HumanoidBaker::*)(float)>(&RootMotion::HumanoidBaker::OnSetLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "OnSetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::OnSetCurves
// Il2CppName: OnSetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::HumanoidBaker::*)(ByRef<::UnityEngine::AnimationClip*>)>(&RootMotion::HumanoidBaker::OnSetCurves)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "OnSetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: RootMotion::HumanoidBaker::OnSetKeyframes
// Il2CppName: OnSetKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::HumanoidBaker::*)(float, bool)>(&RootMotion::HumanoidBaker::OnSetKeyframes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lastFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::HumanoidBaker*), "OnSetKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, lastFrame});
  }
};
