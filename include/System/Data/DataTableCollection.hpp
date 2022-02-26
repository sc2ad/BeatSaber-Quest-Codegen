// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.InternalDataCollectionBase
#include "System/Data/InternalDataCollectionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataSet
  class DataSet;
  // Forward declaring type: DataTable
  class DataTable;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CollectionChangeEventHandler
  class CollectionChangeEventHandler;
  // Forward declaring type: CollectionChangeEventArgs
  class CollectionChangeEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataTableCollection
  class DataTableCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataTableCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableCollection*, "System.Data", "DataTableCollection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataTableCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ListBindableAttribute] Offset: 11D062C
  // [DefaultMemberAttribute] Offset: 11D062C
  // [DefaultEventAttribute] Offset: 11D062C
  class DataTableCollection : public ::System::Data::InternalDataCollectionBase {
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
    // private readonly System.Data.DataSet _dataSet
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataSet* dataSet;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    // private readonly System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Int32 _defaultNameIndex
    // Size: 0x4
    // Offset: 0x20
    int defaultNameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: defaultNameIndex and: delayedAddRangeTables
    char __padding2[0x4] = {};
    // private System.Data.DataTable[] _delayedAddRangeTables
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Data::DataTable*> delayedAddRangeTables;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Data::DataTable*>) == 0x8);
    // private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangedDelegate
    // Size: 0x8
    // Offset: 0x30
    ::System::ComponentModel::CollectionChangeEventHandler* onCollectionChangedDelegate;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CollectionChangeEventHandler*) == 0x8);
    // private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangingDelegate
    // Size: 0x8
    // Offset: 0x38
    ::System::ComponentModel::CollectionChangeEventHandler* onCollectionChangingDelegate;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CollectionChangeEventHandler*) == 0x8);
    // private readonly System.Int32 _objectID
    // Size: 0x4
    // Offset: 0x40
    int objectID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Int32 s_objectTypeCount
    static int _get_s_objectTypeCount();
    // Set static field: static private System.Int32 s_objectTypeCount
    static void _set_s_objectTypeCount(int value);
    // Get instance field reference: private readonly System.Data.DataSet _dataSet
    ::System::Data::DataSet*& dyn__dataSet();
    // Get instance field reference: private readonly System.Collections.ArrayList _list
    ::System::Collections::ArrayList*& dyn__list();
    // Get instance field reference: private System.Int32 _defaultNameIndex
    int& dyn__defaultNameIndex();
    // Get instance field reference: private System.Data.DataTable[] _delayedAddRangeTables
    ::ArrayW<::System::Data::DataTable*>& dyn__delayedAddRangeTables();
    // Get instance field reference: private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangedDelegate
    ::System::ComponentModel::CollectionChangeEventHandler*& dyn__onCollectionChangedDelegate();
    // Get instance field reference: private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangingDelegate
    ::System::ComponentModel::CollectionChangeEventHandler*& dyn__onCollectionChangingDelegate();
    // Get instance field reference: private readonly System.Int32 _objectID
    int& dyn__objectID();
    // System.Int32 get_ObjectID()
    // Offset: 0x1CC0130
    int get_ObjectID();
    // public System.Data.DataTable get_Item(System.Int32 index)
    // Offset: 0x1CBFA08
    ::System::Data::DataTable* get_Item(int index);
    // public System.Data.DataTable get_Item(System.String name)
    // Offset: 0x1CC01D0
    ::System::Data::DataTable* get_Item(::StringW name);
    // public System.Data.DataTable get_Item(System.String name, System.String tableNamespace)
    // Offset: 0x1CC0558
    ::System::Data::DataTable* get_Item(::StringW name, ::StringW tableNamespace);
    // System.Void .ctor(System.Data.DataSet dataSet)
    // Offset: 0x1CC0004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataTableCollection* New_ctor(::System::Data::DataSet* dataSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataTableCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataTableCollection*, creationType>(dataSet)));
    }
    // System.Data.DataTable GetTable(System.String name, System.String ns)
    // Offset: 0x1CC0858
    ::System::Data::DataTable* GetTable(::StringW name, ::StringW ns);
    // System.Data.DataTable GetTableSmart(System.String name, System.String ns)
    // Offset: 0x1CC097C
    ::System::Data::DataTable* GetTableSmart(::StringW name, ::StringW ns);
    // public System.Void Add(System.Data.DataTable table)
    // Offset: 0x1CC0AC0
    void Add(::System::Data::DataTable* table);
    // private System.Void ArrayAdd(System.Data.DataTable table)
    // Offset: 0x1CC0EF0
    void ArrayAdd(::System::Data::DataTable* table);
    // System.String AssignName()
    // Offset: 0x1CC0FE0
    ::StringW AssignName();
    // private System.Void BaseAdd(System.Data.DataTable table)
    // Offset: 0x1CC0DC0
    void BaseAdd(::System::Data::DataTable* table);
    // private System.Void BaseGroupSwitch(System.Data.DataTable[] oldArray, System.Int32 oldLength, System.Data.DataTable[] newArray, System.Int32 newLength)
    // Offset: 0x1CC1410
    void BaseGroupSwitch(::ArrayW<::System::Data::DataTable*> oldArray, int oldLength, ::ArrayW<::System::Data::DataTable*> newArray, int newLength);
    // private System.Void BaseRemove(System.Data.DataTable table)
    // Offset: 0x1CC1598
    void BaseRemove(::System::Data::DataTable* table);
    // System.Boolean CanRemove(System.Data.DataTable table, System.Boolean fThrowException)
    // Offset: 0x1CC1614
    bool CanRemove(::System::Data::DataTable* table, bool fThrowException);
    // public System.Void Clear()
    // Offset: 0x1CC1C88
    void Clear();
    // public System.Boolean Contains(System.String name)
    // Offset: 0x1CC10E4
    bool Contains(::StringW name);
    // System.Boolean Contains(System.String name, System.String tableNamespace, System.Boolean checkProperty, System.Boolean caseSensitive)
    // Offset: 0x1CC1EEC
    bool Contains(::StringW name, ::StringW tableNamespace, bool checkProperty, bool caseSensitive);
    // System.Boolean Contains(System.String name, System.Boolean caseSensitive)
    // Offset: 0x1CC2078
    bool Contains(::StringW name, bool caseSensitive);
    // public System.Int32 IndexOf(System.Data.DataTable table)
    // Offset: 0x1CC21B4
    int IndexOf(::System::Data::DataTable* table);
    // public System.Int32 IndexOf(System.String tableName)
    // Offset: 0x1CC22A8
    int IndexOf(::StringW tableName);
    // System.Int32 IndexOf(System.String tableName, System.String tableNamespace, System.Boolean chekforNull)
    // Offset: 0x1CC22C4
    int IndexOf(::StringW tableName, ::StringW tableNamespace, bool chekforNull);
    // System.Void ReplaceFromInference(System.Collections.Generic.List`1<System.Data.DataTable> tableList)
    // Offset: 0x1CC2370
    void ReplaceFromInference(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList);
    // System.Int32 InternalIndexOf(System.String tableName)
    // Offset: 0x1CC02C0
    int InternalIndexOf(::StringW tableName);
    // System.Int32 InternalIndexOf(System.String tableName, System.String tableNamespace)
    // Offset: 0x1CC06B4
    int InternalIndexOf(::StringW tableName, ::StringW tableNamespace);
    // private System.String MakeName(System.Int32 index)
    // Offset: 0x1CC102C
    ::StringW MakeName(int index);
    // private System.Void OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs ccevent)
    // Offset: 0x1CC0F14
    void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);
    // private System.Void OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs ccevent)
    // Offset: 0x1CC0CF4
    void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent);
    // System.Void RegisterName(System.String name, System.String tbNamespace)
    // Offset: 0x1CC11E8
    void RegisterName(::StringW name, ::StringW tbNamespace);
    // public System.Void Remove(System.Data.DataTable table)
    // Offset: 0x1CC241C
    void Remove(::System::Data::DataTable* table);
    // System.Void UnregisterName(System.String name)
    // Offset: 0x1CC19D8
    void UnregisterName(::StringW name);
    // protected override System.Collections.ArrayList get_List()
    // Offset: 0x1CC0128
    // Implemented from: System.Data.InternalDataCollectionBase
    // Base method: System.Collections.ArrayList InternalDataCollectionBase::get_List()
    ::System::Collections::ArrayList* get_List();
  }; // System.Data.DataTableCollection
  #pragma pack(pop)
  static check_size<sizeof(DataTableCollection), 64 + sizeof(int)> __System_Data_DataTableCollectionSizeCheck;
  static_assert(sizeof(DataTableCollection) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataTableCollection::get_ObjectID
// Il2CppName: get_ObjectID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataTableCollection::*)()>(&System::Data::DataTableCollection::get_ObjectID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "get_ObjectID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::DataTableCollection::*)(int)>(&System::Data::DataTableCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::DataTableCollection::*)(::StringW)>(&System::Data::DataTableCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&System::Data::DataTableCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tableNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, tableNamespace});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataTableCollection::GetTable
// Il2CppName: GetTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&System::Data::DataTableCollection::GetTable)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "GetTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, ns});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::GetTableSmart
// Il2CppName: GetTableSmart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&System::Data::DataTableCollection::GetTableSmart)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "GetTableSmart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, ns});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&System::Data::DataTableCollection::Add)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::ArrayAdd
// Il2CppName: ArrayAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&System::Data::DataTableCollection::ArrayAdd)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "ArrayAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::AssignName
// Il2CppName: AssignName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataTableCollection::*)()>(&System::Data::DataTableCollection::AssignName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "AssignName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::BaseAdd
// Il2CppName: BaseAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&System::Data::DataTableCollection::BaseAdd)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "BaseAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::BaseGroupSwitch
// Il2CppName: BaseGroupSwitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::ArrayW<::System::Data::DataTable*>, int, ::ArrayW<::System::Data::DataTable*>, int)>(&System::Data::DataTableCollection::BaseGroupSwitch)> {
  static const MethodInfo* get() {
    static auto* oldArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataTable"), 1)->byval_arg;
    static auto* oldLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataTable"), 1)->byval_arg;
    static auto* newLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "BaseGroupSwitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldArray, oldLength, newArray, newLength});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::BaseRemove
// Il2CppName: BaseRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&System::Data::DataTableCollection::BaseRemove)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "BaseRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::CanRemove
// Il2CppName: CanRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataTableCollection::*)(::System::Data::DataTable*, bool)>(&System::Data::DataTableCollection::CanRemove)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* fThrowException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "CanRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, fThrowException});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)()>(&System::Data::DataTableCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataTableCollection::*)(::StringW)>(&System::Data::DataTableCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataTableCollection::*)(::StringW, ::StringW, bool, bool)>(&System::Data::DataTableCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tableNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkProperty = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* caseSensitive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, tableNamespace, checkProperty, caseSensitive});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataTableCollection::*)(::StringW, bool)>(&System::Data::DataTableCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* caseSensitive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, caseSensitive});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&System::Data::DataTableCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataTableCollection::*)(::StringW)>(&System::Data::DataTableCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* tableName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableName});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataTableCollection::*)(::StringW, ::StringW, bool)>(&System::Data::DataTableCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* tableName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tableNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* chekforNull = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableName, tableNamespace, chekforNull});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::ReplaceFromInference
// Il2CppName: ReplaceFromInference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*)>(&System::Data::DataTableCollection::ReplaceFromInference)> {
  static const MethodInfo* get() {
    static auto* tableList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataTable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "ReplaceFromInference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableList});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::InternalIndexOf
// Il2CppName: InternalIndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataTableCollection::*)(::StringW)>(&System::Data::DataTableCollection::InternalIndexOf)> {
  static const MethodInfo* get() {
    static auto* tableName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "InternalIndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableName});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::InternalIndexOf
// Il2CppName: InternalIndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&System::Data::DataTableCollection::InternalIndexOf)> {
  static const MethodInfo* get() {
    static auto* tableName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tableNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "InternalIndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableName, tableNamespace});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::MakeName
// Il2CppName: MakeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataTableCollection::*)(int)>(&System::Data::DataTableCollection::MakeName)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "MakeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::OnCollectionChanged
// Il2CppName: OnCollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataTableCollection::OnCollectionChanged)> {
  static const MethodInfo* get() {
    static auto* ccevent = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "OnCollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ccevent});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::OnCollectionChanging
// Il2CppName: OnCollectionChanging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataTableCollection::OnCollectionChanging)> {
  static const MethodInfo* get() {
    static auto* ccevent = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "OnCollectionChanging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ccevent});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::RegisterName
// Il2CppName: RegisterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::StringW, ::StringW)>(&System::Data::DataTableCollection::RegisterName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tbNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "RegisterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, tbNamespace});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::System::Data::DataTable*)>(&System::Data::DataTableCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::UnregisterName
// Il2CppName: UnregisterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTableCollection::*)(::StringW)>(&System::Data::DataTableCollection::UnregisterName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "UnregisterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataTableCollection::get_List
// Il2CppName: get_List
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Data::DataTableCollection::*)()>(&System::Data::DataTableCollection::get_List)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTableCollection*), "get_List", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
