// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaParticle
#include "System/Xml/Schema/XmlSchemaParticle.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentProcessing
#include "System/Xml/Schema/XmlSchemaContentProcessing.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: NamespaceList
  class NamespaceList;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaAny
  class XmlSchemaAny;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAny);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAny*, "System.Xml.Schema", "XmlSchemaAny");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaAny
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaAny : public ::System::Xml::Schema::XmlSchemaParticle {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    public:
    // private System.String ns
    // Size: 0x8
    // Offset: 0x38
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaContentProcessing processContents
    // Size: 0x4
    // Offset: 0x40
    ::System::Xml::Schema::XmlSchemaContentProcessing processContents;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentProcessing) == 0x4);
    // Padding between fields: processContents and: namespaceList
    char __padding1[0x4] = {};
    // private System.Xml.Schema.NamespaceList namespaceList
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::Schema::NamespaceList* namespaceList;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::NamespaceList*) == 0x8);
    public:
    // Get instance field reference: private System.String ns
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ns();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContentProcessing processContents
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaContentProcessing& dyn_processContents();
    // Get instance field reference: private System.Xml.Schema.NamespaceList namespaceList
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::NamespaceList*& dyn_namespaceList();
    // public System.Void set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing value)
    // Offset: 0x2104C38
    void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);
    // System.Xml.Schema.NamespaceList get_NamespaceList()
    // Offset: 0x2104C40
    ::System::Xml::Schema::NamespaceList* get_NamespaceList();
    // System.Void BuildNamespaceList(System.String targetNamespace)
    // Offset: 0x2104C48
    void BuildNamespaceList(::StringW targetNamespace);
    // public System.Void .ctor()
    // Offset: 0x2104CD0
    // Implemented from: System.Xml.Schema.XmlSchemaParticle
    // Base method: System.Void XmlSchemaParticle::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaAny* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaAny::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaAny*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaAny
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaAny), 72 + sizeof(::System::Xml::Schema::NamespaceList*)> __System_Xml_Schema_XmlSchemaAnySizeCheck;
  static_assert(sizeof(XmlSchemaAny) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAny::set_ProcessContents
// Il2CppName: set_ProcessContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAny::*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(&System::Xml::Schema::XmlSchemaAny::set_ProcessContents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaContentProcessing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAny*), "set_ProcessContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAny::get_NamespaceList
// Il2CppName: get_NamespaceList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (System::Xml::Schema::XmlSchemaAny::*)()>(&System::Xml::Schema::XmlSchemaAny::get_NamespaceList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAny*), "get_NamespaceList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAny::BuildNamespaceList
// Il2CppName: BuildNamespaceList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAny::*)(::StringW)>(&System::Xml::Schema::XmlSchemaAny::BuildNamespaceList)> {
  static const MethodInfo* get() {
    static auto* targetNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaAny*), "BuildNamespaceList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetNamespace});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaAny::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
