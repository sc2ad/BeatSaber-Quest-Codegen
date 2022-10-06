// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.DropdownWithTableView
#include "HMUI/DropdownWithTableView.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleTextTableCell
  class SimpleTextTableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Skipping declaration: TableView because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::SimpleTextDropdown);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SimpleTextDropdown*, "HMUI", "SimpleTextDropdown");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SimpleTextDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleTextDropdown : public ::HMUI::DropdownWithTableView/*, public ::HMUI::TableView::IDataSource*/ {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x48
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private SimpleTextTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SimpleTextTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleTextTableCell*) == 0x8);
    // private System.Single _cellSize
    // Size: 0x4
    // Offset: 0x58
    float cellSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellSize and: texts
    char __padding2[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<System.String> _texts
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::StringW>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x68
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::HMUI::TableView::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // static field const value: static private System.String kCellReuseIdentifier
    static constexpr const char* kCellReuseIdentifier = "Cell";
    // Get static field: static private System.String kCellReuseIdentifier
    static ::StringW _get_kCellReuseIdentifier();
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::StringW value);
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private SimpleTextTableCell _cellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleTextTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.Single _cellSize
    [[deprecated("Use field access instead!")]] float& dyn__cellSize();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.String> _texts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& dyn__texts();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // private System.Void LazyInit()
    // Offset: 0x16E6F4C
    void LazyInit();
    // public System.Void SetTexts(System.Collections.Generic.IReadOnlyList`1<System.String> texts)
    // Offset: 0x16E70E4
    void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts);
    // public System.Single CellSize()
    // Offset: 0x16E7460
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x16E7468
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x16E7524
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int idx);
    // private System.Void HandleDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x16E778C
    void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x16E78E8
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleTextDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::SimpleTextDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleTextDropdown*, creationType>()));
    }
    // protected override System.Void OnDestroy()
    // Offset: 0x16E6FF8
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::OnDestroy()
    void OnDestroy();
    // public System.Void Init(HMUI.TableView/HMUI.IDataSource initTableViewDataSource)
    // Offset: 0x16E7084
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::Init(HMUI.TableView/HMUI.IDataSource initTableViewDataSource)
    void Init(::HMUI::TableView::IDataSource* initTableViewDataSource);
    // public override System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x16E727C
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::SelectCellWithIdx(System.Int32 idx)
    void SelectCellWithIdx(int idx);
  }; // HMUI.SimpleTextDropdown
  #pragma pack(pop)
  static check_size<sizeof(SimpleTextDropdown), 104 + sizeof(bool)> __HMUI_SimpleTextDropdownSizeCheck;
  static_assert(sizeof(SimpleTextDropdown) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::LazyInit
// Il2CppName: LazyInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SimpleTextDropdown::*)()>(&HMUI::SimpleTextDropdown::LazyInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "LazyInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::SetTexts
// Il2CppName: SetTexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SimpleTextDropdown::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&HMUI::SimpleTextDropdown::SetTexts)> {
  static const MethodInfo* get() {
    static auto* texts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "SetTexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texts});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::SimpleTextDropdown::*)()>(&HMUI::SimpleTextDropdown::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SimpleTextDropdown::*)()>(&HMUI::SimpleTextDropdown::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (HMUI::SimpleTextDropdown::*)(::HMUI::TableView*, int)>(&HMUI::SimpleTextDropdown::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::HandleDidSelectCellWithIdx
// Il2CppName: HandleDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SimpleTextDropdown::*)(::HMUI::DropdownWithTableView*, int)>(&HMUI::SimpleTextDropdown::HandleDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "HandleDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SimpleTextDropdown::*)()>(&HMUI::SimpleTextDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SimpleTextDropdown::*)(::HMUI::TableView::IDataSource*)>(&HMUI::SimpleTextDropdown::Init)> {
  static const MethodInfo* get() {
    static auto* initTableViewDataSource = &::il2cpp_utils::GetClassFromName("HMUI", "TableView/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initTableViewDataSource});
  }
};
// Writing MetadataGetter for method: HMUI::SimpleTextDropdown::SelectCellWithIdx
// Il2CppName: SelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SimpleTextDropdown::*)(int)>(&HMUI::SimpleTextDropdown::SelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SimpleTextDropdown*), "SelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
