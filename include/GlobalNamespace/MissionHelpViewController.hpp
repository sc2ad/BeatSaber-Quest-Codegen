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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionHelpSO
  class MissionHelpSO;
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
  // Forward declaring type: MissionHelpViewController
  class MissionHelpViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionHelpViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionHelpViewController*, "", "MissionHelpViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: MissionHelpViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionHelpViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::MissionHelpViewController::MissionHelpGameObjectPair
    class MissionHelpGameObjectPair;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private MissionHelpViewController/MissionHelpGameObjectPair[] _missionHelpGameObjectPairs
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::GlobalNamespace::MissionHelpViewController::MissionHelpGameObjectPair*> missionHelpGameObjectPairs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionHelpViewController::MissionHelpGameObjectPair*>) == 0x8);
    // private System.Action`1<MissionHelpViewController> didFinishEvent
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*) == 0x8);
    // private MissionHelpSO _missionHelp
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::MissionHelpSO* missionHelp;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionHelpSO*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    ::UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private MissionHelpViewController/MissionHelpGameObjectPair[] _missionHelpGameObjectPairs
    ::ArrayW<::GlobalNamespace::MissionHelpViewController::MissionHelpGameObjectPair*>& dyn__missionHelpGameObjectPairs();
    // Get instance field reference: private System.Action`1<MissionHelpViewController> didFinishEvent
    ::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*& dyn_didFinishEvent();
    // Get instance field reference: private MissionHelpSO _missionHelp
    ::GlobalNamespace::MissionHelpSO*& dyn__missionHelp();
    // public System.Void add_didFinishEvent(System.Action`1<MissionHelpViewController> value)
    // Offset: 0x13053D0
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<MissionHelpViewController> value)
    // Offset: 0x1305474
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>* value);
    // public System.Void Setup(MissionHelpSO missionHelp)
    // Offset: 0x1305518
    void Setup(::GlobalNamespace::MissionHelpSO* missionHelp);
    // public System.Void RefreshContent()
    // Offset: 0x1305554
    void RefreshContent();
    // private System.Void OkButtonPressed()
    // Offset: 0x13056E8
    void OkButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x130574C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionHelpViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionHelpViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionHelpViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1305644
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MissionHelpViewController
  #pragma pack(pop)
  static check_size<sizeof(MissionHelpViewController), 136 + sizeof(::GlobalNamespace::MissionHelpSO*)> __GlobalNamespace_MissionHelpViewControllerSizeCheck;
  static_assert(sizeof(MissionHelpViewController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionHelpViewController::*)(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*)>(&GlobalNamespace::MissionHelpViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionHelpViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionHelpViewController::*)(::System::Action_1<::GlobalNamespace::MissionHelpViewController*>*)>(&GlobalNamespace::MissionHelpViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionHelpViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionHelpViewController::*)(::GlobalNamespace::MissionHelpSO*)>(&GlobalNamespace::MissionHelpViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* missionHelp = &::il2cpp_utils::GetClassFromName("", "MissionHelpSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionHelp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::RefreshContent
// Il2CppName: RefreshContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionHelpViewController::*)()>(&GlobalNamespace::MissionHelpViewController::RefreshContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpViewController*), "RefreshContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::OkButtonPressed
// Il2CppName: OkButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionHelpViewController::*)()>(&GlobalNamespace::MissionHelpViewController::OkButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpViewController*), "OkButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionHelpViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionHelpViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
