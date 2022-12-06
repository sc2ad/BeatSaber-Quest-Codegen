// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameLiftConnectionManager
#include "GlobalNamespace/GameLiftConnectionManager.hpp"
// Including type: GameLiftConnectionManager/GameLiftConnectionManagerParamsBase
#include "GlobalNamespace/GameLiftConnectionManager_GameLiftConnectionManagerParamsBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameLiftConnectionManager::StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftConnectionManager::StartClientParams*, "", "GameLiftConnectionManager/StartClientParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: GameLiftConnectionManager/StartClientParams
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftConnectionManager::StartClientParams : public ::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x16CC258
    // Implemented from: GameLiftConnectionManager/GameLiftConnectionManagerParamsBase
    // Base method: System.Void GameLiftConnectionManagerParamsBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftConnectionManager::StartClientParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameLiftConnectionManager::StartClientParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftConnectionManager::StartClientParams*, creationType>()));
    }
  }; // GameLiftConnectionManager/StartClientParams
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameLiftConnectionManager::StartClientParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
