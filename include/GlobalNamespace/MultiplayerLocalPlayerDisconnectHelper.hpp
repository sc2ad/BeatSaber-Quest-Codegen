// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLevelCompletionResults
#include "GlobalNamespace/MultiplayerLevelCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: IMultiplayerLevelEndActionsListener
  class IMultiplayerLevelEndActionsListener;
  // Forward declaring type: LobbyPlayerPermissionsModel
  class LobbyPlayerPermissionsModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, "", "MultiplayerLocalPlayerDisconnectHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalPlayerDisconnectHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalPlayerDisconnectHelper : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x125418C
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0x125419C
    // private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerLevelEndActionsListener*) == 0x8);
    // [InjectAttribute] Offset: 0x12541AC
    // private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LobbyPlayerPermissionsModel*) == 0x8);
    public:
    // static field const value: static private System.String kDisconnectLabel
    static constexpr const char* kDisconnectLabel = "BUTTON_DISCONNECT";
    // Get static field: static private System.String kDisconnectLabel
    static ::StringW _get_kDisconnectLabel();
    // Set static field: static private System.String kDisconnectLabel
    static void _set_kDisconnectLabel(::StringW value);
    // static field const value: static private System.String kEndGameLabel
    static constexpr const char* kEndGameLabel = "BUTTON_END_GAME";
    // Get static field: static private System.String kEndGameLabel
    static ::StringW _get_kEndGameLabel();
    // Set static field: static private System.String kEndGameLabel
    static void _set_kEndGameLabel(::StringW value);
    // Get instance field reference: private readonly IGameplayRpcManager _gameplayRpcManager
    ::GlobalNamespace::IGameplayRpcManager*& dyn__gameplayRpcManager();
    // Get instance field reference: private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    ::GlobalNamespace::IMultiplayerLevelEndActionsListener*& dyn__multiplayerLevelEndActions();
    // Get instance field reference: private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    ::GlobalNamespace::LobbyPlayerPermissionsModel*& dyn__lobbyPlayerPermissionsModel();
    // public System.Void Disconnect(MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndState playerLevelEndState, LevelCompletionResults levelCompletionResults)
    // Offset: 0x139869C
    void Disconnect(::GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndState playerLevelEndState, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.String ResolveDisconnectButtonString()
    // Offset: 0x13983DC
    ::StringW ResolveDisconnectButtonString();
    // public System.Void .ctor()
    // Offset: 0x1399E88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalPlayerDisconnectHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalPlayerDisconnectHelper*, creationType>()));
    }
  }; // MultiplayerLocalPlayerDisconnectHelper
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalPlayerDisconnectHelper), 32 + sizeof(::GlobalNamespace::LobbyPlayerPermissionsModel*)> __GlobalNamespace_MultiplayerLocalPlayerDisconnectHelperSizeCheck;
  static_assert(sizeof(MultiplayerLocalPlayerDisconnectHelper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)(::GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndState, ::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::Disconnect)> {
  static const MethodInfo* get() {
    static auto* playerLevelEndState = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndState")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerLevelEndState, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::ResolveDisconnectButtonString
// Il2CppName: ResolveDisconnectButtonString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::*)()>(&GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::ResolveDisconnectButtonString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*), "ResolveDisconnectButtonString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
