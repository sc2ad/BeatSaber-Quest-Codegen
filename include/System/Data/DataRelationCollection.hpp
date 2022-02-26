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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataRelation
  class DataRelation;
  // Forward declaring type: DataSet
  class DataSet;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CollectionChangeEventHandler
  class CollectionChangeEventHandler;
  // Forward declaring type: CollectionChangeEventArgs
  class CollectionChangeEventArgs;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataRelationCollection
  class DataRelationCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationCollection*, "System.Data", "DataRelationCollection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRelationCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 11D0340
  // [DefaultPropertyAttribute] Offset: 11D0340
  // [DefaultEventAttribute] Offset: 11D0340
  class DataRelationCollection : public ::System::Data::InternalDataCollectionBase {
    public:
    // Nested type: ::System::Data::DataRelationCollection::DataTableRelationCollection
    class DataTableRelationCollection;
    // Nested type: ::System::Data::DataRelationCollection::DataSetRelationCollection
    class DataSetRelationCollection;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Data.DataRelation _inTransition
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataRelation* inTransition;
    // Field size check
    static_assert(sizeof(::System::Data::DataRelation*) == 0x8);
    // private System.Int32 _defaultNameIndex
    // Size: 0x4
    // Offset: 0x18
    int defaultNameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: defaultNameIndex and: onCollectionChangedDelegate
    char __padding1[0x4] = {};
    // private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangedDelegate
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::CollectionChangeEventHandler* onCollectionChangedDelegate;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CollectionChangeEventHandler*) == 0x8);
    // private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangingDelegate
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::CollectionChangeEventHandler* onCollectionChangingDelegate;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CollectionChangeEventHandler*) == 0x8);
    // private readonly System.Int32 _objectID
    // Size: 0x4
    // Offset: 0x30
    int objectID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Int32 s_objectTypeCount
    static int _get_s_objectTypeCount();
    // Set static field: static private System.Int32 s_objectTypeCount
    static void _set_s_objectTypeCount(int value);
    // Get instance field reference: private System.Data.DataRelation _inTransition
    ::System::Data::DataRelation*& dyn__inTransition();
    // Get instance field reference: private System.Int32 _defaultNameIndex
    int& dyn__defaultNameIndex();
    // Get instance field reference: private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangedDelegate
    ::System::ComponentModel::CollectionChangeEventHandler*& dyn__onCollectionChangedDelegate();
    // Get instance field reference: private System.ComponentModel.CollectionChangeEventHandler _onCollectionChangingDelegate
    ::System::ComponentModel::CollectionChangeEventHandler*& dyn__onCollectionChangingDelegate();
    // Get instance field reference: private readonly System.Int32 _objectID
    int& dyn__objectID();
    // System.Int32 get_ObjectID()
    // Offset: 0x1E592D0
    int get_ObjectID();
    // public System.Data.DataRelation get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    ::System::Data::DataRelation* get_Item(int index);
    // public System.Data.DataRelation get_Item(System.String name)
    // Offset: 0xFFFFFFFF
    ::System::Data::DataRelation* get_Item(::StringW name);
    // public System.Void add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler value)
    // Offset: 0x1E59760
    void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);
    // public System.Void remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler value)
    // Offset: 0x1E59834
    void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);
    // public System.Void Add(System.Data.DataRelation relation)
    // Offset: 0x1E592D8
    void Add(::System::Data::DataRelation* relation);
    // protected System.Void AddCore(System.Data.DataRelation relation)
    // Offset: 0x1E594CC
    void AddCore(::System::Data::DataRelation* relation);
    // System.String AssignName()
    // Offset: 0x1E59908
    ::StringW AssignName();
    // public System.Void Clear()
    // Offset: 0x1E599F0
    void Clear();
    // public System.Boolean Contains(System.String name)
    // Offset: 0x1E59BC8
    bool Contains(::StringW name);
    // System.Int32 InternalIndexOf(System.String name)
    // Offset: 0x1E59BE4
    int InternalIndexOf(::StringW name);
    // protected System.Data.DataSet GetDataSet()
    // Offset: 0xFFFFFFFF
    ::System::Data::DataSet* GetDataSet();
    // private System.String MakeName(System.Int32 index)
    // Offset: 0x1E59938
    ::StringW MakeName(int index);
    // protected System.Void OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs ccevent)
    // Offset: 0x1E59D6C
    void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);
    // protected System.Void OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs ccevent)
    // Offset: 0x1E59E38
    void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent);
    // System.Void RegisterName(System.String name)
    // Offset: 0x1E59F04
    void RegisterName(::StringW name);
    // public System.Void Remove(System.Data.DataRelation relation)
    // Offset: 0x1E5A0B4
    void Remove(::System::Data::DataRelation* relation);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x1E5A234
    void RemoveAt(int index);
    // protected System.Void RemoveCore(System.Data.DataRelation relation)
    // Offset: 0x1E5A2D0
    void RemoveCore(::System::Data::DataRelation* relation);
    // System.Void UnregisterName(System.String name)
    // Offset: 0x1E5A4A4
    void UnregisterName(::StringW name);
    // protected System.Void .ctor()
    // Offset: 0x1E5A5C8
    // Implemented from: System.Data.InternalDataCollectionBase
    // Base method: System.Void InternalDataCollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataRelationCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataRelationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataRelationCollection*, creationType>()));
    }
  }; // System.Data.DataRelationCollection
  #pragma pack(pop)
  static check_size<sizeof(DataRelationCollection), 48 + sizeof(int)> __System_Data_DataRelationCollectionSizeCheck;
  static_assert(sizeof(DataRelationCollection) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataRelationCollection::get_ObjectID
// Il2CppName: get_ObjectID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataRelationCollection::*)()>(&System::Data::DataRelationCollection::get_ObjectID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "get_ObjectID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (System::Data::DataRelationCollection::*)(int)>(&System::Data::DataRelationCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (System::Data::DataRelationCollection::*)(::StringW)>(&System::Data::DataRelationCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::add_CollectionChanged
// Il2CppName: add_CollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(&System::Data::DataRelationCollection::add_CollectionChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "add_CollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::remove_CollectionChanged
// Il2CppName: remove_CollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventHandler*)>(&System::Data::DataRelationCollection::remove_CollectionChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "remove_CollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&System::Data::DataRelationCollection::Add)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::AddCore
// Il2CppName: AddCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&System::Data::DataRelationCollection::AddCore)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "AddCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::AssignName
// Il2CppName: AssignName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataRelationCollection::*)()>(&System::Data::DataRelationCollection::AssignName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "AssignName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)()>(&System::Data::DataRelationCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRelationCollection::*)(::StringW)>(&System::Data::DataRelationCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::InternalIndexOf
// Il2CppName: InternalIndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataRelationCollection::*)(::StringW)>(&System::Data::DataRelationCollection::InternalIndexOf)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "InternalIndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::GetDataSet
// Il2CppName: GetDataSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataSet* (System::Data::DataRelationCollection::*)()>(&System::Data::DataRelationCollection::GetDataSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "GetDataSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::MakeName
// Il2CppName: MakeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataRelationCollection::*)(int)>(&System::Data::DataRelationCollection::MakeName)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "MakeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::OnCollectionChanged
// Il2CppName: OnCollectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataRelationCollection::OnCollectionChanged)> {
  static const MethodInfo* get() {
    static auto* ccevent = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "OnCollectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ccevent});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::OnCollectionChanging
// Il2CppName: OnCollectionChanging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::ComponentModel::CollectionChangeEventArgs*)>(&System::Data::DataRelationCollection::OnCollectionChanging)> {
  static const MethodInfo* get() {
    static auto* ccevent = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CollectionChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "OnCollectionChanging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ccevent});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::RegisterName
// Il2CppName: RegisterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::StringW)>(&System::Data::DataRelationCollection::RegisterName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "RegisterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&System::Data::DataRelationCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(int)>(&System::Data::DataRelationCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::RemoveCore
// Il2CppName: RemoveCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::System::Data::DataRelation*)>(&System::Data::DataRelationCollection::RemoveCore)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "RemoveCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::UnregisterName
// Il2CppName: UnregisterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::*)(::StringW)>(&System::Data::DataRelationCollection::UnregisterName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection*), "UnregisterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
