// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: Poser
  class Poser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::Poser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Poser*, "RootMotion.FinalIK", "Poser");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Poser
  // [TokenAttribute] Offset: FFFFFFFF
  class Poser : public ::RootMotion::SolverManager {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Transform poseRoot
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* poseRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0x1275120
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x40
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x1275138
    // public System.Single localRotationWeight
    // Size: 0x4
    // Offset: 0x44
    float localRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x1275150
    // public System.Single localPositionWeight
    // Size: 0x4
    // Offset: 0x48
    float localPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x4C
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform poseRoot
    ::UnityEngine::Transform*& dyn_poseRoot();
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: public System.Single localRotationWeight
    float& dyn_localRotationWeight();
    // Get instance field reference: public System.Single localPositionWeight
    float& dyn_localPositionWeight();
    // Get instance field reference: private System.Boolean initiated
    bool& dyn_initiated();
    // public System.Void AutoMapping()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AutoMapping();
    // public System.Void UpdateManual()
    // Offset: 0x1F713D8
    void UpdateManual();
    // protected System.Void InitiatePoser()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InitiatePoser();
    // protected System.Void UpdatePoser()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdatePoser();
    // protected System.Void FixPoserTransforms()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void FixPoserTransforms();
    // protected System.Void .ctor()
    // Offset: 0x1F7148C
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Poser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::Poser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Poser*, creationType>()));
    }
    // protected override System.Void UpdateSolver()
    // Offset: 0x1F713E4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1F71438
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x1F71474
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
  }; // RootMotion.FinalIK.Poser
  #pragma pack(pop)
  static check_size<sizeof(Poser), 76 + sizeof(bool)> __RootMotion_FinalIK_PoserSizeCheck;
  static_assert(sizeof(Poser) == 0x4D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::AutoMapping
// Il2CppName: AutoMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::AutoMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "AutoMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::UpdateManual
// Il2CppName: UpdateManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::UpdateManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "UpdateManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::InitiatePoser
// Il2CppName: InitiatePoser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::InitiatePoser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "InitiatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::UpdatePoser
// Il2CppName: UpdatePoser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::UpdatePoser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "UpdatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::FixPoserTransforms
// Il2CppName: FixPoserTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::FixPoserTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "FixPoserTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::UpdateSolver
// Il2CppName: UpdateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::UpdateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::InitiateSolver
// Il2CppName: InitiateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::InitiateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Poser::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Poser::*)()>(&RootMotion::FinalIK::Poser::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Poser*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
