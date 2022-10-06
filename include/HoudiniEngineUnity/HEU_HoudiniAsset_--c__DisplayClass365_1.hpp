// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_HoudiniAsset
#include "HoudiniEngineUnity/HEU_HoudiniAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_Curve
  class HEU_Curve;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1*, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c__DisplayClass365_1");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c__DisplayClass365_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_HoudiniAsset::$$c__DisplayClass365_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x10
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: i and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c__DisplayClass365_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // Get instance field reference: public HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c__DisplayClass365_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x18713BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_HoudiniAsset::$$c__DisplayClass365_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_HoudiniAsset::$$c__DisplayClass365_1*, creationType>()));
    }
    // System.Boolean <CopyPropertiesTo>b__0(HoudiniEngineUnity.HEU_Curve curve)
    // Offset: 0x18713C4
    bool $CopyPropertiesTo$b__0(::HoudiniEngineUnity::HEU_Curve* curve);
  }; // HoudiniEngineUnity.HEU_HoudiniAsset/HoudiniEngineUnity.<>c__DisplayClass365_1
  #pragma pack(pop)
  static check_size<sizeof(HEU_HoudiniAsset::$$c__DisplayClass365_1), 24 + sizeof(::HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_0*)> __HoudiniEngineUnity_HEU_HoudiniAsset_$$c__DisplayClass365_1SizeCheck;
  static_assert(sizeof(HEU_HoudiniAsset::$$c__DisplayClass365_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1::$CopyPropertiesTo$b__0
// Il2CppName: <CopyPropertiesTo>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1::*)(::HoudiniEngineUnity::HEU_Curve*)>(&HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1::$CopyPropertiesTo$b__0)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Curve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAsset::$$c__DisplayClass365_1*), "<CopyPropertiesTo>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
