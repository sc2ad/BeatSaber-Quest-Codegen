// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuRpcManager::RequestKickPlayerRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuRpcManager::RequestKickPlayerRpc*, "", "MenuRpcManager/RequestKickPlayerRpc");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/RequestKickPlayerRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::RequestKickPlayerRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1738914
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::RequestKickPlayerRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuRpcManager::RequestKickPlayerRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::RequestKickPlayerRpc*, creationType>()));
    }
  }; // MenuRpcManager/RequestKickPlayerRpc
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::RequestKickPlayerRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
