#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Action;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class TutorialSongController;
}
namespace GlobalNamespace {
class AudioListenerController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialPause;
}
// Type: ::TutorialPause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5433))
// CS Name: TutorialPause
class CORDL_TYPE TutorialPause : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IGamePause
constexpr operator  ::GlobalNamespace::IGamePause() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TutorialPause() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialPause", modifiers: " const&", def_value: None }]
constexpr TutorialPause(TutorialPause const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialPause", modifiers: "&&", def_value: None }]
constexpr TutorialPause(TutorialPause&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialPause(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TutorialPause& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialPause& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialPause& operator=(TutorialPause&& o) noexcept = default;
  constexpr TutorialPause& operator=(TutorialPause const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::TutorialSongController __declspec(property(get=__get__tutorialSongController, put=__set__tutorialSongController))  _tutorialSongController;

constexpr void __set__tutorialSongController(::GlobalNamespace::TutorialSongController value) ;

constexpr ::GlobalNamespace::TutorialSongController __get__tutorialSongController() const;

 ::GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager value) ;

constexpr ::GlobalNamespace::SaberManager __get__saberManager() const;

 ::GlobalNamespace::AudioListenerController __declspec(property(get=__get__audioListenerController, put=__set__audioListenerController))  _audioListenerController;

constexpr void __set__audioListenerController(::GlobalNamespace::AudioListenerController value) ;

constexpr ::GlobalNamespace::AudioListenerController __get__audioListenerController() const;

 ::System::Action __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent))  didPauseEvent;

constexpr void __set_didPauseEvent(::System::Action value) ;

constexpr ::System::Action __get_didPauseEvent() const;

 ::System::Action __declspec(property(get=__get_willResumeEvent, put=__set_willResumeEvent))  willResumeEvent;

constexpr void __set_willResumeEvent(::System::Action value) ;

constexpr ::System::Action __get_willResumeEvent() const;

 ::System::Action __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent))  didResumeEvent;

constexpr void __set_didResumeEvent(::System::Action value) ;

constexpr ::System::Action __get_didResumeEvent() const;

 bool __declspec(property(get=__get__pause, put=__set__pause))  _pause;

constexpr void __set__pause(bool value) ;

constexpr bool __get__pause() const;


// Properties

 bool __declspec(property(get=get_isPaused))  isPaused;


// Methods

/// @brief Method get_isPaused addr 0x2112cd4 size 0x8 virtual true final true
 bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x2112cdc size 0x9c virtual true final true
 void add_didPauseEvent(::System::Action value) ;

/// @brief Method remove_didPauseEvent addr 0x2112d78 size 0x9c virtual true final true
 void remove_didPauseEvent(::System::Action value) ;

/// @brief Method add_willResumeEvent addr 0x2112e14 size 0x9c virtual true final true
 void add_willResumeEvent(::System::Action value) ;

/// @brief Method remove_willResumeEvent addr 0x2112eb0 size 0x9c virtual true final true
 void remove_willResumeEvent(::System::Action value) ;

/// @brief Method add_didResumeEvent addr 0x2112f4c size 0x9c virtual true final true
 void add_didResumeEvent(::System::Action value) ;

/// @brief Method remove_didResumeEvent addr 0x2112fe8 size 0x9c virtual true final true
 void remove_didResumeEvent(::System::Action value) ;

/// @brief Method Pause addr 0x2113084 size 0x78 virtual true final true
 void Pause() ;

/// @brief Method WillResume addr 0x21130fc size 0x1c virtual true final true
 void WillResume() ;

/// @brief Method Resume addr 0x2113118 size 0x74 virtual true final true
 void Resume() ;

// Ctor Parameters []
explicit TutorialPause() ;

/// @brief Method .ctor addr 0x211318c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TutorialPause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialPause, "", "TutorialPause");
