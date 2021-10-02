// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningViewController : public HMUI::ViewController {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _privacyPolicyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* privacyPolicyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _openDataPrivacyPageButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* openDataPrivacyPageButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.GameObject _privacyAgreeToPrivacyPolicyLabel
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* privacyAgreeToPrivacyPolicyLabel;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xF100F8
    // private IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xF10108
    // private AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // private System.Action privacyPolicyButtonPressedEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action* privacyPolicyButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action openDataPrivacyPageButtonPressedEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action* openDataPrivacyPageButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private UnityEngine.UI.Button _privacyPolicyButton
    UnityEngine::UI::Button*& dyn__privacyPolicyButton();
    // Get instance field reference: private UnityEngine.UI.Button _openDataPrivacyPageButton
    UnityEngine::UI::Button*& dyn__openDataPrivacyPageButton();
    // Get instance field reference: private UnityEngine.GameObject _privacyAgreeToPrivacyPolicyLabel
    UnityEngine::GameObject*& dyn__privacyAgreeToPrivacyPolicyLabel();
    // Get instance field reference: private IAnalyticsModel _analyticsModel
    GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private AppStaticSettingsSO _appStaticSettings
    GlobalNamespace::AppStaticSettingsSO*& dyn__appStaticSettings();
    // Get instance field reference: private System.Action privacyPolicyButtonPressedEvent
    System::Action*& dyn_privacyPolicyButtonPressedEvent();
    // Get instance field reference: private System.Action openDataPrivacyPageButtonPressedEvent
    System::Action*& dyn_openDataPrivacyPageButtonPressedEvent();
    // Get instance field reference: private System.Action didFinishEvent
    System::Action*& dyn_didFinishEvent();
    // public System.Void add_privacyPolicyButtonPressedEvent(System.Action value)
    // Offset: 0x11447EC
    void add_privacyPolicyButtonPressedEvent(System::Action* value);
    // public System.Void remove_privacyPolicyButtonPressedEvent(System.Action value)
    // Offset: 0x1144B6C
    void remove_privacyPolicyButtonPressedEvent(System::Action* value);
    // public System.Void add_openDataPrivacyPageButtonPressedEvent(System.Action value)
    // Offset: 0x1144890
    void add_openDataPrivacyPageButtonPressedEvent(System::Action* value);
    // public System.Void remove_openDataPrivacyPageButtonPressedEvent(System.Action value)
    // Offset: 0x1144C10
    void remove_openDataPrivacyPageButtonPressedEvent(System::Action* value);
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x1144748
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x1144AC8
    void remove_didFinishEvent(System::Action* value);
    // private System.Void <DidActivate>b__15_0()
    // Offset: 0x11457B8
    void $DidActivate$b__15_0();
    // private System.Void <DidActivate>b__15_1()
    // Offset: 0x11457CC
    void $DidActivate$b__15_1();
    // private System.Void <DidActivate>b__15_2()
    // Offset: 0x11457E0
    void $DidActivate$b__15_2();
    // public System.Void .ctor()
    // Offset: 0x11457B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x114551C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // HealthWarningViewController
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningViewController), 176 + sizeof(System::Action*)> __GlobalNamespace_HealthWarningViewControllerSizeCheck;
  static_assert(sizeof(HealthWarningViewController) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningViewController*, "", "HealthWarningViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::add_privacyPolicyButtonPressedEvent
// Il2CppName: add_privacyPolicyButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::add_privacyPolicyButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "add_privacyPolicyButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::remove_privacyPolicyButtonPressedEvent
// Il2CppName: remove_privacyPolicyButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::remove_privacyPolicyButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "remove_privacyPolicyButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::add_openDataPrivacyPageButtonPressedEvent
// Il2CppName: add_openDataPrivacyPageButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::add_openDataPrivacyPageButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "add_openDataPrivacyPageButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::remove_openDataPrivacyPageButtonPressedEvent
// Il2CppName: remove_openDataPrivacyPageButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::remove_openDataPrivacyPageButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "remove_openDataPrivacyPageButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::$DidActivate$b__15_0
// Il2CppName: <DidActivate>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)()>(&GlobalNamespace::HealthWarningViewController::$DidActivate$b__15_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "<DidActivate>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::$DidActivate$b__15_1
// Il2CppName: <DidActivate>b__15_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)()>(&GlobalNamespace::HealthWarningViewController::$DidActivate$b__15_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "<DidActivate>b__15_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::$DidActivate$b__15_2
// Il2CppName: <DidActivate>b__15_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)()>(&GlobalNamespace::HealthWarningViewController::$DidActivate$b__15_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "<DidActivate>b__15_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(bool, bool, bool)>(&GlobalNamespace::HealthWarningViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
