// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::SegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControl*, "HMUI", "SegmentedControl");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SegmentedControl
  // [TokenAttribute] Offset: FFFFFFFF
  class SegmentedControl : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::HMUI::SegmentedControl::IDataSource
    class IDataSource;
    public:
    // [NullAllowed] Offset: 0x10E8A40
    // private UnityEngine.Transform _separatorPrefab
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* separatorPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Action`2<HMUI.SegmentedControl,System.Int32> didSelectCellEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<::HMUI::SegmentedControl*, int>* didSelectCellEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::HMUI::SegmentedControl*, int>*) == 0x8);
    // private System.Int32 _numberOfCells
    // Size: 0x4
    // Offset: 0x28
    int numberOfCells;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfCells and: cells
    char __padding2[0x4] = {};
    // private readonly System.Collections.Generic.List`1<HMUI.SegmentedControlCell> _cells
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>* cells;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.GameObject> _separators
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* separators;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // private HMUI.SegmentedControl/HMUI.IDataSource _dataSource
    // Size: 0x8
    // Offset: 0x40
    ::HMUI::SegmentedControl::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(::HMUI::SegmentedControl::IDataSource*) == 0x8);
    // private System.Int32 _selectedCellNumber
    // Size: 0x4
    // Offset: 0x48
    int selectedCellNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedCellNumber and: callbacks
    char __padding6[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<System.Int32>> _callbacks
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<int, ::System::Action_1<int>*>* callbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::System::Action_1<int>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _separatorPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__separatorPrefab();
    // Get instance field reference: private System.Action`2<HMUI.SegmentedControl,System.Int32> didSelectCellEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::HMUI::SegmentedControl*, int>*& dyn_didSelectCellEvent();
    // Get instance field reference: private System.Int32 _numberOfCells
    [[deprecated("Use field access instead!")]] int& dyn__numberOfCells();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<HMUI.SegmentedControlCell> _cells
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*& dyn__cells();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.GameObject> _separators
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn__separators();
    // Get instance field reference: private HMUI.SegmentedControl/HMUI.IDataSource _dataSource
    [[deprecated("Use field access instead!")]] ::HMUI::SegmentedControl::IDataSource*& dyn__dataSource();
    // Get instance field reference: private System.Int32 _selectedCellNumber
    [[deprecated("Use field access instead!")]] int& dyn__selectedCellNumber();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<System.Int32>> _callbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::System::Action_1<int>*>*& dyn__callbacks();
    // public HMUI.SegmentedControl/HMUI.IDataSource get_dataSource()
    // Offset: 0x16E5BDC
    ::HMUI::SegmentedControl::IDataSource* get_dataSource();
    // public System.Void set_dataSource(HMUI.SegmentedControl/HMUI.IDataSource value)
    // Offset: 0x16E5BE4
    void set_dataSource(::HMUI::SegmentedControl::IDataSource* value);
    // public System.Int32 get_selectedCellNumber()
    // Offset: 0x16E5F10
    int get_selectedCellNumber();
    // public System.Collections.Generic.IReadOnlyList`1<HMUI.SegmentedControlCell> get_cells()
    // Offset: 0x16E5F18
    ::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>* get_cells();
    // public System.Void add_didSelectCellEvent(System.Action`2<HMUI.SegmentedControl,System.Int32> value)
    // Offset: 0x16E5A94
    void add_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*, int>* value);
    // public System.Void remove_didSelectCellEvent(System.Action`2<HMUI.SegmentedControl,System.Int32> value)
    // Offset: 0x16E5B38
    void remove_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*, int>* value);
    // public System.Void .ctor()
    // Offset: 0x16E67A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SegmentedControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::SegmentedControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SegmentedControl*, creationType>()));
    }
    // private System.Void CreateCells()
    // Offset: 0x16E5F20
    void CreateCells();
    // private System.Void HandleCellSelectionDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transitionType, System.Object changeOwner)
    // Offset: 0x16E6524
    void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner);
    // public System.Void SetCallbackForCell(System.Int32 cellNumber, System.Action`1<System.Int32> callback)
    // Offset: 0x16E667C
    void SetCallbackForCell(int cellNumber, ::System::Action_1<int>* callback);
    // public System.Void ReloadData()
    // Offset: 0x16E5BEC
    void ReloadData();
    // public System.Void SelectCellWithNumber(System.Int32 selectCellNumber)
    // Offset: 0x16E66EC
    void SelectCellWithNumber(int selectCellNumber);
  }; // HMUI.SegmentedControl
  #pragma pack(pop)
  static check_size<sizeof(SegmentedControl), 80 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::System::Action_1<int>*>*)> __HMUI_SegmentedControlSizeCheck;
  static_assert(sizeof(SegmentedControl) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SegmentedControl::get_dataSource
// Il2CppName: get_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SegmentedControl::IDataSource* (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::get_dataSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "get_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::set_dataSource
// Il2CppName: set_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(::HMUI::SegmentedControl::IDataSource*)>(&HMUI::SegmentedControl::set_dataSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "set_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::get_selectedCellNumber
// Il2CppName: get_selectedCellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::get_selectedCellNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "get_selectedCellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::get_cells
// Il2CppName: get_cells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>* (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::get_cells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "get_cells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::add_didSelectCellEvent
// Il2CppName: add_didSelectCellEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(::System::Action_2<::HMUI::SegmentedControl*, int>*)>(&HMUI::SegmentedControl::add_didSelectCellEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "add_didSelectCellEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::remove_didSelectCellEvent
// Il2CppName: remove_didSelectCellEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(::System::Action_2<::HMUI::SegmentedControl*, int>*)>(&HMUI::SegmentedControl::remove_didSelectCellEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "remove_didSelectCellEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::SegmentedControl::CreateCells
// Il2CppName: CreateCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::CreateCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "CreateCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::HandleCellSelectionDidChange
// Il2CppName: HandleCellSelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*)>(&HMUI::SegmentedControl::HandleCellSelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* changeOwner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "HandleCellSelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transitionType, changeOwner});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::SetCallbackForCell
// Il2CppName: SetCallbackForCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(int, ::System::Action_1<int>*)>(&HMUI::SegmentedControl::SetCallbackForCell)> {
  static const MethodInfo* get() {
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "SetCallbackForCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cellNumber, callback});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::ReloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SegmentedControl::SelectCellWithNumber
// Il2CppName: SelectCellWithNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(int)>(&HMUI::SegmentedControl::SelectCellWithNumber)> {
  static const MethodInfo* get() {
    static auto* selectCellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SegmentedControl*), "SelectCellWithNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectCellNumber});
  }
};
