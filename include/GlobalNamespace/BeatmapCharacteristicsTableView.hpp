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
  // Forward declaring type: BeatmapCharacteristicTableCell
  class BeatmapCharacteristicTableCell;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
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
  // Forward declaring type: BeatmapCharacteristicsTableView
  class BeatmapCharacteristicsTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsTableView*, "", "BeatmapCharacteristicsTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicsTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicsTableView : public ::UnityEngine::MonoBehaviour/*, public ::HMUI::TableView::IDataSource*/ {
    public:
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(::HMUI::TableView*) == 0x8);
    // private BeatmapCharacteristicTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCharacteristicTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicTableCell*) == 0x8);
    // private System.String _cellReuseIdentifier
    // Size: 0x8
    // Offset: 0x28
    ::StringW cellReuseIdentifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _cellWidth
    // Size: 0x4
    // Offset: 0x30
    float cellWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellWidth and: didSelectCharacteristic
    char __padding3[0x4] = {};
    // private System.Action`1<BeatmapCharacteristicSO> didSelectCharacteristic
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCharacteristic;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x48
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: selectedColumn
    char __padding6[0x3] = {};
    // private System.Int32 _selectedColumn
    // Size: 0x4
    // Offset: 0x4C
    int selectedColumn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::HMUI::TableView::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.TableView _tableView
    [[deprecated("Use field access instead!")]] ::HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private BeatmapCharacteristicTableCell _cellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.String _cellReuseIdentifier
    [[deprecated("Use field access instead!")]] ::StringW& dyn__cellReuseIdentifier();
    // Get instance field reference: private System.Single _cellWidth
    [[deprecated("Use field access instead!")]] float& dyn__cellWidth();
    // Get instance field reference: private System.Action`1<BeatmapCharacteristicSO> didSelectCharacteristic
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& dyn_didSelectCharacteristic();
    // Get instance field reference: private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& dyn__beatmapCharacteristicCollection();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // Get instance field reference: private System.Int32 _selectedColumn
    [[deprecated("Use field access instead!")]] int& dyn__selectedColumn();
    // public System.Void add_didSelectCharacteristic(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x13A6F74
    void add_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectCharacteristic(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x13A7018
    void remove_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void .ctor()
    // Offset: 0x13A7634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicsTableView*, creationType>()));
    }
    // private System.Void Init()
    // Offset: 0x13A70BC
    void Init();
    // public System.Void SetData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection)
    // Offset: 0x13A7188
    void SetData(::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection);
    // protected System.Void OnDestroy()
    // Offset: 0x13A71E0
    void OnDestroy();
    // public System.Single CellSize()
    // Offset: 0x13A7274
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x13A727C
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x13A7328
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int idx);
    // private System.Void HandleDidSelectColumnEvent(HMUI.TableView tableView, System.Int32 column)
    // Offset: 0x13A7498
    void HandleDidSelectColumnEvent(::HMUI::TableView* tableView, int column);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x13A7554
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x13A7614
    void SelectCellWithIdx(int idx);
  }; // BeatmapCharacteristicsTableView
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicsTableView), 76 + sizeof(int)> __GlobalNamespace_BeatmapCharacteristicsTableViewSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicsTableView) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::add_didSelectCharacteristic
// Il2CppName: add_didSelectCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicsTableView::add_didSelectCharacteristic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "add_didSelectCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::remove_didSelectCharacteristic
// Il2CppName: remove_didSelectCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicsTableView::remove_didSelectCharacteristic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "remove_didSelectCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&GlobalNamespace::BeatmapCharacteristicsTableView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)(::GlobalNamespace::BeatmapCharacteristicCollectionSO*)>(&GlobalNamespace::BeatmapCharacteristicsTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristicCollection = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicCollectionSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristicCollection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&GlobalNamespace::BeatmapCharacteristicsTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&GlobalNamespace::BeatmapCharacteristicsTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&GlobalNamespace::BeatmapCharacteristicsTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::BeatmapCharacteristicsTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::BeatmapCharacteristicsTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::HandleDidSelectColumnEvent
// Il2CppName: HandleDidSelectColumnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::BeatmapCharacteristicsTableView::HandleDidSelectColumnEvent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "HandleDidSelectColumnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, column});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&GlobalNamespace::BeatmapCharacteristicsTableView::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsTableView::SelectCellWithIdx
// Il2CppName: SelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsTableView::*)(int)>(&GlobalNamespace::BeatmapCharacteristicsTableView::SelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsTableView*), "SelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
