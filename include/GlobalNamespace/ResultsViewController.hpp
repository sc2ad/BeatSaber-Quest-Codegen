// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: ResultsEnvironmentManager
  class ResultsEnvironmentManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsViewController*, "", "ResultsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11A
  #pragma pack(push, 1)
  // Autogenerated type: ResultsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultsViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::ResultsViewController::$StartFireworksAfterDelay$d__32
    class $StartFireworksAfterDelay$d__32;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _restartButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* restartButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0x125D208
    // private UnityEngine.GameObject _clearedPanel
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* clearedPanel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x88
    ::TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _newHighScoreText
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::GameObject* newHighScoreText;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x98
    ::TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _goodCutsPercentageText
    // Size: 0x8
    // Offset: 0xA0
    ::TMPro::TextMeshProUGUI* goodCutsPercentageText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _comboText
    // Size: 0x8
    // Offset: 0xA8
    ::TMPro::TextMeshProUGUI* comboText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0x125D290
    // private UnityEngine.GameObject _clearedBannerGo
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::GameObject* clearedBannerGo;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _failedBannerGo
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::GameObject* failedBannerGo;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0x125D2D8
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0x125D310
    // private UnityEngine.AudioClip _levelClearedAudioClip
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::AudioClip* levelClearedAudioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0x125D348
    // private readonly FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FireworksController*) == 0x8);
    // [InjectAttribute] Offset: 0x125D358
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0xD8
    ::GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x125D368
    // private readonly ResultsEnvironmentManager _resultsEnvironmentManager
    // Size: 0x8
    // Offset: 0xE0
    ::GlobalNamespace::ResultsEnvironmentManager* resultsEnvironmentManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ResultsEnvironmentManager*) == 0x8);
    // private System.Action`1<ResultsViewController> continueButtonPressedEvent
    // Size: 0x8
    // Offset: 0xE8
    ::System::Action_1<::GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ResultsViewController*>*) == 0x8);
    // private System.Action`1<ResultsViewController> restartButtonPressedEvent
    // Size: 0x8
    // Offset: 0xF0
    ::System::Action_1<::GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ResultsViewController*>*) == 0x8);
    // private LevelCompletionResults _levelCompletionResults
    // Size: 0x8
    // Offset: 0xF8
    ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCompletionResults*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x100
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private IReadonlyBeatmapData _transformedBeatmapData
    // Size: 0x8
    // Offset: 0x108
    ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::Coroutine* startFireworksAfterDelayCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private System.Boolean _newHighScore
    // Size: 0x1
    // Offset: 0x118
    bool newHighScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _practice
    // Size: 0x1
    // Offset: 0x119
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _restartButton
    ::UnityEngine::UI::Button*& dyn__restartButton();
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    ::UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private UnityEngine.GameObject _clearedPanel
    ::UnityEngine::GameObject*& dyn__clearedPanel();
    // Get instance field reference: private TMPro.TextMeshProUGUI _scoreText
    ::TMPro::TextMeshProUGUI*& dyn__scoreText();
    // Get instance field reference: private UnityEngine.GameObject _newHighScoreText
    ::UnityEngine::GameObject*& dyn__newHighScoreText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _rankText
    ::TMPro::TextMeshProUGUI*& dyn__rankText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _goodCutsPercentageText
    ::TMPro::TextMeshProUGUI*& dyn__goodCutsPercentageText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _comboText
    ::TMPro::TextMeshProUGUI*& dyn__comboText();
    // Get instance field reference: private UnityEngine.GameObject _clearedBannerGo
    ::UnityEngine::GameObject*& dyn__clearedBannerGo();
    // Get instance field reference: private UnityEngine.GameObject _failedBannerGo
    ::UnityEngine::GameObject*& dyn__failedBannerGo();
    // Get instance field reference: private LevelBar _levelBar
    ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private UnityEngine.AudioClip _levelClearedAudioClip
    ::UnityEngine::AudioClip*& dyn__levelClearedAudioClip();
    // Get instance field reference: private readonly FireworksController _fireworksController
    ::GlobalNamespace::FireworksController*& dyn__fireworksController();
    // Get instance field reference: private readonly SongPreviewPlayer _songPreviewPlayer
    ::GlobalNamespace::SongPreviewPlayer*& dyn__songPreviewPlayer();
    // Get instance field reference: private readonly ResultsEnvironmentManager _resultsEnvironmentManager
    ::GlobalNamespace::ResultsEnvironmentManager*& dyn__resultsEnvironmentManager();
    // Get instance field reference: private System.Action`1<ResultsViewController> continueButtonPressedEvent
    ::System::Action_1<::GlobalNamespace::ResultsViewController*>*& dyn_continueButtonPressedEvent();
    // Get instance field reference: private System.Action`1<ResultsViewController> restartButtonPressedEvent
    ::System::Action_1<::GlobalNamespace::ResultsViewController*>*& dyn_restartButtonPressedEvent();
    // Get instance field reference: private LevelCompletionResults _levelCompletionResults
    ::GlobalNamespace::LevelCompletionResults*& dyn__levelCompletionResults();
    // Get instance field reference: private IDifficultyBeatmap _difficultyBeatmap
    ::GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private IReadonlyBeatmapData _transformedBeatmapData
    ::GlobalNamespace::IReadonlyBeatmapData*& dyn__transformedBeatmapData();
    // Get instance field reference: private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    ::UnityEngine::Coroutine*& dyn__startFireworksAfterDelayCoroutine();
    // Get instance field reference: private System.Boolean _newHighScore
    bool& dyn__newHighScore();
    // Get instance field reference: private System.Boolean _practice
    bool& dyn__practice();
    // public System.Boolean get_practice()
    // Offset: 0x137EA8C
    bool get_practice();
    // public System.Void add_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x137E7FC
    void add_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x137E8A0
    void remove_continueButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);
    // public System.Void add_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x137E944
    void add_restartButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x137E9E8
    void remove_restartButtonPressedEvent(::System::Action_1<::GlobalNamespace::ResultsViewController*>* value);
    // public System.Void Init(LevelCompletionResults levelCompletionResults, IReadonlyBeatmapData transformedBeatmapData, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.Boolean newHighScore)
    // Offset: 0x137EA94
    void Init(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore);
    // private System.Collections.IEnumerator StartFireworksAfterDelay(System.Single delay)
    // Offset: 0x137F4D4
    ::System::Collections::IEnumerator* StartFireworksAfterDelay(float delay);
    // private System.Void SetDataToUI()
    // Offset: 0x137EC54
    void SetDataToUI();
    // private System.Void EnableResultsEnvironmentController()
    // Offset: 0x137F128
    void EnableResultsEnvironmentController();
    // private System.Void DisableResultEnvironmentController()
    // Offset: 0x137F630
    void DisableResultEnvironmentController();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x137F920
    void ContinueButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0x137F98C
    void RestartButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x137F9F8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x137EAB0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x137F554
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // ResultsViewController
  #pragma pack(pop)
  static check_size<sizeof(ResultsViewController), 281 + sizeof(bool)> __GlobalNamespace_ResultsViewControllerSizeCheck;
  static_assert(sizeof(ResultsViewController) == 0x11A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::get_practice
// Il2CppName: get_practice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ResultsViewController::*)()>(&GlobalNamespace::ResultsViewController::get_practice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "get_practice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::add_continueButtonPressedEvent
// Il2CppName: add_continueButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(::System::Action_1<::GlobalNamespace::ResultsViewController*>*)>(&GlobalNamespace::ResultsViewController::add_continueButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "add_continueButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::remove_continueButtonPressedEvent
// Il2CppName: remove_continueButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(::System::Action_1<::GlobalNamespace::ResultsViewController*>*)>(&GlobalNamespace::ResultsViewController::remove_continueButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "remove_continueButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::add_restartButtonPressedEvent
// Il2CppName: add_restartButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(::System::Action_1<::GlobalNamespace::ResultsViewController*>*)>(&GlobalNamespace::ResultsViewController::add_restartButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "add_restartButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::remove_restartButtonPressedEvent
// Il2CppName: remove_restartButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(::System::Action_1<::GlobalNamespace::ResultsViewController*>*)>(&GlobalNamespace::ResultsViewController::remove_restartButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "remove_restartButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::IDifficultyBeatmap*, bool, bool)>(&GlobalNamespace::ResultsViewController::Init)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* transformedBeatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* newHighScore = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, transformedBeatmapData, difficultyBeatmap, practice, newHighScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::StartFireworksAfterDelay
// Il2CppName: StartFireworksAfterDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::ResultsViewController::*)(float)>(&GlobalNamespace::ResultsViewController::StartFireworksAfterDelay)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "StartFireworksAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::SetDataToUI
// Il2CppName: SetDataToUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)()>(&GlobalNamespace::ResultsViewController::SetDataToUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "SetDataToUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::EnableResultsEnvironmentController
// Il2CppName: EnableResultsEnvironmentController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)()>(&GlobalNamespace::ResultsViewController::EnableResultsEnvironmentController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "EnableResultsEnvironmentController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::DisableResultEnvironmentController
// Il2CppName: DisableResultEnvironmentController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)()>(&GlobalNamespace::ResultsViewController::DisableResultEnvironmentController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "DisableResultEnvironmentController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::ContinueButtonPressed
// Il2CppName: ContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)()>(&GlobalNamespace::ResultsViewController::ContinueButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "ContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::RestartButtonPressed
// Il2CppName: RestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)()>(&GlobalNamespace::ResultsViewController::RestartButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "RestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(bool, bool, bool)>(&GlobalNamespace::ResultsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsViewController::*)(bool, bool)>(&GlobalNamespace::ResultsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
