// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.DatatypeImplementation
#include "System/Xml/Schema/DatatypeImplementation.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap*, "System.Xml.Schema", "DatatypeImplementation/SchemaDatatypeMap");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DatatypeImplementation/System.Xml.Schema.SchemaDatatypeMap
  // [TokenAttribute] Offset: FFFFFFFF
  class DatatypeImplementation::SchemaDatatypeMap : public ::Il2CppObject/*, public ::System::IComparable*/ {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.DatatypeImplementation type
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::DatatypeImplementation* type;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::DatatypeImplementation*) == 0x8);
    // private System.Int32 parentIndex
    // Size: 0x4
    // Offset: 0x20
    int parentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: i_IComparable
    inline ::System::IComparable* i_IComparable() noexcept {
      return reinterpret_cast<::System::IComparable*>(this);
    }
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.Xml.Schema.DatatypeImplementation type
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::DatatypeImplementation*& dyn_type();
    // Get instance field reference: private System.Int32 parentIndex
    [[deprecated("Use field access instead!")]] int& dyn_parentIndex();
    // public System.String get_Name()
    // Offset: 0x1D06494
    ::StringW get_Name();
    // public System.Int32 get_ParentIndex()
    // Offset: 0x1D0649C
    int get_ParentIndex();
    // System.Void .ctor(System.String name, System.Xml.Schema.DatatypeImplementation type)
    // Offset: 0x1D06404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DatatypeImplementation::SchemaDatatypeMap* New_ctor(::StringW name, ::System::Xml::Schema::DatatypeImplementation* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DatatypeImplementation::SchemaDatatypeMap*, creationType>(name, type)));
    }
    // System.Void .ctor(System.String name, System.Xml.Schema.DatatypeImplementation type, System.Int32 parentIndex)
    // Offset: 0x1D0643C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DatatypeImplementation::SchemaDatatypeMap* New_ctor(::StringW name, ::System::Xml::Schema::DatatypeImplementation* type, int parentIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DatatypeImplementation::SchemaDatatypeMap*, creationType>(name, type, parentIndex)));
    }
    // static public System.Xml.Schema.DatatypeImplementation op_Explicit(System.Xml.Schema.DatatypeImplementation/System.Xml.Schema.SchemaDatatypeMap sdm)
    // Offset: 0x1D0647C
    explicit operator ::System::Xml::Schema::DatatypeImplementation*();
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x1D064A4
    int CompareTo(::Il2CppObject* obj);
  }; // System.Xml.Schema.DatatypeImplementation/System.Xml.Schema.SchemaDatatypeMap
  #pragma pack(pop)
  static check_size<sizeof(DatatypeImplementation::SchemaDatatypeMap), 32 + sizeof(int)> __System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMapSizeCheck;
  static_assert(sizeof(DatatypeImplementation::SchemaDatatypeMap) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::*)()>(&System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::get_ParentIndex
// Il2CppName: get_ParentIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::*)()>(&System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::get_ParentIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap*), "get_ParentIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::operator ::System::Xml::Schema::DatatypeImplementation*
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::*)(::Il2CppObject*)>(&System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DatatypeImplementation::SchemaDatatypeMap*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
