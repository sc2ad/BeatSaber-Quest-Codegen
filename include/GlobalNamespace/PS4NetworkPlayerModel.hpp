// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4NetworkPlayerModel
  class PS4NetworkPlayerModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4NetworkPlayerModel*, "", "PS4NetworkPlayerModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: PS4NetworkPlayerModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4NetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
    public:
    // public System.Void .ctor()
    // Offset: 0x135C894
    // Implemented from: PlatformNetworkPlayerModel
    // Base method: System.Void PlatformNetworkPlayerModel::.ctor()
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4NetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4NetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4NetworkPlayerModel*, creationType>()));
    }
  }; // PS4NetworkPlayerModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4NetworkPlayerModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
