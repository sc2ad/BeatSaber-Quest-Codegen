// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.DropdownWithTableView
#include "HMUI/DropdownWithTableView.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
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
  // Autogenerated type: HMUI.SimpleTextDropdown
  class SimpleTextDropdown : public HMUI::DropdownWithTableView, public HMUI::TableView::IDataSource {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x48
    TMPro::TextMeshProUGUI* text;
    // private SimpleTextTableCell _cellPrefab
    // Offset: 0x50
    GlobalNamespace::SimpleTextTableCell* cellPrefab;
    // private System.Single _cellSize
    // Offset: 0x58
    float cellSize;
    // private System.Collections.Generic.IReadOnlyList`1<System.String> _texts
    // Offset: 0x60
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* texts;
    // private System.Boolean _initialized
    // Offset: 0x68
    bool initialized;
    // static field const value: static private System.String kCellReuseIdentifier
    static constexpr const char* kCellReuseIdentifier = "Cell";
    // Get static field: static private System.String kCellReuseIdentifier
    static ::Il2CppString* _get_kCellReuseIdentifier();
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::Il2CppString* value);
    // private System.Void LazyInit()
    // Offset: 0x21749F8
    void LazyInit();
    // public System.Void SetTexts(System.Collections.Generic.IReadOnlyList`1<System.String> texts)
    // Offset: 0x2174B90
    void SetTexts(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* texts);
    // private System.Void HandleDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x2175258
    void HandleDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // protected override System.Void OnDestroy()
    // Offset: 0x2174AA4
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::OnDestroy()
    void OnDestroy();
    // public System.Void Init(HMUI.TableView/IDataSource initTableViewDataSource)
    // Offset: 0x2174B30
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::Init(HMUI.TableView/IDataSource initTableViewDataSource)
    void Init(HMUI::TableView::IDataSource* initTableViewDataSource);
    // public override System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x2174D44
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::SelectCellWithIdx(System.Int32 idx)
    void SelectCellWithIdx(int idx);
    // public System.Single CellSize()
    // Offset: 0x2174F28
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x2174F30
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x2174FEC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x21753B4
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleTextDropdown* New_ctor();
  }; // HMUI.SimpleTextDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::SimpleTextDropdown*, "HMUI", "SimpleTextDropdown");
#pragma pack(pop)