// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.DataRelationCollection
#include "System/Data/DataRelationCollection.hpp"
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
  // Forward declaring type: DataRelation
  class DataRelation;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataRelationCollection::DataSetRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationCollection::DataSetRelationCollection*, "System.Data", "DataRelationCollection/DataSetRelationCollection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRelationCollection/System.Data.DataSetRelationCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 11D03FC
  class DataRelationCollection::DataSetRelationCollection : public ::System::Data::DataRelationCollection {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
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
    // Offset: 0x38
    ::System::Data::DataSet* dataSet;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    // private readonly System.Collections.ArrayList _relations
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::ArrayList* relations;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Data.DataRelation[] _delayLoadingRelations
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::System::Data::DataRelation*> delayLoadingRelations;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Data::DataRelation*>) == 0x8);
    public:
    // Get instance field reference: private readonly System.Data.DataSet _dataSet
    ::System::Data::DataSet*& dyn__dataSet();
    // Get instance field reference: private readonly System.Collections.ArrayList _relations
    ::System::Collections::ArrayList*& dyn__relations();
    // Get instance field reference: private System.Data.DataRelation[] _delayLoadingRelations
    ::ArrayW<::System::Data::DataRelation*>& dyn__delayLoadingRelations();
    // System.Void .ctor(System.Data.DataSet dataSet)
    // Offset: 0x1E5A654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataRelationCollection::DataSetRelationCollection* New_ctor(::System::Data::DataSet* dataSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataRelationCollection::DataSetRelationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataRelationCollection::DataSetRelationCollection*, creationType>(dataSet)));
    }
    // protected override System.Collections.ArrayList get_List()
    // Offset: 0x1E5A6E8
    // Implemented from: System.Data.InternalDataCollectionBase
    // Base method: System.Collections.ArrayList InternalDataCollectionBase::get_List()
    ::System::Collections::ArrayList* get_List();
    // public override System.Data.DataRelation get_Item(System.Int32 index)
    // Offset: 0x1E5A738
    // Implemented from: System.Data.DataRelationCollection
    // Base method: System.Data.DataRelation DataRelationCollection::get_Item(System.Int32 index)
    ::System::Data::DataRelation* get_Item(int index);
    // public override System.Data.DataRelation get_Item(System.String name)
    // Offset: 0x1E5A834
    // Implemented from: System.Data.DataRelationCollection
    // Base method: System.Data.DataRelation DataRelationCollection::get_Item(System.String name)
    ::System::Data::DataRelation* get_Item(::StringW name);
    // public override System.Void Clear()
    // Offset: 0x1E5A6F0
    // Implemented from: System.Data.DataRelationCollection
    // Base method: System.Void DataRelationCollection::Clear()
    void Clear();
    // protected override System.Data.DataSet GetDataSet()
    // Offset: 0x1E5A730
    // Implemented from: System.Data.DataRelationCollection
    // Base method: System.Data.DataSet DataRelationCollection::GetDataSet()
    ::System::Data::DataSet* GetDataSet();
    // protected override System.Void AddCore(System.Data.DataRelation relation)
    // Offset: 0x1E5A924
    // Implemented from: System.Data.DataRelationCollection
    // Base method: System.Void DataRelationCollection::AddCore(System.Data.DataRelation relation)
    void AddCore(::System::Data::DataRelation* relation);
    // protected override System.Void RemoveCore(System.Data.DataRelation relation)
    // Offset: 0x1E5AE44
    // Implemented from: System.Data.DataRelationCollection
    // Base method: System.Void DataRelationCollection::RemoveCore(System.Data.DataRelation relation)
    void RemoveCore(::System::Data::DataRelation* relation);
  }; // System.Data.DataRelationCollection/System.Data.DataSetRelationCollection
  #pragma pack(pop)
  static check_size<sizeof(DataRelationCollection::DataSetRelationCollection), 72 + sizeof(::ArrayW<::System::Data::DataRelation*>)> __System_Data_DataRelationCollection_DataSetRelationCollectionSizeCheck;
  static_assert(sizeof(DataRelationCollection::DataSetRelationCollection) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::get_List
// Il2CppName: get_List
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Data::DataRelationCollection::DataSetRelationCollection::*)()>(&System::Data::DataRelationCollection::DataSetRelationCollection::get_List)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "get_List", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (System::Data::DataRelationCollection::DataSetRelationCollection::*)(int)>(&System::Data::DataRelationCollection::DataSetRelationCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (System::Data::DataRelationCollection::DataSetRelationCollection::*)(::StringW)>(&System::Data::DataRelationCollection::DataSetRelationCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::DataSetRelationCollection::*)()>(&System::Data::DataRelationCollection::DataSetRelationCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::GetDataSet
// Il2CppName: GetDataSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataSet* (System::Data::DataRelationCollection::DataSetRelationCollection::*)()>(&System::Data::DataRelationCollection::DataSetRelationCollection::GetDataSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "GetDataSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::AddCore
// Il2CppName: AddCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::DataSetRelationCollection::*)(::System::Data::DataRelation*)>(&System::Data::DataRelationCollection::DataSetRelationCollection::AddCore)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "AddCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationCollection::DataSetRelationCollection::RemoveCore
// Il2CppName: RemoveCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationCollection::DataSetRelationCollection::*)(::System::Data::DataRelation*)>(&System::Data::DataRelationCollection::DataSetRelationCollection::RemoveCore)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationCollection::DataSetRelationCollection*), "RemoveCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
