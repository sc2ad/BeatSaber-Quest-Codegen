// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameEnergyCounter
#include "GlobalNamespace/GameEnergyCounter.hpp"
// Including type: GameplayModifiers/EnergyType
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameEnergyCounter::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEnergyCounter::InitData*, "", "GameEnergyCounter/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x17
  #pragma pack(push, 1)
  // Autogenerated type: GameEnergyCounter/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class GameEnergyCounter::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly GameplayModifiers/EnergyType energyType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers::EnergyType) == 0x4);
    // public readonly System.Boolean noFail
    // Size: 0x1
    // Offset: 0x14
    bool noFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean instaFail
    // Size: 0x1
    // Offset: 0x15
    bool instaFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean failOnSaberClash
    // Size: 0x1
    // Offset: 0x16
    bool failOnSaberClash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly GameplayModifiers/EnergyType energyType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers::EnergyType& dyn_energyType();
    // Get instance field reference: public readonly System.Boolean noFail
    [[deprecated("Use field access instead!")]] bool& dyn_noFail();
    // Get instance field reference: public readonly System.Boolean instaFail
    [[deprecated("Use field access instead!")]] bool& dyn_instaFail();
    // Get instance field reference: public readonly System.Boolean failOnSaberClash
    [[deprecated("Use field access instead!")]] bool& dyn_failOnSaberClash();
    // public System.Void .ctor(GameplayModifiers/EnergyType energyType, System.Boolean noFail, System.Boolean instaFail, System.Boolean failOnSaberClash)
    // Offset: 0x13A7FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameEnergyCounter::InitData* New_ctor(::GlobalNamespace::GameplayModifiers::EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameEnergyCounter::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameEnergyCounter::InitData*, creationType>(energyType, noFail, instaFail, failOnSaberClash)));
    }
  }; // GameEnergyCounter/InitData
  #pragma pack(pop)
  static check_size<sizeof(GameEnergyCounter::InitData), 22 + sizeof(bool)> __GlobalNamespace_GameEnergyCounter_InitDataSizeCheck;
  static_assert(sizeof(GameEnergyCounter::InitData) == 0x17);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
