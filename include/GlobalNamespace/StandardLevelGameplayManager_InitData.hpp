// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelGameplayManager
#include "GlobalNamespace/StandardLevelGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelGameplayManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelGameplayManager::InitData*, "", "StandardLevelGameplayManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelGameplayManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelGameplayManager::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean failOn0Energy
    // Size: 0x1
    // Offset: 0x10
    bool failOn0Energy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return failOn0Energy;
    }
    // Get instance field reference: public readonly System.Boolean failOn0Energy
    [[deprecated("Use field access instead!")]] bool& dyn_failOn0Energy();
    // public System.Void .ctor(System.Boolean failOn0Energy)
    // Offset: 0x13AE838
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelGameplayManager::InitData* New_ctor(bool failOn0Energy) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelGameplayManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelGameplayManager::InitData*, creationType>(failOn0Energy)));
    }
  }; // StandardLevelGameplayManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelGameplayManager::InitData), 16 + sizeof(bool)> __GlobalNamespace_StandardLevelGameplayManager_InitDataSizeCheck;
  static_assert(sizeof(StandardLevelGameplayManager::InitData) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelGameplayManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
