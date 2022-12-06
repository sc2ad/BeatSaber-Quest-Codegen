// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*, "", "PlayerSaveData/PlayerSpecificSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/PlayerSpecificSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::PlayerSpecificSettings : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData
    struct EnvironmentEffectsFilterPresetSaveData;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData
    struct NoteJumpDurationTypeSettingsSaveData;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData
    // [TokenAttribute] Offset: FFFFFFFF
    struct EnvironmentEffectsFilterPresetSaveData/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EnvironmentEffectsFilterPresetSaveData
      constexpr EnvironmentEffectsFilterPresetSaveData(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData AllEffects
      static constexpr const int AllEffects = 0;
      // Get static field: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData AllEffects
      static ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData _get_AllEffects();
      // Set static field: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData AllEffects
      static void _set_AllEffects(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData value);
      // static field const value: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData StrobeFilter
      static constexpr const int StrobeFilter = 1;
      // Get static field: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData StrobeFilter
      static ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData _get_StrobeFilter();
      // Set static field: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData StrobeFilter
      static void _set_StrobeFilter(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData value);
      // static field const value: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData NoEffects
      static constexpr const int NoEffects = 10;
      // Get static field: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData NoEffects
      static ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData _get_NoEffects();
      // Set static field: static public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData NoEffects
      static void _set_NoEffects(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData
    #pragma pack(pop)
    static check_size<sizeof(PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData), 0 + sizeof(int)> __GlobalNamespace_PlayerSaveData_PlayerSpecificSettings_EnvironmentEffectsFilterPresetSaveDataSizeCheck;
    static_assert(sizeof(PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData
    // [TokenAttribute] Offset: FFFFFFFF
    struct NoteJumpDurationTypeSettingsSaveData/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: NoteJumpDurationTypeSettingsSaveData
      constexpr NoteJumpDurationTypeSettingsSaveData(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData Dynamic
      static constexpr const int Dynamic = 0;
      // Get static field: static public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData Dynamic
      static ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData _get_Dynamic();
      // Set static field: static public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData Dynamic
      static void _set_Dynamic(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData value);
      // static field const value: static public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData Static
      static constexpr const int Static = 1;
      // Get static field: static public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData Static
      static ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData _get_Static();
      // Set static field: static public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData Static
      static void _set_Static(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData
    #pragma pack(pop)
    static check_size<sizeof(PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData), 0 + sizeof(int)> __GlobalNamespace_PlayerSaveData_PlayerSpecificSettings_NoteJumpDurationTypeSettingsSaveDataSizeCheck;
    static_assert(sizeof(PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData) == 0x4);
    public:
    // public System.Boolean staticLights
    // Size: 0x1
    // Offset: 0x10
    bool staticLights;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x11
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHanded and: playerHeight
    char __padding1[0x2] = {};
    // public System.Single playerHeight
    // Size: 0x4
    // Offset: 0x14
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean automaticPlayerHeight
    // Size: 0x1
    // Offset: 0x18
    bool automaticPlayerHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: automaticPlayerHeight and: sfxVolume
    char __padding3[0x3] = {};
    // public System.Single sfxVolume
    // Size: 0x4
    // Offset: 0x1C
    float sfxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean reduceDebris
    // Size: 0x1
    // Offset: 0x20
    bool reduceDebris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noTextsAndHuds
    // Size: 0x1
    // Offset: 0x21
    bool noTextsAndHuds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean advancedHud
    // Size: 0x1
    // Offset: 0x22
    bool advancedHud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: advancedHud and: saberTrailIntensity
    char __padding7[0x1] = {};
    // public System.Single saberTrailIntensity
    // Size: 0x4
    // Offset: 0x24
    float saberTrailIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData _noteJumpDurationTypeSettingsSaveData
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData noteJumpDurationTypeSettingsSaveData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData) == 0x4);
    // public System.Single noteJumpFixedDuration
    // Size: 0x4
    // Offset: 0x2C
    float noteJumpFixedDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x30
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noFailEffects
    // Size: 0x1
    // Offset: 0x31
    bool noFailEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noFailEffects and: noteJumpBeatOffset
    char __padding12[0x2] = {};
    // public System.Single noteJumpBeatOffset
    // Size: 0x4
    // Offset: 0x34
    float noteJumpBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean hideNoteSpawnEffect
    // Size: 0x1
    // Offset: 0x38
    bool hideNoteSpawnEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean adaptiveSfx
    // Size: 0x1
    // Offset: 0x39
    bool adaptiveSfx;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: adaptiveSfx and: environmentEffectsFilterDefaultPreset
    char __padding15[0x2] = {};
    // public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData environmentEffectsFilterDefaultPreset
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData environmentEffectsFilterDefaultPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData) == 0x4);
    // public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData environmentEffectsFilterExpertPlusPreset
    // Size: 0x4
    // Offset: 0x40
    ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData environmentEffectsFilterExpertPlusPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData) == 0x4);
    public:
    // Get instance field reference: public System.Boolean staticLights
    [[deprecated("Use field access instead!")]] bool& dyn_staticLights();
    // Get instance field reference: public System.Boolean leftHanded
    [[deprecated("Use field access instead!")]] bool& dyn_leftHanded();
    // Get instance field reference: public System.Single playerHeight
    [[deprecated("Use field access instead!")]] float& dyn_playerHeight();
    // Get instance field reference: public System.Boolean automaticPlayerHeight
    [[deprecated("Use field access instead!")]] bool& dyn_automaticPlayerHeight();
    // Get instance field reference: public System.Single sfxVolume
    [[deprecated("Use field access instead!")]] float& dyn_sfxVolume();
    // Get instance field reference: public System.Boolean reduceDebris
    [[deprecated("Use field access instead!")]] bool& dyn_reduceDebris();
    // Get instance field reference: public System.Boolean noTextsAndHuds
    [[deprecated("Use field access instead!")]] bool& dyn_noTextsAndHuds();
    // Get instance field reference: public System.Boolean advancedHud
    [[deprecated("Use field access instead!")]] bool& dyn_advancedHud();
    // Get instance field reference: public System.Single saberTrailIntensity
    [[deprecated("Use field access instead!")]] float& dyn_saberTrailIntensity();
    // Get instance field reference: public PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData _noteJumpDurationTypeSettingsSaveData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData& dyn__noteJumpDurationTypeSettingsSaveData();
    // Get instance field reference: public System.Single noteJumpFixedDuration
    [[deprecated("Use field access instead!")]] float& dyn_noteJumpFixedDuration();
    // Get instance field reference: public System.Boolean autoRestart
    [[deprecated("Use field access instead!")]] bool& dyn_autoRestart();
    // Get instance field reference: public System.Boolean noFailEffects
    [[deprecated("Use field access instead!")]] bool& dyn_noFailEffects();
    // Get instance field reference: public System.Single noteJumpBeatOffset
    [[deprecated("Use field access instead!")]] float& dyn_noteJumpBeatOffset();
    // Get instance field reference: public System.Boolean hideNoteSpawnEffect
    [[deprecated("Use field access instead!")]] bool& dyn_hideNoteSpawnEffect();
    // Get instance field reference: public System.Boolean adaptiveSfx
    [[deprecated("Use field access instead!")]] bool& dyn_adaptiveSfx();
    // Get instance field reference: public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData environmentEffectsFilterDefaultPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData& dyn_environmentEffectsFilterDefaultPreset();
    // Get instance field reference: public PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData environmentEffectsFilterExpertPlusPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData& dyn_environmentEffectsFilterExpertPlusPreset();
    // public System.Void .ctor()
    // Offset: 0x1577EFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerSpecificSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerSpecificSettings*, creationType>()));
    }
  }; // PlayerSaveData/PlayerSpecificSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::PlayerSpecificSettings), 64 + sizeof(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData)> __GlobalNamespace_PlayerSaveData_PlayerSpecificSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::PlayerSpecificSettings) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData, "", "PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData, "", "PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
