// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/PlayerLevelStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::PlayerLevelStatsData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public BeatmapDifficulty difficulty
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: difficulty and: beatmapCharacteristicName
    char __padding1[0x4] = {};
    // public System.String beatmapCharacteristicName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* beatmapCharacteristicName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 highScore
    // Size: 0x4
    // Offset: 0x28
    int highScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x2C
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x30
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: maxRank
    char __padding5[0x3] = {};
    // public RankModel/Rank maxRank
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::RankModel::Rank maxRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // public System.Boolean validScore
    // Size: 0x1
    // Offset: 0x38
    bool validScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validScore and: playCount
    char __padding7[0x3] = {};
    // public System.Int32 playCount
    // Size: 0x4
    // Offset: 0x3C
    int playCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String levelId
    ::Il2CppString*& dyn_levelId();
    // Get instance field reference: public BeatmapDifficulty difficulty
    GlobalNamespace::BeatmapDifficulty& dyn_difficulty();
    // Get instance field reference: public System.String beatmapCharacteristicName
    ::Il2CppString*& dyn_beatmapCharacteristicName();
    // Get instance field reference: public System.Int32 highScore
    int& dyn_highScore();
    // Get instance field reference: public System.Int32 maxCombo
    int& dyn_maxCombo();
    // Get instance field reference: public System.Boolean fullCombo
    bool& dyn_fullCombo();
    // Get instance field reference: public RankModel/Rank maxRank
    GlobalNamespace::RankModel::Rank& dyn_maxRank();
    // Get instance field reference: public System.Boolean validScore
    bool& dyn_validScore();
    // Get instance field reference: public System.Int32 playCount
    int& dyn_playCount();
    // public System.Void .ctor()
    // Offset: 0x12B6B80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerLevelStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerLevelStatsData*, creationType>()));
    }
  }; // PlayerSaveData/PlayerLevelStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::PlayerLevelStatsData), 60 + sizeof(int)> __GlobalNamespace_PlayerSaveData_PlayerLevelStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveData::PlayerLevelStatsData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*, "", "PlayerSaveData/PlayerLevelStatsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::PlayerLevelStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
