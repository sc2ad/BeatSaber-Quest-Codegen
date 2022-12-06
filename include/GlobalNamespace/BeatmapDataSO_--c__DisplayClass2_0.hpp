// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataSO
#include "GlobalNamespace/BeatmapDataSO.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0*, "", "BeatmapDataSO/<>c__DisplayClass2_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataSO/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapDataSO::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public IReadonlyBeatmapData readonlyBeatmapData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IReadonlyBeatmapData* readonlyBeatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // public BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData
    // Size: 0x8
    // Offset: 0x18
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData*) == 0x8);
    // public BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // public System.Single beatsPerMinute
    // Size: 0x4
    // Offset: 0x24
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean loadingForDesignatedEnvironment
    // Size: 0x1
    // Offset: 0x28
    bool loadingForDesignatedEnvironment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loadingForDesignatedEnvironment and: environmentInfo
    char __padding4[0x7] = {};
    // public EnvironmentInfoSO environmentInfo
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // public PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    public:
    // Get instance field reference: public IReadonlyBeatmapData readonlyBeatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn_readonlyBeatmapData();
    // Get instance field reference: public BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData*& dyn_beatmapSaveData();
    // Get instance field reference: public BeatmapDifficulty beatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_beatmapDifficulty();
    // Get instance field reference: public System.Single beatsPerMinute
    [[deprecated("Use field access instead!")]] float& dyn_beatsPerMinute();
    // Get instance field reference: public System.Boolean loadingForDesignatedEnvironment
    [[deprecated("Use field access instead!")]] bool& dyn_loadingForDesignatedEnvironment();
    // Get instance field reference: public EnvironmentInfoSO environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn_environmentInfo();
    // Get instance field reference: public PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // public System.Void .ctor()
    // Offset: 0x15598EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataSO::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataSO::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Void <GetBeatmapDataAsync>b__0()
    // Offset: 0x15598F4
    void $GetBeatmapDataAsync$b__0();
  }; // BeatmapDataSO/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataSO::$$c__DisplayClass2_0), 56 + sizeof(::GlobalNamespace::PlayerSpecificSettings*)> __GlobalNamespace_BeatmapDataSO_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(BeatmapDataSO::$$c__DisplayClass2_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0::$GetBeatmapDataAsync$b__0
// Il2CppName: <GetBeatmapDataAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0::*)()>(&GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0::$GetBeatmapDataAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$$c__DisplayClass2_0*), "<GetBeatmapDataAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
