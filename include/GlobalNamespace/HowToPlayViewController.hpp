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
  // Forward declaring type: HowToPlayViewController
  class HowToPlayViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HowToPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HowToPlayViewController*, "", "HowToPlayViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: HowToPlayViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class HowToPlayViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::HowToPlayViewController::HowToPlayOptions
    struct HowToPlayOptions;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HowToPlayViewController/HowToPlayOptions
    // [TokenAttribute] Offset: FFFFFFFF
    struct HowToPlayOptions/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: HowToPlayOptions
      constexpr HowToPlayOptions(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HowToPlayViewController/HowToPlayOptions HowToPlay
      static constexpr const int HowToPlay = 0;
      // Get static field: static public HowToPlayViewController/HowToPlayOptions HowToPlay
      static ::GlobalNamespace::HowToPlayViewController::HowToPlayOptions _get_HowToPlay();
      // Set static field: static public HowToPlayViewController/HowToPlayOptions HowToPlay
      static void _set_HowToPlay(::GlobalNamespace::HowToPlayViewController::HowToPlayOptions value);
      // static field const value: static public HowToPlayViewController/HowToPlayOptions Credits
      static constexpr const int Credits = 1;
      // Get static field: static public HowToPlayViewController/HowToPlayOptions Credits
      static ::GlobalNamespace::HowToPlayViewController::HowToPlayOptions _get_Credits();
      // Set static field: static public HowToPlayViewController/HowToPlayOptions Credits
      static void _set_Credits(::GlobalNamespace::HowToPlayViewController::HowToPlayOptions value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HowToPlayViewController/HowToPlayOptions
    #pragma pack(pop)
    static check_size<sizeof(HowToPlayViewController::HowToPlayOptions), 0 + sizeof(int)> __GlobalNamespace_HowToPlayViewController_HowToPlayOptionsSizeCheck;
    static_assert(sizeof(HowToPlayViewController::HowToPlayOptions) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _tutorialButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* tutorialButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _creditsButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* creditsButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<HowToPlayViewController/HowToPlayOptions> didFinishEvent
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _tutorialButton
    ::UnityEngine::UI::Button*& dyn__tutorialButton();
    // Get instance field reference: private UnityEngine.UI.Button _creditsButton
    ::UnityEngine::UI::Button*& dyn__creditsButton();
    // Get instance field reference: private System.Action`1<HowToPlayViewController/HowToPlayOptions> didFinishEvent
    ::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<HowToPlayViewController/HowToPlayOptions> value)
    // Offset: 0x13B1FA8
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<HowToPlayViewController/HowToPlayOptions> value)
    // Offset: 0x13B21E0
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>* value);
    // public System.Void Setup(System.Boolean showTutorialButton)
    // Offset: 0x13B3348
    void Setup(bool showTutorialButton);
    // private System.Void <DidActivate>b__7_0()
    // Offset: 0x13B3488
    void $DidActivate$b__7_0();
    // private System.Void <DidActivate>b__7_1()
    // Offset: 0x13B34EC
    void $DidActivate$b__7_1();
    // public System.Void .ctor()
    // Offset: 0x13B3480
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HowToPlayViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HowToPlayViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HowToPlayViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13B3384
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // HowToPlayViewController
  #pragma pack(pop)
  static check_size<sizeof(HowToPlayViewController), 128 + sizeof(::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>*)> __GlobalNamespace_HowToPlayViewControllerSizeCheck;
  static_assert(sizeof(HowToPlayViewController) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HowToPlayViewController::HowToPlayOptions, "", "HowToPlayViewController/HowToPlayOptions");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>*)>(&GlobalNamespace::HowToPlayViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "HowToPlayViewController/HowToPlayOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HowToPlayViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(::System::Action_1<::GlobalNamespace::HowToPlayViewController::HowToPlayOptions>*)>(&GlobalNamespace::HowToPlayViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "HowToPlayViewController/HowToPlayOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HowToPlayViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(bool)>(&GlobalNamespace::HowToPlayViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* showTutorialButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HowToPlayViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showTutorialButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::$DidActivate$b__7_0
// Il2CppName: <DidActivate>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)()>(&GlobalNamespace::HowToPlayViewController::$DidActivate$b__7_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HowToPlayViewController*), "<DidActivate>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::$DidActivate$b__7_1
// Il2CppName: <DidActivate>b__7_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)()>(&GlobalNamespace::HowToPlayViewController::$DidActivate$b__7_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HowToPlayViewController*), "<DidActivate>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HowToPlayViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HowToPlayViewController::*)(bool, bool, bool)>(&GlobalNamespace::HowToPlayViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HowToPlayViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
