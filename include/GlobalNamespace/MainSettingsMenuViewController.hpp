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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SettingsSubMenuInfo
  class SettingsSubMenuInfo;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsMenuViewController
  class MainSettingsMenuViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainSettingsMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsMenuViewController*, "", "MainSettingsMenuViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: MainSettingsMenuViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MainSettingsMenuViewController : public ::HMUI::ViewController {
    public:
    public:
    // private System.Action`2<SettingsSubMenuInfo,System.Int32> didSelectSettingsSubMenuEvent
    // Size: 0x8
    // Offset: 0x70
    ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>* didSelectSettingsSubMenuEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>*) == 0x8);
    // private SettingsSubMenuInfo[] _settingsSubMenuInfos
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*> settingsSubMenuInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*>) == 0x8);
    // private HMUI.TextSegmentedControl _settingsMenuSegmentedControl
    // Size: 0x8
    // Offset: 0x80
    ::HMUI::TextSegmentedControl* settingsMenuSegmentedControl;
    // Field size check
    static_assert(sizeof(::HMUI::TextSegmentedControl*) == 0x8);
    // private SettingsSubMenuInfo _selectedSubMenuInfo
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::SettingsSubMenuInfo* selectedSubMenuInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SettingsSubMenuInfo*) == 0x8);
    // private System.Int32 _selectedSubMenuInfoIdx
    // Size: 0x4
    // Offset: 0x90
    int selectedSubMenuInfoIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Action`2<SettingsSubMenuInfo,System.Int32> didSelectSettingsSubMenuEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>*& dyn_didSelectSettingsSubMenuEvent();
    // Get instance field reference: private SettingsSubMenuInfo[] _settingsSubMenuInfos
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*>& dyn__settingsSubMenuInfos();
    // Get instance field reference: private HMUI.TextSegmentedControl _settingsMenuSegmentedControl
    [[deprecated("Use field access instead!")]] ::HMUI::TextSegmentedControl*& dyn__settingsMenuSegmentedControl();
    // Get instance field reference: private SettingsSubMenuInfo _selectedSubMenuInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SettingsSubMenuInfo*& dyn__selectedSubMenuInfo();
    // Get instance field reference: private System.Int32 _selectedSubMenuInfoIdx
    [[deprecated("Use field access instead!")]] int& dyn__selectedSubMenuInfoIdx();
    // public System.Int32 get_numberOfSubMenus()
    // Offset: 0x133C6C8
    int get_numberOfSubMenus();
    // public SettingsSubMenuInfo get_selectedSubMenuInfo()
    // Offset: 0x133C6E4
    ::GlobalNamespace::SettingsSubMenuInfo* get_selectedSubMenuInfo();
    // public System.Void add_didSelectSettingsSubMenuEvent(System.Action`2<SettingsSubMenuInfo,System.Int32> value)
    // Offset: 0x133C580
    void add_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>* value);
    // public System.Void remove_didSelectSettingsSubMenuEvent(System.Action`2<SettingsSubMenuInfo,System.Int32> value)
    // Offset: 0x133C624
    void remove_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>* value);
    // public System.Void .ctor()
    // Offset: 0x133C960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainSettingsMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsMenuViewController*, creationType>()));
    }
    // public System.Void Init(System.Int32 selectedSubMenuInfoIdx)
    // Offset: 0x133C6EC
    void Init(int selectedSubMenuInfoIdx);
    // private System.Void HandleSettingsMenuSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x133C8B8
    void HandleSettingsMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x133C730
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MainSettingsMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(MainSettingsMenuViewController), 144 + sizeof(int)> __GlobalNamespace_MainSettingsMenuViewControllerSizeCheck;
  static_assert(sizeof(MainSettingsMenuViewController) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::get_numberOfSubMenus
// Il2CppName: get_numberOfSubMenus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MainSettingsMenuViewController::*)()>(&GlobalNamespace::MainSettingsMenuViewController::get_numberOfSubMenus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "get_numberOfSubMenus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::get_selectedSubMenuInfo
// Il2CppName: get_selectedSubMenuInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SettingsSubMenuInfo* (GlobalNamespace::MainSettingsMenuViewController::*)()>(&GlobalNamespace::MainSettingsMenuViewController::get_selectedSubMenuInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "get_selectedSubMenuInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::add_didSelectSettingsSubMenuEvent
// Il2CppName: add_didSelectSettingsSubMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsMenuViewController::*)(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>*)>(&GlobalNamespace::MainSettingsMenuViewController::add_didSelectSettingsSubMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SettingsSubMenuInfo"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "add_didSelectSettingsSubMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::remove_didSelectSettingsSubMenuEvent
// Il2CppName: remove_didSelectSettingsSubMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsMenuViewController::*)(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int>*)>(&GlobalNamespace::MainSettingsMenuViewController::remove_didSelectSettingsSubMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SettingsSubMenuInfo"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "remove_didSelectSettingsSubMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsMenuViewController::*)(int)>(&GlobalNamespace::MainSettingsMenuViewController::Init)> {
  static const MethodInfo* get() {
    static auto* selectedSubMenuInfoIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedSubMenuInfoIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::HandleSettingsMenuSegmentedControlDidSelectCell
// Il2CppName: HandleSettingsMenuSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsMenuViewController::*)(::HMUI::SegmentedControl*, int)>(&GlobalNamespace::MainSettingsMenuViewController::HandleSettingsMenuSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "HandleSettingsMenuSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsMenuViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainSettingsMenuViewController::*)(bool, bool, bool)>(&GlobalNamespace::MainSettingsMenuViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsMenuViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
