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
  // Forward declaring type: Inertia
  class Inertia;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::Inertia);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Inertia*, "RootMotion.FinalIK", "Inertia");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia
  // [TokenAttribute] Offset: FFFFFFFF
  class Inertia : public ::RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: ::RootMotion::FinalIK::Inertia::Body
    class Body;
    public:
    // [TooltipAttribute] Offset: 0x113E948
    // public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body[] bodies
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::RootMotion::FinalIK::Inertia::Body*> bodies;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::Inertia::Body*>) == 0x8);
    // [TooltipAttribute] Offset: 0x113E980
    // public RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits[] limits
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::RootMotion::FinalIK::OffsetModifier::OffsetLimits*> limits;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::OffsetModifier::OffsetLimits*>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body[] bodies
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::Inertia::Body*>& dyn_bodies();
    // Get instance field reference: public RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits[] limits
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::OffsetModifier::OffsetLimits*>& dyn_limits();
    // public System.Void ResetBodies()
    // Offset: 0x240E3D8
    void ResetBodies();
    // public System.Void .ctor()
    // Offset: 0x240E960
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::Inertia::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia*, creationType>()));
    }
    // protected override System.Void OnModifyOffset()
    // Offset: 0x240E52C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.Inertia
  #pragma pack(pop)
  static check_size<sizeof(Inertia), 56 + sizeof(::ArrayW<::RootMotion::FinalIK::OffsetModifier::OffsetLimits*>)> __RootMotion_FinalIK_InertiaSizeCheck;
  static_assert(sizeof(Inertia) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::ResetBodies
// Il2CppName: ResetBodies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::*)()>(&RootMotion::FinalIK::Inertia::ResetBodies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia*), "ResetBodies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::*)()>(&RootMotion::FinalIK::Inertia::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
