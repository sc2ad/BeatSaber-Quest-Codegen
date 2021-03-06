// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLeg
  class IKSolverLeg : public RootMotion::FinalIK::IKSolver {
    public:
    // [RangeAttribute] Offset: 0xE09650
    // public System.Single IKRotationWeight
    // Size: 0x4
    // Offset: 0x58
    float IKRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x5C
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Padding between fields: IKRotation and: pelvis
    char __padding1[0x4] = {};
    // public RootMotion.FinalIK.IKSolver/Point pelvis
    // Size: 0x8
    // Offset: 0x70
    RootMotion::FinalIK::IKSolver::Point* pelvis;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point thigh
    // Size: 0x8
    // Offset: 0x78
    RootMotion::FinalIK::IKSolver::Point* thigh;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point calf
    // Size: 0x8
    // Offset: 0x80
    RootMotion::FinalIK::IKSolver::Point* calf;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point foot
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolver::Point* foot;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point toe
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolver::Point* toe;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolverVR/Leg leg
    // Size: 0x8
    // Offset: 0x98
    RootMotion::FinalIK::IKSolverVR::Leg* leg;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Leg*) == 0x8);
    // public UnityEngine.Vector3 heelOffset
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 heelOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: heelOffset and: positions
    char __padding8[0x4] = {};
    // private UnityEngine.Vector3[] positions
    // Size: 0x8
    // Offset: 0xB0
    ::Array<UnityEngine::Vector3>* positions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] rotations
    // Size: 0x8
    // Offset: 0xB8
    ::Array<UnityEngine::Quaternion>* rotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // Creating value type constructor for type: IKSolverLeg
    IKSolverLeg(float IKRotationWeight_ = {}, UnityEngine::Quaternion IKRotation_ = {}, RootMotion::FinalIK::IKSolver::Point* pelvis_ = {}, RootMotion::FinalIK::IKSolver::Point* thigh_ = {}, RootMotion::FinalIK::IKSolver::Point* calf_ = {}, RootMotion::FinalIK::IKSolver::Point* foot_ = {}, RootMotion::FinalIK::IKSolver::Point* toe_ = {}, RootMotion::FinalIK::IKSolverVR::Leg* leg_ = {}, UnityEngine::Vector3 heelOffset_ = {}, ::Array<UnityEngine::Vector3>* positions_ = {}, ::Array<UnityEngine::Quaternion>* rotations_ = {}) noexcept : IKRotationWeight{IKRotationWeight_}, IKRotation{IKRotation_}, pelvis{pelvis_}, thigh{thigh_}, calf{calf_}, foot{foot_}, toe{toe_}, leg{leg_}, heelOffset{heelOffset_}, positions{positions_}, rotations{rotations_} {}
    // public System.Boolean SetChain(UnityEngine.Transform pelvis, UnityEngine.Transform thigh, UnityEngine.Transform calf, UnityEngine.Transform foot, UnityEngine.Transform toe, UnityEngine.Transform root)
    // Offset: 0x1BFDB7C
    bool SetChain(UnityEngine::Transform* pelvis, UnityEngine::Transform* thigh, UnityEngine::Transform* calf, UnityEngine::Transform* foot, UnityEngine::Transform* toe, UnityEngine::Transform* root);
    // private System.Void Solve()
    // Offset: 0x1BFE348
    void Solve();
    // private System.Void Read()
    // Offset: 0x1BFE010
    void Read();
    // private System.Void Write()
    // Offset: 0x1BFE450
    void Write();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1BFD808
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1BFDBEC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1BFDD48
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1BFDEE0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1BFDF3C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x1BFDFAC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1BFE31C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1BFE5DC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLeg* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverLeg::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLeg*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverLeg
  #pragma pack(pop)
  static check_size<sizeof(IKSolverLeg), 184 + sizeof(::Array<UnityEngine::Quaternion>*)> __RootMotion_FinalIK_IKSolverLegSizeCheck;
  static_assert(sizeof(IKSolverLeg) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLeg*, "RootMotion.FinalIK", "IKSolverLeg");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLeg::*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLeg::SetChain)> {
  static const MethodInfo* get() {
    static auto* pelvis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* thigh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* calf = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* foot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* toe = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pelvis, thigh, calf, foot, toe, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::Solve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::Write)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLeg::*)(::Il2CppString*&)>(&RootMotion::FinalIK::IKSolverLeg::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverLeg::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLeg::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLeg::*)()>(&RootMotion::FinalIK::IKSolverLeg::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLeg*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLeg::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
