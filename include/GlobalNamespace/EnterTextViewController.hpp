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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRTextEntryController
  class VRTextEntryController;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
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
  // Forward declaring type: EnterTextViewController
  class EnterTextViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnterTextViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterTextViewController*, "", "EnterTextViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: EnterTextViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class EnterTextViewController : public ::HMUI::ViewController {
    public:
    public:
    // private VRTextEntryController _textEntryController
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::VRTextEntryController* textEntryController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRTextEntryController*) == 0x8);
    // private TMPro.TextMeshProUGUI _titleText
    // Size: 0x8
    // Offset: 0x78
    ::TMPro::TextMeshProUGUI* titleText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`2<EnterTextViewController,System.String> didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    ::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>*) == 0x8);
    public:
    // Get instance field reference: private VRTextEntryController _textEntryController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRTextEntryController*& dyn__textEntryController();
    // Get instance field reference: private TMPro.TextMeshProUGUI _titleText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__titleText();
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private System.Action`2<EnterTextViewController,System.String> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<EnterTextViewController,System.String> value)
    // Offset: 0x13870B4
    void add_didFinishEvent(::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<EnterTextViewController,System.String> value)
    // Offset: 0x1387158
    void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>* value);
    // public System.Void .ctor()
    // Offset: 0x1387394
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterTextViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnterTextViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterTextViewController*, creationType>()));
    }
    // public System.Void Init(System.String titleText)
    // Offset: 0x13871FC
    void Init(::StringW titleText);
    // public System.Void OkButtonPressed()
    // Offset: 0x13872F4
    void OkButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1387218
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // EnterTextViewController
  #pragma pack(pop)
  static check_size<sizeof(EnterTextViewController), 136 + sizeof(::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>*)> __GlobalNamespace_EnterTextViewControllerSizeCheck;
  static_assert(sizeof(EnterTextViewController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>*)>(&GlobalNamespace::EnterTextViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EnterTextViewController"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterTextViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(::System::Action_2<::GlobalNamespace::EnterTextViewController*, ::StringW>*)>(&GlobalNamespace::EnterTextViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EnterTextViewController"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterTextViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(::StringW)>(&GlobalNamespace::EnterTextViewController::Init)> {
  static const MethodInfo* get() {
    static auto* titleText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterTextViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{titleText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::OkButtonPressed
// Il2CppName: OkButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)()>(&GlobalNamespace::EnterTextViewController::OkButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterTextViewController*), "OkButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterTextViewController::*)(bool, bool, bool)>(&GlobalNamespace::EnterTextViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterTextViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
