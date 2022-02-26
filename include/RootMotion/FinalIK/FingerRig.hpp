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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: Finger
  class Finger;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FingerRig
  class FingerRig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FingerRig);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FingerRig*, "RootMotion.FinalIK", "FingerRig");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FingerRig
  // [TokenAttribute] Offset: FFFFFFFF
  class FingerRig : public ::RootMotion::SolverManager {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x34
    char ___base_padding[0x1] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x1263AA0
    // [RangeAttribute] Offset: 0x1263AA0
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x34
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.Finger[] fingers
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::RootMotion::FinalIK::Finger*> fingers;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::Finger*>) == 0x8);
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: public RootMotion.FinalIK.Finger[] fingers
    ::ArrayW<::RootMotion::FinalIK::Finger*>& dyn_fingers();
    // Get instance field reference: private System.Boolean <initiated>k__BackingField
    bool& dyn_$initiated$k__BackingField();
    // public System.Boolean get_initiated()
    // Offset: 0x21BD4F4
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x21BD4FC
    void set_initiated(bool value);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x21BD508
    bool IsValid(ByRef<::StringW> errorMessage);
    // public System.Void AutoDetect()
    // Offset: 0x21BD594
    void AutoDetect();
    // public System.Void AddFinger(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, UnityEngine.Transform tip, UnityEngine.Transform target)
    // Offset: 0x21BD8B0
    void AddFinger(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* tip, ::UnityEngine::Transform* target);
    // public System.Void RemoveFinger(System.Int32 index)
    // Offset: 0x21BDA24
    void RemoveFinger(int index);
    // private System.Void AddChildrenRecursive(UnityEngine.Transform parent, ref UnityEngine.Transform[] array)
    // Offset: 0x21BD7A8
    void AddChildrenRecursive(::UnityEngine::Transform* parent, ByRef<::ArrayW<::UnityEngine::Transform*>> array);
    // public System.Void UpdateFingerSolvers()
    // Offset: 0x21BDC54
    void UpdateFingerSolvers();
    // public System.Void FixFingerTransforms()
    // Offset: 0x21BDCD0
    void FixFingerTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x21BDD48
    void StoreDefaultLocalState();
    // public System.Void .ctor()
    // Offset: 0x21BDDCC
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerRig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FingerRig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerRig*, creationType>()));
    }
    // protected override System.Void InitiateSolver()
    // Offset: 0x21BDB8C
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void UpdateSolver()
    // Offset: 0x21BDDB4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x21BDDB8
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
  }; // RootMotion.FinalIK.FingerRig
  #pragma pack(pop)
  static check_size<sizeof(FingerRig), 64 + sizeof(bool)> __RootMotion_FinalIK_FingerRigSizeCheck;
  static_assert(sizeof(FingerRig) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)(bool)>(&RootMotion::FinalIK::FingerRig::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FingerRig::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::FingerRig::IsValid)> {
  static const MethodInfo* get() {
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::AutoDetect
// Il2CppName: AutoDetect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::AutoDetect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "AutoDetect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::AddFinger
// Il2CppName: AddFinger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::FingerRig::AddFinger)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* tip = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "AddFinger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3, tip, target});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::RemoveFinger
// Il2CppName: RemoveFinger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)(int)>(&RootMotion::FinalIK::FingerRig::RemoveFinger)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "RemoveFinger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::AddChildrenRecursive
// Il2CppName: AddChildrenRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)(::UnityEngine::Transform*, ByRef<::ArrayW<::UnityEngine::Transform*>>)>(&RootMotion::FinalIK::FingerRig::AddChildrenRecursive)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "AddChildrenRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, array});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::UpdateFingerSolvers
// Il2CppName: UpdateFingerSolvers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::UpdateFingerSolvers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "UpdateFingerSolvers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::FixFingerTransforms
// Il2CppName: FixFingerTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::FixFingerTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "FixFingerTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::InitiateSolver
// Il2CppName: InitiateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::InitiateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::UpdateSolver
// Il2CppName: UpdateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::UpdateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FingerRig::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FingerRig::*)()>(&RootMotion::FinalIK::FingerRig::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FingerRig*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
