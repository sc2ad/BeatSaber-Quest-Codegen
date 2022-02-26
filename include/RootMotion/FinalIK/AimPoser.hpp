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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: AimPoser
  class AimPoser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::AimPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::AimPoser*, "RootMotion.FinalIK", "AimPoser");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.AimPoser
  // [TokenAttribute] Offset: FFFFFFFF
  class AimPoser : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::FinalIK::AimPoser::Pose
    class Pose;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Single angleBuffer
    // Size: 0x4
    // Offset: 0x18
    float angleBuffer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: angleBuffer and: poses
    char __padding0[0x4] = {};
    // public RootMotion.FinalIK.AimPoser/RootMotion.FinalIK.Pose[] poses
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::RootMotion::FinalIK::AimPoser::Pose*> poses;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::AimPoser::Pose*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single angleBuffer
    float& dyn_angleBuffer();
    // Get instance field reference: public RootMotion.FinalIK.AimPoser/RootMotion.FinalIK.Pose[] poses
    ::ArrayW<::RootMotion::FinalIK::AimPoser::Pose*>& dyn_poses();
    // public RootMotion.FinalIK.AimPoser/RootMotion.FinalIK.Pose GetPose(UnityEngine.Vector3 localDirection)
    // Offset: 0x2228D9C
    ::RootMotion::FinalIK::AimPoser::Pose* GetPose(::UnityEngine::Vector3 localDirection);
    // public System.Void SetPoseActive(RootMotion.FinalIK.AimPoser/RootMotion.FinalIK.Pose pose)
    // Offset: 0x2229110
    void SetPoseActive(::RootMotion::FinalIK::AimPoser::Pose* pose);
    // public System.Void .ctor()
    // Offset: 0x222917C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AimPoser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::AimPoser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AimPoser*, creationType>()));
    }
  }; // RootMotion.FinalIK.AimPoser
  #pragma pack(pop)
  static check_size<sizeof(AimPoser), 32 + sizeof(::ArrayW<::RootMotion::FinalIK::AimPoser::Pose*>)> __RootMotion_FinalIK_AimPoserSizeCheck;
  static_assert(sizeof(AimPoser) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::GetPose
// Il2CppName: GetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::AimPoser::Pose* (RootMotion::FinalIK::AimPoser::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::AimPoser::GetPose)> {
  static const MethodInfo* get() {
    static auto* localDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimPoser*), "GetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localDirection});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::SetPoseActive
// Il2CppName: SetPoseActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimPoser::*)(::RootMotion::FinalIK::AimPoser::Pose*)>(&RootMotion::FinalIK::AimPoser::SetPoseActive)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "AimPoser/Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimPoser*), "SetPoseActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
