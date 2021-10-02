// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: FFFFFFFF
  class MultiplayerLevelSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding1[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly System.Boolean hasSong
    // Size: 0x1
    // Offset: 0x28
    bool hasSong;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public readonly BeatmapDifficulty beatmapDifficulty
    GlobalNamespace::BeatmapDifficulty& dyn_beatmapDifficulty();
    // Get instance field reference: public readonly BeatmapCharacteristicSO beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn_beatmapCharacteristic();
    // Get instance field reference: public readonly System.Boolean hasSong
    bool& dyn_hasSong();
    // public System.Void .ctor(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Boolean hasSong)
    // Offset: 0x116B270
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelSceneSetupData* New_ctor(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool hasSong) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelSceneSetupData*, creationType>(previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, hasSong)));
    }
  }; // MultiplayerLevelSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelSceneSetupData), 40 + sizeof(bool)> __GlobalNamespace_MultiplayerLevelSceneSetupDataSizeCheck;
  static_assert(sizeof(MultiplayerLevelSceneSetupData) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelSceneSetupData*, "", "MultiplayerLevelSceneSetupData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
