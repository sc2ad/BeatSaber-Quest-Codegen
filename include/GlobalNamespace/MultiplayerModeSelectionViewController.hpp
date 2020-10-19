// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
  // Skipping declaration: MenuButton because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerModeSelectionViewController
  class MultiplayerModeSelectionViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton
    struct MenuButton;
    // Autogenerated type: MultiplayerModeSelectionViewController/MenuButton
    struct MenuButton : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static constexpr const int QuickPlay = 0;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_QuickPlay();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static void _set_QuickPlay(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static constexpr const int CreateServer = 1;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_CreateServer();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static void _set_CreateServer(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static constexpr const int JoinWithCode = 2;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_JoinWithCode();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static void _set_JoinWithCode(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static constexpr const int GameBrowser = 3;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_GameBrowser();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static void _set_GameBrowser(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
    }; // MultiplayerModeSelectionViewController/MenuButton
    // private UnityEngine.UI.Button _quickPlayButton
    // Offset: 0x70
    UnityEngine::UI::Button* quickPlayButton;
    // private UnityEngine.UI.Button _gameBrowserButton
    // Offset: 0x78
    UnityEngine::UI::Button* gameBrowserButton;
    // private UnityEngine.UI.Button _joinWithCodeButton
    // Offset: 0x80
    UnityEngine::UI::Button* joinWithCodeButton;
    // private UnityEngine.UI.Button _createServerButton
    // Offset: 0x88
    UnityEngine::UI::Button* createServerButton;
    // private TMPro.TextMeshProUGUI _maintenanceMessageText
    // Offset: 0x90
    TMPro::TextMeshProUGUI* maintenanceMessageText;
    // private System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> didFinishEvent
    // Offset: 0x98
    System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> value)
    // Offset: 0x1FD06EC
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> value)
    // Offset: 0x1FD0790
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* value);
    // public System.Void SetData(MasterServerAvailabilityData masterServerAvailabilityData)
    // Offset: 0x1FD09B8
    void SetData(GlobalNamespace::MasterServerAvailabilityData* masterServerAvailabilityData);
    // private System.Void HandleMenuButton(MultiplayerModeSelectionViewController/MenuButton menuButton)
    // Offset: 0x1FD0C14
    void HandleMenuButton(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__9_0()
    // Offset: 0x1FD0C94
    void $DidActivate$b__9_0();
    // private System.Void <DidActivate>b__9_1()
    // Offset: 0x1FD0C9C
    void $DidActivate$b__9_1();
    // private System.Void <DidActivate>b__9_2()
    // Offset: 0x1FD0CA4
    void $DidActivate$b__9_2();
    // private System.Void <DidActivate>b__9_3()
    // Offset: 0x1FD0CAC
    void $DidActivate$b__9_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1FD0834
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1FD0C8C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerModeSelectionViewController* New_ctor();
  }; // MultiplayerModeSelectionViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionViewController*, "", "MultiplayerModeSelectionViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
#pragma pack(pop)