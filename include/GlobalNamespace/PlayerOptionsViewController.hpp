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
  // Forward declaring type: PlayerSettingsPanelController
  class PlayerSettingsPanelController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerOptionsViewController
  class PlayerOptionsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerOptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerOptionsViewController*, "", "PlayerOptionsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: PlayerOptionsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerOptionsViewController : public ::HMUI::ViewController {
    public:
    public:
    // private PlayerSettingsPanelController _playerSettingsPanelController
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSettingsPanelController*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0x1109C00
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // private System.Action`1<HMUI.ViewController> didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    ::System::Action_1<::HMUI::ViewController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::HMUI::ViewController*>*) == 0x8);
    public:
    // Get instance field reference: private PlayerSettingsPanelController _playerSettingsPanelController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSettingsPanelController*& dyn__playerSettingsPanelController();
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private System.Action`1<HMUI.ViewController> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::HMUI::ViewController*>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<HMUI.ViewController> value)
    // Offset: 0x14D9538
    void add_didFinishEvent(::System::Action_1<::HMUI::ViewController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<HMUI.ViewController> value)
    // Offset: 0x14D95DC
    void remove_didFinishEvent(::System::Action_1<::HMUI::ViewController*>* value);
    // public System.Void .ctor()
    // Offset: 0x14D9DC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerOptionsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerOptionsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerOptionsViewController*, creationType>()));
    }
    // private System.Void <DidActivate>b__6_0()
    // Offset: 0x14D9DCC
    void $DidActivate$b__6_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x14D9680
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x14D9A18
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // PlayerOptionsViewController
  #pragma pack(pop)
  static check_size<sizeof(PlayerOptionsViewController), 136 + sizeof(::System::Action_1<::HMUI::ViewController*>*)> __GlobalNamespace_PlayerOptionsViewControllerSizeCheck;
  static_assert(sizeof(PlayerOptionsViewController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerOptionsViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerOptionsViewController::*)(::System::Action_1<::HMUI::ViewController*>*)>(&GlobalNamespace::PlayerOptionsViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerOptionsViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerOptionsViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerOptionsViewController::*)(::System::Action_1<::HMUI::ViewController*>*)>(&GlobalNamespace::PlayerOptionsViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerOptionsViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerOptionsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerOptionsViewController::$DidActivate$b__6_0
// Il2CppName: <DidActivate>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerOptionsViewController::*)()>(&GlobalNamespace::PlayerOptionsViewController::$DidActivate$b__6_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerOptionsViewController*), "<DidActivate>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerOptionsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerOptionsViewController::*)(bool, bool, bool)>(&GlobalNamespace::PlayerOptionsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerOptionsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerOptionsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerOptionsViewController::*)(bool, bool)>(&GlobalNamespace::PlayerOptionsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerOptionsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
