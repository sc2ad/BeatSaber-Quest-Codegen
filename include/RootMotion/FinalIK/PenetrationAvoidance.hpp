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
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: PenetrationAvoidance
  class PenetrationAvoidance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::PenetrationAvoidance);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::PenetrationAvoidance*, "RootMotion.FinalIK", "PenetrationAvoidance");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.PenetrationAvoidance
  // [TokenAttribute] Offset: FFFFFFFF
  class PenetrationAvoidance : public ::RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: ::RootMotion::FinalIK::PenetrationAvoidance::Avoider
    class Avoider;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x1266960
    // public RootMotion.FinalIK.PenetrationAvoidance/RootMotion.FinalIK.Avoider[] avoiders
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::RootMotion::FinalIK::PenetrationAvoidance::Avoider*> avoiders;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::PenetrationAvoidance::Avoider*>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.PenetrationAvoidance/RootMotion.FinalIK.Avoider[] avoiders
    ::ArrayW<::RootMotion::FinalIK::PenetrationAvoidance::Avoider*>& dyn_avoiders();
    // public System.Void .ctor()
    // Offset: 0x1F0CAE8
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PenetrationAvoidance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::PenetrationAvoidance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PenetrationAvoidance*, creationType>()));
    }
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1F0C868
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.PenetrationAvoidance
  #pragma pack(pop)
  static check_size<sizeof(PenetrationAvoidance), 48 + sizeof(::ArrayW<::RootMotion::FinalIK::PenetrationAvoidance::Avoider*>)> __RootMotion_FinalIK_PenetrationAvoidanceSizeCheck;
  static_assert(sizeof(PenetrationAvoidance) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::PenetrationAvoidance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::PenetrationAvoidance::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::PenetrationAvoidance::*)()>(&RootMotion::FinalIK::PenetrationAvoidance::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::PenetrationAvoidance*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
