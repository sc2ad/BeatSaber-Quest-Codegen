#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Type: ::PlayerSpecificSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4765))
// CS Name: PlayerSpecificSettings
class CORDL_TYPE PlayerSpecificSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PlayerSpecificSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettings", modifiers: " const&", def_value: None }]
constexpr PlayerSpecificSettings(PlayerSpecificSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettings", modifiers: "&&", def_value: None }]
constexpr PlayerSpecificSettings(PlayerSpecificSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSpecificSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerSpecificSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSpecificSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSpecificSettings& operator=(PlayerSpecificSettings&& o) noexcept = default;
  constexpr PlayerSpecificSettings& operator=(PlayerSpecificSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__leftHanded, put=__set__leftHanded))  _leftHanded;

constexpr void __set__leftHanded(bool value) ;

constexpr bool __get__leftHanded() const;

 float_t __declspec(property(get=__get__playerHeight, put=__set__playerHeight))  _playerHeight;

constexpr void __set__playerHeight(float_t value) ;

constexpr float_t __get__playerHeight() const;

 bool __declspec(property(get=__get__automaticPlayerHeight, put=__set__automaticPlayerHeight))  _automaticPlayerHeight;

constexpr void __set__automaticPlayerHeight(bool value) ;

constexpr bool __get__automaticPlayerHeight() const;

 float_t __declspec(property(get=__get__sfxVolume, put=__set__sfxVolume))  _sfxVolume;

constexpr void __set__sfxVolume(float_t value) ;

constexpr float_t __get__sfxVolume() const;

 bool __declspec(property(get=__get__reduceDebris, put=__set__reduceDebris))  _reduceDebris;

constexpr void __set__reduceDebris(bool value) ;

constexpr bool __get__reduceDebris() const;

 bool __declspec(property(get=__get__noTextsAndHuds, put=__set__noTextsAndHuds))  _noTextsAndHuds;

constexpr void __set__noTextsAndHuds(bool value) ;

constexpr bool __get__noTextsAndHuds() const;

 bool __declspec(property(get=__get__noFailEffects, put=__set__noFailEffects))  _noFailEffects;

constexpr void __set__noFailEffects(bool value) ;

constexpr bool __get__noFailEffects() const;

 bool __declspec(property(get=__get__advancedHud, put=__set__advancedHud))  _advancedHud;

constexpr void __set__advancedHud(bool value) ;

constexpr bool __get__advancedHud() const;

 bool __declspec(property(get=__get__autoRestart, put=__set__autoRestart))  _autoRestart;

constexpr void __set__autoRestart(bool value) ;

constexpr bool __get__autoRestart() const;

 float_t __declspec(property(get=__get__saberTrailIntensity, put=__set__saberTrailIntensity))  _saberTrailIntensity;

constexpr void __set__saberTrailIntensity(float_t value) ;

constexpr float_t __get__saberTrailIntensity() const;

 ::GlobalNamespace::NoteJumpDurationTypeSettings __declspec(property(get=__get__noteJumpDurationTypeSettings, put=__set__noteJumpDurationTypeSettings))  _noteJumpDurationTypeSettings;

constexpr void __set__noteJumpDurationTypeSettings(::GlobalNamespace::NoteJumpDurationTypeSettings value) ;

constexpr ::GlobalNamespace::NoteJumpDurationTypeSettings __get__noteJumpDurationTypeSettings() const;

 float_t __declspec(property(get=__get__noteJumpFixedDuration, put=__set__noteJumpFixedDuration))  _noteJumpFixedDuration;

constexpr void __set__noteJumpFixedDuration(float_t value) ;

constexpr float_t __get__noteJumpFixedDuration() const;

 float_t __declspec(property(get=__get__noteJumpStartBeatOffset, put=__set__noteJumpStartBeatOffset))  _noteJumpStartBeatOffset;

constexpr void __set__noteJumpStartBeatOffset(float_t value) ;

constexpr float_t __get__noteJumpStartBeatOffset() const;

 bool __declspec(property(get=__get__hideNoteSpawnEffect, put=__set__hideNoteSpawnEffect))  _hideNoteSpawnEffect;

constexpr void __set__hideNoteSpawnEffect(bool value) ;

constexpr bool __get__hideNoteSpawnEffect() const;

 bool __declspec(property(get=__get__adaptiveSfx, put=__set__adaptiveSfx))  _adaptiveSfx;

constexpr void __set__adaptiveSfx(bool value) ;

constexpr bool __get__adaptiveSfx() const;

 bool __declspec(property(get=__get__arcsHapticFeedback, put=__set__arcsHapticFeedback))  _arcsHapticFeedback;

constexpr void __set__arcsHapticFeedback(bool value) ;

constexpr bool __get__arcsHapticFeedback() const;

 ::GlobalNamespace::ArcVisibilityType __declspec(property(get=__get__arcsVisible, put=__set__arcsVisible))  _arcsVisible;

constexpr void __set__arcsVisible(::GlobalNamespace::ArcVisibilityType value) ;

constexpr ::GlobalNamespace::ArcVisibilityType __get__arcsVisible() const;

 ::GlobalNamespace::EnvironmentEffectsFilterPreset __declspec(property(get=__get__environmentEffectsFilterDefaultPreset, put=__set__environmentEffectsFilterDefaultPreset))  _environmentEffectsFilterDefaultPreset;

constexpr void __set__environmentEffectsFilterDefaultPreset(::GlobalNamespace::EnvironmentEffectsFilterPreset value) ;

constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset __get__environmentEffectsFilterDefaultPreset() const;

 ::GlobalNamespace::EnvironmentEffectsFilterPreset __declspec(property(get=__get__environmentEffectsFilterExpertPlusPreset, put=__set__environmentEffectsFilterExpertPlusPreset))  _environmentEffectsFilterExpertPlusPreset;

constexpr void __set__environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::EnvironmentEffectsFilterPreset value) ;

