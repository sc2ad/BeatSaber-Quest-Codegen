// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKMapping
#include "RootMotion/FinalIK/IKMapping.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKMappingBone
  class IKMappingBone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingBone*, "RootMotion.FinalIK", "IKMappingBone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKMappingBone
  // [TokenAttribute] Offset: FFFFFFFF
  class IKMappingBone : public ::RootMotion::FinalIK::IKMapping {
    public:
    public:
    // public UnityEngine.Transform bone
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* bone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0x1139400
    // public System.Single maintainRotationWeight
    // Size: 0x4
    // Offset: 0x18
    float maintainRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maintainRotationWeight and: boneMap
    char __padding1[0x4] = {};
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap boneMap
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::FinalIK::IKMapping::BoneMap* boneMap;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKMapping::BoneMap*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform bone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone();
    // Get instance field reference: public System.Single maintainRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_maintainRotationWeight();
    // Get instance field reference: private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap boneMap
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKMapping::BoneMap*& dyn_boneMap();
    // public System.Void .ctor(UnityEngine.Transform bone)
    // Offset: 0x230409C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMappingBone* New_ctor(::UnityEngine::Transform* bone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKMappingBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMappingBone*, creationType>(bone)));
    }
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x2304134
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x230414C
    void FixTransforms();
    // public System.Void ReadPose()
    // Offset: 0x2304204
    void ReadPose();
    // public System.Void WritePose(System.Single solverWeight)
    // Offset: 0x230421C
    void WritePose(float solverWeight);
    // public System.Void .ctor()
    // Offset: 0x2304018
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Void IKMapping::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMappingBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKMappingBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMappingBone*, creationType>()));
    }
    // public override System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    // Offset: 0x2303F78
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Boolean IKMapping::IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);
    // public override System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x2304168
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Void IKMapping::Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);
  }; // RootMotion.FinalIK.IKMappingBone
  #pragma pack(pop)
  static check_size<sizeof(IKMappingBone), 32 + sizeof(::RootMotion::FinalIK::IKMapping::BoneMap*)> __RootMotion_FinalIK_IKMappingBoneSizeCheck;
  static_assert(sizeof(IKMappingBone) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingBone::*)()>(&RootMotion::FinalIK::IKMappingBone::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingBone*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingBone::*)()>(&RootMotion::FinalIK::IKMappingBone::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingBone*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::ReadPose
// Il2CppName: ReadPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingBone::*)()>(&RootMotion::FinalIK::IKMappingBone::ReadPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingBone*), "ReadPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::WritePose
// Il2CppName: WritePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingBone::*)(float)>(&RootMotion::FinalIK::IKMappingBone::WritePose)> {
  static const MethodInfo* get() {
    static auto* solverWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingBone*), "WritePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solverWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMappingBone::*)(::RootMotion::FinalIK::IKSolver*, ByRef<::StringW>)>(&RootMotion::FinalIK::IKMappingBone::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingBone*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingBone::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingBone::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMappingBone::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingBone*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
