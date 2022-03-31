// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerStatusData
  class MultiplayerStatusData;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
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
  // Forward declaring type: MultiplayerModeSelectionViewController
  class MultiplayerModeSelectionViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController*, "", "MultiplayerModeSelectionViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerModeSelectionViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerModeSelectionViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton
    struct MenuButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerModeSelectionViewController/MenuButton
    // [TokenAttribute] Offset: FFFFFFFF
    struct MenuButton/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static constexpr const int QuickPlay = 0;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_QuickPlay();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static void _set_QuickPlay(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static constexpr const int CreateServer = 1;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_CreateServer();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static void _set_CreateServer(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static constexpr const int JoinWithCode = 2;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_JoinWithCode();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static void _set_JoinWithCode(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static constexpr const int GameBrowser = 3;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_GameBrowser();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static void _set_GameBrowser(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MultiplayerModeSelectionViewController/MenuButton
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerModeSelectionViewController::MenuButton), 0 + sizeof(int)> __GlobalNamespace_MultiplayerModeSelectionViewController_MenuButtonSizeCheck;
    static_assert(sizeof(MultiplayerModeSelectionViewController::MenuButton) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _quickPlayButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* quickPlayButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _gameBrowserButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* gameBrowserButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _joinWithCodeButton
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Button* joinWithCodeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _createServerButton
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::UI::Button* createServerButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0x125C9CC
    // private TMPro.TextMeshProUGUI _maintenanceMessageText
    // Size: 0x8
    // Offset: 0x90
    ::TMPro::TextMeshProUGUI* maintenanceMessageText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _customServerEndPointText
    // Size: 0x8
    // Offset: 0x98
    ::TMPro::TextMeshProUGUI* customServerEndPointText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0x125CA14
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkConfig*) == 0x8);
    // private System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> didFinishEvent
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _quickPlayButton
    ::UnityEngine::UI::Button*& dyn__quickPlayButton();
    // Get instance field reference: private UnityEngine.UI.Button _gameBrowserButton
    ::UnityEngine::UI::Button*& dyn__gameBrowserButton();
    // Get instance field reference: private UnityEngine.UI.Button _joinWithCodeButton
    ::UnityEngine::UI::Button*& dyn__joinWithCodeButton();
    // Get instance field reference: private UnityEngine.UI.Button _createServerButton
    ::UnityEngine::UI::Button*& dyn__createServerButton();
    // Get instance field reference: private TMPro.TextMeshProUGUI _maintenanceMessageText
    ::TMPro::TextMeshProUGUI*& dyn__maintenanceMessageText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _customServerEndPointText
    ::TMPro::TextMeshProUGUI*& dyn__customServerEndPointText();
    // Get instance field reference: private readonly INetworkConfig _networkConfig
    ::GlobalNamespace::INetworkConfig*& dyn__networkConfig();
    // Get instance field reference: private System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> didFinishEvent
    ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> value)
    // Offset: 0x139AB70
    void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> value)
    // Offset: 0x139B028
    void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* value);
    // public System.Void SetData(MultiplayerStatusData multiplayerStatusData)
    // Offset: 0x139E5F4
    void SetData(::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData);
    // private System.Void HandleMenuButton(MultiplayerModeSelectionViewController/MenuButton menuButton)
    // Offset: 0x139EADC
    void HandleMenuButton(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x139EB5C
    void $DidActivate$b__11_0();
    // private System.Void <DidActivate>b__11_1()
    // Offset: 0x139EB64
    void $DidActivate$b__11_1();
    // private System.Void <DidActivate>b__11_2()
    // Offset: 0x139EB6C
    void $DidActivate$b__11_2();
    // private System.Void <DidActivate>b__11_3()
    // Offset: 0x139EB74
    void $DidActivate$b__11_3();
    // public System.Void .ctor()
    // Offset: 0x139EB54
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerModeSelectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerModeSelectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerModeSelectionViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x139E844
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MultiplayerModeSelectionViewController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerModeSelectionViewController), 168 + sizeof(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*)> __GlobalNamespace_MultiplayerModeSelectionViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerModeSelectionViewController) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*)>(&GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerModeSelectionViewController"), ::il2cpp_utils::GetClassFromName("", "MultiplayerModeSelectionViewController/MenuButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*)>(&GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerModeSelectionViewController"), ::il2cpp_utils::GetClassFromName("", "MultiplayerModeSelectionViewController/MenuButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(::GlobalNamespace::MultiplayerStatusData*)>(&GlobalNamespace::MultiplayerModeSelectionViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* multiplayerStatusData = &::il2cpp_utils::GetClassFromName("", "MultiplayerStatusData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerStatusData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton
// Il2CppName: HandleMenuButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(::GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton)>(&GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton)> {
  static const MethodInfo* get() {
    static auto* menuButton = &::il2cpp_utils::GetClassFromName("", "MultiplayerModeSelectionViewController/MenuButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "HandleMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{menuButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_0
// Il2CppName: <DidActivate>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "<DidActivate>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_1
// Il2CppName: <DidActivate>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "<DidActivate>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_2
// Il2CppName: <DidActivate>b__11_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "<DidActivate>b__11_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_3
// Il2CppName: <DidActivate>b__11_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&GlobalNamespace::MultiplayerModeSelectionViewController::$DidActivate$b__11_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "<DidActivate>b__11_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionViewController::*)(bool, bool, bool)>(&GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
