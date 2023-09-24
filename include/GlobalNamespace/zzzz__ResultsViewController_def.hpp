#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class ResultsEnvironmentManager;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class LevelBar;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32;
}
namespace GlobalNamespace {
class ResultsViewController;
}
// Type: ::<StartFireworksAfterDelay>d__32
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5838))
// CS Name: ResultsViewController::<StartFireworksAfterDelay>d__32
class CORDL_TYPE GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32(GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32(GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32& operator=(GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32&& o) noexcept = default;
  constexpr GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32& operator=(GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::ResultsViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ResultsViewController value) ;

constexpr GlobalNamespace::ResultsViewController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21800b8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21804c4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21804c8 size 0xbc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2180584 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x218058c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21805cc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ResultsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5839))
// CS Name: ResultsViewController
class CORDL_TYPE ResultsViewController : public HMUI::ViewController {
public:
// Declarations
using _StartFireworksAfterDelay_d__32 = GlobalNamespace::GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~ResultsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsViewController", modifiers: " const&", def_value: None }]
constexpr ResultsViewController(ResultsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsViewController", modifiers: "&&", def_value: None }]
constexpr ResultsViewController(ResultsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr ResultsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultsViewController& operator=(ResultsViewController&& o) noexcept = default;
  constexpr ResultsViewController& operator=(ResultsViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__restartButton, put=__set__restartButton))  _restartButton;

constexpr void __set__restartButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__restartButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 UnityEngine::GameObject __declspec(property(get=__get__clearedPanel, put=__set__clearedPanel))  _clearedPanel;

constexpr void __set__clearedPanel(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__clearedPanel() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__scoreText() const;

 UnityEngine::GameObject __declspec(property(get=__get__newHighScoreText, put=__set__newHighScoreText))  _newHighScoreText;

constexpr void __set__newHighScoreText(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__newHighScoreText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__rankText, put=__set__rankText))  _rankText;

constexpr void __set__rankText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__rankText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__goodCutsPercentageText, put=__set__goodCutsPercentageText))  _goodCutsPercentageText;

constexpr void __set__goodCutsPercentageText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__goodCutsPercentageText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__comboText, put=__set__comboText))  _comboText;

constexpr void __set__comboText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__comboText() const;

 UnityEngine::GameObject __declspec(property(get=__get__clearedBannerGo, put=__set__clearedBannerGo))  _clearedBannerGo;

constexpr void __set__clearedBannerGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__clearedBannerGo() const;

 UnityEngine::GameObject __declspec(property(get=__get__failedBannerGo, put=__set__failedBannerGo))  _failedBannerGo;

constexpr void __set__failedBannerGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__failedBannerGo() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 UnityEngine::AudioClip __declspec(property(get=__get__levelClearedAudioClip, put=__set__levelClearedAudioClip))  _levelClearedAudioClip;

constexpr void __set__levelClearedAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__levelClearedAudioClip() const;

 GlobalNamespace::FireworksController __declspec(property(get=__get__fireworksController, put=__set__fireworksController))  _fireworksController;

constexpr void __set__fireworksController(GlobalNamespace::FireworksController value) ;

constexpr GlobalNamespace::FireworksController __get__fireworksController() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 GlobalNamespace::ResultsEnvironmentManager __declspec(property(get=__get__resultsEnvironmentManager, put=__set__resultsEnvironmentManager))  _resultsEnvironmentManager;

constexpr void __set__resultsEnvironmentManager(GlobalNamespace::ResultsEnvironmentManager value) ;

constexpr GlobalNamespace::ResultsEnvironmentManager __get__resultsEnvironmentManager() const;

 System::Action_1<GlobalNamespace::ResultsViewController> __declspec(property(get=__get_continueButtonPressedEvent, put=__set_continueButtonPressedEvent))  continueButtonPressedEvent;

constexpr void __set_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController> value) ;

