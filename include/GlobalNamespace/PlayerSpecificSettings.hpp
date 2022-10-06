// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteJumpDurationTypeSettings
#include "GlobalNamespace/NoteJumpDurationTypeSettings.hpp"
// Including type: EnvironmentEffectsFilterPreset
#include "GlobalNamespace/EnvironmentEffectsFilterPreset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettings*, "", "PlayerSpecificSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSpecificSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSpecificSettings : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean _leftHanded
    // Size: 0x1
    // Offset: 0x10
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHanded and: playerHeight
    char __padding0[0x3] = {};
    // private System.Single _playerHeight
    // Size: 0x4
    // Offset: 0x14
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _automaticPlayerHeight
    // Size: 0x1
    // Offset: 0x18
    bool automaticPlayerHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: automaticPlayerHeight and: sfxVolume
    char __padding2[0x3] = {};
    // private System.Single _sfxVolume
    // Size: 0x4
    // Offset: 0x1C
    float sfxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _reduceDebris
    // Size: 0x1
    // Offset: 0x20
    bool reduceDebris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _noTextsAndHuds
    // Size: 0x1
    // Offset: 0x21
    bool noTextsAndHuds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _noFailEffects
    // Size: 0x1
    // Offset: 0x22
    bool noFailEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _advancedHud
    // Size: 0x1
    // Offset: 0x23
    bool advancedHud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _autoRestart
    // Size: 0x1
    // Offset: 0x24
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoRestart and: saberTrailIntensity
    char __padding8[0x3] = {};
    // private System.Single _saberTrailIntensity
    // Size: 0x4
    // Offset: 0x28
    float saberTrailIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NoteJumpDurationTypeSettings _noteJumpDurationTypeSettings
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteJumpDurationTypeSettings) == 0x4);
    // private System.Single _noteJumpFixedDuration
    // Size: 0x4
    // Offset: 0x30
    float noteJumpFixedDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x34
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hideNoteSpawnEffect
    // Size: 0x1
    // Offset: 0x38
    bool hideNoteSpawnEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _adaptiveSfx
    // Size: 0x1
    // Offset: 0x39
    bool adaptiveSfx;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: adaptiveSfx and: environmentEffectsFilterDefaultPreset
    char __padding14[0x2] = {};
    // private EnvironmentEffectsFilterPreset _environmentEffectsFilterDefaultPreset
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentEffectsFilterPreset) == 0x4);
    // private EnvironmentEffectsFilterPreset _environmentEffectsFilterExpertPlusPreset
    // Size: 0x4
    // Offset: 0x40
    ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentEffectsFilterPreset) == 0x4);
    public:
    // Get instance field reference: private System.Boolean _leftHanded
    [[deprecated("Use field access instead!")]] bool& dyn__leftHanded();
    // Get instance field reference: private System.Single _playerHeight
    [[deprecated("Use field access instead!")]] float& dyn__playerHeight();
    // Get instance field reference: private System.Boolean _automaticPlayerHeight
    [[deprecated("Use field access instead!")]] bool& dyn__automaticPlayerHeight();
    // Get instance field reference: private System.Single _sfxVolume
    [[deprecated("Use field access instead!")]] float& dyn__sfxVolume();
    // Get instance field reference: private System.Boolean _reduceDebris
    [[deprecated("Use field access instead!")]] bool& dyn__reduceDebris();
    // Get instance field reference: private System.Boolean _noTextsAndHuds
    [[deprecated("Use field access instead!")]] bool& dyn__noTextsAndHuds();
    // Get instance field reference: private System.Boolean _noFailEffects
    [[deprecated("Use field access instead!")]] bool& dyn__noFailEffects();
    // Get instance field reference: private System.Boolean _advancedHud
    [[deprecated("Use field access instead!")]] bool& dyn__advancedHud();
    // Get instance field reference: private System.Boolean _autoRestart
    [[deprecated("Use field access instead!")]] bool& dyn__autoRestart();
    // Get instance field reference: private System.Single _saberTrailIntensity
    [[deprecated("Use field access instead!")]] float& dyn__saberTrailIntensity();
    // Get instance field reference: private NoteJumpDurationTypeSettings _noteJumpDurationTypeSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteJumpDurationTypeSettings& dyn__noteJumpDurationTypeSettings();
    // Get instance field reference: private System.Single _noteJumpFixedDuration
    [[deprecated("Use field access instead!")]] float& dyn__noteJumpFixedDuration();
    // Get instance field reference: private System.Single _noteJumpStartBeatOffset
    [[deprecated("Use field access instead!")]] float& dyn__noteJumpStartBeatOffset();
    // Get instance field reference: private System.Boolean _hideNoteSpawnEffect
    [[deprecated("Use field access instead!")]] bool& dyn__hideNoteSpawnEffect();
    // Get instance field reference: private System.Boolean _adaptiveSfx
    [[deprecated("Use field access instead!")]] bool& dyn__adaptiveSfx();
    // Get instance field reference: private EnvironmentEffectsFilterPreset _environmentEffectsFilterDefaultPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentEffectsFilterPreset& dyn__environmentEffectsFilterDefaultPreset();
    // Get instance field reference: private EnvironmentEffectsFilterPreset _environmentEffectsFilterExpertPlusPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentEffectsFilterPreset& dyn__environmentEffectsFilterExpertPlusPreset();
    // public System.Boolean get_leftHanded()
    // Offset: 0x14DB014
    bool get_leftHanded();
    // public System.Single get_playerHeight()
    // Offset: 0x14DB01C
    float get_playerHeight();
    // public System.Boolean get_automaticPlayerHeight()
    // Offset: 0x14DB024
    bool get_automaticPlayerHeight();
    // public System.Single get_sfxVolume()
    // Offset: 0x14DB02C
    float get_sfxVolume();
    // public System.Boolean get_reduceDebris()
    // Offset: 0x14DB034
    bool get_reduceDebris();
    // public System.Boolean get_noTextsAndHuds()
    // Offset: 0x14DB03C
    bool get_noTextsAndHuds();
    // public System.Boolean get_noFailEffects()
    // Offset: 0x14DB044
    bool get_noFailEffects();
    // public System.Boolean get_advancedHud()
    // Offset: 0x14DB04C
    bool get_advancedHud();
    // public System.Boolean get_autoRestart()
    // Offset: 0x14DB054
    bool get_autoRestart();
    // public System.Single get_saberTrailIntensity()
    // Offset: 0x14DB05C
    float get_saberTrailIntensity();
    // public NoteJumpDurationTypeSettings get_noteJumpDurationTypeSettings()
    // Offset: 0x14DB064
    ::GlobalNamespace::NoteJumpDurationTypeSettings get_noteJumpDurationTypeSettings();
    // public System.Single get_noteJumpFixedDuration()
    // Offset: 0x14DB06C
    float get_noteJumpFixedDuration();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x14DB074
    float get_noteJumpStartBeatOffset();
    // public System.Boolean get_hideNoteSpawnEffect()
    // Offset: 0x14DB07C
    bool get_hideNoteSpawnEffect();
    // public System.Boolean get_adaptiveSfx()
    // Offset: 0x14DB084
    bool get_adaptiveSfx();
    // public EnvironmentEffectsFilterPreset get_environmentEffectsFilterDefaultPreset()
    // Offset: 0x14DB08C
    ::GlobalNamespace::EnvironmentEffectsFilterPreset get_environmentEffectsFilterDefaultPreset();
    // public EnvironmentEffectsFilterPreset get_environmentEffectsFilterExpertPlusPreset()
    // Offset: 0x14DB094
    ::GlobalNamespace::EnvironmentEffectsFilterPreset get_environmentEffectsFilterExpertPlusPreset();
    // public System.Void .ctor()
    // Offset: 0x14D399C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpecificSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpecificSettings*, creationType>()));
    }
    // public System.Void .ctor(System.Boolean leftHanded, System.Single playerHeight, System.Boolean automaticPlayerHeight, System.Single sfxVolume, System.Boolean reduceDebris, System.Boolean noTextsAndHuds, System.Boolean noFailEffects, System.Boolean advancedHud, System.Boolean autoRestart, System.Single saberTrailIntensity, NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, System.Single noteJumpFixedDuration, System.Single noteJumpStartBeatOffset, System.Boolean hideNoteSpawnEffect, System.Boolean adaptiveSfx, EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset, EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset)
    // Offset: 0x14D7244
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpecificSettings* New_ctor(bool leftHanded, float playerHeight, bool automaticPlayerHeight, float sfxVolume, bool reduceDebris, bool noTextsAndHuds, bool noFailEffects, bool advancedHud, bool autoRestart, float saberTrailIntensity, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float noteJumpFixedDuration, float noteJumpStartBeatOffset, bool hideNoteSpawnEffect, bool adaptiveSfx, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpecificSettings*, creationType>(leftHanded, playerHeight, automaticPlayerHeight, sfxVolume, reduceDebris, noTextsAndHuds, noFailEffects, advancedHud, autoRestart, saberTrailIntensity, noteJumpDurationTypeSettings, noteJumpFixedDuration, noteJumpStartBeatOffset, hideNoteSpawnEffect, adaptiveSfx, environmentEffectsFilterDefaultPreset, environmentEffectsFilterExpertPlusPreset)));
    }
    // public PlayerSpecificSettings CopyWith(System.Nullable`1<System.Boolean> leftHanded, System.Nullable`1<System.Single> playerHeight, System.Nullable`1<System.Boolean> automaticPlayerHeight, System.Nullable`1<System.Single> sfxVolume, System.Nullable`1<System.Boolean> reduceDebris, System.Nullable`1<System.Boolean> noTextsAndHuds, System.Nullable`1<System.Boolean> noFailEffects, System.Nullable`1<System.Boolean> advancedHud, System.Nullable`1<System.Boolean> autoRestart, System.Nullable`1<System.Single> saberTrailIntensity, System.Nullable`1<NoteJumpDurationTypeSettings> noteJumpDurationTypeSettings, System.Nullable`1<System.Single> noteJumpFixedDuration, System.Nullable`1<System.Single> noteJumpStartBeatOffset, System.Nullable`1<System.Boolean> hideNoteSpawnEffect, System.Nullable`1<System.Boolean> adaptiveSfx, System.Nullable`1<EnvironmentEffectsFilterPreset> environmentEffectsFilterDefaultPreset, System.Nullable`1<EnvironmentEffectsFilterPreset> environmentEffectsFilterExpertPlusPreset)
    // Offset: 0x14D7664
    ::GlobalNamespace::PlayerSpecificSettings* CopyWith(::System::Nullable_1<bool> leftHanded, ::System::Nullable_1<float> playerHeight, ::System::Nullable_1<bool> automaticPlayerHeight, ::System::Nullable_1<float> sfxVolume, ::System::Nullable_1<bool> reduceDebris, ::System::Nullable_1<bool> noTextsAndHuds, ::System::Nullable_1<bool> noFailEffects, ::System::Nullable_1<bool> advancedHud, ::System::Nullable_1<bool> autoRestart, ::System::Nullable_1<float> saberTrailIntensity, ::System::Nullable_1<::GlobalNamespace::NoteJumpDurationTypeSettings> noteJumpDurationTypeSettings, ::System::Nullable_1<float> noteJumpFixedDuration, ::System::Nullable_1<float> noteJumpStartBeatOffset, ::System::Nullable_1<bool> hideNoteSpawnEffect, ::System::Nullable_1<bool> adaptiveSfx, ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> environmentEffectsFilterDefaultPreset, ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> environmentEffectsFilterExpertPlusPreset);
    // public EnvironmentEffectsFilterPreset GetEnvironmentEffectsFilterPreset(BeatmapDifficulty difficulty)
    // Offset: 0x14DB09C
    ::GlobalNamespace::EnvironmentEffectsFilterPreset GetEnvironmentEffectsFilterPreset(::GlobalNamespace::BeatmapDifficulty difficulty);
  }; // PlayerSpecificSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSpecificSettings), 64 + sizeof(::GlobalNamespace::EnvironmentEffectsFilterPreset)> __GlobalNamespace_PlayerSpecificSettingsSizeCheck;
  static_assert(sizeof(PlayerSpecificSettings) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_leftHanded
// Il2CppName: get_leftHanded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_leftHanded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_leftHanded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_playerHeight
// Il2CppName: get_playerHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_playerHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_playerHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_automaticPlayerHeight
// Il2CppName: get_automaticPlayerHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_automaticPlayerHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_automaticPlayerHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_sfxVolume
// Il2CppName: get_sfxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_sfxVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_sfxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_reduceDebris
// Il2CppName: get_reduceDebris
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_reduceDebris)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_reduceDebris", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_noTextsAndHuds
// Il2CppName: get_noTextsAndHuds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_noTextsAndHuds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_noTextsAndHuds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_noFailEffects
// Il2CppName: get_noFailEffects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_noFailEffects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_noFailEffects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_advancedHud
// Il2CppName: get_advancedHud
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_advancedHud)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_advancedHud", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_autoRestart
// Il2CppName: get_autoRestart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_autoRestart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_autoRestart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_saberTrailIntensity
// Il2CppName: get_saberTrailIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_saberTrailIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_saberTrailIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_noteJumpDurationTypeSettings
// Il2CppName: get_noteJumpDurationTypeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteJumpDurationTypeSettings (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_noteJumpDurationTypeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_noteJumpDurationTypeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_noteJumpFixedDuration
// Il2CppName: get_noteJumpFixedDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_noteJumpFixedDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_noteJumpFixedDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_noteJumpStartBeatOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_hideNoteSpawnEffect
// Il2CppName: get_hideNoteSpawnEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_hideNoteSpawnEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_hideNoteSpawnEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_adaptiveSfx
// Il2CppName: get_adaptiveSfx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_adaptiveSfx)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_adaptiveSfx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_environmentEffectsFilterDefaultPreset
// Il2CppName: get_environmentEffectsFilterDefaultPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentEffectsFilterPreset (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_environmentEffectsFilterDefaultPreset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_environmentEffectsFilterDefaultPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::get_environmentEffectsFilterExpertPlusPreset
// Il2CppName: get_environmentEffectsFilterExpertPlusPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentEffectsFilterPreset (GlobalNamespace::PlayerSpecificSettings::*)()>(&GlobalNamespace::PlayerSpecificSettings::get_environmentEffectsFilterExpertPlusPreset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "get_environmentEffectsFilterExpertPlusPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::CopyWith
// Il2CppName: CopyWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (GlobalNamespace::PlayerSpecificSettings::*)(::System::Nullable_1<bool>, ::System::Nullable_1<float>, ::System::Nullable_1<bool>, ::System::Nullable_1<float>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<float>, ::System::Nullable_1<::GlobalNamespace::NoteJumpDurationTypeSettings>, ::System::Nullable_1<float>, ::System::Nullable_1<float>, ::System::Nullable_1<bool>, ::System::Nullable_1<bool>, ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset>, ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset>)>(&GlobalNamespace::PlayerSpecificSettings::CopyWith)> {
  static const MethodInfo* get() {
    static auto* leftHanded = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* playerHeight = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* automaticPlayerHeight = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* sfxVolume = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* reduceDebris = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* noTextsAndHuds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* noFailEffects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* advancedHud = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* autoRestart = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* saberTrailIntensity = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* noteJumpDurationTypeSettings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteJumpDurationTypeSettings")})->byval_arg;
    static auto* noteJumpFixedDuration = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* noteJumpStartBeatOffset = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* hideNoteSpawnEffect = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* adaptiveSfx = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* environmentEffectsFilterDefaultPreset = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EnvironmentEffectsFilterPreset")})->byval_arg;
    static auto* environmentEffectsFilterExpertPlusPreset = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EnvironmentEffectsFilterPreset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "CopyWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftHanded, playerHeight, automaticPlayerHeight, sfxVolume, reduceDebris, noTextsAndHuds, noFailEffects, advancedHud, autoRestart, saberTrailIntensity, noteJumpDurationTypeSettings, noteJumpFixedDuration, noteJumpStartBeatOffset, hideNoteSpawnEffect, adaptiveSfx, environmentEffectsFilterDefaultPreset, environmentEffectsFilterExpertPlusPreset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettings::GetEnvironmentEffectsFilterPreset
// Il2CppName: GetEnvironmentEffectsFilterPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentEffectsFilterPreset (GlobalNamespace::PlayerSpecificSettings::*)(::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::PlayerSpecificSettings::GetEnvironmentEffectsFilterPreset)> {
  static const MethodInfo* get() {
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettings*), "GetEnvironmentEffectsFilterPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficulty});
  }
};
