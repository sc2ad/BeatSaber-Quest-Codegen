// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.SchemaType
#include "System/Xml/Schema/SchemaType.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: XmlNamespaceManager
  class XmlNamespaceManager;
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: PositionInfo
  class PositionInfo;
  // Forward declaring type: XmlResolver
  class XmlResolver;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlNode
  class XmlNode;
  // Forward declaring type: XmlElement
  class XmlElement;
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
  // Forward declaring type: XmlEntityReference
  class XmlEntityReference;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaNames
  class SchemaNames;
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
  // Forward declaring type: SchemaBuilder
  class SchemaBuilder;
  // Forward declaring type: XmlSchema
  class XmlSchema;
  // Forward declaring type: SchemaInfo
  class SchemaInfo;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Parser
  class Parser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Parser*, "System.Xml.Schema", "Parser");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Parser
  // [TokenAttribute] Offset: FFFFFFFF
  class Parser : public ::Il2CppObject {
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
    // private System.Xml.Schema.SchemaType schemaType
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::Schema::SchemaType schemaType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaType) == 0x4);
    // Padding between fields: schemaType and: nameTable
    char __padding0[0x4] = {};
    // private System.Xml.XmlNameTable nameTable
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlNameTable* nameTable;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNameTable*) == 0x8);
    // private System.Xml.Schema.SchemaNames schemaNames
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::SchemaNames* schemaNames;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaNames*) == 0x8);
    // private System.Xml.Schema.ValidationEventHandler eventHandler
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::ValidationEventHandler* eventHandler;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ValidationEventHandler*) == 0x8);
    // private System.Xml.XmlNamespaceManager namespaceManager
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::XmlNamespaceManager* namespaceManager;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNamespaceManager*) == 0x8);
    // private System.Xml.XmlReader reader
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::XmlReader* reader;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlReader*) == 0x8);
    // private System.Xml.PositionInfo positionInfo
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::PositionInfo* positionInfo;
    // Field size check
    static_assert(sizeof(::System::Xml::PositionInfo*) == 0x8);
    // private System.Boolean isProcessNamespaces
    // Size: 0x1
    // Offset: 0x48
    bool isProcessNamespaces;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isProcessNamespaces and: schemaXmlDepth
    char __padding7[0x3] = {};
    // private System.Int32 schemaXmlDepth
    // Size: 0x4
    // Offset: 0x4C
    int schemaXmlDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 markupDepth
    // Size: 0x4
    // Offset: 0x50
    int markupDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: markupDepth and: builder
    char __padding9[0x4] = {};
    // private System.Xml.Schema.SchemaBuilder builder
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::SchemaBuilder* builder;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaBuilder*) == 0x8);
    // private System.Xml.Schema.XmlSchema schema
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::XmlSchema* schema;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchema*) == 0x8);
    // private System.Xml.Schema.SchemaInfo xdrSchema
    // Size: 0x8
    // Offset: 0x68
    ::System::Xml::Schema::SchemaInfo* xdrSchema;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaInfo*) == 0x8);
    // private System.Xml.XmlResolver xmlResolver
    // Size: 0x8
    // Offset: 0x70
    ::System::Xml::XmlResolver* xmlResolver;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlResolver*) == 0x8);
    // private System.Xml.XmlDocument dummyDocument
    // Size: 0x8
    // Offset: 0x78
    ::System::Xml::XmlDocument* dummyDocument;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlDocument*) == 0x8);
    // private System.Boolean processMarkup
    // Size: 0x1
    // Offset: 0x80
    bool processMarkup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: processMarkup and: parentNode
    char __padding15[0x7] = {};
    // private System.Xml.XmlNode parentNode
    // Size: 0x8
    // Offset: 0x88
    ::System::Xml::XmlNode* parentNode;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNode*) == 0x8);
    // private System.Xml.XmlNamespaceManager annotationNSManager
    // Size: 0x8
    // Offset: 0x90
    ::System::Xml::XmlNamespaceManager* annotationNSManager;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNamespaceManager*) == 0x8);
    // private System.String xmlns
    // Size: 0x8
    // Offset: 0x98
    ::StringW xmlns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.XmlCharType xmlCharType
    // Size: 0x8
    // Offset: 0xA0
    ::System::Xml::XmlCharType xmlCharType;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlCharType) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.SchemaType schemaType
    ::System::Xml::Schema::SchemaType& dyn_schemaType();
    // Get instance field reference: private System.Xml.XmlNameTable nameTable
    ::System::Xml::XmlNameTable*& dyn_nameTable();
    // Get instance field reference: private System.Xml.Schema.SchemaNames schemaNames
    ::System::Xml::Schema::SchemaNames*& dyn_schemaNames();
    // Get instance field reference: private System.Xml.Schema.ValidationEventHandler eventHandler
    ::System::Xml::Schema::ValidationEventHandler*& dyn_eventHandler();
    // Get instance field reference: private System.Xml.XmlNamespaceManager namespaceManager
    ::System::Xml::XmlNamespaceManager*& dyn_namespaceManager();
    // Get instance field reference: private System.Xml.XmlReader reader
    ::System::Xml::XmlReader*& dyn_reader();
    // Get instance field reference: private System.Xml.PositionInfo positionInfo
    ::System::Xml::PositionInfo*& dyn_positionInfo();
    // Get instance field reference: private System.Boolean isProcessNamespaces
    bool& dyn_isProcessNamespaces();
    // Get instance field reference: private System.Int32 schemaXmlDepth
    int& dyn_schemaXmlDepth();
    // Get instance field reference: private System.Int32 markupDepth
    int& dyn_markupDepth();
    // Get instance field reference: private System.Xml.Schema.SchemaBuilder builder
    ::System::Xml::Schema::SchemaBuilder*& dyn_builder();
    // Get instance field reference: private System.Xml.Schema.XmlSchema schema
    ::System::Xml::Schema::XmlSchema*& dyn_schema();
    // Get instance field reference: private System.Xml.Schema.SchemaInfo xdrSchema
    ::System::Xml::Schema::SchemaInfo*& dyn_xdrSchema();
    // Get instance field reference: private System.Xml.XmlResolver xmlResolver
    ::System::Xml::XmlResolver*& dyn_xmlResolver();
    // Get instance field reference: private System.Xml.XmlDocument dummyDocument
    ::System::Xml::XmlDocument*& dyn_dummyDocument();
    // Get instance field reference: private System.Boolean processMarkup
    bool& dyn_processMarkup();
    // Get instance field reference: private System.Xml.XmlNode parentNode
    ::System::Xml::XmlNode*& dyn_parentNode();
    // Get instance field reference: private System.Xml.XmlNamespaceManager annotationNSManager
    ::System::Xml::XmlNamespaceManager*& dyn_annotationNSManager();
    // Get instance field reference: private System.String xmlns
    ::StringW& dyn_xmlns();
    // Get instance field reference: private System.Xml.XmlCharType xmlCharType
    ::System::Xml::XmlCharType& dyn_xmlCharType();
    // public System.Xml.Schema.XmlSchema get_XmlSchema()
    // Offset: 0x149F0A0
    ::System::Xml::Schema::XmlSchema* get_XmlSchema();
    // System.Void set_XmlResolver(System.Xml.XmlResolver value)
    // Offset: 0x149F0A8
    void set_XmlResolver(::System::Xml::XmlResolver* value);
    // public System.Xml.Schema.SchemaInfo get_XdrSchema()
    // Offset: 0x149F0B0
    ::System::Xml::Schema::SchemaInfo* get_XdrSchema();
    // public System.Void .ctor(System.Xml.Schema.SchemaType schemaType, System.Xml.XmlNameTable nameTable, System.Xml.Schema.SchemaNames schemaNames, System.Xml.Schema.ValidationEventHandler eventHandler)
    // Offset: 0x149E4B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser* New_ctor(::System::Xml::Schema::SchemaType schemaType, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Parser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser*, creationType>(schemaType, nameTable, schemaNames, eventHandler)));
    }
    // public System.Xml.Schema.SchemaType Parse(System.Xml.XmlReader reader, System.String targetNamespace)
    // Offset: 0x149E568
    ::System::Xml::Schema::SchemaType Parse(::System::Xml::XmlReader* reader, ::StringW targetNamespace);
    // public System.Void StartParsing(System.Xml.XmlReader reader, System.String targetNamespace)
    // Offset: 0x149E5BC
    void StartParsing(::System::Xml::XmlReader* reader, ::StringW targetNamespace);
    // private System.Boolean CheckSchemaRoot(System.Xml.Schema.SchemaType rootType, out System.String code)
    // Offset: 0x149EFAC
    bool CheckSchemaRoot(::System::Xml::Schema::SchemaType rootType, ByRef<::StringW> code);
    // public System.Xml.Schema.SchemaType FinishParsing()
    // Offset: 0x149F098
    ::System::Xml::Schema::SchemaType FinishParsing();
    // public System.Boolean ParseReaderNode()
    // Offset: 0x149E93C
    bool ParseReaderNode();
    // private System.Void ProcessAppInfoDocMarkup(System.Boolean root)
    // Offset: 0x149F0B8
    void ProcessAppInfoDocMarkup(bool root);
    // private System.Xml.XmlElement LoadElementNode(System.Boolean root)
    // Offset: 0x149F2E8
    ::System::Xml::XmlElement* LoadElementNode(bool root);
    // private System.Xml.XmlAttribute CreateXmlNsAttribute(System.String prefix, System.String value)
    // Offset: 0x149F86C
    ::System::Xml::XmlAttribute* CreateXmlNsAttribute(::StringW prefix, ::StringW value);
    // private System.Xml.XmlAttribute LoadAttributeNode()
    // Offset: 0x149F6D4
    ::System::Xml::XmlAttribute* LoadAttributeNode();
    // private System.Xml.XmlEntityReference LoadEntityReferenceInAttribute()
    // Offset: 0x149F990
    ::System::Xml::XmlEntityReference* LoadEntityReferenceInAttribute();
  }; // System.Xml.Schema.Parser
  #pragma pack(pop)
  static check_size<sizeof(Parser), 160 + sizeof(::System::Xml::XmlCharType)> __System_Xml_Schema_ParserSizeCheck;
  static_assert(sizeof(Parser) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Parser::get_XmlSchema
// Il2CppName: get_XmlSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Xml::Schema::Parser::*)()>(&System::Xml::Schema::Parser::get_XmlSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "get_XmlSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::set_XmlResolver
// Il2CppName: set_XmlResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Parser::*)(::System::Xml::XmlResolver*)>(&System::Xml::Schema::Parser::set_XmlResolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "set_XmlResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::get_XdrSchema
// Il2CppName: get_XdrSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaInfo* (System::Xml::Schema::Parser::*)()>(&System::Xml::Schema::Parser::get_XdrSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "get_XdrSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Parser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaType (System::Xml::Schema::Parser::*)(::System::Xml::XmlReader*, ::StringW)>(&System::Xml::Schema::Parser::Parse)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* targetNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, targetNamespace});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::StartParsing
// Il2CppName: StartParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Parser::*)(::System::Xml::XmlReader*, ::StringW)>(&System::Xml::Schema::Parser::StartParsing)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* targetNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "StartParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, targetNamespace});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::CheckSchemaRoot
// Il2CppName: CheckSchemaRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Parser::*)(::System::Xml::Schema::SchemaType, ByRef<::StringW>)>(&System::Xml::Schema::Parser::CheckSchemaRoot)> {
  static const MethodInfo* get() {
    static auto* rootType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaType")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "CheckSchemaRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootType, code});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::FinishParsing
