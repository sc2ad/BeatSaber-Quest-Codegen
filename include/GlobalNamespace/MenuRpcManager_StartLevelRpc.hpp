// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`3
#include "GlobalNamespace/RemoteProcedureCall_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager::StartLevelRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager::StartLevelRpc*, "", "MenuRpcManager/StartLevelRpc");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/StartLevelRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::StartLevelRpc : public ::GlobalNamespace::RemoteProcedureCall_3<::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1738D74
    // Implemented from: RemoteProcedureCall`3
    // Base method: System.Void RemoteProcedureCall_3::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::StartLevelRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuRpcManager::StartLevelRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::StartLevelRpc*, creationType>()));
    }
  }; // MenuRpcManager/StartLevelRpc
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::StartLevelRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
