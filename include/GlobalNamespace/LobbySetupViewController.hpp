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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextMeshProUGUI
  class LocalizedTextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameServersFilterText
  class GameServersFilterText;
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
  // Forward declaring type: EditableModifiersSelectionView
  class EditableModifiersSelectionView;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
  // Forward declaring type: CannotStartGameReason
  struct CannotStartGameReason;
  // Forward declaring type: MultiplayerLobbyState
  struct MultiplayerLobbyState;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LobbySetupViewController
  class LobbySetupViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LobbySetupViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbySetupViewController*, "", "LobbySetupViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10A
  #pragma pack(push, 1)
  // Autogenerated type: LobbySetupViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbySetupViewController : public ::HMUI::ViewController {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _startGameReadyButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* startGameReadyButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelGameUnreadyButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* cancelGameUnreadyButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private Polyglot.LocalizedTextMeshProUGUI _startReadyText
    // Size: 0x8
    // Offset: 0x80
    ::Polyglot::LocalizedTextMeshProUGUI* startReadyText;
    // Field size check
    static_assert(sizeof(::Polyglot::LocalizedTextMeshProUGUI*) == 0x8);
    // private Polyglot.LocalizedTextMeshProUGUI _cancelUnreadyText
    // Size: 0x8
    // Offset: 0x88
    ::Polyglot::LocalizedTextMeshProUGUI* cancelUnreadyText;
    // Field size check
    static_assert(sizeof(::Polyglot::LocalizedTextMeshProUGUI*) == 0x8);
    // private GameServersFilterText _serverSettings
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::GameServersFilterText* serverSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameServersFilterText*) == 0x8);
    // [SpaceAttribute] Offset: 0x124D380
    // private UnityEngine.GameObject _suggestionHeader
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::GameObject* suggestionHeader;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private EditableBeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditableBeatmapSelectionView*) == 0x8);
    // private EditableModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::EditableModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditableModifiersSelectionView*) == 0x8);
    // private HMUI.HoverHint _cantStartGameHoverHint
    // Size: 0x8
    // Offset: 0xB0
    ::HMUI::HoverHint* cantStartGameHoverHint;
    // Field size check
    static_assert(sizeof(::HMUI::HoverHint*) == 0x8);
    // private UnityEngine.GameObject _playerMissingLevelHoverHintWrapper
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::GameObject* playerMissingLevelHoverHintWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private HMUI.HoverHint _playersMissingLevelHoverHint
    // Size: 0x8
    // Offset: 0xC0
    ::HMUI::HoverHint* playersMissingLevelHoverHint;
    // Field size check
    static_assert(sizeof(::HMUI::HoverHint*) == 0x8);
    // private UnityEngine.GameObject _spectatorWarningTextWrapper
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::GameObject* spectatorWarningTextWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xD0
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    // private System.Action selectBeatmapEvent
    // Size: 0x8
    // Offset: 0xD8
    ::System::Action* selectBeatmapEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action selectModifiersEvent
    // Size: 0x8
    // Offset: 0xE0
    ::System::Action* selectModifiersEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action startGameOrReadyEvent
    // Size: 0x8
    // Offset: 0xE8
    ::System::Action* startGameOrReadyEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action cancelGameOrUnreadyEvent
    // Size: 0x8
    // Offset: 0xF0
    ::System::Action* cancelGameOrUnreadyEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action clearSuggestedBeatmapEvent
    // Size: 0x8
    // Offset: 0xF8
    ::System::Action* clearSuggestedBeatmapEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action clearSuggestedModifiersEvent
    // Size: 0x8
    // Offset: 0x100
    ::System::Action* clearSuggestedModifiersEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _isPartyOwner
    // Size: 0x1
    // Offset: 0x108
    bool isPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isQuickStart
    // Size: 0x1
    // Offset: 0x109
    bool isQuickStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // [LocalizationKeyAttribute] Offset: 0x124D2E0
    // static field const value: static private System.String kStartTextKey
    static constexpr const char* kStartTextKey = "LOBBY_START_GAME";
    // Get static field: static private System.String kStartTextKey
    static ::StringW _get_kStartTextKey();
    // Set static field: static private System.String kStartTextKey
    static void _set_kStartTextKey(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x124D2F0
    // static field const value: static private System.String kCancelTextKey
    static constexpr const char* kCancelTextKey = "BUTTON_CANCEL";
    // Get static field: static private System.String kCancelTextKey
    static ::StringW _get_kCancelTextKey();
    // Set static field: static private System.String kCancelTextKey
    static void _set_kCancelTextKey(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x124D300
    // static field const value: static private System.String kReadyTextKey
    static constexpr const char* kReadyTextKey = "LOBBY_READY";
    // Get static field: static private System.String kReadyTextKey
    static ::StringW _get_kReadyTextKey();
    // Set static field: static private System.String kReadyTextKey
    static void _set_kReadyTextKey(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x124D310
    // static field const value: static private System.String kUnreadyTextKey
    static constexpr const char* kUnreadyTextKey = "BUTTON_UNREADY";
    // Get static field: static private System.String kUnreadyTextKey
    static ::StringW _get_kUnreadyTextKey();
    // Set static field: static private System.String kUnreadyTextKey
    static void _set_kUnreadyTextKey(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x124D320
    // static field const value: static private System.String kRetryTextKey
    static constexpr const char* kRetryTextKey = "BUTTON_RETRY";
    // Get static field: static private System.String kRetryTextKey
    static ::StringW _get_kRetryTextKey();
    // Set static field: static private System.String kRetryTextKey
    static void _set_kRetryTextKey(::StringW value);
    // Get instance field reference: private UnityEngine.UI.Button _startGameReadyButton
    ::UnityEngine::UI::Button*& dyn__startGameReadyButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelGameUnreadyButton
    ::UnityEngine::UI::Button*& dyn__cancelGameUnreadyButton();
    // Get instance field reference: private Polyglot.LocalizedTextMeshProUGUI _startReadyText
    ::Polyglot::LocalizedTextMeshProUGUI*& dyn__startReadyText();
    // Get instance field reference: private Polyglot.LocalizedTextMeshProUGUI _cancelUnreadyText
    ::Polyglot::LocalizedTextMeshProUGUI*& dyn__cancelUnreadyText();
    // Get instance field reference: private GameServersFilterText _serverSettings
    ::GlobalNamespace::GameServersFilterText*& dyn__serverSettings();
    // Get instance field reference: private UnityEngine.GameObject _suggestionHeader
    ::UnityEngine::GameObject*& dyn__suggestionHeader();
    // Get instance field reference: private EditableBeatmapSelectionView _beatmapSelectionView
    ::GlobalNamespace::EditableBeatmapSelectionView*& dyn__beatmapSelectionView();
    // Get instance field reference: private EditableModifiersSelectionView _modifiersSelectionView
    ::GlobalNamespace::EditableModifiersSelectionView*& dyn__modifiersSelectionView();
    // Get instance field reference: private HMUI.HoverHint _cantStartGameHoverHint
    ::HMUI::HoverHint*& dyn__cantStartGameHoverHint();
    // Get instance field reference: private UnityEngine.GameObject _playerMissingLevelHoverHintWrapper
    ::UnityEngine::GameObject*& dyn__playerMissingLevelHoverHintWrapper();
    // Get instance field reference: private HMUI.HoverHint _playersMissingLevelHoverHint
    ::HMUI::HoverHint*& dyn__playersMissingLevelHoverHint();
    // Get instance field reference: private UnityEngine.GameObject _spectatorWarningTextWrapper
    ::UnityEngine::GameObject*& dyn__spectatorWarningTextWrapper();
    // Get instance field reference: private readonly HMUI.ToggleBinder _toggleBinder
    ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private System.Action selectBeatmapEvent
    ::System::Action*& dyn_selectBeatmapEvent();
    // Get instance field reference: private System.Action selectModifiersEvent
    ::System::Action*& dyn_selectModifiersEvent();
    // Get instance field reference: private System.Action startGameOrReadyEvent
    ::System::Action*& dyn_startGameOrReadyEvent();
    // Get instance field reference: private System.Action cancelGameOrUnreadyEvent
    ::System::Action*& dyn_cancelGameOrUnreadyEvent();
    // Get instance field reference: private System.Action clearSuggestedBeatmapEvent
    ::System::Action*& dyn_clearSuggestedBeatmapEvent();
    // Get instance field reference: private System.Action clearSuggestedModifiersEvent
    ::System::Action*& dyn_clearSuggestedModifiersEvent();
    // Get instance field reference: private System.Boolean _isPartyOwner
    bool& dyn__isPartyOwner();
    // Get instance field reference: private System.Boolean _isQuickStart
    bool& dyn__isQuickStart();
    // public System.Void add_selectBeatmapEvent(System.Action value)
    // Offset: 0x2B99F58
    void add_selectBeatmapEvent(::System::Action* value);
    // public System.Void remove_selectBeatmapEvent(System.Action value)
    // Offset: 0x2B99FFC
    void remove_selectBeatmapEvent(::System::Action* value);
    // public System.Void add_selectModifiersEvent(System.Action value)
    // Offset: 0x2B9A0A0
    void add_selectModifiersEvent(::System::Action* value);
    // public System.Void remove_selectModifiersEvent(System.Action value)
    // Offset: 0x2B9A144
    void remove_selectModifiersEvent(::System::Action* value);
    // public System.Void add_startGameOrReadyEvent(System.Action value)
    // Offset: 0x2B9A1E8
    void add_startGameOrReadyEvent(::System::Action* value);
    // public System.Void remove_startGameOrReadyEvent(System.Action value)
    // Offset: 0x2B9A28C
    void remove_startGameOrReadyEvent(::System::Action* value);
    // public System.Void add_cancelGameOrUnreadyEvent(System.Action value)
    // Offset: 0x2B9A330
    void add_cancelGameOrUnreadyEvent(::System::Action* value);
    // public System.Void remove_cancelGameOrUnreadyEvent(System.Action value)
    // Offset: 0x2B9A3D4
    void remove_cancelGameOrUnreadyEvent(::System::Action* value);
    // public System.Void add_clearSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x2B9A478
    void add_clearSuggestedBeatmapEvent(::System::Action* value);
    // public System.Void remove_clearSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x2B9A51C
    void remove_clearSuggestedBeatmapEvent(::System::Action* value);
    // public System.Void add_clearSuggestedModifiersEvent(System.Action value)
    // Offset: 0x2B9A5C0
    void add_clearSuggestedModifiersEvent(::System::Action* value);
    // public System.Void remove_clearSuggestedModifiersEvent(System.Action value)
    // Offset: 0x2B9A668
    void remove_clearSuggestedModifiersEvent(::System::Action* value);
    // public System.Void Setup(BeatmapLevelSelectionMask selectionMask, System.Boolean isPartyOwner, System.Boolean allowSongSelection, System.Boolean allowModifierSelection, System.Boolean isManaged, System.Boolean isQuickStart)
    // Offset: 0x2B9A710
    void Setup(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, bool isPartyOwner, bool allowSongSelection, bool allowModifierSelection, bool isManaged, bool isQuickStart);
    // public System.Void SetLobbyPlayerData(ILobbyPlayerData lobbyPlayerData)
    // Offset: 0x2B9A8EC
    void SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);
    // public System.Void SetPlayersMissingLevelText(System.String playersMissingLevelText)
    // Offset: 0x2B9ADE4
    void SetPlayersMissingLevelText(::StringW playersMissingLevelText);
    // public System.Void SetPlayerActiveState(System.Boolean isActive)
    // Offset: 0x2B9ADC0
    void SetPlayerActiveState(bool isActive);
    // public System.Void SetStartGameEnabled(CannotStartGameReason cannotStartGameReason)
    // Offset: 0x2B9AE48
    void SetStartGameEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0x2B9AEB4
    void SetLobbyState(::GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void <DidActivate>b__44_0()
    // Offset: 0x2B9B278
    void $DidActivate$b__44_0();
    // private System.Void <DidActivate>b__44_1()
    // Offset: 0x2B9B28C
    void $DidActivate$b__44_1();
    // private System.Void <DidActivate>b__44_2()
    // Offset: 0x2B9B2A0
    void $DidActivate$b__44_2();
    // private System.Void <DidActivate>b__44_3()
    // Offset: 0x2B9B2B4
    void $DidActivate$b__44_3();
    // private System.Void <DidActivate>b__44_4()
    // Offset: 0x2B9B2C8
    void $DidActivate$b__44_4();
    // private System.Void <DidActivate>b__44_5()
    // Offset: 0x2B9B2DC
    void $DidActivate$b__44_5();
    // public System.Void .ctor()
    // Offset: 0x2B9B210
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LobbySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbySetupViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x2B9AFA8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x2B9B1F4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // LobbySetupViewController
  #pragma pack(pop)
  static check_size<sizeof(LobbySetupViewController), 265 + sizeof(bool)> __GlobalNamespace_LobbySetupViewControllerSizeCheck;
  static_assert(sizeof(LobbySetupViewController) == 0x10A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::add_selectBeatmapEvent
// Il2CppName: add_selectBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::add_selectBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "add_selectBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::remove_selectBeatmapEvent
// Il2CppName: remove_selectBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::remove_selectBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "remove_selectBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::add_selectModifiersEvent
// Il2CppName: add_selectModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::add_selectModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "add_selectModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::remove_selectModifiersEvent
// Il2CppName: remove_selectModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::remove_selectModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "remove_selectModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::add_startGameOrReadyEvent
// Il2CppName: add_startGameOrReadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::add_startGameOrReadyEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "add_startGameOrReadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::remove_startGameOrReadyEvent
// Il2CppName: remove_startGameOrReadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::remove_startGameOrReadyEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "remove_startGameOrReadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::add_cancelGameOrUnreadyEvent
// Il2CppName: add_cancelGameOrUnreadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::add_cancelGameOrUnreadyEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "add_cancelGameOrUnreadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::remove_cancelGameOrUnreadyEvent
// Il2CppName: remove_cancelGameOrUnreadyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::remove_cancelGameOrUnreadyEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "remove_cancelGameOrUnreadyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::add_clearSuggestedBeatmapEvent
// Il2CppName: add_clearSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::add_clearSuggestedBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "add_clearSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::remove_clearSuggestedBeatmapEvent
// Il2CppName: remove_clearSuggestedBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::remove_clearSuggestedBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "remove_clearSuggestedBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::add_clearSuggestedModifiersEvent
// Il2CppName: add_clearSuggestedModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::add_clearSuggestedModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "add_clearSuggestedModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::remove_clearSuggestedModifiersEvent
// Il2CppName: remove_clearSuggestedModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::System::Action*)>(&GlobalNamespace::LobbySetupViewController::remove_clearSuggestedModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "remove_clearSuggestedModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::BeatmapLevelSelectionMask, bool, bool, bool, bool, bool)>(&GlobalNamespace::LobbySetupViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* isPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowSongSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowModifierSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isManaged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isQuickStart = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionMask, isPartyOwner, allowSongSelection, allowModifierSelection, isManaged, isQuickStart});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::SetLobbyPlayerData
// Il2CppName: SetLobbyPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::ILobbyPlayerData*)>(&GlobalNamespace::LobbySetupViewController::SetLobbyPlayerData)> {
  static const MethodInfo* get() {
    static auto* lobbyPlayerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "SetLobbyPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyPlayerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::SetPlayersMissingLevelText
// Il2CppName: SetPlayersMissingLevelText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::StringW)>(&GlobalNamespace::LobbySetupViewController::SetPlayersMissingLevelText)> {
  static const MethodInfo* get() {
    static auto* playersMissingLevelText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "SetPlayersMissingLevelText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playersMissingLevelText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::SetPlayerActiveState
// Il2CppName: SetPlayerActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(bool)>(&GlobalNamespace::LobbySetupViewController::SetPlayerActiveState)> {
  static const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "SetPlayerActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::SetStartGameEnabled
// Il2CppName: SetStartGameEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::CannotStartGameReason)>(&GlobalNamespace::LobbySetupViewController::SetStartGameEnabled)> {
  static const MethodInfo* get() {
    static auto* cannotStartGameReason = &::il2cpp_utils::GetClassFromName("", "CannotStartGameReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "SetStartGameEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cannotStartGameReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::SetLobbyState
// Il2CppName: SetLobbyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(::GlobalNamespace::MultiplayerLobbyState)>(&GlobalNamespace::LobbySetupViewController::SetLobbyState)> {
  static const MethodInfo* get() {
    static auto* lobbyState = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "SetLobbyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_0
// Il2CppName: <DidActivate>b__44_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "<DidActivate>b__44_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_1
// Il2CppName: <DidActivate>b__44_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "<DidActivate>b__44_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_2
// Il2CppName: <DidActivate>b__44_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "<DidActivate>b__44_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_3
// Il2CppName: <DidActivate>b__44_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "<DidActivate>b__44_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_4
// Il2CppName: <DidActivate>b__44_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "<DidActivate>b__44_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_5
// Il2CppName: <DidActivate>b__44_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::$DidActivate$b__44_5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "<DidActivate>b__44_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)(bool, bool, bool)>(&GlobalNamespace::LobbySetupViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbySetupViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbySetupViewController::*)()>(&GlobalNamespace::LobbySetupViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbySetupViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
