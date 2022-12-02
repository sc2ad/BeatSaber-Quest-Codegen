// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: NetworkPacketSerializer`2<TType, TData>
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PartyMessageHandler
  class PartyMessageHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PartyMessageHandler : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::GlobalNamespace::PartyMessageHandler::MessageType
    struct MessageType;
    // Nested type: ::GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate
    class ServerStatusUpdatedDelegate;
    // Nested type: ::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate
    class ConnectToMasterServerDelegate;
    // Nested type: ::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage
    class ConnectToMasterServerMessage;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PartyMessageHandler/MessageType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MessageType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MessageType
      constexpr MessageType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PartyMessageHandler/MessageType ConnectToMasterServer
      static constexpr const int ConnectToMasterServer = 0;
      // Get static field: static public PartyMessageHandler/MessageType ConnectToMasterServer
      static ::GlobalNamespace::PartyMessageHandler::MessageType _get_ConnectToMasterServer();
      // Set static field: static public PartyMessageHandler/MessageType ConnectToMasterServer
      static void _set_ConnectToMasterServer(::GlobalNamespace::PartyMessageHandler::MessageType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // PartyMessageHandler/MessageType
    #pragma pack(pop)
    static check_size<sizeof(PartyMessageHandler::MessageType), 0 + sizeof(int)> __GlobalNamespace_PartyMessageHandler_MessageTypeSizeCheck;
    static_assert(sizeof(PartyMessageHandler::MessageType) == 0x4);
    public:
    // private readonly NetworkPacketSerializer`2<PartyMessageHandler/MessageType,IConnectedPlayer> _serializer
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler::MessageType, ::GlobalNamespace::IConnectedPlayer*>* serializer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler::MessageType, ::GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private readonly ConnectedPlayerManager _connectedPlayerManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // private PartyMessageHandler/ConnectToMasterServerDelegate connectToMasterServerEvent
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* connectToMasterServerEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly NetworkPacketSerializer`2<PartyMessageHandler/MessageType,IConnectedPlayer> _serializer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler::MessageType, ::GlobalNamespace::IConnectedPlayer*>*& dyn__serializer();
    // Get instance field reference: private readonly ConnectedPlayerManager _connectedPlayerManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ConnectedPlayerManager*& dyn__connectedPlayerManager();
    // Get instance field reference: private PartyMessageHandler/ConnectToMasterServerDelegate connectToMasterServerEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*& dyn_connectToMasterServerEvent();
    // public System.Void add_connectToMasterServerEvent(PartyMessageHandler/ConnectToMasterServerDelegate value)
    // Offset: 0x26C7A28
    void add_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value);
    // public System.Void remove_connectToMasterServerEvent(PartyMessageHandler/ConnectToMasterServerDelegate value)
    // Offset: 0x26C7ACC
    void remove_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value);
    // public System.Void .ctor(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x26C7878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler* New_ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PartyMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler*, creationType>(connectedPlayerManager)));
    }
    // public System.Void Dispose()
    // Offset: 0x26C7A00
    void Dispose();
    // public System.Void ConnectToMasterServer(System.String secret)
    // Offset: 0x26C7B70
    void ConnectToMasterServer(::StringW secret);
    // private System.Void HandleConnectToMasterServer(PartyMessageHandler/ConnectToMasterServerMessage packet)
    // Offset: 0x26C7C04
    void HandleConnectToMasterServer(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* packet);
  }; // PartyMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(PartyMessageHandler), 32 + sizeof(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*)> __GlobalNamespace_PartyMessageHandlerSizeCheck;
  static_assert(sizeof(PartyMessageHandler) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler::MessageType, "", "PartyMessageHandler/MessageType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent
// Il2CppName: add_connectToMasterServerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*)>(&GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ConnectToMasterServerDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "add_connectToMasterServerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent
// Il2CppName: remove_connectToMasterServerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*)>(&GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ConnectToMasterServerDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "remove_connectToMasterServerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)()>(&GlobalNamespace::PartyMessageHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServer
// Il2CppName: ConnectToMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(::StringW)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServer)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "ConnectToMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer
// Il2CppName: HandleConnectToMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*)>(&GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ConnectToMasterServerMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "HandleConnectToMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