constexpr ::GlobalNamespace::EnvironmentEffectsFilterPreset __get__environmentEffectsFilterExpertPlusPreset() const;


// Properties

 bool __declspec(property(get=get_leftHanded))  leftHanded;

 float_t __declspec(property(get=get_playerHeight))  playerHeight;

 bool __declspec(property(get=get_automaticPlayerHeight))  automaticPlayerHeight;

 float_t __declspec(property(get=get_sfxVolume))  sfxVolume;

 bool __declspec(property(get=get_reduceDebris))  reduceDebris;

 bool __declspec(property(get=get_noTextsAndHuds))  noTextsAndHuds;

 bool __declspec(property(get=get_noFailEffects))  noFailEffects;

 bool __declspec(property(get=get_advancedHud))  advancedHud;

 bool __declspec(property(get=get_autoRestart))  autoRestart;

 float_t __declspec(property(get=get_saberTrailIntensity))  saberTrailIntensity;

 ::GlobalNamespace::NoteJumpDurationTypeSettings __declspec(property(get=get_noteJumpDurationTypeSettings))  noteJumpDurationTypeSettings;

 float_t __declspec(property(get=get_noteJumpFixedDuration))  noteJumpFixedDuration;

 float_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;

 bool __declspec(property(get=get_hideNoteSpawnEffect))  hideNoteSpawnEffect;

 bool __declspec(property(get=get_adaptiveSfx))  adaptiveSfx;

 bool __declspec(property(get=get_arcsHapticFeedback))  arcsHapticFeedback;

 ::GlobalNamespace::ArcVisibilityType __declspec(property(get=get_arcVisibility))  arcVisibility;

 ::GlobalNamespace::EnvironmentEffectsFilterPreset __declspec(property(get=get_environmentEffectsFilterDefaultPreset))  environmentEffectsFilterDefaultPreset;

 ::GlobalNamespace::EnvironmentEffectsFilterPreset __declspec(property(get=get_environmentEffectsFilterExpertPlusPreset))  environmentEffectsFilterExpertPlusPreset;


// Methods

/// @brief Method get_leftHanded addr 0x2226f6c size 0x8 virtual false final false
 bool get_leftHanded() ;

/// @brief Method get_playerHeight addr 0x2226f74 size 0x8 virtual false final false
 float_t get_playerHeight() ;

/// @brief Method get_automaticPlayerHeight addr 0x2226f7c size 0x8 virtual false final false
 bool get_automaticPlayerHeight() ;

/// @brief Method get_sfxVolume addr 0x2226f84 size 0x8 virtual false final false
 float_t get_sfxVolume() ;

/// @brief Method get_reduceDebris addr 0x2226f8c size 0x8 virtual false final false
 bool get_reduceDebris() ;

/// @brief Method get_noTextsAndHuds addr 0x2226f94 size 0x8 virtual false final false
 bool get_noTextsAndHuds() ;

/// @brief Method get_noFailEffects addr 0x2226f9c size 0x8 virtual false final false
 bool get_noFailEffects() ;

/// @brief Method get_advancedHud addr 0x2226fa4 size 0x8 virtual false final false
 bool get_advancedHud() ;

/// @brief Method get_autoRestart addr 0x2226fac size 0x8 virtual false final false
 bool get_autoRestart() ;

/// @brief Method get_saberTrailIntensity addr 0x2226fb4 size 0x8 virtual false final false
 float_t get_saberTrailIntensity() ;

/// @brief Method get_noteJumpDurationTypeSettings addr 0x2226fbc size 0x8 virtual false final false
 ::GlobalNamespace::NoteJumpDurationTypeSettings get_noteJumpDurationTypeSettings() ;

/// @brief Method get_noteJumpFixedDuration addr 0x2226fc4 size 0x8 virtual false final false
 float_t get_noteJumpFixedDuration() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x2226fcc size 0x8 virtual false final false
 float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_hideNoteSpawnEffect addr 0x2226fd4 size 0x8 virtual false final false
 bool get_hideNoteSpawnEffect() ;

