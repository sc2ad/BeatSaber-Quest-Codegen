// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BpmController
#include "GlobalNamespace/BpmController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BpmController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmController::InitData*, "", "BpmController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BpmController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class BpmController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single startBpm
    // Size: 0x4
    // Offset: 0x10
    float startBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return startBpm;
    }
    // Get instance field reference: public readonly System.Single startBpm
    [[deprecated("Use field access instead!")]] float& dyn_startBpm();
    // public System.Void .ctor(System.Single startBpm)
    // Offset: 0x13E2B84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BpmController::InitData* New_ctor(float startBpm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BpmController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BpmController::InitData*, creationType>(startBpm)));
    }
  }; // BpmController/InitData
  #pragma pack(pop)
  static check_size<sizeof(BpmController::InitData), 16 + sizeof(float)> __GlobalNamespace_BpmController_InitDataSizeCheck;
  static_assert(sizeof(BpmController::InitData) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BpmController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
