// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SpawnRotationChevronManager
#include "GlobalNamespace/SpawnRotationChevronManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SpawnRotationChevron
  class SpawnRotationChevron;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager::DirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager::DirectionData*, "", "SpawnRotationChevronManager/DirectionData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: SpawnRotationChevronManager/DirectionData
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnRotationChevronManager::DirectionData : public ::Il2CppObject {
    public:
    public:
    // public SpawnRotationChevron chevron
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SpawnRotationChevron* chevron;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SpawnRotationChevron*) == 0x8);
    // public System.Boolean fullyLid
    // Size: 0x1
    // Offset: 0x18
    bool fullyLid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullyLid and: fadeOutStartTime
    char __padding1[0x3] = {};
    // public System.Single fadeOutStartTime
    // Size: 0x4
    // Offset: 0x1C
    float fadeOutStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fadeInEndTime
    // Size: 0x4
    // Offset: 0x20
    float fadeInEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public SpawnRotationChevron chevron
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SpawnRotationChevron*& dyn_chevron();
    // Get instance field reference: public System.Boolean fullyLid
    [[deprecated("Use field access instead!")]] bool& dyn_fullyLid();
    // Get instance field reference: public System.Single fadeOutStartTime
    [[deprecated("Use field access instead!")]] float& dyn_fadeOutStartTime();
    // Get instance field reference: public System.Single fadeInEndTime
    [[deprecated("Use field access instead!")]] float& dyn_fadeInEndTime();
    // public System.Void .ctor()
    // Offset: 0x14C54F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnRotationChevronManager::DirectionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnRotationChevronManager::DirectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnRotationChevronManager::DirectionData*, creationType>()));
    }
  }; // SpawnRotationChevronManager/DirectionData
  #pragma pack(pop)
  static check_size<sizeof(SpawnRotationChevronManager::DirectionData), 32 + sizeof(float)> __GlobalNamespace_SpawnRotationChevronManager_DirectionDataSizeCheck;
  static_assert(sizeof(SpawnRotationChevronManager::DirectionData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::DirectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
