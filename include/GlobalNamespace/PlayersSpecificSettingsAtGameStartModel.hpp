// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettingsNetSerializable
  class PlayerSpecificSettingsNetSerializable;
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, "", "PlayersSpecificSettingsAtGameStartModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayersSpecificSettingsAtGameStartModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayersSpecificSettingsAtGameStartModel : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private PlayerSpecificSettingsNetSerializable <localPlayerSpecificSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*) == 0x8);
    // private PlayerSpecificSettingsAtStartNetSerializable <playersAtGameStartNetSerializable>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*) == 0x8);
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    public:
    // Get instance field reference: private PlayerSpecificSettingsNetSerializable <localPlayerSpecificSettings>k__BackingField
    ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*& dyn_$localPlayerSpecificSettings$k__BackingField();
    // Get instance field reference: private PlayerSpecificSettingsAtStartNetSerializable <playersAtGameStartNetSerializable>k__BackingField
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*& dyn_$playersAtGameStartNetSerializable$k__BackingField();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_playersAtGameStart()
    // Offset: 0x25E9B60
    ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_playersAtGameStart();
    // public PlayerSpecificSettingsNetSerializable get_localPlayerSpecificSettings()
    // Offset: 0x25E9B78
    ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* get_localPlayerSpecificSettings();
    // private System.Void set_localPlayerSpecificSettings(PlayerSpecificSettingsNetSerializable value)
    // Offset: 0x25E9B80
    void set_localPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value);
    // public PlayerSpecificSettingsAtStartNetSerializable get_playersAtGameStartNetSerializable()
    // Offset: 0x25E9B88
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* get_playersAtGameStartNetSerializable();
    // private System.Void set_playersAtGameStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable value)
    // Offset: 0x25E9B90
    void set_playersAtGameStartNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, PlayerSpecificSettingsNetSerializable localPlayerSpecificSettings)
    // Offset: 0x25E9B98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersSpecificSettingsAtGameStartModel* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersSpecificSettingsAtGameStartModel*, creationType>(multiplayerSessionManager, localPlayerSpecificSettings)));
    }
    // public PlayerSpecificSettingsNetSerializable GetPlayerSpecificSettingsForUserId(System.String userId)
    // Offset: 0x25E9C1C
    ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GetPlayerSpecificSettingsForUserId(::StringW userId);
    // public System.Void SaveFromNetSerializable(PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable)
    // Offset: 0x25E9F44
    void SaveFromNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable);
  }; // PlayersSpecificSettingsAtGameStartModel
  #pragma pack(pop)
  static check_size<sizeof(PlayersSpecificSettingsAtGameStartModel), 32 + sizeof(::GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_PlayersSpecificSettingsAtGameStartModelSizeCheck;
  static_assert(sizeof(PlayersSpecificSettingsAtGameStartModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart
// Il2CppName: get_playersAtGameStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "get_playersAtGameStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings
// Il2CppName: get_localPlayerSpecificSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsNetSerializable* (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "get_localPlayerSpecificSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings
// Il2CppName: set_localPlayerSpecificSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "set_localPlayerSpecificSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable
// Il2CppName: get_playersAtGameStartNetSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "get_playersAtGameStartNetSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable
// Il2CppName: set_playersAtGameStartNetSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsAtStartNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "set_playersAtGameStartNetSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId
// Il2CppName: GetPlayerSpecificSettingsForUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsNetSerializable* (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::StringW)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "GetPlayerSpecificSettingsForUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable
// Il2CppName: SaveFromNetSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*)>(&GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable)> {
  static const MethodInfo* get() {
    static auto* playersAtGameStartNetSerializable = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsAtStartNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*), "SaveFromNetSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playersAtGameStartNetSerializable});
  }
};
