// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoteJumpStartBeatOffsetDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteJumpStartBeatOffsetDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<System.Single,System.String>> _noteJumpStartBeatOffsetData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>* noteJumpStartBeatOffsetData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.SimpleTextDropdown _simpleTextDropdown
    HMUI::SimpleTextDropdown*& dyn__simpleTextDropdown();
    // Get instance field reference: private System.Action`1<System.Int32> didSelectCellWithIdxEvent
    System::Action_1<int>*& dyn_didSelectCellWithIdxEvent();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<System.Single,System.String>> _noteJumpStartBeatOffsetData
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>*& dyn__noteJumpStartBeatOffsetData();
    // private System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<System.Single,System.String>> get_noteJumpStartBeatOffsetData()
    // Offset: 0x1357F1C
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>* get_noteJumpStartBeatOffsetData();
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1357DD4
    void add_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1357E78
    void remove_didSelectCellWithIdxEvent(System::Action_1<int>* value);
    // protected System.Void Start()
    // Offset: 0x1358068
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13581E8
    void OnDestroy();
    // public System.Single GetSelectedOffset()
    // Offset: 0x13582C4
    float GetSelectedOffset();
    // public System.Void SelectCellWithOffset(System.Single offset)
    // Offset: 0x1358398
    void SelectCellWithOffset(float offset);
    // private System.Int32 GetIdxForOffset(System.Single offset)
    // Offset: 0x13583D4
    int GetIdxForOffset(float offset);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1358628
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x135869C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteJumpStartBeatOffsetDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteJumpStartBeatOffsetDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteJumpStartBeatOffsetDropdown*, creationType>()));
    }
  }; // NoteJumpStartBeatOffsetDropdown
  #pragma pack(pop)
  static check_size<sizeof(NoteJumpStartBeatOffsetDropdown), 40 + sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>*)> __GlobalNamespace_NoteJumpStartBeatOffsetDropdownSizeCheck;
  static_assert(sizeof(NoteJumpStartBeatOffsetDropdown) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, "", "NoteJumpStartBeatOffsetDropdown");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::get_noteJumpStartBeatOffsetData
// Il2CppName: get_noteJumpStartBeatOffsetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float, ::Il2CppString*>*>* (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)()>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::get_noteJumpStartBeatOffsetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "get_noteJumpStartBeatOffsetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)(System::Action_1<int>*)>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)()>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)()>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::GetSelectedOffset
// Il2CppName: GetSelectedOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)()>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::GetSelectedOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "GetSelectedOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::SelectCellWithOffset
// Il2CppName: SelectCellWithOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)(float)>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::SelectCellWithOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "SelectCellWithOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::GetIdxForOffset
// Il2CppName: GetIdxForOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)(float)>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::GetIdxForOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "GetIdxForOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpStartBeatOffsetDropdown::*)(HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::NoteJumpStartBeatOffsetDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteJumpStartBeatOffsetDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
