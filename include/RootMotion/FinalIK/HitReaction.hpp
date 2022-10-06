// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
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
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: HitReaction
  class HitReaction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HitReaction);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReaction*, "RootMotion.FinalIK", "HitReaction");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReaction : public ::RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: ::RootMotion::FinalIK::HitReaction::HitPoint
    class HitPoint;
    // Nested type: ::RootMotion::FinalIK::HitReaction::HitPointEffector
    class HitPointEffector;
    // Nested type: ::RootMotion::FinalIK::HitReaction::HitPointBone
    class HitPointBone;
    public:
    // [TooltipAttribute] Offset: 0x1126D30
    // public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointEffector[] effectorHitPoints
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointEffector*> effectorHitPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointEffector*>) == 0x8);
    // [TooltipAttribute] Offset: 0x1126D68
    // public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone[] boneHitPoints
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointBone*> boneHitPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointBone*>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointEffector[] effectorHitPoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointEffector*>& dyn_effectorHitPoints();
    // Get instance field reference: public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone[] boneHitPoints
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointBone*>& dyn_boneHitPoints();
    // public System.Boolean get_inProgress()
    // Offset: 0x22734AC
    bool get_inProgress();
    // public System.Void Hit(UnityEngine.Collider collider, UnityEngine.Vector3 force, UnityEngine.Vector3 point)
    // Offset: 0x227379C
    void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point);
    // public System.Void .ctor()
    // Offset: 0x2273B08
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HitReaction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction*, creationType>()));
    }
    // protected override System.Void OnModifyOffset()
    // Offset: 0x227357C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.HitReaction
  #pragma pack(pop)
  static check_size<sizeof(HitReaction), 56 + sizeof(::ArrayW<::RootMotion::FinalIK::HitReaction::HitPointBone*>)> __RootMotion_FinalIK_HitReactionSizeCheck;
  static_assert(sizeof(HitReaction) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::get_inProgress
// Il2CppName: get_inProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::HitReaction::*)()>(&RootMotion::FinalIK::HitReaction::get_inProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction*), "get_inProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::Hit
// Il2CppName: Hit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::HitReaction::Hit)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction*), "Hit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider, force, point});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::*)()>(&RootMotion::FinalIK::HitReaction::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
