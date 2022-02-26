// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*, "", "PlatformLeaderboardsModel/LeaderboardScore");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/LeaderboardScore
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformLeaderboardsModel::LeaderboardScore : public ::Il2CppObject {
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
    // public readonly System.Int32 score
    // Size: 0x4
    // Offset: 0x10
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 rank
    // Size: 0x4
    // Offset: 0x14
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String playerName
    // Size: 0x8
    // Offset: 0x18
    ::StringW playerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String playerId
    // Size: 0x8
    // Offset: 0x20
    ::StringW playerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 score
    int& dyn_score();
    // Get instance field reference: public readonly System.Int32 rank
    int& dyn_rank();
    // Get instance field reference: public readonly System.String playerName
    ::StringW& dyn_playerName();
    // Get instance field reference: public readonly System.String playerId
    ::StringW& dyn_playerId();
    // public System.Void .ctor(System.Int32 score, System.Int32 rank, System.String playerName, System.String playerId, System.Collections.Generic.List`1<GameplayModifierParamsSO> gameplayModifiers)
    // Offset: 0x2AC1020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardsModel::LeaderboardScore* New_ctor(int score, int rank, ::StringW playerName, ::StringW playerId, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardsModel::LeaderboardScore*, creationType>(score, rank, playerName, playerId, gameplayModifiers)));
    }
  }; // PlatformLeaderboardsModel/LeaderboardScore
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardsModel::LeaderboardScore), 32 + sizeof(::StringW)> __GlobalNamespace_PlatformLeaderboardsModel_LeaderboardScoreSizeCheck;
  static_assert(sizeof(PlatformLeaderboardsModel::LeaderboardScore) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
