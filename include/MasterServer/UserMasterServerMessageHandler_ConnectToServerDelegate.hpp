// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.UserMasterServerMessageHandler
#include "MasterServer/UserMasterServerMessageHandler.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate*, "MasterServer", "UserMasterServerMessageHandler/ConnectToServerDelegate");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMasterServerMessageHandler/MasterServer.ConnectToServerDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class UserMasterServerMessageHandler::ConnectToServerDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1707450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMasterServerMessageHandler::ConnectToServerDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMasterServerMessageHandler::ConnectToServerDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.String secret, System.String code, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.Byte[] preMasterSecret, System.Byte[] myRandom, System.Byte[] remoteRandom, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.String managerId)
    // Offset: 0x1705BE8
    void Invoke(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW secret, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> myRandom, ::ArrayW<uint8_t> remoteRandom, bool isConnectionOwner, bool isDedicatedServer, ::StringW managerId);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.String secret, System.String code, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.Byte[] preMasterSecret, System.Byte[] myRandom, System.Byte[] remoteRandom, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.String managerId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1707460
    ::System::IAsyncResult* BeginInvoke(::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW secret, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> myRandom, ::ArrayW<uint8_t> remoteRandom, bool isConnectionOwner, bool isDedicatedServer, ::StringW managerId, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x17075A4
    void EndInvoke(::System::IAsyncResult* result);
  }; // MasterServer.UserMasterServerMessageHandler/MasterServer.ConnectToServerDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::*)(::StringW, ::StringW, ::System::Net::IPEndPoint*, ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, bool, ::StringW)>(&MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* myRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* remoteRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDedicatedServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* managerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, remoteEndPoint, secret, code, selectionMask, configuration, preMasterSecret, myRandom, remoteRandom, isConnectionOwner, isDedicatedServer, managerId});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::*)(::StringW, ::StringW, ::System::Net::IPEndPoint*, ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, bool, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* preMasterSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* myRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* remoteRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDedicatedServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* managerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, remoteEndPoint, secret, code, selectionMask, configuration, preMasterSecret, myRandom, remoteRandom, isConnectionOwner, isDedicatedServer, managerId, callback, object});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::*)(::System::IAsyncResult*)>(&MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMasterServerMessageHandler::ConnectToServerDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
