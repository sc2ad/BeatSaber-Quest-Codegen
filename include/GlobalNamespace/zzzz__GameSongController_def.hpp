#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSongController;
}
// Type: ::GameSongController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5424))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5422))
// CS Name: GameSongController
class CORDL_TYPE GameSongController : public GlobalNamespace::SongController {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IStartSeekSongController
constexpr operator  GlobalNamespace::IStartSeekSongController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GameSongController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameSongController", modifiers: " const&", def_value: None }]
constexpr GameSongController(GameSongController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameSongController", modifiers: "&&", def_value: None }]
constexpr GameSongController(GameSongController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameSongController(void* ptr) noexcept : GlobalNamespace::SongController(ptr) {
}


  constexpr GameSongController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameSongController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameSongController& operator=(GameSongController&& o) noexcept = default;
  constexpr GameSongController& operator=(GameSongController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::AudioPitchGainEffect __declspec(property(get=__get__failAudioPitchGainEffect, put=__set__failAudioPitchGainEffect))  _failAudioPitchGainEffect;

constexpr void __set__failAudioPitchGainEffect(GlobalNamespace::AudioPitchGainEffect value) ;

constexpr GlobalNamespace::AudioPitchGainEffect __get__failAudioPitchGainEffect() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapCallbacksUpdater __declspec(property(get=__get__beatmapCallbacksUpdater, put=__set__beatmapCallbacksUpdater))  _beatmapCallbacksUpdater;

constexpr void __set__beatmapCallbacksUpdater(GlobalNamespace::BeatmapCallbacksUpdater value) ;

constexpr GlobalNamespace::BeatmapCallbacksUpdater __get__beatmapCallbacksUpdater() const;

 bool __declspec(property(get=__get__songDidFinish, put=__set__songDidFinish))  _songDidFinish;

constexpr void __set__songDidFinish(bool value) ;

constexpr bool __get__songDidFinish() const;


// Properties

 float_t __declspec(property(get=get_songLength))  songLength;

 UnityEngine::WaitUntil __declspec(property(get=get_waitUntilIsReadyToStartTheSong))  waitUntilIsReadyToStartTheSong;


// Methods

/// @brief Method get_songLength addr 0x21109a8 size 0x1c virtual false final false
 float_t get_songLength() ;

/// @brief Method get_waitUntilIsReadyToStartTheSong addr 0x21109c4 size 0x1c virtual true final true
 UnityEngine::WaitUntil get_waitUntilIsReadyToStartTheSong() ;

/// @brief Method LateUpdate addr 0x21109e0 size 0x74 virtual false final false
 void LateUpdate() ;

/// @brief Method StartSong addr 0x2110a70 size 0x24 virtual true final true
 void StartSong(float_t songTimeOffset) ;

/// @brief Method StopSong addr 0x2110a94 size 0x1c virtual true final false
 void StopSong() ;

/// @brief Method PauseSong addr 0x2110ab0 size 0x30 virtual true final false
 void PauseSong() ;

/// @brief Method ResumeSong addr 0x2110ae0 size 0x30 virtual true final false
 void ResumeSong() ;

/// @brief Method FailStopSong addr 0x2110b10 size 0x12c virtual false final false
 void FailStopSong() ;

/// @brief Method SeekTo addr 0x2110c3c size 0x1c virtual true final true
 void SeekTo(float_t songTime) ;

// Ctor Parameters []
explicit GameSongController() ;

/// @brief Method .ctor addr 0x2110c58 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FailStopSong>b__14_0 addr 0x2110c68 size 0x1c virtual false final false
 void _FailStopSong_b__14_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameSongController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameSongController, "", "GameSongController");
