// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`2
#include "GlobalNamespace/RemoteProcedureCall_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayRpcManager::SetGameplaySceneSyncFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x16CED88
    // Implemented from: RemoteProcedureCall`2
    // Base method: System.Void RemoteProcedureCall_2::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::SetGameplaySceneSyncFinishedRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*, creationType>()));
    }
  }; // GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
