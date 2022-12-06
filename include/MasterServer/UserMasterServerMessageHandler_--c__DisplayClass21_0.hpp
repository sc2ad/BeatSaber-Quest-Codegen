// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.UserMasterServerMessageHandler
#include "MasterServer/UserMasterServerMessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: BaseConnectToServerRequest
  class BaseConnectToServerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0*, "MasterServer", "UserMasterServerMessageHandler/<>c__DisplayClass21_0");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserMasterServerMessageHandler::$$c__DisplayClass21_0 : public ::Il2CppObject {
    public:
    // Nested type: ::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d
    struct $$SendConnectToServerRequest$b__0$d;
    public:
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public MasterServer.UserMasterServerMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::MasterServer::UserMasterServerMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::MasterServer::UserMasterServerMessageHandler*) == 0x8);
    // public MasterServer.BaseConnectToServerRequest request
    // Size: 0x8
    // Offset: 0x20
    ::MasterServer::BaseConnectToServerRequest* request;
    // Field size check
    static_assert(sizeof(::MasterServer::BaseConnectToServerRequest*) == 0x8);
    // public MasterServer.UserMasterServerMessageHandler/MasterServer.ConnectToServerDelegate onSuccess
    // Size: 0x8
    // Offset: 0x28
    ::MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate* onSuccess;
    // Field size check
    static_assert(sizeof(::MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate*) == 0x8);
    // public System.Action`1<ConnectionFailedReason> onConnectionFailed
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onConnectionFailed;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public MasterServer.UserMasterServerMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::MasterServer::UserMasterServerMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public MasterServer.BaseConnectToServerRequest request
    [[deprecated("Use field access instead!")]] ::MasterServer::BaseConnectToServerRequest*& dyn_request();
    // Get instance field reference: public MasterServer.UserMasterServerMessageHandler/MasterServer.ConnectToServerDelegate onSuccess
    [[deprecated("Use field access instead!")]] ::MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate*& dyn_onSuccess();
    // Get instance field reference: public System.Action`1<ConnectionFailedReason> onConnectionFailed
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& dyn_onConnectionFailed();
    // public System.Void .ctor()
    // Offset: 0x172E504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMasterServerMessageHandler::$$c__DisplayClass21_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMasterServerMessageHandler::$$c__DisplayClass21_0*, creationType>()));
    }
    // System.Threading.Tasks.Task <SendConnectToServerRequest>b__0()
    // Offset: 0x172E768
    ::System::Threading::Tasks::Task* $SendConnectToServerRequest$b__0();
  }; // MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0
  #pragma pack(pop)
  static check_size<sizeof(UserMasterServerMessageHandler::$$c__DisplayClass21_0), 48 + sizeof(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)> __MasterServer_UserMasterServerMessageHandler_$$c__DisplayClass21_0SizeCheck;
  static_assert(sizeof(UserMasterServerMessageHandler::$$c__DisplayClass21_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$SendConnectToServerRequest$b__0
// Il2CppName: <SendConnectToServerRequest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::*)()>(&MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$SendConnectToServerRequest$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0*), "<SendConnectToServerRequest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
