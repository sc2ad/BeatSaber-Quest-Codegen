#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentStartEndSongAudioEffect;
}
// Type: ::EnvironmentStartEndSongAudioEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4048))
// CS Name: EnvironmentStartEndSongAudioEffect
class CORDL_TYPE EnvironmentStartEndSongAudioEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~EnvironmentStartEndSongAudioEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: " const&", def_value: None }]
constexpr EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "&&", def_value: None }]
constexpr EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentStartEndSongAudioEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentStartEndSongAudioEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentStartEndSongAudioEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentStartEndSongAudioEffect& operator=(EnvironmentStartEndSongAudioEffect&& o) noexcept = default;
  constexpr EnvironmentStartEndSongAudioEffect& operator=(EnvironmentStartEndSongAudioEffect const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__playStartSongForNonZeroStartSongTime, put=__set__playStartSongForNonZeroStartSongTime))  _playStartSongForNonZeroStartSongTime;

constexpr void __set__playStartSongForNonZeroStartSongTime(bool value) ;

constexpr bool __get__playStartSongForNonZeroStartSongTime() const;

 float_t __declspec(property(get=__get__songFinishedAheadTime, put=__set__songFinishedAheadTime))  _songFinishedAheadTime;

constexpr void __set__songFinishedAheadTime(float_t value) ;

constexpr float_t __get__songFinishedAheadTime() const;

 float_t __declspec(property(get=__get__songStartAudioClipVolume, put=__set__songStartAudioClipVolume))  _songStartAudioClipVolume;

constexpr void __set__songStartAudioClipVolume(float_t value) ;

constexpr float_t __get__songStartAudioClipVolume() const;

 float_t __declspec(property(get=__get__songFinishedAudioClipVolume, put=__set__songFinishedAudioClipVolume))  _songFinishedAudioClipVolume;

constexpr void __set__songFinishedAudioClipVolume(float_t value) ;

constexpr float_t __get__songFinishedAudioClipVolume() const;

 float_t __declspec(property(get=__get__songFailedAudioClipVolume, put=__set__songFailedAudioClipVolume))  _songFailedAudioClipVolume;

constexpr void __set__songFailedAudioClipVolume(float_t value) ;

constexpr float_t __get__songFailedAudioClipVolume() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__songStartAudioClips, put=__set__songStartAudioClips))  _songStartAudioClips;

constexpr void __set__songStartAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__songStartAudioClips() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__songFinishedAudioClips, put=__set__songFinishedAudioClips))  _songFinishedAudioClips;

constexpr void __set__songFinishedAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__songFinishedAudioClips() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__songFailedAudioClips, put=__set__songFailedAudioClips))  _songFailedAudioClips;

constexpr void __set__songFailedAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__songFailedAudioClips() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__levelEndActions, put=__set__levelEndActions))  _levelEndActions;

constexpr void __set__levelEndActions(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__levelEndActions() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

 GlobalNamespace::EnvironmentAudioEffectsPlayer __declspec(property(get=__get__audioEffectsPlayer, put=__set__audioEffectsPlayer))  _audioEffectsPlayer;

constexpr void __set__audioEffectsPlayer(GlobalNamespace::EnvironmentAudioEffectsPlayer value) ;

constexpr GlobalNamespace::EnvironmentAudioEffectsPlayer __get__audioEffectsPlayer() const;

 GlobalNamespace::EnvironmentContext __declspec(property(get=__get__environmentContext, put=__set__environmentContext))  _environmentContext;

constexpr void __set__environmentContext(GlobalNamespace::EnvironmentContext value) ;

constexpr GlobalNamespace::EnvironmentContext __get__environmentContext() const;

/// @brief Field kSmallSongTime offset 0
static constexpr float_t  kSmallSongTime{0.5};

 bool __declspec(property(get=__get__songFinishedPlayed, put=__set__songFinishedPlayed))  _songFinishedPlayed;

constexpr void __set__songFinishedPlayed(bool value) ;

constexpr bool __get__songFinishedPlayed() const;

 bool __declspec(property(get=__get__isWaitingToPlayStartAudio, put=__set__isWaitingToPlayStartAudio))  _isWaitingToPlayStartAudio;

constexpr void __set__isWaitingToPlayStartAudio(bool value) ;

constexpr bool __get__isWaitingToPlayStartAudio() const;


// Methods

/// @brief Method Start addr 0x20badb8 size 0x478 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20bb230 size 0x254 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20bb484 size 0x2a8 virtual false final false
 void Update() ;

/// @brief Method LevelWillFinishWithinAheadTime addr 0x20bb72c size 0x5c virtual false final false
 void LevelWillFinishWithinAheadTime() ;

/// @brief Method HandleLevelFailed addr 0x20bb788 size 0x90 virtual false final false
 void HandleLevelFailed() ;

/// @brief Method HandleGamePauseDidResume addr 0x20bb818 size 0x24 virtual false final false
 void HandleGamePauseDidResume() ;

/// @brief Method HandleGamePauseDidPause addr 0x20bb83c size 0x24 virtual false final false
 void HandleGamePauseDidPause() ;

static GlobalNamespace::EnvironmentStartEndSongAudioEffect New_ctor() ;

/// @brief Method .ctor addr 0x20bb860 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentStartEndSongAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentStartEndSongAudioEffect, "", "EnvironmentStartEndSongAudioEffect");
