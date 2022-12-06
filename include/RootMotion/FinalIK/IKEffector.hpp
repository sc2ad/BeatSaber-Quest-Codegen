// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
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
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKEffector
  class IKEffector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKEffector*, "RootMotion.FinalIK", "IKEffector");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class IKEffector : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform bone
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* bone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0x113D278
    // public System.Single positionWeight
    // Size: 0x4
    // Offset: 0x20
    float positionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x113D290
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x24
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 positionOffset
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean <isEndEffector>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool isEndEffector;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean effectChildNodes
    // Size: 0x1
    // Offset: 0x51
    bool effectChildNodes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: effectChildNodes and: maintainRelativePositionWeight
    char __padding8[0x2] = {};
    // [RangeAttribute] Offset: 0x113D2B8
    // public System.Single maintainRelativePositionWeight
    // Size: 0x4
    // Offset: 0x54
    float maintainRelativePositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform[] childBones
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Transform*> childBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public UnityEngine.Transform planeBone1
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Transform* planeBone1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform planeBone2
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* planeBone2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform planeBone3
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* planeBone3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Quaternion planeRotationOffset
    // Size: 0x10
    // Offset: 0x78
    ::UnityEngine::Quaternion planeRotationOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single posW
    // Size: 0x4
    // Offset: 0x88
    float posW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotW
    // Size: 0x4
    // Offset: 0x8C
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3[] localPositions
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Vector3> localPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Boolean usePlaneNodes
    // Size: 0x1
    // Offset: 0x98
    bool usePlaneNodes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePlaneNodes and: animatedPlaneRotation
    char __padding18[0x3] = {};
    // private UnityEngine.Quaternion animatedPlaneRotation
    // Size: 0x10
    // Offset: 0x9C
    ::UnityEngine::Quaternion animatedPlaneRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 animatedPosition
    // Size: 0xC
    // Offset: 0xAC
    ::UnityEngine::Vector3 animatedPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0xB8
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstUpdate and: chainIndex
    char __padding21[0x3] = {};
    // private System.Int32 chainIndex
    // Size: 0x4
    // Offset: 0xBC
    int chainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex
    // Size: 0x4
    // Offset: 0xC0
    int nodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane1ChainIndex
    // Size: 0x4
    // Offset: 0xC4
    int plane1ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane1NodeIndex
    // Size: 0x4
    // Offset: 0xC8
    int plane1NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane2ChainIndex
    // Size: 0x4
    // Offset: 0xCC
    int plane2ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane2NodeIndex
    // Size: 0x4
    // Offset: 0xD0
    int plane2NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane3ChainIndex
    // Size: 0x4
    // Offset: 0xD4
    int plane3ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane3NodeIndex
    // Size: 0x4
    // Offset: 0xD8
    int plane3NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: plane3NodeIndex and: childChainIndexes
    char __padding29[0x4] = {};
    // private System.Int32[] childChainIndexes
    // Size: 0x8
    // Offset: 0xE0
    ::ArrayW<int> childChainIndexes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] childNodeIndexes
    // Size: 0x8
    // Offset: 0xE8
    ::ArrayW<int> childNodeIndexes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform bone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone();
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public System.Single positionWeight
    [[deprecated("Use field access instead!")]] float& dyn_positionWeight();
    // Get instance field reference: public System.Single rotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_rotationWeight();
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector3 positionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_positionOffset();
    // Get instance field reference: private System.Boolean <isEndEffector>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isEndEffector$k__BackingField();
    // Get instance field reference: public System.Boolean effectChildNodes
    [[deprecated("Use field access instead!")]] bool& dyn_effectChildNodes();
    // Get instance field reference: public System.Single maintainRelativePositionWeight
    [[deprecated("Use field access instead!")]] float& dyn_maintainRelativePositionWeight();
    // Get instance field reference: public UnityEngine.Transform[] childBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_childBones();
    // Get instance field reference: public UnityEngine.Transform planeBone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_planeBone1();
    // Get instance field reference: public UnityEngine.Transform planeBone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_planeBone2();
    // Get instance field reference: public UnityEngine.Transform planeBone3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_planeBone3();
    // Get instance field reference: public UnityEngine.Quaternion planeRotationOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_planeRotationOffset();
    // Get instance field reference: private System.Single posW
    [[deprecated("Use field access instead!")]] float& dyn_posW();
    // Get instance field reference: private System.Single rotW
    [[deprecated("Use field access instead!")]] float& dyn_rotW();
    // Get instance field reference: private UnityEngine.Vector3[] localPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_localPositions();
    // Get instance field reference: private System.Boolean usePlaneNodes
    [[deprecated("Use field access instead!")]] bool& dyn_usePlaneNodes();
    // Get instance field reference: private UnityEngine.Quaternion animatedPlaneRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_animatedPlaneRotation();
    // Get instance field reference: private UnityEngine.Vector3 animatedPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_animatedPosition();
    // Get instance field reference: private System.Boolean firstUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_firstUpdate();
    // Get instance field reference: private System.Int32 chainIndex
    [[deprecated("Use field access instead!")]] int& dyn_chainIndex();
    // Get instance field reference: private System.Int32 nodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_nodeIndex();
    // Get instance field reference: private System.Int32 plane1ChainIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane1ChainIndex();
    // Get instance field reference: private System.Int32 plane1NodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane1NodeIndex();
    // Get instance field reference: private System.Int32 plane2ChainIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane2ChainIndex();
    // Get instance field reference: private System.Int32 plane2NodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane2NodeIndex();
    // Get instance field reference: private System.Int32 plane3ChainIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane3ChainIndex();
    // Get instance field reference: private System.Int32 plane3NodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane3NodeIndex();
    // Get instance field reference: private System.Int32[] childChainIndexes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_childChainIndexes();
    // Get instance field reference: private System.Int32[] childNodeIndexes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_childNodeIndexes();
    // public System.Boolean get_isEndEffector()
    // Offset: 0x22FF3F8
    bool get_isEndEffector();
    // private System.Void set_isEndEffector(System.Boolean value)
    // Offset: 0x22FF400
    void set_isEndEffector(bool value);
    // public System.Void .ctor()
    // Offset: 0x22FF4E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKEffector*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Transform bone, UnityEngine.Transform[] childBones)
    // Offset: 0x22FF61C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKEffector* New_ctor(::UnityEngine::Transform* bone, ::ArrayW<::UnityEngine::Transform*> childBones) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKEffector*, creationType>(bone, childBones)));
    }
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node GetNode(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22FF390
    ::RootMotion::FinalIK::IKSolver::Node* GetNode(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void PinToBone(System.Single positionWeight, System.Single rotationWeight)
    // Offset: 0x22FF40C
    void PinToBone(float positionWeight, float rotationWeight);
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    // Offset: 0x22FF774
    bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22FFA64
    void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void ResetOffset(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22FFD04
    void ResetOffset(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SetToTarget()
    // Offset: 0x22FFE44
    void SetToTarget();
    // public System.Void OnPreSolve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22FFEF0
    void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void OnPostWrite()
    // Offset: 0x2300544
    void OnPostWrite();
    // private UnityEngine.Quaternion GetPlaneRotation(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x23005B4
    ::UnityEngine::Quaternion GetPlaneRotation(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x23007CC
    void Update(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 GetPosition(RootMotion.FinalIK.IKSolverFullBody solver, out UnityEngine.Quaternion planeRotationOffset)
    // Offset: 0x2300B14
    ::UnityEngine::Vector3 GetPosition(::RootMotion::FinalIK::IKSolverFullBody* solver, ByRef<::UnityEngine::Quaternion> planeRotationOffset);
  }; // RootMotion.FinalIK.IKEffector
  #pragma pack(pop)
  static check_size<sizeof(IKEffector), 232 + sizeof(::ArrayW<int>)> __RootMotion_FinalIK_IKEffectorSizeCheck;
  static_assert(sizeof(IKEffector) == 0xF0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::get_isEndEffector
// Il2CppName: get_isEndEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKEffector::*)()>(&RootMotion::FinalIK::IKEffector::get_isEndEffector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "get_isEndEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::set_isEndEffector
// Il2CppName: set_isEndEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(bool)>(&RootMotion::FinalIK::IKEffector::set_isEndEffector)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "set_isEndEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver::Node* (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::GetNode)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::PinToBone
// Il2CppName: PinToBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(float, float)>(&RootMotion::FinalIK::IKEffector::PinToBone)> {
  static const MethodInfo* get() {
    static auto* positionWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotationWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "PinToBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positionWeight, rotationWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolver*, ByRef<::StringW>)>(&RootMotion::FinalIK::IKEffector::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::ResetOffset
// Il2CppName: ResetOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::ResetOffset)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "ResetOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::SetToTarget
// Il2CppName: SetToTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)()>(&RootMotion::FinalIK::IKEffector::SetToTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "SetToTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::OnPreSolve
// Il2CppName: OnPreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::OnPreSolve)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "OnPreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::OnPostWrite
// Il2CppName: OnPostWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)()>(&RootMotion::FinalIK::IKEffector::OnPostWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "OnPostWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::GetPlaneRotation
// Il2CppName: GetPlaneRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::GetPlaneRotation)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "GetPlaneRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKEffector::Update)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKEffector::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKEffector::*)(::RootMotion::FinalIK::IKSolverFullBody*, ByRef<::UnityEngine::Quaternion>)>(&RootMotion::FinalIK::IKEffector::GetPosition)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* planeRotationOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKEffector*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, planeRotationOffset});
  }
};
