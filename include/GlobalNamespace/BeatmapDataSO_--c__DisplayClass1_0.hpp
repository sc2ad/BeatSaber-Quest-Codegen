// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataSO
#include "GlobalNamespace/BeatmapDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapDataBasicInfo
  class IBeatmapDataBasicInfo;
}
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0*, "", "BeatmapDataSO/<>c__DisplayClass1_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataSO/<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapDataSO::$$c__DisplayClass1_0 : public ::Il2CppObject {
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
    // public IBeatmapDataBasicInfo beatmapDataBasicInfo
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapDataBasicInfo*) == 0x8);
    // public BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData
    // Size: 0x8
    // Offset: 0x18
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData*) == 0x8);
    public:
    // Get instance field reference: public IBeatmapDataBasicInfo beatmapDataBasicInfo
    ::GlobalNamespace::IBeatmapDataBasicInfo*& dyn_beatmapDataBasicInfo();
    // Get instance field reference: public BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData
    ::BeatmapSaveDataVersion3::BeatmapSaveData*& dyn_beatmapSaveData();
    // System.Void <GetBeatmapDataBasicInfoAsync>b__0()
    // Offset: 0x136D314
    void $GetBeatmapDataBasicInfoAsync$b__0();
    // public System.Void .ctor()
    // Offset: 0x136D30C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataSO::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataSO::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // BeatmapDataSO/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataSO::$$c__DisplayClass1_0), 24 + sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData*)> __GlobalNamespace_BeatmapDataSO_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(BeatmapDataSO::$$c__DisplayClass1_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0::$GetBeatmapDataBasicInfoAsync$b__0
// Il2CppName: <GetBeatmapDataBasicInfoAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0::*)()>(&GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0::$GetBeatmapDataBasicInfoAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0*), "<GetBeatmapDataBasicInfoAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
