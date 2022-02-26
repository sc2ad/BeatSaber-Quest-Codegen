// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.AnimatorUpdateMode
#include "UnityEngine/AnimatorUpdateMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RagdollUtility
  class RagdollUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RagdollUtility);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RagdollUtility*, "RootMotion.FinalIK", "RagdollUtility");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RagdollUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1262F98
  class RagdollUtility : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::FinalIK::RagdollUtility::Rigidbone
    class Rigidbone;
    // Nested type: ::RootMotion::FinalIK::RagdollUtility::Child
    class Child;
    // Nested type: ::RootMotion::FinalIK::RagdollUtility::$DisableRagdollSmooth$d__21
    class $DisableRagdollSmooth$d__21;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x1265BFC
    // public RootMotion.FinalIK.IK ik
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::IK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IK*) == 0x8);
    // [TooltipAttribute] Offset: 0x1265C34
    // public System.Single ragdollToAnimationTime
    // Size: 0x4
    // Offset: 0x20
    float ragdollToAnimationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1265C6C
    // public System.Boolean applyIkOnRagdoll
    // Size: 0x1
    // Offset: 0x24
    bool applyIkOnRagdoll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: applyIkOnRagdoll and: applyVelocity
    char __padding2[0x3] = {};
    // [TooltipAttribute] Offset: 0x1265CA4
    // public System.Single applyVelocity
    // Size: 0x4
    // Offset: 0x28
    float applyVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1265CDC
    // public System.Single applyAngularVelocity
    // Size: 0x4
    // Offset: 0x2C
    float applyAngularVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Rigidbone[] rigidbones
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::RootMotion::FinalIK::RagdollUtility::Rigidbone*> rigidbones;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::RagdollUtility::Rigidbone*>) == 0x8);
    // private RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Child[] children
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::RootMotion::FinalIK::RagdollUtility::Child*> children;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::RagdollUtility::Child*>) == 0x8);
    // private System.Boolean enableRagdollFlag
    // Size: 0x1
    // Offset: 0x48
    bool enableRagdollFlag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableRagdollFlag and: animatorUpdateMode
    char __padding8[0x3] = {};
    // private UnityEngine.AnimatorUpdateMode animatorUpdateMode
    // Size: 0x4
    // Offset: 0x4C
    ::UnityEngine::AnimatorUpdateMode animatorUpdateMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimatorUpdateMode) == 0x4);
    // private RootMotion.FinalIK.IK[] allIKComponents
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::RootMotion::FinalIK::IK*> allIKComponents;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IK*>) == 0x8);
    // private System.Boolean[] fixTransforms
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<bool> fixTransforms;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private System.Single ragdollWeight
    // Size: 0x4
    // Offset: 0x60
    float ragdollWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single ragdollWeightV
    // Size: 0x4
    // Offset: 0x64
    float ragdollWeightV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean fixedFrame
    // Size: 0x1
    // Offset: 0x68
    bool fixedFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixedFrame and: disabledIKComponents
    char __padding14[0x7] = {};
    // private System.Boolean[] disabledIKComponents
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<bool> disabledIKComponents;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.IK ik
    ::RootMotion::FinalIK::IK*& dyn_ik();
    // Get instance field reference: public System.Single ragdollToAnimationTime
    float& dyn_ragdollToAnimationTime();
    // Get instance field reference: public System.Boolean applyIkOnRagdoll
    bool& dyn_applyIkOnRagdoll();
    // Get instance field reference: public System.Single applyVelocity
    float& dyn_applyVelocity();
    // Get instance field reference: public System.Single applyAngularVelocity
    float& dyn_applyAngularVelocity();
    // Get instance field reference: private UnityEngine.Animator animator
    ::UnityEngine::Animator*& dyn_animator();
    // Get instance field reference: private RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Rigidbone[] rigidbones
    ::ArrayW<::RootMotion::FinalIK::RagdollUtility::Rigidbone*>& dyn_rigidbones();
    // Get instance field reference: private RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Child[] children
    ::ArrayW<::RootMotion::FinalIK::RagdollUtility::Child*>& dyn_children();
    // Get instance field reference: private System.Boolean enableRagdollFlag
    bool& dyn_enableRagdollFlag();
    // Get instance field reference: private UnityEngine.AnimatorUpdateMode animatorUpdateMode
    ::UnityEngine::AnimatorUpdateMode& dyn_animatorUpdateMode();
    // Get instance field reference: private RootMotion.FinalIK.IK[] allIKComponents
    ::ArrayW<::RootMotion::FinalIK::IK*>& dyn_allIKComponents();
    // Get instance field reference: private System.Boolean[] fixTransforms
    ::ArrayW<bool>& dyn_fixTransforms();
    // Get instance field reference: private System.Single ragdollWeight
    float& dyn_ragdollWeight();
    // Get instance field reference: private System.Single ragdollWeightV
    float& dyn_ragdollWeightV();
    // Get instance field reference: private System.Boolean fixedFrame
    bool& dyn_fixedFrame();
    // Get instance field reference: private System.Boolean[] disabledIKComponents
    ::ArrayW<bool>& dyn_disabledIKComponents();
    // private System.Boolean get_isRagdoll()
    // Offset: 0x1F0D034
    bool get_isRagdoll();
    // private System.Boolean get_ikUsed()
    // Offset: 0x1F0DB18
    bool get_ikUsed();
    // public System.Void EnableRagdoll()
    // Offset: 0x1F0CFFC
    void EnableRagdoll();
    // public System.Void DisableRagdoll()
    // Offset: 0x1F0D0AC
    void DisableRagdoll();
    // public System.Void Start()
    // Offset: 0x1F0D1DC
    void Start();
    // private System.Collections.IEnumerator DisableRagdollSmooth()
    // Offset: 0x1F0D16C
    ::System::Collections::IEnumerator* DisableRagdollSmooth();
    // private System.Void Update()
    // Offset: 0x1F0D758
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1F0D9A4
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1F0DA5C
    void LateUpdate();
    // private System.Void AfterLastIK()
    // Offset: 0x1F0DC9C
    void AfterLastIK();
    // private System.Void AfterAnimation()
    // Offset: 0x1F0DADC
    void AfterAnimation();
    // private System.Void OnFinalPose()
    // Offset: 0x1F0DC58
    void OnFinalPose();
    // private System.Void RagdollEnabler()
    // Offset: 0x1F0DD38
    void RagdollEnabler();
    // private System.Void RecordVelocities()
    // Offset: 0x1F0DCD0
    void RecordVelocities();
    // private System.Void StoreLocalState()
    // Offset: 0x1F0D104
    void StoreLocalState();
    // private System.Void FixTransforms(System.Single weight)
    // Offset: 0x1F0D9E4
    void FixTransforms(float weight);
    // private System.Void OnDestroy()
    // Offset: 0x1F0E4DC
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1F0E5E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RagdollUtility* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RagdollUtility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RagdollUtility*, creationType>()));
    }
  }; // RootMotion.FinalIK.RagdollUtility
  #pragma pack(pop)
  static check_size<sizeof(RagdollUtility), 112 + sizeof(::ArrayW<bool>)> __RootMotion_FinalIK_RagdollUtilitySizeCheck;
  static_assert(sizeof(RagdollUtility) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::get_isRagdoll
// Il2CppName: get_isRagdoll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::get_isRagdoll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "get_isRagdoll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::get_ikUsed
// Il2CppName: get_ikUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::get_ikUsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "get_ikUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::EnableRagdoll
// Il2CppName: EnableRagdoll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::EnableRagdoll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "EnableRagdoll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::DisableRagdoll
// Il2CppName: DisableRagdoll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::DisableRagdoll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "DisableRagdoll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::DisableRagdollSmooth
// Il2CppName: DisableRagdollSmooth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::DisableRagdollSmooth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "DisableRagdollSmooth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::AfterLastIK
// Il2CppName: AfterLastIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::AfterLastIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "AfterLastIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::AfterAnimation
// Il2CppName: AfterAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::AfterAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "AfterAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::OnFinalPose
// Il2CppName: OnFinalPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::OnFinalPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "OnFinalPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::RagdollEnabler
// Il2CppName: RagdollEnabler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::RagdollEnabler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "RagdollEnabler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::RecordVelocities
// Il2CppName: RecordVelocities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::RecordVelocities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "RecordVelocities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::StoreLocalState
// Il2CppName: StoreLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::StoreLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "StoreLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)(float)>(&RootMotion::FinalIK::RagdollUtility::FixTransforms)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::*)()>(&RootMotion::FinalIK::RagdollUtility::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
