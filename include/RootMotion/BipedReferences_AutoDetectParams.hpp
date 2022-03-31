// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.BipedReferences
#include "RootMotion/BipedReferences.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BipedReferences::AutoDetectParams, "RootMotion", "BipedReferences/AutoDetectParams");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: RootMotion.BipedReferences/RootMotion.AutoDetectParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct BipedReferences::AutoDetectParams/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean legsParentInSpine
    // Size: 0x1
    // Offset: 0x0
    bool legsParentInSpine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean includeEyes
    // Size: 0x1
    // Offset: 0x1
    bool includeEyes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: AutoDetectParams
    constexpr AutoDetectParams(bool legsParentInSpine_ = {}, bool includeEyes_ = {}) noexcept : legsParentInSpine{legsParentInSpine_}, includeEyes{includeEyes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean legsParentInSpine
    bool& dyn_legsParentInSpine();
    // Get instance field reference: public System.Boolean includeEyes
    bool& dyn_includeEyes();
    // static public RootMotion.BipedReferences/RootMotion.AutoDetectParams get_Default()
    // Offset: 0x2200AE0
    static ::RootMotion::BipedReferences::AutoDetectParams get_Default();
    // public System.Void .ctor(System.Boolean legsParentInSpine, System.Boolean includeEyes)
    // Offset: 0x2200ACC
    // ABORTED: conflicts with another method.  AutoDetectParams(bool legsParentInSpine, bool includeEyes);
  }; // RootMotion.BipedReferences/RootMotion.AutoDetectParams
  #pragma pack(pop)
  static check_size<sizeof(BipedReferences::AutoDetectParams), 1 + sizeof(bool)> __RootMotion_BipedReferences_AutoDetectParamsSizeCheck;
  static_assert(sizeof(BipedReferences::AutoDetectParams) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BipedReferences::AutoDetectParams::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::BipedReferences::AutoDetectParams (*)()>(&RootMotion::BipedReferences::AutoDetectParams::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences::AutoDetectParams), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::AutoDetectParams::AutoDetectParams
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
