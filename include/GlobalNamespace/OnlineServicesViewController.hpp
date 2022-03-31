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
  // Forward declaring type: OnlineServicesViewController
  class OnlineServicesViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OnlineServicesViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnlineServicesViewController*, "", "OnlineServicesViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServicesViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class OnlineServicesViewController : public ::HMUI::ViewController {
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
    // private UnityEngine.UI.Button _enableButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* enableButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _dontEnableButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* dontEnableButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _enableButton
    ::UnityEngine::UI::Button*& dyn__enableButton();
    // Get instance field reference: private UnityEngine.UI.Button _dontEnableButton
    ::UnityEngine::UI::Button*& dyn__dontEnableButton();
    // Get instance field reference: private System.Action`1<System.Boolean> didFinishEvent
    ::System::Action_1<bool>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x12E8BDC
    void add_didFinishEvent(::System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x12E8C80
    void remove_didFinishEvent(::System::Action_1<bool>* value);
    // private System.Void <DidActivate>b__5_0()
    // Offset: 0x12E8E28
    void $DidActivate$b__5_0();
    // private System.Void <DidActivate>b__5_1()
    // Offset: 0x12E8E8C
    void $DidActivate$b__5_1();
    // public System.Void .ctor()
    // Offset: 0x12E8E20
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnlineServicesViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OnlineServicesViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnlineServicesViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x12E8D24
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // OnlineServicesViewController
  #pragma pack(pop)
  static check_size<sizeof(OnlineServicesViewController), 128 + sizeof(::System::Action_1<bool>*)> __GlobalNamespace_OnlineServicesViewControllerSizeCheck;
  static_assert(sizeof(OnlineServicesViewController) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesViewController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::OnlineServicesViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesViewController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::OnlineServicesViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesViewController::$DidActivate$b__5_0
// Il2CppName: <DidActivate>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesViewController::*)()>(&GlobalNamespace::OnlineServicesViewController::$DidActivate$b__5_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesViewController*), "<DidActivate>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesViewController::$DidActivate$b__5_1
// Il2CppName: <DidActivate>b__5_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesViewController::*)()>(&GlobalNamespace::OnlineServicesViewController::$DidActivate$b__5_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesViewController*), "<DidActivate>b__5_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OnlineServicesViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnlineServicesViewController::*)(bool, bool, bool)>(&GlobalNamespace::OnlineServicesViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnlineServicesViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
