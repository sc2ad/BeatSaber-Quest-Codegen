// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionTarget
#include "RootMotion/FinalIK/InteractionTarget.hpp"
// Including type: RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTarget::Multiplier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTarget::Multiplier*, "RootMotion.FinalIK", "InteractionTarget/Multiplier");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTarget/RootMotion.FinalIK.Multiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionTarget::Multiplier : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1129170
    // public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type curve
    // Size: 0x4
    // Offset: 0x10
    ::RootMotion::FinalIK::InteractionObject::WeightCurve::Type curve;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionObject::WeightCurve::Type) == 0x4);
    // [TooltipAttribute] Offset: 0x11291A8
    // public System.Single multiplier
    // Size: 0x4
    // Offset: 0x14
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.WeightCurve/RootMotion.FinalIK.Type curve
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionObject::WeightCurve::Type& dyn_curve();
    // Get instance field reference: public System.Single multiplier
    [[deprecated("Use field access instead!")]] float& dyn_multiplier();
    // public System.Void .ctor()
    // Offset: 0x204B644
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTarget::Multiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionTarget::Multiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTarget::Multiplier*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTarget/RootMotion.FinalIK.Multiplier
  #pragma pack(pop)
  static check_size<sizeof(InteractionTarget::Multiplier), 20 + sizeof(float)> __RootMotion_FinalIK_InteractionTarget_MultiplierSizeCheck;
  static_assert(sizeof(InteractionTarget::Multiplier) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTarget::Multiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
