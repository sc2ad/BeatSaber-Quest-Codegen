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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
  // Forward declaring type: LobbyPlayerPermissionsModel
  class LobbyPlayerPermissionsModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LobbyDataModelsManager
  class LobbyDataModelsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LobbyDataModelsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyDataModelsManager*, "", "LobbyDataModelsManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LobbyDataModelsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbyDataModelsManager : public ::Il2CppObject {
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
    // [InjectAttribute] Offset: 0x124D3D4
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x124D3E4
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x124D3F4
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // [InjectAttribute] Offset: 0x124D404
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0x124D414
    // private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LobbyPlayerPermissionsModel*) == 0x8);
    public:
    // Get instance field reference: private readonly ILobbyStateDataModel _lobbyStateDataModel
    ::GlobalNamespace::ILobbyStateDataModel*& dyn__lobbyStateDataModel();
    // Get instance field reference: private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    ::GlobalNamespace::ILobbyPlayersDataModel*& dyn__lobbyPlayersDataModel();
    // Get instance field reference: private readonly ILobbyGameStateController _lobbyGameStateController
    ::GlobalNamespace::ILobbyGameStateController*& dyn__lobbyGameStateController();
    // Get instance field reference: private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    ::GlobalNamespace::INodePoseSyncStateManager*& dyn__nodePoseSyncStateManager();
    // Get instance field reference: private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    ::GlobalNamespace::LobbyPlayerPermissionsModel*& dyn__lobbyPlayerPermissionsModel();
    // public System.Void Activate()
    // Offset: 0x14927C0
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x14929E0
    void Deactivate();
    // public System.Void .ctor()
    // Offset: 0x1492B8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyDataModelsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LobbyDataModelsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyDataModelsManager*, creationType>()));
    }
  }; // LobbyDataModelsManager
  #pragma pack(pop)
  static check_size<sizeof(LobbyDataModelsManager), 48 + sizeof(::GlobalNamespace::LobbyPlayerPermissionsModel*)> __GlobalNamespace_LobbyDataModelsManagerSizeCheck;
  static_assert(sizeof(LobbyDataModelsManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyDataModelsManager::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyDataModelsManager::*)()>(&GlobalNamespace::LobbyDataModelsManager::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyDataModelsManager*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyDataModelsManager::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyDataModelsManager::*)()>(&GlobalNamespace::LobbyDataModelsManager::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyDataModelsManager*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyDataModelsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
