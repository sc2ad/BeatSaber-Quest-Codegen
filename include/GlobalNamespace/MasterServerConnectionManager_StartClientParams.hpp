// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
#include "GlobalNamespace/MasterServerConnectionManager_MasterServerConnectionManagerParamsBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MasterServerConnectionManager::StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MasterServerConnectionManager::StartClientParams*, "", "MasterServerConnectionManager/StartClientParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/StartClientParams
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerConnectionManager::StartClientParams : public ::GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x1731EC4
    // Implemented from: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
    // Base method: System.Void MasterServerConnectionManagerParamsBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::StartClientParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MasterServerConnectionManager::StartClientParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::StartClientParams*, creationType>()));
    }
  }; // MasterServerConnectionManager/StartClientParams
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::StartClientParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
