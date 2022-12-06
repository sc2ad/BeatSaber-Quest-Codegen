// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GridView
  class GridView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GridView*, "", "GridView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: GridView
  // [TokenAttribute] Offset: FFFFFFFF
  class GridView : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GridView::IDataSource
    class IDataSource;
    // Nested type: ::GlobalNamespace::GridView::GridViewCellsEnumerator
    class GridViewCellsEnumerator;
    public:
    // private UnityEngine.RectTransform _contentTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* contentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private GridView/GridViewCellsEnumerator <cellsEnumerator>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GridView::GridViewCellsEnumerator* cellsEnumerator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GridView::GridViewCellsEnumerator*) == 0x8);
    // private GridView/IDataSource _dataSource
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GridView::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GridView::IDataSource*) == 0x8);
    // private System.Int32 _columnCount
    // Size: 0x4
    // Offset: 0x30
    int columnCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _rowCount
    // Size: 0x4
    // Offset: 0x34
    int rowCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,System.Collections.Generic.Queue`1<UnityEngine.MonoBehaviour>> _availableCellsPerPrefabDictionary
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>* availableCellsPerPrefabDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>> _spawnedCellsPerPrefabDictionary
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>* spawnedCellsPerPrefabDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _contentTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__contentTransform();
    // Get instance field reference: private GridView/GridViewCellsEnumerator <cellsEnumerator>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GridView::GridViewCellsEnumerator*& dyn_$cellsEnumerator$k__BackingField();
    // Get instance field reference: private GridView/IDataSource _dataSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GridView::IDataSource*& dyn__dataSource();
    // Get instance field reference: private System.Int32 _columnCount
    [[deprecated("Use field access instead!")]] int& dyn__columnCount();
    // Get instance field reference: private System.Int32 _rowCount
    [[deprecated("Use field access instead!")]] int& dyn__rowCount();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,System.Collections.Generic.Queue`1<UnityEngine.MonoBehaviour>> _availableCellsPerPrefabDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>*& dyn__availableCellsPerPrefabDictionary();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.MonoBehaviour,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>> _spawnedCellsPerPrefabDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>*& dyn__spawnedCellsPerPrefabDictionary();
    // public GridView/IDataSource get_dataSource()
    // Offset: 0x13EF13C
    ::GlobalNamespace::GridView::IDataSource* get_dataSource();
    // public GridView/GridViewCellsEnumerator get_cellsEnumerator()
    // Offset: 0x13EF144
    ::GlobalNamespace::GridView::GridViewCellsEnumerator* get_cellsEnumerator();
    // private System.Void set_cellsEnumerator(GridView/GridViewCellsEnumerator value)
    // Offset: 0x13EF14C
    void set_cellsEnumerator(::GlobalNamespace::GridView::GridViewCellsEnumerator* value);
    // public System.Int32 get_rowCount()
    // Offset: 0x13EF154
    int get_rowCount();
    // public System.Int32 get_columnCount()
    // Offset: 0x13EF15C
    int get_columnCount();
    // public System.Void .ctor()
    // Offset: 0x13EF954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GridView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridView*, creationType>()));
    }
    // public System.Void SetDataSource(GridView/IDataSource newDataSource, System.Boolean reloadData)
    // Offset: 0x13EF164
    void SetDataSource(::GlobalNamespace::GridView::IDataSource* newDataSource, bool reloadData);
    // public System.Void ReloadData()
    // Offset: 0x13EF228
    void ReloadData();
    // public System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> GetActiveCellsForIdentifier(UnityEngine.MonoBehaviour prefab)
    // Offset: 0x13EF88C
    ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* GetActiveCellsForIdentifier(::UnityEngine::MonoBehaviour* prefab);
    // public T GetReusableCellView(UnityEngine.MonoBehaviour prefab)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetReusableCellView(::UnityEngine::MonoBehaviour* prefab) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::MonoBehaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GridView::GetReusableCellView");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetReusableCellView", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, prefab);
    }
  }; // GridView
  #pragma pack(pop)
  static check_size<sizeof(GridView), 64 + sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>*)> __GlobalNamespace_GridViewSizeCheck;
  static_assert(sizeof(GridView) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GridView::get_dataSource
// Il2CppName: get_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GridView::IDataSource* (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_dataSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "get_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::get_cellsEnumerator
// Il2CppName: get_cellsEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GridView::GridViewCellsEnumerator* (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_cellsEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "get_cellsEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::set_cellsEnumerator
// Il2CppName: set_cellsEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)(::GlobalNamespace::GridView::GridViewCellsEnumerator*)>(&GlobalNamespace::GridView::set_cellsEnumerator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GridView/GridViewCellsEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "set_cellsEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::get_rowCount
// Il2CppName: get_rowCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_rowCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "get_rowCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::get_columnCount
// Il2CppName: get_columnCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_columnCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "get_columnCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GridView::SetDataSource
// Il2CppName: SetDataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)(::GlobalNamespace::GridView::IDataSource*, bool)>(&GlobalNamespace::GridView::SetDataSource)> {
  static const MethodInfo* get() {
    static auto* newDataSource = &::il2cpp_utils::GetClassFromName("", "GridView/IDataSource")->byval_arg;
    static auto* reloadData = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "SetDataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newDataSource, reloadData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::ReloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GetActiveCellsForIdentifier
// Il2CppName: GetActiveCellsForIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* (GlobalNamespace::GridView::*)(::UnityEngine::MonoBehaviour*)>(&GlobalNamespace::GridView::GetActiveCellsForIdentifier)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GridView*), "GetActiveCellsForIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GridView::GetReusableCellView
// Il2CppName: GetReusableCellView
// Cannot write MetadataGetter for generic methods!
