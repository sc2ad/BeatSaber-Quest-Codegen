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
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: OffsetModifier
  class OffsetModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::OffsetModifier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetModifier*, "RootMotion.FinalIK", "OffsetModifier");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class OffsetModifier : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::FinalIK::OffsetModifier::OffsetLimits
    class OffsetLimits;
    // Nested type: ::RootMotion::FinalIK::OffsetModifier::$Initiate$d__8
    class $Initiate$d__8;
    public:
    // [TooltipAttribute] Offset: 0x113ADC4
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: weight and: ik
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0x113ADFC
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x20
    ::RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // protected System.Single lastTime
    // Size: 0x4
    // Offset: 0x28
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedIK*& dyn_ik();
    // Get instance field reference: protected System.Single lastTime
    [[deprecated("Use field access instead!")]] float& dyn_lastTime();
    // protected System.Single get_deltaTime()
    // Offset: 0x203CC00
    float get_deltaTime();
    // protected System.Void .ctor()
    // Offset: 0x203D214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::OffsetModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetModifier*, creationType>()));
    }
    // protected System.Void OnModifyOffset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnModifyOffset();
    // protected System.Void Start()
    // Offset: 0x203CC2C
    void Start();
    // private System.Collections.IEnumerator Initiate()
    // Offset: 0x203CC58
    ::System::Collections::IEnumerator* Initiate();
    // private System.Void ModifyOffset()
    // Offset: 0x203CCF4
    void ModifyOffset();
    // protected System.Void ApplyLimits(RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits[] limits)
    // Offset: 0x203CE00
    void ApplyLimits(::ArrayW<::RootMotion::FinalIK::OffsetModifier::OffsetLimits*> limits);
    // protected System.Void OnDestroy()
    // Offset: 0x203D11C
    void OnDestroy();
  }; // RootMotion.FinalIK.OffsetModifier
  #pragma pack(pop)
  static check_size<sizeof(OffsetModifier), 40 + sizeof(float)> __RootMotion_FinalIK_OffsetModifierSizeCheck;
  static_assert(sizeof(OffsetModifier) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::get_deltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::ModifyOffset
// Il2CppName: ModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::ModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "ModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::ApplyLimits
// Il2CppName: ApplyLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)(::ArrayW<::RootMotion::FinalIK::OffsetModifier::OffsetLimits*>)>(&RootMotion::FinalIK::OffsetModifier::ApplyLimits)> {
  static const MethodInfo* get() {
    static auto* limits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "OffsetModifier/OffsetLimits"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "ApplyLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{limits});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
