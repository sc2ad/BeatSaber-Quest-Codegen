// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
  // Forward declaring type: IKSolverFABRIK
  class IKSolverFABRIK;
  // Forward declaring type: IKSolverLookAt
  class IKSolverLookAt;
  // Forward declaring type: IKSolverAim
  class IKSolverAim;
  // Forward declaring type: Constraints
  class Constraints;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: BipedIKSolvers
  class BipedIKSolvers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::BipedIKSolvers);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::BipedIKSolvers*, "RootMotion.FinalIK", "BipedIKSolvers");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.BipedIKSolvers
  // [TokenAttribute] Offset: FFFFFFFF
  class BipedIKSolvers : public ::Il2CppObject {
    public:
    public:
    // public RootMotion.FinalIK.IKSolverLimb leftFoot
    // Size: 0x8
    // Offset: 0x10
    ::RootMotion::FinalIK::IKSolverLimb* leftFoot;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLimb rightFoot
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::IKSolverLimb* rightFoot;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLimb leftHand
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::FinalIK::IKSolverLimb* leftHand;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLimb rightHand
    // Size: 0x8
    // Offset: 0x28
    ::RootMotion::FinalIK::IKSolverLimb* rightHand;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // public RootMotion.FinalIK.IKSolverFABRIK spine
    // Size: 0x8
    // Offset: 0x30
    ::RootMotion::FinalIK::IKSolverFABRIK* spine;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverFABRIK*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt lookAt
    // Size: 0x8
    // Offset: 0x38
    ::RootMotion::FinalIK::IKSolverLookAt* lookAt;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverLookAt*) == 0x8);
    // public RootMotion.FinalIK.IKSolverAim aim
    // Size: 0x8
    // Offset: 0x40
    ::RootMotion::FinalIK::IKSolverAim* aim;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverAim*) == 0x8);
    // public RootMotion.FinalIK.Constraints pelvis
    // Size: 0x8
    // Offset: 0x48
    ::RootMotion::FinalIK::Constraints* pelvis;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::Constraints*) == 0x8);
    // private RootMotion.FinalIK.IKSolverLimb[] _limbs
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*> limbs;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKSolverLimb*>) == 0x8);
    // private RootMotion.FinalIK.IKSolver[] _ikSolvers
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::RootMotion::FinalIK::IKSolver*> ikSolvers;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKSolver*>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLimb leftFoot
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLimb*& dyn_leftFoot();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLimb rightFoot
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLimb*& dyn_rightFoot();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLimb leftHand
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLimb*& dyn_leftHand();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLimb rightHand
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLimb*& dyn_rightHand();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverFABRIK spine
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverFABRIK*& dyn_spine();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLookAt lookAt
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverLookAt*& dyn_lookAt();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverAim aim
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverAim*& dyn_aim();
    // Get instance field reference: public RootMotion.FinalIK.Constraints pelvis
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::Constraints*& dyn_pelvis();
    // Get instance field reference: private RootMotion.FinalIK.IKSolverLimb[] _limbs
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*>& dyn__limbs();
    // Get instance field reference: private RootMotion.FinalIK.IKSolver[] _ikSolvers
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKSolver*>& dyn__ikSolvers();
    // public RootMotion.FinalIK.IKSolverLimb[] get_limbs()
    // Offset: 0x23163B0
    ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*> get_limbs();
    // public RootMotion.FinalIK.IKSolver[] get_ikSolvers()
    // Offset: 0x2316FC8
    ::ArrayW<::RootMotion::FinalIK::IKSolver*> get_ikSolvers();
    // public System.Void .ctor()
    // Offset: 0x2316E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedIKSolvers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::BipedIKSolvers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedIKSolvers*, creationType>()));
    }
    // public System.Void AssignReferences(RootMotion.BipedReferences references)
    // Offset: 0x231676C
    void AssignReferences(::RootMotion::BipedReferences* references);
  }; // RootMotion.FinalIK.BipedIKSolvers
  #pragma pack(pop)
  static check_size<sizeof(BipedIKSolvers), 88 + sizeof(::ArrayW<::RootMotion::FinalIK::IKSolver*>)> __RootMotion_FinalIK_BipedIKSolversSizeCheck;
  static_assert(sizeof(BipedIKSolvers) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::get_limbs
// Il2CppName: get_limbs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*> (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::get_limbs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIKSolvers*), "get_limbs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers
// Il2CppName: get_ikSolvers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolver*> (RootMotion::FinalIK::BipedIKSolvers::*)()>(&RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIKSolvers*), "get_ikSolvers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::BipedIKSolvers::AssignReferences
// Il2CppName: AssignReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BipedIKSolvers::*)(::RootMotion::BipedReferences*)>(&RootMotion::FinalIK::BipedIKSolvers::AssignReferences)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BipedIKSolvers*), "AssignReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references});
  }
};
