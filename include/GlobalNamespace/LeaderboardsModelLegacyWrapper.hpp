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
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ILeaderboardsModel
  class ILeaderboardsModel;
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardsModelLegacyWrapper
  class LeaderboardsModelLegacyWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardsModelLegacyWrapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardsModelLegacyWrapper*, "", "LeaderboardsModelLegacyWrapper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsModelLegacyWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardsModelLegacyWrapper : public ::GlobalNamespace::PlatformLeaderboardsHandler {
    public:
    // Nested type: ::GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken
    class HMAsyncRequestWithCancellationToken;
    // Nested type: ::GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: ::GlobalNamespace::LeaderboardsModelLegacyWrapper::$SendLevelScoreResutlAsync$d__5
    struct $SendLevelScoreResutlAsync$d__5;
    public:
    // [InjectAttribute] Offset: 0x111133C
    // private OnlineServices.ILeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0x10
    ::OnlineServices::ILeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(::OnlineServices::ILeaderboardsModel*) == 0x8);
    public:
    // Creating conversion operator: operator ::OnlineServices::ILeaderboardsModel*
    constexpr operator ::OnlineServices::ILeaderboardsModel*() const noexcept {
      return leaderboardsModel;
    }
    // Get instance field reference: private OnlineServices.ILeaderboardsModel _leaderboardsModel
    [[deprecated("Use field access instead!")]] ::OnlineServices::ILeaderboardsModel*& dyn__leaderboardsModel();
    // private System.Void GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x13F9844
    void GetLeaderboardEntriesAsync(::OnlineServices::GetLeaderboardFilterData leaderboardFilterData, ::GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest, ::GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // private System.Void SendLevelScoreResutlAsync(OnlineServices.LevelScoreResultsData levelScoreResultsData, LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x13F99F4
    void SendLevelScoreResutlAsync(::OnlineServices::LevelScoreResultsData levelScoreResultsData, ::GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest, ::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // public System.Void .ctor()
    // Offset: 0x13F9AE0
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: System.Void PlatformLeaderboardsHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardsModelLegacyWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardsModelLegacyWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardsModelLegacyWrapper*, creationType>()));
    }
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x13F9700
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    ::GlobalNamespace::HMAsyncRequest* GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::StringW referencePlayerId, ::GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x13F9924
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    ::GlobalNamespace::HMAsyncRequest* UploadScore(::GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, ::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
  }; // LeaderboardsModelLegacyWrapper
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardsModelLegacyWrapper), 16 + sizeof(::OnlineServices::ILeaderboardsModel*)> __GlobalNamespace_LeaderboardsModelLegacyWrapperSizeCheck;
  static_assert(sizeof(LeaderboardsModelLegacyWrapper) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::*)(::OnlineServices::GetLeaderboardFilterData, ::GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*, ::GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::GetLeaderboardEntriesAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardFilterData = &::il2cpp_utils::GetClassFromName("OnlineServices", "GetLeaderboardFilterData")->byval_arg;
    static auto* asyncRequest = &::il2cpp_utils::GetClassFromName("", "LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardFilterData, asyncRequest, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::SendLevelScoreResutlAsync
// Il2CppName: SendLevelScoreResutlAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::*)(::OnlineServices::LevelScoreResultsData, ::GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*, ::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*)>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::SendLevelScoreResutlAsync)> {
  static const MethodInfo* get() {
    static auto* levelScoreResultsData = &::il2cpp_utils::GetClassFromName("OnlineServices", "LevelScoreResultsData")->byval_arg;
    static auto* asyncRequest = &::il2cpp_utils::GetClassFromName("", "LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper*), "SendLevelScoreResutlAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelScoreResultsData, asyncRequest, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::GetScores
// Il2CppName: GetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (GlobalNamespace::LeaderboardsModelLegacyWrapper::*)(::GlobalNamespace::IDifficultyBeatmap*, int, int, ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope, ::StringW, ::GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::GetScores)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromRank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scope = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/ScoresScope")->byval_arg;
    static auto* referencePlayerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper*), "GetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, fromRank, scope, referencePlayerId, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (GlobalNamespace::LeaderboardsModelLegacyWrapper::*)(::GlobalNamespace::LeaderboardScoreUploader::ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*)>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::UploadScore)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("", "LeaderboardScoreUploader/ScoreData")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData, completionHandler});
  }
};
