// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ILobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyStateDataModel*, "", "ILobbyStateDataModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyStateDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class ILobbyStateDataModel {
    public:
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isConnected();
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_rawConnectedPlayers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void Activate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Deactivate();
    // public IConnectedPlayer GetPlayerById(System.String userId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IConnectedPlayer* GetPlayerById(::StringW userId);
  }; // ILobbyStateDataModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::get_localPlayer
// Il2CppName: get_localPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::get_localPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "get_localPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::get_connectedPlayers
// Il2CppName: get_connectedPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::get_connectedPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "get_connectedPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::get_rawConnectedPlayers
// Il2CppName: get_rawConnectedPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::get_rawConnectedPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "get_rawConnectedPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::add_playerConnectedEvent
// Il2CppName: add_playerConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::ILobbyStateDataModel::add_playerConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "add_playerConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::remove_playerConnectedEvent
// Il2CppName: remove_playerConnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::ILobbyStateDataModel::remove_playerConnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "remove_playerConnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::add_playerDisconnectedEvent
// Il2CppName: add_playerDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::ILobbyStateDataModel::add_playerDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "add_playerDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::remove_playerDisconnectedEvent
// Il2CppName: remove_playerDisconnectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::ILobbyStateDataModel::remove_playerDisconnectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "remove_playerDisconnectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyStateDataModel::*)()>(&GlobalNamespace::ILobbyStateDataModel::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyStateDataModel::GetPlayerById
// Il2CppName: GetPlayerById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (GlobalNamespace::ILobbyStateDataModel::*)(::StringW)>(&GlobalNamespace::ILobbyStateDataModel::GetPlayerById)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyStateDataModel*), "GetPlayerById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