// Il2CppName: FinishParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaType (System::Xml::Schema::Parser::*)()>(&System::Xml::Schema::Parser::FinishParsing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "FinishParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::ParseReaderNode
// Il2CppName: ParseReaderNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Parser::*)()>(&System::Xml::Schema::Parser::ParseReaderNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "ParseReaderNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::ProcessAppInfoDocMarkup
// Il2CppName: ProcessAppInfoDocMarkup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Parser::*)(bool)>(&System::Xml::Schema::Parser::ProcessAppInfoDocMarkup)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "ProcessAppInfoDocMarkup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::LoadElementNode
// Il2CppName: LoadElementNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (System::Xml::Schema::Parser::*)(bool)>(&System::Xml::Schema::Parser::LoadElementNode)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "LoadElementNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::CreateXmlNsAttribute
// Il2CppName: CreateXmlNsAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::Schema::Parser::*)(::StringW, ::StringW)>(&System::Xml::Schema::Parser::CreateXmlNsAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "CreateXmlNsAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::LoadAttributeNode
// Il2CppName: LoadAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::Schema::Parser::*)()>(&System::Xml::Schema::Parser::LoadAttributeNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "LoadAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Parser::LoadEntityReferenceInAttribute
// Il2CppName: LoadEntityReferenceInAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlEntityReference* (System::Xml::Schema::Parser::*)()>(&System::Xml::Schema::Parser::LoadEntityReferenceInAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Parser*), "LoadEntityReferenceInAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
