// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverLookAt
#include "RootMotion/FinalIK/IKSolverLookAt.hpp"
// Including type: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLookAt::LookAtBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLookAt::LookAtBone*, "RootMotion.FinalIK", "IKSolverLookAt/LookAtBone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverLookAt::LookAtBone : public ::RootMotion::FinalIK::IKSolver::Bone {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x74
    char ___base_padding[0x3] = {};
    public:
    // public UnityEngine.Vector3 baseForwardOffsetEuler
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 baseForwardOffsetEuler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating conversion operator: operator ::UnityEngine::Vector3
    constexpr operator ::UnityEngine::Vector3() const noexcept {
      return baseForwardOffsetEuler;
    }
    // Get instance field reference: public UnityEngine.Vector3 baseForwardOffsetEuler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_baseForwardOffsetEuler();
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x2249BF4
    ::UnityEngine::Vector3 get_forward();
    // public System.Void Initiate(UnityEngine.Transform root)
    // Offset: 0x22490CC
    void Initiate(::UnityEngine::Transform* root);
    // public System.Void LookAt(UnityEngine.Vector3 direction, System.Single weight)
    // Offset: 0x2249FF8
    void LookAt(::UnityEngine::Vector3 direction, float weight);
    // public System.Void .ctor()
    // Offset: 0x224A340
    // Implemented from: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
    // Base method: System.Void Bone::.ctor()
    // Base method: System.Void Point::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt::LookAtBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverLookAt::LookAtBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt::LookAtBone*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x2248D90
    // Implemented from: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
    // Base method: System.Void Bone::.ctor(UnityEngine.Transform transform)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt::LookAtBone* New_ctor(::UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverLookAt::LookAtBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt::LookAtBone*, creationType>(transform)));
    }
  }; // RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone
  #pragma pack(pop)
  static check_size<sizeof(IKSolverLookAt::LookAtBone), 116 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverLookAt_LookAtBoneSizeCheck;
  static_assert(sizeof(IKSolverLookAt::LookAtBone) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::LookAtBone::get_forward
// Il2CppName: get_forward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverLookAt::LookAtBone::*)()>(&RootMotion::FinalIK::IKSolverLookAt::LookAtBone::get_forward)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*), "get_forward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::LookAtBone::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::LookAtBone::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLookAt::LookAtBone::Initiate)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::LookAtBone::LookAt
// Il2CppName: LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::LookAtBone::*)(::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverLookAt::LookAtBone::LookAt)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*), "LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::LookAtBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::LookAtBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
