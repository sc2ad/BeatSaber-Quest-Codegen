#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
namespace GlobalNamespace {
class SongController;
}
namespace GlobalNamespace {
class AudioListenerController;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
// Forward declare root types
namespace GlobalNamespace {
class GamePause;
}
// Type: ::GamePause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5149))
// CS Name: GamePause
class CORDL_TYPE GamePause : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IGamePause
constexpr operator  GlobalNamespace::IGamePause() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~GamePause() = default;

// Ctor Parameters [CppParam { name: "", ty: "GamePause", modifiers: " const&", def_value: None }]
constexpr GamePause(GamePause const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GamePause", modifiers: "&&", def_value: None }]
constexpr GamePause(GamePause&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GamePause(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GamePause& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GamePause& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GamePause& operator=(GamePause&& o) noexcept = default;
  constexpr GamePause& operator=(GamePause const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent))  didPauseEvent;

constexpr void __set_didPauseEvent(System::Action value) ;

constexpr System::Action __get_didPauseEvent() const;

 System::Action __declspec(property(get=__get_willResumeEvent, put=__set_willResumeEvent))  willResumeEvent;

constexpr void __set_willResumeEvent(System::Action value) ;

constexpr System::Action __get_willResumeEvent() const;

 System::Action __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent))  didResumeEvent;

constexpr void __set_didResumeEvent(System::Action value) ;

constexpr System::Action __get_didResumeEvent() const;

 GlobalNamespace::GameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(GlobalNamespace::GameEnergyCounter value) ;

constexpr GlobalNamespace::GameEnergyCounter __get__gameEnergyCounter() const;

 GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 GlobalNamespace::BeatmapObjectExecutionRatingsRecorder __declspec(property(get=__get__beatmapObjectExecutionRatingsRecorder, put=__set__beatmapObjectExecutionRatingsRecorder))  _beatmapObjectExecutionRatingsRecorder;

constexpr void __set__beatmapObjectExecutionRatingsRecorder(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder value) ;

constexpr GlobalNamespace::BeatmapObjectExecutionRatingsRecorder __get__beatmapObjectExecutionRatingsRecorder() const;

 GlobalNamespace::SongController __declspec(property(get=__get__songController, put=__set__songController))  _songController;

constexpr void __set__songController(GlobalNamespace::SongController value) ;

constexpr GlobalNamespace::SongController __get__songController() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 GlobalNamespace::AudioListenerController __declspec(property(get=__get__audioListenerController, put=__set__audioListenerController))  _audioListenerController;

constexpr void __set__audioListenerController(GlobalNamespace::AudioListenerController value) ;

constexpr GlobalNamespace::AudioListenerController __get__audioListenerController() const;

 bool __declspec(property(get=__get__pause, put=__set__pause))  _pause;

constexpr void __set__pause(bool value) ;

constexpr bool __get__pause() const;


// Properties

 bool __declspec(property(get=get_isPaused))  isPaused;


// Methods

/// @brief Method get_isPaused addr 0x20cddd4 size 0x8 virtual true final true
 bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x20cdddc size 0x9c virtual true final true
 void add_didPauseEvent(System::Action value) ;

/// @brief Method remove_didPauseEvent addr 0x20cde78 size 0x9c virtual true final true
 void remove_didPauseEvent(System::Action value) ;

/// @brief Method add_willResumeEvent addr 0x20cdf14 size 0x9c virtual true final true
 void add_willResumeEvent(System::Action value) ;

/// @brief Method remove_willResumeEvent addr 0x20cdfb0 size 0x9c virtual true final true
 void remove_willResumeEvent(System::Action value) ;

/// @brief Method add_didResumeEvent addr 0x20ce04c size 0x9c virtual true final true
 void add_didResumeEvent(System::Action value) ;

/// @brief Method remove_didResumeEvent addr 0x20ce0e8 size 0x9c virtual true final true
 void remove_didResumeEvent(System::Action value) ;

/// @brief Method Pause addr 0x20ce184 size 0x150 virtual true final true
 void Pause() ;

/// @brief Method WillResume addr 0x20ce2d4 size 0x24 virtual true final true
 void WillResume() ;

/// @brief Method Resume addr 0x20ce2f8 size 0x14c virtual true final true
 void Resume() ;

static GlobalNamespace::GamePause New_ctor() ;

/// @brief Method .ctor addr 0x20ce444 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GamePause);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GamePause, "", "GamePause");
