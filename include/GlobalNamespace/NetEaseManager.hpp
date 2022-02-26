// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetEaseManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetEaseManager*, "", "NetEaseManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseManager
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEaseManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::NetEaseManager::$InitAsync$d__11
    struct $InitAsync$d__11;
    // Nested type: ::GlobalNamespace::NetEaseManager::$LoginAsync$d__13
    struct $LoginAsync$d__13;
    // Nested type: ::GlobalNamespace::NetEaseManager::$LogoutAsync$d__15
    struct $LogoutAsync$d__15;
    // Nested type: ::GlobalNamespace::NetEaseManager::$RequestHighscoreDataAsync$d__17
    struct $RequestHighscoreDataAsync$d__17;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.ReceivedHighscoreData> _requestHighscoreDataTaskCompletionSource
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::ReceivedHighscoreData>* requestHighscoreDataTaskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::ReceivedHighscoreData>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.InitializeData> _initTaskCompletionSource
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::InitializeData>* initTaskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::InitializeData>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.LoginData> _loginTaskCompletionSource
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LoginData>* loginTaskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LoginData>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.LogoutData> _logoutTaskCompletionSource
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LogoutData>* logoutTaskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LogoutData>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _userName
    ::StringW& dyn__userName();
    // Get instance field reference: private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.ReceivedHighscoreData> _requestHighscoreDataTaskCompletionSource
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::ReceivedHighscoreData>*& dyn__requestHighscoreDataTaskCompletionSource();
    // Get instance field reference: private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.InitializeData> _initTaskCompletionSource
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::InitializeData>*& dyn__initTaskCompletionSource();
    // Get instance field reference: private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.LoginData> _loginTaskCompletionSource
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LoginData>*& dyn__loginTaskCompletionSource();
    // Get instance field reference: private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.LogoutData> _logoutTaskCompletionSource
    ::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LogoutData>*& dyn__logoutTaskCompletionSource();
    // public System.Boolean get_supportsLeaderboards()
    // Offset: 0x2B22CA0
    bool get_supportsLeaderboards();
    // public System.String get_userName()
    // Offset: 0x2B22CA8
    ::StringW get_userName();
    // protected System.Void Awake()
    // Offset: 0x2B22CB0
    void Awake();
    // protected System.Void Update()
    // Offset: 0x2B22DEC
    void Update();
    // public System.Threading.Tasks.Task`1<NetEase.Docker.InitializeData> InitAsync()
    // Offset: 0x2B229AC
    ::System::Threading::Tasks::Task_1<::NetEase::Docker::InitializeData>* InitAsync();
    // private System.Void HandleDidInitialize(NetEase.Docker.InitializeData initializeData)
    // Offset: 0x2B22DF4
    void HandleDidInitialize(::NetEase::Docker::InitializeData initializeData);
    // public System.Threading.Tasks.Task`1<NetEase.Docker.LoginData> LoginAsync()
    // Offset: 0x2B22AAC
    ::System::Threading::Tasks::Task_1<::NetEase::Docker::LoginData>* LoginAsync();
    // private System.Void HandleDidLogin(NetEase.Docker.LoginData loginData)
    // Offset: 0x2B22E68
    void HandleDidLogin(::NetEase::Docker::LoginData loginData);
    // public System.Threading.Tasks.Task`1<NetEase.Docker.LogoutData> LogoutAsync()
    // Offset: 0x2B21774
    ::System::Threading::Tasks::Task_1<::NetEase::Docker::LogoutData>* LogoutAsync();
    // private System.Void HandleDidLogout(NetEase.Docker.LogoutData logoutData)
    // Offset: 0x2B22EF0
    void HandleDidLogout(::NetEase::Docker::LogoutData logoutData);
    // public System.Threading.Tasks.Task`1<NetEase.Docker.ReceivedHighscoreData> RequestHighscoreDataAsync(System.String leaderboardId)
    // Offset: 0x2B222C8
    ::System::Threading::Tasks::Task_1<::NetEase::Docker::ReceivedHighscoreData>* RequestHighscoreDataAsync(::StringW leaderboardId);
    // private System.Void HandleDidReceiveHighscore(NetEase.Docker.ReceivedHighscoreData highscoreData)
    // Offset: 0x2B22F64
    void HandleDidReceiveHighscore(::NetEase::Docker::ReceivedHighscoreData highscoreData);
    // public System.Void UploadHighscore(System.String leaderboardId, System.Int32 score)
    // Offset: 0x2B22FF0
    void UploadHighscore(::StringW leaderboardId, int score);
    // static public System.Void Log(System.String message)
    // Offset: 0x2B23024
    static void Log(::StringW message);
    // public System.Void .ctor()
    // Offset: 0x2B2308C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetEaseManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseManager*, creationType>()));
    }
  }; // NetEaseManager
  #pragma pack(pop)
  static check_size<sizeof(NetEaseManager), 56 + sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::NetEase::Docker::LogoutData>*)> __GlobalNamespace_NetEaseManagerSizeCheck;
  static_assert(sizeof(NetEaseManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::get_supportsLeaderboards
// Il2CppName: get_supportsLeaderboards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::get_supportsLeaderboards)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "get_supportsLeaderboards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::InitAsync
// Il2CppName: InitAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::NetEase::Docker::InitializeData>* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::InitAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "InitAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidInitialize
// Il2CppName: HandleDidInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(::NetEase::Docker::InitializeData)>(&GlobalNamespace::NetEaseManager::HandleDidInitialize)> {
  static const MethodInfo* get() {
    static auto* initializeData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "InitializeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initializeData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::LoginAsync
// Il2CppName: LoginAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::NetEase::Docker::LoginData>* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::LoginAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "LoginAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidLogin
// Il2CppName: HandleDidLogin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(::NetEase::Docker::LoginData)>(&GlobalNamespace::NetEaseManager::HandleDidLogin)> {
  static const MethodInfo* get() {
    static auto* loginData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "LoginData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidLogin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loginData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::NetEase::Docker::LogoutData>* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::LogoutAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidLogout
// Il2CppName: HandleDidLogout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(::NetEase::Docker::LogoutData)>(&GlobalNamespace::NetEaseManager::HandleDidLogout)> {
  static const MethodInfo* get() {
    static auto* logoutData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "LogoutData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidLogout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logoutData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::RequestHighscoreDataAsync
// Il2CppName: RequestHighscoreDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::NetEase::Docker::ReceivedHighscoreData>* (GlobalNamespace::NetEaseManager::*)(::StringW)>(&GlobalNamespace::NetEaseManager::RequestHighscoreDataAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "RequestHighscoreDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidReceiveHighscore
// Il2CppName: HandleDidReceiveHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(::NetEase::Docker::ReceivedHighscoreData)>(&GlobalNamespace::NetEaseManager::HandleDidReceiveHighscore)> {
  static const MethodInfo* get() {
    static auto* highscoreData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "ReceivedHighscoreData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidReceiveHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highscoreData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::UploadHighscore
// Il2CppName: UploadHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(::StringW, int)>(&GlobalNamespace::NetEaseManager::UploadHighscore)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "UploadHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId, score});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::NetEaseManager::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
