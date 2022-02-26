// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultsTableCell
  class ResultsTableCell;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ResultsTableView
  class ResultsTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableView*, "", "ResultsTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ResultsTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultsTableView : public ::UnityEngine::MonoBehaviour/*, public ::HMUI::TableView::IDataSource*/ {
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
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(::HMUI::TableView*) == 0x8);
    // private ResultsTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ResultsTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ResultsTableCell*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x28
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rowHeight and: dataList
    char __padding2[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _dataList
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::StringW _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::StringW value);
    // Get instance field reference: private HMUI.TableView _tableView
    ::HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private ResultsTableCell _cellPrefab
    ::GlobalNamespace::ResultsTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.Single _rowHeight
    float& dyn__rowHeight();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _dataList
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& dyn__dataList();
    // public System.Single CellSize()
    // Offset: 0x2B4DAB0
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x2B4DAB8
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x2B4DB68
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int idx);
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> dataList)
    // Offset: 0x2B4DD30
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);
    // public System.Void .ctor()
    // Offset: 0x2B4DD5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ResultsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsTableView*, creationType>()));
    }
  }; // ResultsTableView
  #pragma pack(pop)
  static check_size<sizeof(ResultsTableView), 48 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*)> __GlobalNamespace_ResultsTableViewSizeCheck;
  static_assert(sizeof(ResultsTableView) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ResultsTableView::*)()>(&GlobalNamespace::ResultsTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ResultsTableView::*)()>(&GlobalNamespace::ResultsTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::ResultsTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::ResultsTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsTableView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*)>(&GlobalNamespace::ResultsTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* dataList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataList});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
