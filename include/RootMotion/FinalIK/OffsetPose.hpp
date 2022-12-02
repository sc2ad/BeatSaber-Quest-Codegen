// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: OffsetPose
  class OffsetPose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::OffsetPose);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetPose*, "RootMotion.FinalIK", "OffsetPose");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetPose
  // [TokenAttribute] Offset: FFFFFFFF
  class OffsetPose : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::FinalIK::OffsetPose::EffectorLink
    class EffectorLink;
    public:
    // public RootMotion.FinalIK.OffsetPose/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::RootMotion::FinalIK::OffsetPose::EffectorLink*> effectorLinks;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::OffsetPose::EffectorLink*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.OffsetPose/RootMotion.FinalIK.EffectorLink[] effectorLinks
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::OffsetPose::EffectorLink*>& dyn_effectorLinks();
    // public System.Void .ctor()
    // Offset: 0x203DE4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetPose* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::OffsetPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetPose*, creationType>()));
    }
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x203D99C
    void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, UnityEngine.Quaternion rotation)
    // Offset: 0x203DD94
    void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, ::UnityEngine::Quaternion rotation);
  }; // RootMotion.FinalIK.OffsetPose
  #pragma pack(pop)
  static check_size<sizeof(OffsetPose), 24 + sizeof(::ArrayW<::RootMotion::FinalIK::OffsetPose::EffectorLink*>)> __RootMotion_FinalIK_OffsetPoseSizeCheck;
  static_assert(sizeof(OffsetPose) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetPose::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetPose::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float)>(&RootMotion::FinalIK::OffsetPose::Apply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetPose*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetPose::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetPose::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float, ::UnityEngine::Quaternion)>(&RootMotion::FinalIK::OffsetPose::Apply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetPose*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight, rotation});
  }
};
