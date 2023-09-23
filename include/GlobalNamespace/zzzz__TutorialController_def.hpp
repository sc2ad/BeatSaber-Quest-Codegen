#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class TutorialSongController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class AudioFading;
}
namespace GlobalNamespace {
class IntroTutorialController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class PauseController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TutorialController___OutroCoroutine_d__19;
}
namespace GlobalNamespace {
class TutorialController;
}
// Type: ::<OutroCoroutine>d__19
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5430))
// CS Name: TutorialController::<OutroCoroutine>d__19
class CORDL_TYPE GlobalNamespace__TutorialController___OutroCoroutine_d__19 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__TutorialController___OutroCoroutine_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialController___OutroCoroutine_d__19", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialController___OutroCoroutine_d__19(GlobalNamespace__TutorialController___OutroCoroutine_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialController___OutroCoroutine_d__19", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialController___OutroCoroutine_d__19(GlobalNamespace__TutorialController___OutroCoroutine_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialController___OutroCoroutine_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TutorialController___OutroCoroutine_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialController___OutroCoroutine_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialController___OutroCoroutine_d__19& operator=(GlobalNamespace__TutorialController___OutroCoroutine_d__19&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialController___OutroCoroutine_d__19& operator=(GlobalNamespace__TutorialController___OutroCoroutine_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::TutorialController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TutorialController value) ;

constexpr GlobalNamespace::TutorialController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialController___OutroCoroutine_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2112764 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21127e0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21127e4 size 0x10c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21128f0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21128f8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2112938 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5431))
// CS Name: TutorialController
class CORDL_TYPE TutorialController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _OutroCoroutine_d__19 = GlobalNamespace::GlobalNamespace__TutorialController___OutroCoroutine_d__19;

/// @brief Convert operator to GlobalNamespace::ILevelStartController
constexpr operator  GlobalNamespace::ILevelStartController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~TutorialController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialController", modifiers: " const&", def_value: None }]
constexpr TutorialController(TutorialController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialController", modifiers: "&&", def_value: None }]
constexpr TutorialController(TutorialController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TutorialController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialController& operator=(TutorialController&& o) noexcept = default;
  constexpr TutorialController& operator=(TutorialController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TutorialSongController __declspec(property(get=__get__tutorialSongController, put=__set__tutorialSongController))  _tutorialSongController;

constexpr void __set__tutorialSongController(GlobalNamespace::TutorialSongController value) ;

constexpr GlobalNamespace::TutorialSongController __get__tutorialSongController() const;

 GlobalNamespace::IntroTutorialController __declspec(property(get=__get__introTutorialController, put=__set__introTutorialController))  _introTutorialController;

constexpr void __set__introTutorialController(GlobalNamespace::IntroTutorialController value) ;

constexpr GlobalNamespace::IntroTutorialController __get__introTutorialController() const;

 GlobalNamespace::AudioFading __declspec(property(get=__get__audioFading, put=__set__audioFading))  _audioFading;

constexpr void __set__audioFading(GlobalNamespace::AudioFading value) ;

constexpr GlobalNamespace::AudioFading __get__audioFading() const;

 GlobalNamespace::TutorialScenesTransitionSetupDataSO __declspec(property(get=__get__tutorialSceneSetupData, put=__set__tutorialSceneSetupData))  _tutorialSceneSetupData;

constexpr void __set__tutorialSceneSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO __get__tutorialSceneSetupData() const;

 GlobalNamespace::Signal __declspec(property(get=__get__tutorialIntroStartedSignal, put=__set__tutorialIntroStartedSignal))  _tutorialIntroStartedSignal;

constexpr void __set__tutorialIntroStartedSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__tutorialIntroStartedSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__tutorialFinishedSignal, put=__set__tutorialFinishedSignal))  _tutorialFinishedSignal;

constexpr void __set__tutorialFinishedSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__tutorialFinishedSignal() const;

 GlobalNamespace::PauseController __declspec(property(get=__get__pauseController, put=__set__pauseController))  _pauseController;

constexpr void __set__pauseController(GlobalNamespace::PauseController value) ;

constexpr GlobalNamespace::PauseController __get__pauseController() const;

 System::Action __declspec(property(get=__get_levelWillStartIntroEvent, put=__set_levelWillStartIntroEvent))  levelWillStartIntroEvent;

constexpr void __set_levelWillStartIntroEvent(System::Action value) ;

constexpr System::Action __get_levelWillStartIntroEvent() const;

 System::Action __declspec(property(get=__get_levelDidStartEvent, put=__set_levelDidStartEvent))  levelDidStartEvent;

constexpr void __set_levelDidStartEvent(System::Action value) ;

constexpr System::Action __get_levelDidStartEvent() const;

 bool __declspec(property(get=__get__paused, put=__set__paused))  _paused;

constexpr void __set__paused(bool value) ;

constexpr bool __get__paused() const;

 bool __declspec(property(get=__get__doingOutroTransition, put=__set__doingOutroTransition))  _doingOutroTransition;

constexpr void __set__doingOutroTransition(bool value) ;

constexpr bool __get__doingOutroTransition() const;


// Methods

/// @brief Method add_levelWillStartIntroEvent addr 0x2111f2c size 0x9c virtual true final true
 void add_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method remove_levelWillStartIntroEvent addr 0x2111fc8 size 0x9c virtual true final true
 void remove_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method add_levelDidStartEvent addr 0x2112064 size 0x9c virtual true final true
 void add_levelDidStartEvent(System::Action value) ;

/// @brief Method remove_levelDidStartEvent addr 0x2112100 size 0x9c virtual true final true
 void remove_levelDidStartEvent(System::Action value) ;

/// @brief Method Start addr 0x211219c size 0x23c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21123d8 size 0x26c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleIntroTutorialDidFinishEvent addr 0x2112644 size 0x1c virtual false final false
 void HandleIntroTutorialDidFinishEvent() ;

/// @brief Method HandleTutorialSongControllerSongDidFinishEvent addr 0x21126bc size 0x40 virtual false final false
 void HandleTutorialSongControllerSongDidFinishEvent() ;

/// @brief Method OutroCoroutine addr 0x21126fc size 0x68 virtual false final false
 System::Collections::IEnumerator OutroCoroutine() ;

/// @brief Method HandlePauseControllerCanPause addr 0x211278c size 0x38 virtual false final false
 void HandlePauseControllerCanPause(System::Action_1<bool> canPause) ;

/// @brief Method HandlePauseControllerDidPause addr 0x21127c4 size 0xc virtual false final false
 void HandlePauseControllerDidPause() ;

/// @brief Method HandlePauseControllerDidResume addr 0x21127d0 size 0x8 virtual false final false
 void HandlePauseControllerDidResume() ;

// Ctor Parameters []
explicit TutorialController() ;

/// @brief Method .ctor addr 0x21127d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialController___OutroCoroutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialController___OutroCoroutine_d__19, "", "TutorialController/<OutroCoroutine>d__19");
NEED_NO_BOX(GlobalNamespace::TutorialController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialController, "", "TutorialController");
