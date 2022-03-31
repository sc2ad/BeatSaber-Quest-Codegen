// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset
#include "RootMotion/FinalIK/HitReactionVRIK_PositionOffset.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset
#include "RootMotion/FinalIK/IKSolverVR_PositionOffset.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset/PositionOffsetLink");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset/RootMotion.FinalIK.PositionOffsetLink
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIK::PositionOffset::PositionOffsetLink : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x12793D0
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset positionOffset
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverVR::PositionOffset) == 0x4);
    // [TooltipAttribute] Offset: 0x1279408
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastValue
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 lastValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 current
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.PositionOffset positionOffset
    ::RootMotion::FinalIK::IKSolverVR::PositionOffset& dyn_positionOffset();
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: private UnityEngine.Vector3 lastValue
    ::UnityEngine::Vector3& dyn_lastValue();
    // Get instance field reference: private UnityEngine.Vector3 current
    ::UnityEngine::Vector3& dyn_current();
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.Vector3 offset, System.Single crossFader)
    // Offset: 0x21D5474
    void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Vector3 offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x21D5230
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x21D5590
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::PositionOffset::PositionOffsetLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::PositionOffset::PositionOffsetLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset/RootMotion.FinalIK.PositionOffsetLink
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::PositionOffset::PositionOffsetLink), 36 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_HitReactionVRIK_PositionOffset_PositionOffsetLinkSizeCheck;
  static_assert(sizeof(HitReactionVRIK::PositionOffset::PositionOffsetLink) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::*)(::RootMotion::FinalIK::VRIK*, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::Apply)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* crossFader = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, offset, crossFader});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::*)()>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
