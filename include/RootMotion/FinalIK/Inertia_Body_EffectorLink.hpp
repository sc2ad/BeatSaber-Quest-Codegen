// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body
#include "RootMotion/FinalIK/Inertia_Body.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::Inertia::Body::EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Inertia::Body::EffectorLink*, "RootMotion.FinalIK", "Inertia/Body/EffectorLink");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink
  // [TokenAttribute] Offset: FFFFFFFF
  class Inertia::Body::EffectorLink : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1142374
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0x11423AC
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effector
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedEffector& dyn_effector();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // public System.Void .ctor()
    // Offset: 0x240E984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia::Body::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::Inertia::Body::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia::Body::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink
  #pragma pack(pop)
  static check_size<sizeof(Inertia::Body::EffectorLink), 20 + sizeof(float)> __RootMotion_FinalIK_Inertia_Body_EffectorLinkSizeCheck;
  static_assert(sizeof(Inertia::Body::EffectorLink) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::EffectorLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
