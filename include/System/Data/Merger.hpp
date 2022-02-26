// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.MissingSchemaAction
#include "System/Data/MissingSchemaAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataSet
  class DataSet;
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: DataRelation
  class DataRelation;
  // Forward declaring type: PropertyCollection
  class PropertyCollection;
  // Forward declaring type: DataKey
  struct DataKey;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: Merger
  class Merger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Merger);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Merger*, "System.Data", "Merger");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Merger
  // [TokenAttribute] Offset: FFFFFFFF
  class Merger : public ::Il2CppObject {
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
    // private System.Data.DataSet _dataSet
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataSet* dataSet;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    // private System.Data.DataTable _dataTable
    // Size: 0x8
    // Offset: 0x18
    ::System::Data::DataTable* dataTable;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // private System.Boolean _preserveChanges
    // Size: 0x1
    // Offset: 0x20
    bool preserveChanges;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: preserveChanges and: missingSchemaAction
    char __padding2[0x3] = {};
    // private System.Data.MissingSchemaAction _missingSchemaAction
    // Size: 0x4
    // Offset: 0x24
    ::System::Data::MissingSchemaAction missingSchemaAction;
    // Field size check
    static_assert(sizeof(::System::Data::MissingSchemaAction) == 0x4);
    // private System.Boolean _isStandAlonetable
    // Size: 0x1
    // Offset: 0x28
    bool isStandAlonetable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _IgnoreNSforTableLookup
    // Size: 0x1
    // Offset: 0x29
    bool IgnoreNSforTableLookup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Data.DataSet _dataSet
    ::System::Data::DataSet*& dyn__dataSet();
    // Get instance field reference: private System.Data.DataTable _dataTable
    ::System::Data::DataTable*& dyn__dataTable();
    // Get instance field reference: private System.Boolean _preserveChanges
    bool& dyn__preserveChanges();
    // Get instance field reference: private System.Data.MissingSchemaAction _missingSchemaAction
    ::System::Data::MissingSchemaAction& dyn__missingSchemaAction();
    // Get instance field reference: private System.Boolean _isStandAlonetable
    bool& dyn__isStandAlonetable();
    // Get instance field reference: private System.Boolean _IgnoreNSforTableLookup
    bool& dyn__IgnoreNSforTableLookup();
    // System.Void .ctor(System.Data.DataSet dataSet, System.Boolean preserveChanges, System.Data.MissingSchemaAction missingSchemaAction)
    // Offset: 0x198DE4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Merger* New_ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Merger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Merger*, creationType>(dataSet, preserveChanges, missingSchemaAction)));
    }
    // System.Void .ctor(System.Data.DataTable dataTable, System.Boolean preserveChanges, System.Data.MissingSchemaAction missingSchemaAction)
    // Offset: 0x198DEA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Merger* New_ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Merger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Merger*, creationType>(dataTable, preserveChanges, missingSchemaAction)));
    }
    // System.Void MergeDataSet(System.Data.DataSet source)
    // Offset: 0x198DF04
    void MergeDataSet(::System::Data::DataSet* source);
    // System.Void MergeTable(System.Data.DataTable src)
    // Offset: 0x198F934
    void MergeTable(::System::Data::DataTable* src);
    // private System.Void MergeTable(System.Data.DataTable src, System.Data.DataTable dst)
    // Offset: 0x198FBB4
    void MergeTable(::System::Data::DataTable* src, ::System::Data::DataTable* dst);
    // private System.Data.DataTable MergeSchema(System.Data.DataTable table)
    // Offset: 0x19900FC
    ::System::Data::DataTable* MergeSchema(::System::Data::DataTable* table);
    // private System.Void MergeTableData(System.Data.DataTable src)
    // Offset: 0x198EE58
    void MergeTableData(::System::Data::DataTable* src);
    // private System.Void MergeConstraints(System.Data.DataSet source)
    // Offset: 0x198EED4
    void MergeConstraints(::System::Data::DataSet* source);
    // private System.Void MergeConstraints(System.Data.DataTable table)
    // Offset: 0x19907CC
    void MergeConstraints(::System::Data::DataTable* table);
    // private System.Void MergeRelation(System.Data.DataRelation relation)
    // Offset: 0x198EF50
    void MergeRelation(::System::Data::DataRelation* relation);
    // private System.Void MergeExtendedProperties(System.Data.PropertyCollection src, System.Data.PropertyCollection dst)
    // Offset: 0x198F6C4
    void MergeExtendedProperties(::System::Data::PropertyCollection* src, ::System::Data::PropertyCollection* dst);
    // private System.Data.DataKey GetSrcKey(System.Data.DataTable src, System.Data.DataTable dst)
    // Offset: 0x198FFA0
    ::System::Data::DataKey GetSrcKey(::System::Data::DataTable* src, ::System::Data::DataTable* dst);
  }; // System.Data.Merger
  #pragma pack(pop)
  static check_size<sizeof(Merger), 41 + sizeof(bool)> __System_Data_MergerSizeCheck;
  static_assert(sizeof(Merger) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Merger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Merger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Merger::MergeDataSet
// Il2CppName: MergeDataSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataSet*)>(&System::Data::Merger::MergeDataSet)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeDataSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeTable
// Il2CppName: MergeTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataTable*)>(&System::Data::Merger::MergeTable)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeTable
// Il2CppName: MergeTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(&System::Data::Merger::MergeTable)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeSchema
// Il2CppName: MergeSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::Merger::*)(::System::Data::DataTable*)>(&System::Data::Merger::MergeSchema)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeTableData
// Il2CppName: MergeTableData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataTable*)>(&System::Data::Merger::MergeTableData)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeTableData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeConstraints
// Il2CppName: MergeConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataSet*)>(&System::Data::Merger::MergeConstraints)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeConstraints
// Il2CppName: MergeConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataTable*)>(&System::Data::Merger::MergeConstraints)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeRelation
// Il2CppName: MergeRelation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::DataRelation*)>(&System::Data::Merger::MergeRelation)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeRelation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::MergeExtendedProperties
// Il2CppName: MergeExtendedProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Merger::*)(::System::Data::PropertyCollection*, ::System::Data::PropertyCollection*)>(&System::Data::Merger::MergeExtendedProperties)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System.Data", "PropertyCollection")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("System.Data", "PropertyCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "MergeExtendedProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: System::Data::Merger::GetSrcKey
// Il2CppName: GetSrcKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataKey (System::Data::Merger::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(&System::Data::Merger::GetSrcKey)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Merger*), "GetSrcKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
