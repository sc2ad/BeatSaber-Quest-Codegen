// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersDropdown
  class GameplayModifiersDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersDropdown*, "", "GameplayModifiersDropdown");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayModifiersDropdown : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GameplayModifiersDropdown::$$c
    class $$c;
    public:
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(::HMUI::SimpleTextDropdown*) == 0x8);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<GameplayModifierMask,System.String>> _gameplayModifiersData
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* gameplayModifiersData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.SimpleTextDropdown _simpleTextDropdown
    [[deprecated("Use field access instead!")]] ::HMUI::SimpleTextDropdown*& dyn__simpleTextDropdown();
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_didSelectCellWithIdxEvent();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<GameplayModifierMask,System.String>> _gameplayModifiersData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*& dyn__gameplayModifiersData();
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<GameplayModifierMask,System.String>> get_gameplayModifiersData()
    // Offset: 0x1454AF8
    ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* get_gameplayModifiersData();
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x14549B0
    void add_didSelectCellWithIdxEvent(::System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1454A54
    void remove_didSelectCellWithIdxEvent(::System::Action_1<int>* value);
    // public System.Void .ctor()
    // Offset: 0x14550C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayModifiersDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersDropdown*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1454C6C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1454DEC
    void OnDestroy();
    // public GameplayModifierMask GetSelectedGameplayModifierMask()
    // Offset: 0x1451264
    ::GlobalNamespace::GameplayModifierMask GetSelectedGameplayModifierMask();
    // public System.Void SelectCellWithGameplayModifierMask(GameplayModifierMask gameplayModifierMask)
    // Offset: 0x14515C0
    void SelectCellWithGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask);
    // private System.Int32 GetIdxForGameplayModifierMask(GameplayModifierMask gameplayModifierMask)
    // Offset: 0x1454EC8
    int GetIdxForGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x145504C
    void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Tuple`2<GameplayModifierMask,System.String> <get_gameplayModifiersData>b__7_0(GameplayModifierMask value)
    // Offset: 0x14550C8
    ::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* $get_gameplayModifiersData$b__7_0(::GlobalNamespace::GameplayModifierMask value);
  }; // GameplayModifiersDropdown
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifiersDropdown), 48 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*)> __GlobalNamespace_GameplayModifiersDropdownSizeCheck;
  static_assert(sizeof(GameplayModifiersDropdown) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::get_gameplayModifiersData
// Il2CppName: get_gameplayModifiersData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* (GlobalNamespace::GameplayModifiersDropdown::*)()>(&GlobalNamespace::GameplayModifiersDropdown::get_gameplayModifiersData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "get_gameplayModifiersData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersDropdown::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameplayModifiersDropdown::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersDropdown::*)(::System::Action_1<int>*)>(&GlobalNamespace::GameplayModifiersDropdown::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersDropdown::*)()>(&GlobalNamespace::GameplayModifiersDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersDropdown::*)()>(&GlobalNamespace::GameplayModifiersDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::GetSelectedGameplayModifierMask
// Il2CppName: GetSelectedGameplayModifierMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifierMask (GlobalNamespace::GameplayModifiersDropdown::*)()>(&GlobalNamespace::GameplayModifiersDropdown::GetSelectedGameplayModifierMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "GetSelectedGameplayModifierMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::SelectCellWithGameplayModifierMask
// Il2CppName: SelectCellWithGameplayModifierMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersDropdown::*)(::GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifiersDropdown::SelectCellWithGameplayModifierMask)> {
  static const MethodInfo* get() {
    static auto* gameplayModifierMask = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "SelectCellWithGameplayModifierMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifierMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::GetIdxForGameplayModifierMask
// Il2CppName: GetIdxForGameplayModifierMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayModifiersDropdown::*)(::GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifiersDropdown::GetIdxForGameplayModifierMask)> {
  static const MethodInfo* get() {
    static auto* gameplayModifierMask = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "GetIdxForGameplayModifierMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifierMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersDropdown::*)(::HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::GameplayModifiersDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$get_gameplayModifiersData$b__7_0
// Il2CppName: <get_gameplayModifiersData>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* (GlobalNamespace::GameplayModifiersDropdown::*)(::GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifiersDropdown::$get_gameplayModifiersData$b__7_0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersDropdown*), "<get_gameplayModifiersData>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
