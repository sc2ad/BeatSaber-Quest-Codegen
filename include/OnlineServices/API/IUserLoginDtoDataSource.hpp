// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OnlineServices::API::IUserLoginDtoDataSource);
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::API::IUserLoginDtoDataSource*, "OnlineServices.API", "IUserLoginDtoDataSource");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.IUserLoginDtoDataSource
  // [TokenAttribute] Offset: FFFFFFFF
  class IUserLoginDtoDataSource {
    public:
    // public System.Threading.Tasks.Task`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> UserAuthenticationDataAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    ::System::Threading::Tasks::Task_1<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>* UserAuthenticationDataAsync(::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String[]> GetUserFriendsUserIds(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    ::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* GetUserFriendsUserIds(::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String> GetPlatformUserIdAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    ::System::Threading::Tasks::Task_1<::StringW>* GetPlatformUserIdAsync(::System::Threading::CancellationToken cancellationToken);
  }; // OnlineServices.API.IUserLoginDtoDataSource
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::IUserLoginDtoDataSource::UserAuthenticationDataAsync
// Il2CppName: UserAuthenticationDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>* (OnlineServices::API::IUserLoginDtoDataSource::*)(::System::Threading::CancellationToken)>(&OnlineServices::API::IUserLoginDtoDataSource::UserAuthenticationDataAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::IUserLoginDtoDataSource*), "UserAuthenticationDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::IUserLoginDtoDataSource::GetUserFriendsUserIds
// Il2CppName: GetUserFriendsUserIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>* (OnlineServices::API::IUserLoginDtoDataSource::*)(::System::Threading::CancellationToken)>(&OnlineServices::API::IUserLoginDtoDataSource::GetUserFriendsUserIds)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::IUserLoginDtoDataSource*), "GetUserFriendsUserIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::IUserLoginDtoDataSource::GetPlatformUserIdAsync
// Il2CppName: GetPlatformUserIdAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (OnlineServices::API::IUserLoginDtoDataSource::*)(::System::Threading::CancellationToken)>(&OnlineServices::API::IUserLoginDtoDataSource::GetPlatformUserIdAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::IUserLoginDtoDataSource*), "GetPlatformUserIdAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