constexpr System::Action_1<GlobalNamespace::ResultsViewController> __get_continueButtonPressedEvent() const;

 System::Action_1<GlobalNamespace::ResultsViewController> __declspec(property(get=__get_restartButtonPressedEvent, put=__set_restartButtonPressedEvent))  restartButtonPressedEvent;

constexpr void __set_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController> value) ;

constexpr System::Action_1<GlobalNamespace::ResultsViewController> __get_restartButtonPressedEvent() const;

 GlobalNamespace::LevelCompletionResults __declspec(property(get=__get__levelCompletionResults, put=__set__levelCompletionResults))  _levelCompletionResults;

constexpr void __set__levelCompletionResults(GlobalNamespace::LevelCompletionResults value) ;

constexpr GlobalNamespace::LevelCompletionResults __get__levelCompletionResults() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__transformedBeatmapData, put=__set__transformedBeatmapData))  _transformedBeatmapData;

constexpr void __set__transformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get__transformedBeatmapData() const;

 UnityEngine::Coroutine __declspec(property(get=__get__startFireworksAfterDelayCoroutine, put=__set__startFireworksAfterDelayCoroutine))  _startFireworksAfterDelayCoroutine;

constexpr void __set__startFireworksAfterDelayCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__startFireworksAfterDelayCoroutine() const;

 bool __declspec(property(get=__get__newHighScore, put=__set__newHighScore))  _newHighScore;

constexpr void __set__newHighScore(bool value) ;

constexpr bool __get__newHighScore() const;

 bool __declspec(property(get=__get__practice, put=__set__practice))  _practice;

constexpr void __set__practice(bool value) ;

constexpr bool __get__practice() const;


// Properties

 bool __declspec(property(get=get_practice))  practice;


// Methods

/// @brief Method add_continueButtonPressedEvent addr 0x217f1b8 size 0xb0 virtual false final false
 void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController> value) ;

/// @brief Method remove_continueButtonPressedEvent addr 0x217f268 size 0xb0 virtual false final false
 void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController> value) ;

/// @brief Method add_restartButtonPressedEvent addr 0x217f318 size 0xb0 virtual false final false
 void add_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController> value) ;

/// @brief Method remove_restartButtonPressedEvent addr 0x217f3c8 size 0xb0 virtual false final false
 void remove_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController> value) ;

/// @brief Method get_practice addr 0x217f478 size 0x8 virtual false final false
 bool get_practice() ;

/// @brief Method Init addr 0x217f480 size 0x1c virtual false final false
 void Init(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, bool practice, bool newHighScore) ;

/// @brief Method DidActivate addr 0x217f49c size 0x1bc virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2180018 size 0xa0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method StartFireworksAfterDelay addr 0x217ffa0 size 0x78 virtual false final false
 System::Collections::IEnumerator StartFireworksAfterDelay(float_t delay) ;

/// @brief Method SetDataToUI addr 0x217f658 size 0x510 virtual false final false
 void SetDataToUI() ;

/// @brief Method EnableResultsEnvironmentController addr 0x217fb68 size 0x438 virtual false final false
 void EnableResultsEnvironmentController() ;

/// @brief Method DisableResultEnvironmentController addr 0x21800e0 size 0x374 virtual false final false
 void DisableResultEnvironmentController() ;

/// @brief Method ContinueButtonPressed addr 0x2180454 size 0x34 virtual false final false
 void ContinueButtonPressed() ;

/// @brief Method RestartButtonPressed addr 0x2180488 size 0x34 virtual false final false
 void RestartButtonPressed() ;

static GlobalNamespace::ResultsViewController New_ctor() ;

/// @brief Method .ctor addr 0x21804bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ResultsViewController___StartFireworksAfterDelay_d__32, "", "ResultsViewController/<StartFireworksAfterDelay>d__32");
NEED_NO_BOX(GlobalNamespace::ResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsViewController, "", "ResultsViewController");
