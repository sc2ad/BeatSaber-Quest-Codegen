// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlName
  class XmlName;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: IXmlSchemaInfo
  class IXmlSchemaInfo;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: DomNameTable
  class DomNameTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::DomNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DomNameTable*, "System.Xml", "DomNameTable");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.DomNameTable
  // [TokenAttribute] Offset: FFFFFFFF
  class DomNameTable : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.XmlName[] entries
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Xml::XmlName*> entries;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::XmlName*>) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 mask
    // Size: 0x4
    // Offset: 0x1C
    int mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Xml.XmlDocument ownerDocument
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlDocument* ownerDocument;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlDocument*) == 0x8);
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlName[] entries
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::XmlName*>& dyn_entries();
    // Get instance field reference: private System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: private System.Int32 mask
    [[deprecated("Use field access instead!")]] int& dyn_mask();
    // Get instance field reference: private System.Xml.XmlDocument ownerDocument
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlDocument*& dyn_ownerDocument();
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNameTable*& dyn_nameTable();
    // public System.Void .ctor(System.Xml.XmlDocument document)
    // Offset: 0x1AE00E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DomNameTable* New_ctor(::System::Xml::XmlDocument* document) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::DomNameTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DomNameTable*, creationType>(document)));
    }
    // public System.Xml.XmlName GetName(System.String prefix, System.String localName, System.String ns, System.Xml.Schema.IXmlSchemaInfo schemaInfo)
    // Offset: 0x1AE017C
    ::System::Xml::XmlName* GetName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
    // public System.Xml.XmlName AddName(System.String prefix, System.String localName, System.String ns, System.Xml.Schema.IXmlSchemaInfo schemaInfo)
    // Offset: 0x1AE02F4
    ::System::Xml::XmlName* AddName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
    // private System.Void Grow()
    // Offset: 0x1AE0574
    void Grow();
  }; // System.Xml.DomNameTable
  #pragma pack(pop)
  static check_size<sizeof(DomNameTable), 40 + sizeof(::System::Xml::XmlNameTable*)> __System_Xml_DomNameTableSizeCheck;
  static_assert(sizeof(DomNameTable) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::DomNameTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::DomNameTable::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&System::Xml::DomNameTable::GetName)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* schemaInfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "IXmlSchemaInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::DomNameTable*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns, schemaInfo});
  }
};
// Writing MetadataGetter for method: System::Xml::DomNameTable::AddName
// Il2CppName: AddName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo*)>(&System::Xml::DomNameTable::AddName)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* schemaInfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "IXmlSchemaInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::DomNameTable*), "AddName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns, schemaInfo});
  }
};
// Writing MetadataGetter for method: System::Xml::DomNameTable::Grow
// Il2CppName: Grow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::DomNameTable::*)()>(&System::Xml::DomNameTable::Grow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::DomNameTable*), "Grow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
