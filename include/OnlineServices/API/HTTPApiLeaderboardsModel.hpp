// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.IApiLeaderboardsModel
#include "OnlineServices/API/IApiLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: HTTPLeaderboardsOathHelper
  class HTTPLeaderboardsOathHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntries
  class LeaderboardEntries;
  // Forward declaring type: LeaderboardQuery
  class LeaderboardQuery;
  // Forward declaring type: LevelScoreResult
  class LevelScoreResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPApiLeaderboardsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPApiLeaderboardsModel : public ::Il2CppObject/*, public OnlineServices::API::IApiLeaderboardsModel*/ {
    public:
    // Nested type: OnlineServices::API::HTTPApiLeaderboardsModel::$LogoutAsync$d__3
    struct $LogoutAsync$d__3;
    // Nested type: OnlineServices::API::HTTPApiLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: OnlineServices::API::HTTPApiLeaderboardsModel::$SendLevelScoreResultAsync$d__5
    struct $SendLevelScoreResultAsync$d__5;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xF15484
    // private readonly OnlineServices.API.HTTPLeaderboardsOathHelper _httpLeaderboardsOathHelper
    // Size: 0x8
    // Offset: 0x10
    OnlineServices::API::HTTPLeaderboardsOathHelper* httpLeaderboardsOathHelper;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    public:
    // Creating interface conversion operator: operator OnlineServices::API::IApiLeaderboardsModel
    operator OnlineServices::API::IApiLeaderboardsModel() noexcept {
      return *reinterpret_cast<OnlineServices::API::IApiLeaderboardsModel*>(this);
    }
    // Creating conversion operator: operator OnlineServices::API::HTTPLeaderboardsOathHelper*
    constexpr operator OnlineServices::API::HTTPLeaderboardsOathHelper*() const noexcept {
      return httpLeaderboardsOathHelper;
    }
    // static field const value: static private System.String kSendLevelScoreResultPath
    static constexpr const char* kSendLevelScoreResultPath = "/v1/Leaderboard/AddEntry";
    // Get static field: static private System.String kSendLevelScoreResultPath
    static ::Il2CppString* _get_kSendLevelScoreResultPath();
    // Set static field: static private System.String kSendLevelScoreResultPath
    static void _set_kSendLevelScoreResultPath(::Il2CppString* value);
    // static field const value: static private System.String kGetLeaderboardEntriesPath
    static constexpr const char* kGetLeaderboardEntriesPath = "/v1/Leaderboard/Filter";
    // Get static field: static private System.String kGetLeaderboardEntriesPath
    static ::Il2CppString* _get_kGetLeaderboardEntriesPath();
    // Set static field: static private System.String kGetLeaderboardEntriesPath
    static void _set_kGetLeaderboardEntriesPath(::Il2CppString* value);
    // Get instance field reference: private readonly OnlineServices.API.HTTPLeaderboardsOathHelper _httpLeaderboardsOathHelper
    OnlineServices::API::HTTPLeaderboardsOathHelper*& dyn__httpLeaderboardsOathHelper();
    // public System.Void LogoutAsync()
    // Offset: 0x111CD60
    void LogoutAsync();
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> GetLeaderboardEntriesAsync(BeatSaberAPI.DataTransferObjects.LeaderboardQuery leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x111CE20
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* GetLeaderboardEntriesAsync(BeatSaberAPI::DataTransferObjects::LeaderboardQuery* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(BeatSaberAPI.DataTransferObjects.LevelScoreResult levelScoreResult, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x111CF34
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(BeatSaberAPI::DataTransferObjects::LevelScoreResult* levelScoreResult, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x111D048
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPApiLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPApiLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPApiLeaderboardsModel*, creationType>()));
    }
  }; // OnlineServices.API.HTTPApiLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(HTTPApiLeaderboardsModel), 16 + sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*)> __OnlineServices_API_HTTPApiLeaderboardsModelSizeCheck;
  static_assert(sizeof(HTTPApiLeaderboardsModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPApiLeaderboardsModel*, "OnlineServices.API", "HTTPApiLeaderboardsModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPApiLeaderboardsModel::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPApiLeaderboardsModel::*)()>(&OnlineServices::API::HTTPApiLeaderboardsModel::LogoutAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPApiLeaderboardsModel*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPApiLeaderboardsModel::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* (OnlineServices::API::HTTPApiLeaderboardsModel::*)(BeatSaberAPI::DataTransferObjects::LeaderboardQuery*, System::Threading::CancellationToken)>(&OnlineServices::API::HTTPApiLeaderboardsModel::GetLeaderboardEntriesAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardQueryDTO = &::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "LeaderboardQuery")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPApiLeaderboardsModel*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardQueryDTO, cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPApiLeaderboardsModel::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::API::Response>* (OnlineServices::API::HTTPApiLeaderboardsModel::*)(BeatSaberAPI::DataTransferObjects::LevelScoreResult*, System::Threading::CancellationToken)>(&OnlineServices::API::HTTPApiLeaderboardsModel::SendLevelScoreResultAsync)> {
  static const MethodInfo* get() {
    static auto* levelScoreResult = &::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "LevelScoreResult")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPApiLeaderboardsModel*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelScoreResult, cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPApiLeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
