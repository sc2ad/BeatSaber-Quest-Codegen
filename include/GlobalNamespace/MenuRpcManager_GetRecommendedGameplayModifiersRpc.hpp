// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiersRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiersRpc*, "", "MenuRpcManager/GetRecommendedGameplayModifiersRpc");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: MenuRpcManager/GetRecommendedGameplayModifiersRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::GetRecommendedGameplayModifiersRpc : public ::GlobalNamespace::RemoteProcedureCall {
    public:
    // public System.Void .ctor()
    // Offset: 0x1700324
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::GetRecommendedGameplayModifiersRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiersRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::GetRecommendedGameplayModifiersRpc*, creationType>()));
    }
  }; // MenuRpcManager/GetRecommendedGameplayModifiersRpc
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiersRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
