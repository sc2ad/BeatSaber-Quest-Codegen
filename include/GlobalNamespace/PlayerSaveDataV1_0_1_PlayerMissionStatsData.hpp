// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*, "", "PlayerSaveDataV1_0_1/PlayerMissionStatsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerMissionStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerMissionStatsData : public ::Il2CppObject {
    public:
    public:
    // public System.String missionId
    // Size: 0x8
    // Offset: 0x10
    ::StringW missionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean cleared
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String missionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_missionId();
    // Get instance field reference: public System.Boolean cleared
    [[deprecated("Use field access instead!")]] bool& dyn_cleared();
    // public System.Void .ctor()
    // Offset: 0x14D9F5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerMissionStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerMissionStatsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerMissionStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerMissionStatsData), 24 + sizeof(bool)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerMissionStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerMissionStatsData) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
