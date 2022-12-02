// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings*, "", "PlayerSaveData/OverrideEnvironmentSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/OverrideEnvironmentSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::OverrideEnvironmentSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean overrideEnvironments
    // Size: 0x1
    // Offset: 0x10
    bool overrideEnvironments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnvironments and: overrideNormalEnvironmentName
    char __padding0[0x7] = {};
    // public System.String overrideNormalEnvironmentName
    // Size: 0x8
    // Offset: 0x18
    ::StringW overrideNormalEnvironmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String override360EnvironmentName
    // Size: 0x8
    // Offset: 0x20
    ::StringW override360EnvironmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Boolean overrideEnvironments
    [[deprecated("Use field access instead!")]] bool& dyn_overrideEnvironments();
    // Get instance field reference: public System.String overrideNormalEnvironmentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_overrideNormalEnvironmentName();
    // Get instance field reference: public System.String override360EnvironmentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_override360EnvironmentName();
    // public System.Void .ctor()
    // Offset: 0x157B5F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::OverrideEnvironmentSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::OverrideEnvironmentSettings*, creationType>()));
    }
  }; // PlayerSaveData/OverrideEnvironmentSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::OverrideEnvironmentSettings), 32 + sizeof(::StringW)> __GlobalNamespace_PlayerSaveData_OverrideEnvironmentSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::OverrideEnvironmentSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