/// @brief Method get_adaptiveSfx addr 0x2226fdc size 0x8 virtual false final false
 bool get_adaptiveSfx() ;

/// @brief Method get_arcsHapticFeedback addr 0x2226fe4 size 0x8 virtual false final false
 bool get_arcsHapticFeedback() ;

/// @brief Method get_arcVisibility addr 0x2226fec size 0x8 virtual false final false
 ::GlobalNamespace::ArcVisibilityType get_arcVisibility() ;

/// @brief Method get_environmentEffectsFilterDefaultPreset addr 0x2226ff4 size 0x8 virtual false final false
 ::GlobalNamespace::EnvironmentEffectsFilterPreset get_environmentEffectsFilterDefaultPreset() ;

/// @brief Method get_environmentEffectsFilterExpertPlusPreset addr 0x2226ffc size 0x8 virtual false final false
 ::GlobalNamespace::EnvironmentEffectsFilterPreset get_environmentEffectsFilterExpertPlusPreset() ;

// Ctor Parameters []
explicit PlayerSpecificSettings() ;

/// @brief Method .ctor addr 0x2225e48 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "leftHanded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "playerHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "automaticPlayerHeight", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sfxVolume", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "reduceDebris", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "noTextsAndHuds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "noFailEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "advancedHud", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "autoRestart", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberTrailIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpDurationTypeSettings", ty: "::GlobalNamespace::NoteJumpDurationTypeSettings", modifiers: "", def_value: None }, CppParam { name: "noteJumpFixedDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "hideNoteSpawnEffect", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "adaptiveSfx", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "arcsHapticFeedback", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "arcsVisible", ty: "::GlobalNamespace::ArcVisibilityType", modifiers: "", def_value: None }, CppParam { name: "environmentEffectsFilterDefaultPreset", ty: "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "", def_value: None }, CppParam { name: "environmentEffectsFilterExpertPlusPreset", ty: "::GlobalNamespace::EnvironmentEffectsFilterPreset", modifiers: "", def_value: None }]
explicit PlayerSpecificSettings(bool leftHanded, float_t playerHeight, bool automaticPlayerHeight, float_t sfxVolume, bool reduceDebris, bool noTextsAndHuds, bool noFailEffects, bool advancedHud, bool autoRestart, float_t saberTrailIntensity, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float_t noteJumpFixedDuration, float_t noteJumpStartBeatOffset, bool hideNoteSpawnEffect, bool adaptiveSfx, bool arcsHapticFeedback, ::GlobalNamespace::ArcVisibilityType arcsVisible, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset) ;

/// @brief Method .ctor addr 0x2225a2c size 0x120 virtual false final false
 void _ctor(bool leftHanded, float_t playerHeight, bool automaticPlayerHeight, float_t sfxVolume, bool reduceDebris, bool noTextsAndHuds, bool noFailEffects, bool advancedHud, bool autoRestart, float_t saberTrailIntensity, ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings, float_t noteJumpFixedDuration, float_t noteJumpStartBeatOffset, bool hideNoteSpawnEffect, bool adaptiveSfx, bool arcsHapticFeedback, ::GlobalNamespace::ArcVisibilityType arcsVisible, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset) ;

/// @brief Method CopyWith addr 0x2225eb8 size 0x3b4 virtual false final false
 ::GlobalNamespace::PlayerSpecificSettings CopyWith(::System::Nullable_1<bool> leftHanded, ::System::Nullable_1<float_t> playerHeight, ::System::Nullable_1<bool> automaticPlayerHeight, ::System::Nullable_1<float_t> sfxVolume, ::System::Nullable_1<bool> reduceDebris, ::System::Nullable_1<bool> noTextsAndHuds, ::System::Nullable_1<bool> noFailEffects, ::System::Nullable_1<bool> advancedHud, ::System::Nullable_1<bool> autoRestart, ::System::Nullable_1<float_t> saberTrailIntensity, ::System::Nullable_1<::GlobalNamespace::NoteJumpDurationTypeSettings> noteJumpDurationTypeSettings, ::System::Nullable_1<float_t> noteJumpFixedDuration, ::System::Nullable_1<float_t> noteJumpStartBeatOffset, ::System::Nullable_1<bool> hideNoteSpawnEffect, ::System::Nullable_1<bool> adaptiveSfx, ::System::Nullable_1<bool> arcsHapticFeedback, ::System::Nullable_1<::GlobalNamespace::ArcVisibilityType> arcsVisible, ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> environmentEffectsFilterDefaultPreset, ::System::Nullable_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> environmentEffectsFilterExpertPlusPreset) ;

/// @brief Method GetEnvironmentEffectsFilterPreset addr 0x2227004 size 0x18 virtual false final false
 ::GlobalNamespace::EnvironmentEffectsFilterPreset GetEnvironmentEffectsFilterPreset(::GlobalNamespace::BeatmapDifficulty difficulty) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettings, "", "PlayerSpecificSettings");
