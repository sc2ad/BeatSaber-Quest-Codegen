// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsHandler
#include "GlobalNamespace/PlatformLeaderboardsHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TestPlatformLeaderboardsHandler
  class TestPlatformLeaderboardsHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TestPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformLeaderboardsHandler*, "", "TestPlatformLeaderboardsHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TestPlatformLeaderboardsHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class TestPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AE5F00
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: System.Void PlatformLeaderboardsHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestPlatformLeaderboardsHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TestPlatformLeaderboardsHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestPlatformLeaderboardsHandler*, creationType>()));
    }
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x2AE5E48
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::StringW referencePlayerId, ::GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x2AE5EA4
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, ::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
  }; // TestPlatformLeaderboardsHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformLeaderboardsHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores
// Il2CppName: GetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::IDifficultyBeatmap*, int, int, ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope, ::StringW, ::GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromRank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scope = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/ScoresScope")->byval_arg;
    static auto* referencePlayerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformLeaderboardsHandler*), "GetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, fromRank, scope, referencePlayerId, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::LeaderboardScoreUploader::ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*)>(&GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("", "LeaderboardScoreUploader/ScoreData")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformLeaderboardsHandler*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData, completionHandler});
  }
};
