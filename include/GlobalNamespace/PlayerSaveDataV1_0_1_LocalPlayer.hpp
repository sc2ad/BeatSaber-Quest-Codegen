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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*, "", "PlayerSaveDataV1_0_1/LocalPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/LocalPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::LocalPlayer : public ::Il2CppObject {
    public:
    public:
    // public System.String playerId
    // Size: 0x8
    // Offset: 0x10
    ::StringW playerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String playerName
    // Size: 0x8
    // Offset: 0x18
    ::StringW playerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean shouldShowTutorialPrompt
    // Size: 0x1
    // Offset: 0x20
    bool shouldShowTutorialPrompt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldShowTutorialPrompt and: gameplayModifiers
    char __padding2[0x7] = {};
    // public PlayerSaveDataV1_0_1/GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerAllOverallStatsData playerAllOverallStatsData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerLevelStatsData> levelsStatsData
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>* levelsStatsData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerMissionStatsData> missionsStatsData
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>* missionsStatsData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public PlayerSaveDataV1_0_1/AchievementsData achievementsData
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData* achievementsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*) == 0x8);
    public:
    // Get instance field reference: public System.String playerId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playerId();
    // Get instance field reference: public System.String playerName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playerName();
    // Get instance field reference: public System.Boolean shouldShowTutorialPrompt
    [[deprecated("Use field access instead!")]] bool& dyn_shouldShowTutorialPrompt();
    // Get instance field reference: public PlayerSaveDataV1_0_1/GameplayModifiers gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers*& dyn_gameplayModifiers();
    // Get instance field reference: public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // Get instance field reference: public PlayerSaveDataV1_0_1/PlayerAllOverallStatsData playerAllOverallStatsData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*& dyn_playerAllOverallStatsData();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerLevelStatsData> levelsStatsData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>*& dyn_levelsStatsData();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerMissionStatsData> missionsStatsData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>*& dyn_missionsStatsData();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_showedMissionHelpIds();
    // Get instance field reference: public PlayerSaveDataV1_0_1/AchievementsData achievementsData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*& dyn_achievementsData();
    // public System.Void .ctor()
    // Offset: 0x14D9E58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::LocalPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::LocalPlayer*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/LocalPlayer
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::LocalPlayer), 88 + sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*)> __GlobalNamespace_PlayerSaveDataV1_0_1_LocalPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::LocalPlayer) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
