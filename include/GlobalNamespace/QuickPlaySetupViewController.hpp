// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: MultiplayerLobbyState
#include "GlobalNamespace/MultiplayerLobbyState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
  // Forward declaring type: GameServersFilterText
  class GameServersFilterText;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: QuickPlaySetupViewController
  class QuickPlaySetupViewController : public HMUI::ViewController {
    public:
    // private EditableBeatmapSelectionView _beatmapSelectionView
    // Offset: 0x70
    GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView;
    // private GameServersFilterText _gameServersFilterText
    // Offset: 0x78
    GlobalNamespace::GameServersFilterText* gameServersFilterText;
    // private UnityEngine.UI.Button _readyButton
    // Offset: 0x80
    UnityEngine::UI::Button* readyButton;
    // private UnityEngine.UI.Button _unreadyButton
    // Offset: 0x88
    UnityEngine::UI::Button* unreadyButton;
    // private System.Action suggestBeatmapEvent
    // Offset: 0x90
    System::Action* suggestBeatmapEvent;
    // private System.Action deleteSuggestedBeatmapEvent
    // Offset: 0x98
    System::Action* deleteSuggestedBeatmapEvent;
    // private System.Action`1<System.Boolean> setPlayerReadyEvent
    // Offset: 0xA0
    System::Action_1<bool>* setPlayerReadyEvent;
    // private MultiplayerLobbyState _multiplayerLobbyState
    // Offset: 0xA8
    GlobalNamespace::MultiplayerLobbyState multiplayerLobbyState;
    // private System.Boolean _isReady
    // Offset: 0xAC
    bool isReady;
    // public System.Void add_suggestBeatmapEvent(System.Action value)
    // Offset: 0x206A6C4
    void add_suggestBeatmapEvent(System::Action* value);
    // public System.Void remove_suggestBeatmapEvent(System.Action value)
    // Offset: 0x206B3D0
    void remove_suggestBeatmapEvent(System::Action* value);
    // public System.Void add_deleteSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x206A768
    void add_deleteSuggestedBeatmapEvent(System::Action* value);
    // public System.Void remove_deleteSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x206B474
    void remove_deleteSuggestedBeatmapEvent(System::Action* value);
    // public System.Void add_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x206A620
    void add_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void remove_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x206B32C
    void remove_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void SetLocalPlayerData(ILobbyPlayerDataModel lobbyPlayerData)
    // Offset: 0x206D888
    void SetLocalPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerData);
    // public System.Void SetGameServerSettings(BeatmapDifficultyMask beatmapDifficultyMask, SongPackMask songPackMask)
    // Offset: 0x206DAB8
    void SetGameServerSettings(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0x206AA7C
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void SetReadyButtonsState()
    // Offset: 0x206DDA0
    void SetReadyButtonsState();
    // private System.Void <DidActivate>b__18_0()
    // Offset: 0x206DFEC
    void $DidActivate$b__18_0();
    // private System.Void <DidActivate>b__18_1()
    // Offset: 0x206E000
    void $DidActivate$b__18_1();
    // private System.Void <DidActivate>b__18_2()
    // Offset: 0x206E014
    void $DidActivate$b__18_2();
    // private System.Void <DidActivate>b__18_3()
    // Offset: 0x206E078
    void $DidActivate$b__18_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x206DE30
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x206DFE4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static QuickPlaySetupViewController* New_ctor();
  }; // QuickPlaySetupViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySetupViewController*, "", "QuickPlaySetupViewController");
#pragma pack(pop)