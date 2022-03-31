// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerAllOverallStatsData
#include "GlobalNamespace/PlayerAllOverallStatsData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*, "", "PlayerAllOverallStatsData/PlayerOverallStatsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAllOverallStatsData/PlayerOverallStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerAllOverallStatsData::PlayerOverallStatsData : public ::Il2CppObject {
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
    // private System.Int32 <goodCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <badCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <missedCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int missedCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: missedCutsCount and: totalScore
    char __padding2[0x4] = {};
    // private System.Int64 <totalScore>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    int64_t totalScore;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32 <playedLevelsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int playedLevelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <clearedLevelsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int clearedLevelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <failedLevelsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int failedLevelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <fullComboCount>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int fullComboCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single <timePlayed>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    float timePlayed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <handDistanceTravelled>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int handDistanceTravelled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 <totalCutScore>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    int64_t totalCutScore;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <goodCutsCount>k__BackingField
    int& dyn_$goodCutsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <badCutsCount>k__BackingField
    int& dyn_$badCutsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <missedCutsCount>k__BackingField
    int& dyn_$missedCutsCount$k__BackingField();
    // Get instance field reference: private System.Int64 <totalScore>k__BackingField
    int64_t& dyn_$totalScore$k__BackingField();
    // Get instance field reference: private System.Int32 <playedLevelsCount>k__BackingField
    int& dyn_$playedLevelsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <clearedLevelsCount>k__BackingField
    int& dyn_$clearedLevelsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <failedLevelsCount>k__BackingField
    int& dyn_$failedLevelsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <fullComboCount>k__BackingField
    int& dyn_$fullComboCount$k__BackingField();
    // Get instance field reference: private System.Single <timePlayed>k__BackingField
    float& dyn_$timePlayed$k__BackingField();
    // Get instance field reference: private System.Int32 <handDistanceTravelled>k__BackingField
    int& dyn_$handDistanceTravelled$k__BackingField();
    // Get instance field reference: private System.Int64 <totalCutScore>k__BackingField
    int64_t& dyn_$totalCutScore$k__BackingField();
    // public System.Int32 get_goodCutsCount()
    // Offset: 0x12F69BC
    int get_goodCutsCount();
    // private System.Void set_goodCutsCount(System.Int32 value)
    // Offset: 0x12F69C4
    void set_goodCutsCount(int value);
    // public System.Int32 get_badCutsCount()
    // Offset: 0x12F69CC
    int get_badCutsCount();
    // private System.Void set_badCutsCount(System.Int32 value)
    // Offset: 0x12F69D4
    void set_badCutsCount(int value);
    // public System.Int32 get_missedCutsCount()
    // Offset: 0x12F69DC
    int get_missedCutsCount();
    // private System.Void set_missedCutsCount(System.Int32 value)
    // Offset: 0x12F69E4
    void set_missedCutsCount(int value);
    // public System.Int64 get_totalScore()
    // Offset: 0x12F69EC
    int64_t get_totalScore();
    // private System.Void set_totalScore(System.Int64 value)
    // Offset: 0x12F69F4
    void set_totalScore(int64_t value);
    // public System.Int32 get_playedLevelsCount()
    // Offset: 0x12F69FC
    int get_playedLevelsCount();
    // private System.Void set_playedLevelsCount(System.Int32 value)
    // Offset: 0x12F6A04
    void set_playedLevelsCount(int value);
    // public System.Int32 get_clearedLevelsCount()
    // Offset: 0x12F6A0C
    int get_clearedLevelsCount();
    // private System.Void set_clearedLevelsCount(System.Int32 value)
    // Offset: 0x12F6A14
    void set_clearedLevelsCount(int value);
    // public System.Int32 get_failedLevelsCount()
    // Offset: 0x12F6A1C
    int get_failedLevelsCount();
    // private System.Void set_failedLevelsCount(System.Int32 value)
    // Offset: 0x12F6A24
    void set_failedLevelsCount(int value);
    // public System.Int32 get_fullComboCount()
    // Offset: 0x12F6A2C
    int get_fullComboCount();
    // private System.Void set_fullComboCount(System.Int32 value)
    // Offset: 0x12F6A34
    void set_fullComboCount(int value);
    // public System.Single get_timePlayed()
    // Offset: 0x12F6A3C
    float get_timePlayed();
    // private System.Void set_timePlayed(System.Single value)
    // Offset: 0x12F6A44
    void set_timePlayed(float value);
    // public System.Int32 get_handDistanceTravelled()
    // Offset: 0x12F6A4C
    int get_handDistanceTravelled();
    // private System.Void set_handDistanceTravelled(System.Int32 value)
    // Offset: 0x12F6A54
    void set_handDistanceTravelled(int value);
    // public System.Int64 get_totalCutScore()
    // Offset: 0x12F6A5C
    int64_t get_totalCutScore();
    // private System.Void set_totalCutScore(System.Int64 value)
    // Offset: 0x12F6A64
    void set_totalCutScore(int64_t value);
    // public System.Void .ctor(System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCutsCount, System.Int64 totalScore, System.Int32 playedLevelsCount, System.Int32 clearedLevelsCount, System.Int32 failedLevelsCount, System.Int32 fullComboCount, System.Single timePlayed, System.Int32 handDistanceTravelled, System.Int64 totalCutScore)
    // Offset: 0x12F6A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData::PlayerOverallStatsData* New_ctor(int goodCutsCount, int badCutsCount, int missedCutsCount, int64_t totalScore, int playedLevelsCount, int clearedLevelsCount, int failedLevelsCount, int fullComboCount, float timePlayed, int handDistanceTravelled, int64_t totalCutScore) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData::PlayerOverallStatsData*, creationType>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, clearedLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, totalCutScore)));
    }
    // public System.Void UpdateWithLevelCompletionResults(LevelCompletionResults levelCompletionResults)
    // Offset: 0x12F67F0
    void UpdateWithLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x12F670C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData::PlayerOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData::PlayerOverallStatsData*, creationType>()));
    }
  }; // PlayerAllOverallStatsData/PlayerOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerAllOverallStatsData::PlayerOverallStatsData), 64 + sizeof(int64_t)> __GlobalNamespace_PlayerAllOverallStatsData_PlayerOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerAllOverallStatsData::PlayerOverallStatsData) == 0x48);
  // static public PlayerAllOverallStatsData/PlayerOverallStatsData op_Addition(PlayerAllOverallStatsData/PlayerOverallStatsData a, PlayerAllOverallStatsData/PlayerOverallStatsData b)
  // Offset: 0x12F610C
  ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* operator+(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* a, ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_goodCutsCount
// Il2CppName: get_goodCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_goodCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_goodCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_goodCutsCount
// Il2CppName: set_goodCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_goodCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_goodCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_badCutsCount
// Il2CppName: get_badCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_badCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_badCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_badCutsCount
// Il2CppName: set_badCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_badCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_badCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_missedCutsCount
// Il2CppName: get_missedCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_missedCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_missedCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_missedCutsCount
// Il2CppName: set_missedCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_missedCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_missedCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_totalScore
// Il2CppName: get_totalScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_totalScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_totalScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_totalScore
// Il2CppName: set_totalScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int64_t)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_totalScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_totalScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_playedLevelsCount
// Il2CppName: get_playedLevelsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_playedLevelsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_playedLevelsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_playedLevelsCount
// Il2CppName: set_playedLevelsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_playedLevelsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_playedLevelsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_clearedLevelsCount
// Il2CppName: get_clearedLevelsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_clearedLevelsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_clearedLevelsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_clearedLevelsCount
// Il2CppName: set_clearedLevelsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_clearedLevelsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_clearedLevelsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_failedLevelsCount
// Il2CppName: get_failedLevelsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_failedLevelsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_failedLevelsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_failedLevelsCount
// Il2CppName: set_failedLevelsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_failedLevelsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_failedLevelsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_fullComboCount
// Il2CppName: get_fullComboCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_fullComboCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_fullComboCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_fullComboCount
// Il2CppName: set_fullComboCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_fullComboCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_fullComboCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_timePlayed
// Il2CppName: get_timePlayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_timePlayed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_timePlayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_timePlayed
// Il2CppName: set_timePlayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(float)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_timePlayed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_timePlayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_handDistanceTravelled
// Il2CppName: get_handDistanceTravelled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_handDistanceTravelled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_handDistanceTravelled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_handDistanceTravelled
// Il2CppName: set_handDistanceTravelled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_handDistanceTravelled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_handDistanceTravelled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_totalCutScore
// Il2CppName: get_totalCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::get_totalCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "get_totalCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_totalCutScore
// Il2CppName: set_totalCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(int64_t)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::set_totalCutScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "set_totalCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::UpdateWithLevelCompletionResults
// Il2CppName: UpdateWithLevelCompletionResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::UpdateWithLevelCompletionResults)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*), "UpdateWithLevelCompletionResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
