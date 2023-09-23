#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioManagerSO;
}
// Type: ::AudioManagerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4032))
// CS Name: AudioManagerSO
class CORDL_TYPE AudioManagerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AudioManagerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO", modifiers: " const&", def_value: None }]
constexpr AudioManagerSO(AudioManagerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioManagerSO", modifiers: "&&", def_value: None }]
constexpr AudioManagerSO(AudioManagerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioManagerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AudioManagerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioManagerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioManagerSO& operator=(AudioManagerSO&& o) noexcept = default;
  constexpr AudioManagerSO& operator=(AudioManagerSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Audio::AudioMixer __declspec(property(get=__get__audioMixer, put=__set__audioMixer))  _audioMixer;

constexpr void __set__audioMixer(UnityEngine::Audio::AudioMixer value) ;

constexpr UnityEngine::Audio::AudioMixer __get__audioMixer() const;

 float_t __declspec(property(get=__get__spatializerPluginLatency, put=__set__spatializerPluginLatency))  _spatializerPluginLatency;

constexpr void __set__spatializerPluginLatency(float_t value) ;

constexpr float_t __get__spatializerPluginLatency() const;

 float_t __declspec(property(get=__get__spatializerSfxVolumeOffset, put=__set__spatializerSfxVolumeOffset))  _spatializerSfxVolumeOffset;

constexpr void __set__spatializerSfxVolumeOffset(float_t value) ;

constexpr float_t __get__spatializerSfxVolumeOffset() const;

/// @brief Field kDefaultMusicVolume offset 0
static constexpr float_t  kDefaultMusicVolume{-4};

/// @brief Field kPreferredSpatializerPluginName offset 0
static constexpr ::ConstString  kPreferredSpatializerPluginName{u"Microsoft Spatializer"};

/// @brief Field kSfxVolume offset 0
static constexpr ::ConstString  kSfxVolume{u"SFXVolume"};

/// @brief Field kMainVolume offset 0
static constexpr ::ConstString  kMainVolume{u"MainVolume"};

/// @brief Field kMusicVolume offset 0
static constexpr ::ConstString  kMusicVolume{u"MusicVolume"};

/// @brief Field kMusicPitch offset 0
static constexpr ::ConstString  kMusicPitch{u"MusicPitch"};

/// @brief Field kMusicSpeed offset 0
static constexpr ::ConstString  kMusicSpeed{u"MusicSpeed"};

/// @brief Field kMusicPitchShifterWet offset 0
static constexpr ::ConstString  kMusicPitchShifterWet{u"MusicPitchShifterWet"};

 float_t __declspec(property(get=__get__musicVolumeOffset, put=__set__musicVolumeOffset))  _musicVolumeOffset;

constexpr void __set__musicVolumeOffset(float_t value) ;

constexpr float_t __get__musicVolumeOffset() const;

 float_t __declspec(property(get=__get__sfxVolumeOffset, put=__set__sfxVolumeOffset))  _sfxVolumeOffset;

constexpr void __set__sfxVolumeOffset(float_t value) ;

constexpr float_t __get__sfxVolumeOffset() const;

 float_t __declspec(property(get=__get__sfxVolume, put=__set__sfxVolume))  _sfxVolume;

constexpr void __set__sfxVolume(float_t value) ;

constexpr float_t __get__sfxVolume() const;

 bool __declspec(property(get=__get__sfxEnabled, put=__set__sfxEnabled))  _sfxEnabled;

constexpr void __set__sfxEnabled(bool value) ;

constexpr bool __get__sfxEnabled() const;


// Properties

 float_t __declspec(property(get=get_sfxLatency))  sfxLatency;

 float_t __declspec(property(put=set_mainVolume))  mainVolume;

 float_t __declspec(property(put=set_musicVolume))  musicVolume;

 float_t __declspec(property(get=get_sfxVolume, put=set_sfxVolume))  sfxVolume;

 bool __declspec(property(get=get_sfxEnabled, put=set_sfxEnabled))  sfxEnabled;

 float_t __declspec(property(put=set_musicPitch))  musicPitch;

 float_t __declspec(property(put=set_musicSpeed))  musicSpeed;


// Methods

/// @brief Method get_sfxLatency addr 0x20b8a30 size 0x60 virtual false final false
 float_t get_sfxLatency() ;

/// @brief Method Init addr 0x20b4ff8 size 0xa8 virtual false final false
 void Init() ;

/// @brief Method set_mainVolume addr 0x20b50a0 size 0x64 virtual false final false
 void set_mainVolume(float_t value) ;

/// @brief Method set_musicVolume addr 0x20b8a90 size 0x68 virtual false final false
 void set_musicVolume(float_t value) ;

/// @brief Method get_sfxVolume addr 0x20b8af8 size 0x18 virtual false final false
 float_t get_sfxVolume() ;

/// @brief Method set_sfxVolume addr 0x20b8b10 size 0x84 virtual false final false
 void set_sfxVolume(float_t value) ;

/// @brief Method get_sfxEnabled addr 0x20b8b94 size 0x8 virtual false final false
 bool get_sfxEnabled() ;

/// @brief Method set_sfxEnabled addr 0x20b8b9c size 0x20 virtual false final false
 void set_sfxEnabled(bool value) ;

/// @brief Method set_musicPitch addr 0x20b8bbc size 0x100 virtual false final false
 void set_musicPitch(float_t value) ;

/// @brief Method set_musicSpeed addr 0x20b8cbc size 0x64 virtual false final false
 void set_musicSpeed(float_t value) ;

// Ctor Parameters []
explicit AudioManagerSO() ;

/// @brief Method .ctor addr 0x20b8d20 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioManagerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioManagerSO, "", "AudioManagerSO");
