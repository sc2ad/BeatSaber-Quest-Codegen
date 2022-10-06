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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKMappingSpine
  class IKMappingSpine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingSpine);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingSpine*, "RootMotion.FinalIK", "IKMappingSpine");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKMappingSpine
  // [TokenAttribute] Offset: FFFFFFFF
  class IKMappingSpine : public ::RootMotion::FinalIK::IKMapping {
    public:
    public:
    // public UnityEngine.Transform[] spineBones
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Transform*> spineBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public UnityEngine.Transform leftUpperArmBone
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* leftUpperArmBone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightUpperArmBone
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* rightUpperArmBone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftThighBone
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* leftThighBone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightThighBone
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* rightThighBone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0x11257E0
    // public System.Int32 iterations
    // Size: 0x4
    // Offset: 0x38
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0x11257F8
    // public System.Single twistWeight
    // Size: 0x4
    // Offset: 0x3C
    float twistWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 rootNodeIndex
    // Size: 0x4
    // Offset: 0x40
    int rootNodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: rootNodeIndex and: spine
    char __padding7[0x4] = {};
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap[] spine
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::RootMotion::FinalIK::IKMapping::BoneMap*> spine;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKMapping::BoneMap*>) == 0x8);
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap leftUpperArm
    // Size: 0x8
    // Offset: 0x50
    ::RootMotion::FinalIK::IKMapping::BoneMap* leftUpperArm;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKMapping::BoneMap*) == 0x8);
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap rightUpperArm
    // Size: 0x8
    // Offset: 0x58
    ::RootMotion::FinalIK::IKMapping::BoneMap* rightUpperArm;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKMapping::BoneMap*) == 0x8);
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap leftThigh
    // Size: 0x8
    // Offset: 0x60
    ::RootMotion::FinalIK::IKMapping::BoneMap* leftThigh;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKMapping::BoneMap*) == 0x8);
    // private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap rightThigh
    // Size: 0x8
    // Offset: 0x68
    ::RootMotion::FinalIK::IKMapping::BoneMap* rightThigh;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKMapping::BoneMap*) == 0x8);
    // private System.Boolean useFABRIK
    // Size: 0x1
    // Offset: 0x70
    bool useFABRIK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform[] spineBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_spineBones();
    // Get instance field reference: public UnityEngine.Transform leftUpperArmBone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftUpperArmBone();
    // Get instance field reference: public UnityEngine.Transform rightUpperArmBone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightUpperArmBone();
    // Get instance field reference: public UnityEngine.Transform leftThighBone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftThighBone();
    // Get instance field reference: public UnityEngine.Transform rightThighBone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightThighBone();
    // Get instance field reference: public System.Int32 iterations
    [[deprecated("Use field access instead!")]] int& dyn_iterations();
    // Get instance field reference: public System.Single twistWeight
    [[deprecated("Use field access instead!")]] float& dyn_twistWeight();
    // Get instance field reference: private System.Int32 rootNodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_rootNodeIndex();
    // Get instance field reference: private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap[] spine
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKMapping::BoneMap*>& dyn_spine();
    // Get instance field reference: private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap leftUpperArm
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKMapping::BoneMap*& dyn_leftUpperArm();
    // Get instance field reference: private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap rightUpperArm
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKMapping::BoneMap*& dyn_rightUpperArm();
    // Get instance field reference: private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap leftThigh
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKMapping::BoneMap*& dyn_leftThigh();
    // Get instance field reference: private RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap rightThigh
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKMapping::BoneMap*& dyn_rightThigh();
    // Get instance field reference: private System.Boolean useFABRIK
    [[deprecated("Use field access instead!")]] bool& dyn_useFABRIK();
    // public System.Void .ctor(UnityEngine.Transform[] spineBones, UnityEngine.Transform leftUpperArmBone, UnityEngine.Transform rightUpperArmBone, UnityEngine.Transform leftThighBone, UnityEngine.Transform rightThighBone)
    // Offset: 0x227BB20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMappingSpine* New_ctor(::ArrayW<::UnityEngine::Transform*> spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone, ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKMappingSpine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMappingSpine*, creationType>(spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone)));
    }
    // public System.Void SetBones(UnityEngine.Transform[] spineBones, UnityEngine.Transform leftUpperArmBone, UnityEngine.Transform rightUpperArmBone, UnityEngine.Transform leftThighBone, UnityEngine.Transform rightThighBone)
    // Offset: 0x227BC78
    void SetBones(::ArrayW<::UnityEngine::Transform*> spineBones, ::UnityEngine::Transform* leftUpperArmBone, ::UnityEngine::Transform* rightUpperArmBone, ::UnityEngine::Transform* leftThighBone, ::UnityEngine::Transform* rightThighBone);
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x227BC88
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x227BCF0
    void FixTransforms();
    // private System.Boolean UseFABRIK()
    // Offset: 0x227C3C4
    bool UseFABRIK();
    // public System.Void ReadPose()
    // Offset: 0x227C3FC
    void ReadPose();
    // public System.Void WritePose(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x227C6DC
    void WritePose(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void ForwardReach(UnityEngine.Vector3 position)
    // Offset: 0x227CA90
    void ForwardReach(::UnityEngine::Vector3 position);
    // private System.Void BackwardReach(UnityEngine.Vector3 position)
    // Offset: 0x227CB7C
    void BackwardReach(::UnityEngine::Vector3 position);
    // private System.Void MapToSolverPositions(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x227CC44
    void MapToSolverPositions(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void .ctor()
    // Offset: 0x227BA04
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Void IKMapping::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMappingSpine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKMappingSpine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMappingSpine*, creationType>()));
    }
    // public override System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    // Offset: 0x227B714
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Boolean IKMapping::IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);
    // public override System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x227BD70
    // Implemented from: RootMotion.FinalIK.IKMapping
    // Base method: System.Void IKMapping::Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);
  }; // RootMotion.FinalIK.IKMappingSpine
  #pragma pack(pop)
  static check_size<sizeof(IKMappingSpine), 112 + sizeof(bool)> __RootMotion_FinalIK_IKMappingSpineSizeCheck;
  static_assert(sizeof(IKMappingSpine) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::SetBones
// Il2CppName: SetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)(::ArrayW<::UnityEngine::Transform*>, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKMappingSpine::SetBones)> {
  static const MethodInfo* get() {
    static auto* spineBones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* leftUpperArmBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rightUpperArmBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leftThighBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rightThighBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "SetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)()>(&RootMotion::FinalIK::IKMappingSpine::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)()>(&RootMotion::FinalIK::IKMappingSpine::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::UseFABRIK
// Il2CppName: UseFABRIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMappingSpine::*)()>(&RootMotion::FinalIK::IKMappingSpine::UseFABRIK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "UseFABRIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::ReadPose
// Il2CppName: ReadPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)()>(&RootMotion::FinalIK::IKMappingSpine::ReadPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "ReadPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::WritePose
// Il2CppName: WritePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMappingSpine::WritePose)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "WritePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::ForwardReach
// Il2CppName: ForwardReach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKMappingSpine::ForwardReach)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "ForwardReach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::BackwardReach
// Il2CppName: BackwardReach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKMappingSpine::BackwardReach)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "BackwardReach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::MapToSolverPositions
// Il2CppName: MapToSolverPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMappingSpine::MapToSolverPositions)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "MapToSolverPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMappingSpine::*)(::RootMotion::FinalIK::IKSolver*, ByRef<::StringW>)>(&RootMotion::FinalIK::IKMappingSpine::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMappingSpine::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMappingSpine::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMappingSpine::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMappingSpine*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
