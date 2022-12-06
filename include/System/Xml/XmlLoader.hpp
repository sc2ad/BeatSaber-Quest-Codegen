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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlNode
  class XmlNode;
  // Forward declaring type: XmlAttribute
  class XmlAttribute;
  // Forward declaring type: XmlEntityReference
  class XmlEntityReference;
  // Forward declaring type: XmlDeclaration
  class XmlDeclaration;
  // Forward declaring type: XmlDocumentType
  class XmlDocumentType;
  // Forward declaring type: XmlResolver
  class XmlResolver;
  // Forward declaring type: IDtdInfo
  class IDtdInfo;
  // Forward declaring type: XmlParserContext
  class XmlParserContext;
  // Forward declaring type: XmlNamespaceManager
  class XmlNamespaceManager;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlElement
  class XmlElement;
  // Forward declaring type: XmlEntity
  class XmlEntity;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlLoader
  class XmlLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlLoader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlLoader*, "System.Xml", "XmlLoader");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlLoader : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.XmlDocument doc
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlDocument* doc;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlDocument*) == 0x8);
    // private System.Xml.XmlReader reader
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlReader* reader;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlReader*) == 0x8);
    // private System.Boolean preserveWhitespace
    // Size: 0x1
    // Offset: 0x20
    bool preserveWhitespace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Xml.XmlDocument doc
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlDocument*& dyn_doc();
    // Get instance field reference: private System.Xml.XmlReader reader
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlReader*& dyn_reader();
    // Get instance field reference: private System.Boolean preserveWhitespace
    [[deprecated("Use field access instead!")]] bool& dyn_preserveWhitespace();
    // public System.Void .ctor()
    // Offset: 0x160662C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlLoader*, creationType>()));
    }
    // System.Void Load(System.Xml.XmlDocument doc, System.Xml.XmlReader reader, System.Boolean preserveWhitespace)
    // Offset: 0x1609734
    void Load(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader, bool preserveWhitespace);
    // private System.Void LoadDocSequence(System.Xml.XmlDocument parentDoc)
    // Offset: 0x16099C8
    void LoadDocSequence(::System::Xml::XmlDocument* parentDoc);
    // private System.Xml.XmlNode LoadNode(System.Boolean skipOverWhitespace)
    // Offset: 0x1609A38
    ::System::Xml::XmlNode* LoadNode(bool skipOverWhitespace);
    // private System.Xml.XmlAttribute LoadAttributeNode()
    // Offset: 0x1609FC0
    ::System::Xml::XmlAttribute* LoadAttributeNode();
    // private System.Xml.XmlAttribute LoadDefaultAttribute()
    // Offset: 0x160A958
    ::System::Xml::XmlAttribute* LoadDefaultAttribute();
    // private System.Void LoadAttributeValue(System.Xml.XmlNode parent, System.Boolean direct)
    // Offset: 0x160AAFC
    void LoadAttributeValue(::System::Xml::XmlNode* parent, bool direct);
    // private System.Xml.XmlEntityReference LoadEntityReferenceNode(System.Boolean direct)
    // Offset: 0x160A2F8
    ::System::Xml::XmlEntityReference* LoadEntityReferenceNode(bool direct);
    // private System.Xml.XmlDeclaration LoadDeclarationNode()
    // Offset: 0x160A4E8
    ::System::Xml::XmlDeclaration* LoadDeclarationNode();
    // private System.Xml.XmlDocumentType LoadDocumentTypeNode()
    // Offset: 0x160A694
    ::System::Xml::XmlDocumentType* LoadDocumentTypeNode();
    // private System.Xml.XmlNode LoadNodeDirect()
    // Offset: 0x160AE04
    ::System::Xml::XmlNode* LoadNodeDirect();
    // private System.Xml.XmlAttribute LoadAttributeNodeDirect()
    // Offset: 0x160BE14
    ::System::Xml::XmlAttribute* LoadAttributeNodeDirect();
    // System.Void ParseDocumentType(System.Xml.XmlDocumentType dtNode)
    // Offset: 0x160BDA8
    void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode);
    // private System.Void ParseDocumentType(System.Xml.XmlDocumentType dtNode, System.Boolean bUseResolver, System.Xml.XmlResolver resolver)
    // Offset: 0x160C070
    void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, ::System::Xml::XmlResolver* resolver);
    // private System.Void LoadDocumentType(System.Xml.IDtdInfo dtdInfo, System.Xml.XmlDocumentType dtNode)
    // Offset: 0x160B3B4
    void LoadDocumentType(::System::Xml::IDtdInfo* dtdInfo, ::System::Xml::XmlDocumentType* dtNode);
    // private System.Xml.XmlParserContext GetContext(System.Xml.XmlNode node)
    // Offset: 0x160C8A0
    ::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode* node);
    // System.Xml.XmlNamespaceManager ParsePartialContent(System.Xml.XmlNode parentNode, System.String innerxmltext, System.Xml.XmlNodeType nt)
    // Offset: 0x160D0D4
    ::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode* parentNode, ::StringW innerxmltext, ::System::Xml::XmlNodeType nt);
    // System.Void LoadInnerXmlElement(System.Xml.XmlElement node, System.String innerxmltext)
    // Offset: 0x160D4EC
    void LoadInnerXmlElement(::System::Xml::XmlElement* node, ::StringW innerxmltext);
    // System.Void LoadInnerXmlAttribute(System.Xml.XmlAttribute node, System.String innerxmltext)
    // Offset: 0x160D810
    void LoadInnerXmlAttribute(::System::Xml::XmlAttribute* node, ::StringW innerxmltext);
    // private System.Void RemoveDuplicateNamespace(System.Xml.XmlElement elem, System.Xml.XmlNamespaceManager mgr, System.Boolean fCheckElemAttrs)
    // Offset: 0x160D570
    void RemoveDuplicateNamespace(::System::Xml::XmlElement* elem, ::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs);
    // private System.String EntitizeName(System.String name)
    // Offset: 0x160D818
    ::StringW EntitizeName(::StringW name);
    // System.Void ExpandEntity(System.Xml.XmlEntity ent)
    // Offset: 0x1606634
    void ExpandEntity(::System::Xml::XmlEntity* ent);
    // System.Void ExpandEntityReference(System.Xml.XmlEntityReference eref)
    // Offset: 0x1606AB8
    void ExpandEntityReference(::System::Xml::XmlEntityReference* eref);
    // private System.Xml.XmlReader CreateInnerXmlReader(System.String xmlFragment, System.Xml.XmlNodeType nt, System.Xml.XmlParserContext context, System.Xml.XmlDocument doc)
    // Offset: 0x160D298
    ::System::Xml::XmlReader* CreateInnerXmlReader(::StringW xmlFragment, ::System::Xml::XmlNodeType nt, ::System::Xml::XmlParserContext* context, ::System::Xml::XmlDocument* doc);
    // static System.Void ParseXmlDeclarationValue(System.String strValue, out System.String version, out System.String encoding, out System.String standalone)
    // Offset: 0x160B200
    static void ParseXmlDeclarationValue(::StringW strValue, ByRef<::StringW> version, ByRef<::StringW> encoding, ByRef<::StringW> standalone);
    // static System.Exception UnexpectedNodeType(System.Xml.XmlNodeType nodetype)
    // Offset: 0x160A83C
    static ::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType nodetype);
  }; // System.Xml.XmlLoader
  #pragma pack(pop)
  static check_size<sizeof(XmlLoader), 32 + sizeof(bool)> __System_Xml_XmlLoaderSizeCheck;
  static_assert(sizeof(XmlLoader) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlLoader::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, bool)>(&System::Xml::XmlLoader::Load)> {
  static const MethodInfo* get() {
    static auto* doc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* preserveWhitespace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{doc, reader, preserveWhitespace});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadDocSequence
// Il2CppName: LoadDocSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlDocument*)>(&System::Xml::XmlLoader::LoadDocSequence)> {
  static const MethodInfo* get() {
    static auto* parentDoc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadDocSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentDoc});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadNode
// Il2CppName: LoadNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlLoader::*)(bool)>(&System::Xml::XmlLoader::LoadNode)> {
  static const MethodInfo* get() {
    static auto* skipOverWhitespace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skipOverWhitespace});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadAttributeNode
// Il2CppName: LoadAttributeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlLoader::*)()>(&System::Xml::XmlLoader::LoadAttributeNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadAttributeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadDefaultAttribute
// Il2CppName: LoadDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlLoader::*)()>(&System::Xml::XmlLoader::LoadDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadAttributeValue
// Il2CppName: LoadAttributeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlNode*, bool)>(&System::Xml::XmlLoader::LoadAttributeValue)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* direct = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadAttributeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, direct});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadEntityReferenceNode
// Il2CppName: LoadEntityReferenceNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlEntityReference* (System::Xml::XmlLoader::*)(bool)>(&System::Xml::XmlLoader::LoadEntityReferenceNode)> {
  static const MethodInfo* get() {
    static auto* direct = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadEntityReferenceNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direct});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadDeclarationNode
// Il2CppName: LoadDeclarationNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDeclaration* (System::Xml::XmlLoader::*)()>(&System::Xml::XmlLoader::LoadDeclarationNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadDeclarationNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadDocumentTypeNode
// Il2CppName: LoadDocumentTypeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocumentType* (System::Xml::XmlLoader::*)()>(&System::Xml::XmlLoader::LoadDocumentTypeNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadDocumentTypeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadNodeDirect
// Il2CppName: LoadNodeDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlLoader::*)()>(&System::Xml::XmlLoader::LoadNodeDirect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadNodeDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadAttributeNodeDirect
// Il2CppName: LoadAttributeNodeDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlAttribute* (System::Xml::XmlLoader::*)()>(&System::Xml::XmlLoader::LoadAttributeNodeDirect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadAttributeNodeDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::ParseDocumentType
// Il2CppName: ParseDocumentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlDocumentType*)>(&System::Xml::XmlLoader::ParseDocumentType)> {
  static const MethodInfo* get() {
    static auto* dtNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocumentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "ParseDocumentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtNode});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::ParseDocumentType
// Il2CppName: ParseDocumentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlDocumentType*, bool, ::System::Xml::XmlResolver*)>(&System::Xml::XmlLoader::ParseDocumentType)> {
  static const MethodInfo* get() {
    static auto* dtNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocumentType")->byval_arg;
    static auto* bUseResolver = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* resolver = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "ParseDocumentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtNode, bUseResolver, resolver});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadDocumentType
// Il2CppName: LoadDocumentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::IDtdInfo*, ::System::Xml::XmlDocumentType*)>(&System::Xml::XmlLoader::LoadDocumentType)> {
  static const MethodInfo* get() {
    static auto* dtdInfo = &::il2cpp_utils::GetClassFromName("System.Xml", "IDtdInfo")->byval_arg;
    static auto* dtNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocumentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadDocumentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtdInfo, dtNode});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::GetContext
// Il2CppName: GetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlParserContext* (System::Xml::XmlLoader::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlLoader::GetContext)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "GetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::ParsePartialContent
// Il2CppName: ParsePartialContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNamespaceManager* (System::Xml::XmlLoader::*)(::System::Xml::XmlNode*, ::StringW, ::System::Xml::XmlNodeType)>(&System::Xml::XmlLoader::ParsePartialContent)> {
  static const MethodInfo* get() {
    static auto* parentNode = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* innerxmltext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nt = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "ParsePartialContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentNode, innerxmltext, nt});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadInnerXmlElement
// Il2CppName: LoadInnerXmlElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlElement*, ::StringW)>(&System::Xml::XmlLoader::LoadInnerXmlElement)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* innerxmltext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadInnerXmlElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, innerxmltext});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::LoadInnerXmlAttribute
// Il2CppName: LoadInnerXmlAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlAttribute*, ::StringW)>(&System::Xml::XmlLoader::LoadInnerXmlAttribute)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlAttribute")->byval_arg;
    static auto* innerxmltext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "LoadInnerXmlAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, innerxmltext});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::RemoveDuplicateNamespace
// Il2CppName: RemoveDuplicateNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlElement*, ::System::Xml::XmlNamespaceManager*, bool)>(&System::Xml::XmlLoader::RemoveDuplicateNamespace)> {
  static const MethodInfo* get() {
    static auto* elem = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlElement")->byval_arg;
    static auto* mgr = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNamespaceManager")->byval_arg;
    static auto* fCheckElemAttrs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "RemoveDuplicateNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elem, mgr, fCheckElemAttrs});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::EntitizeName
// Il2CppName: EntitizeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlLoader::*)(::StringW)>(&System::Xml::XmlLoader::EntitizeName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "EntitizeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::ExpandEntity
// Il2CppName: ExpandEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlEntity*)>(&System::Xml::XmlLoader::ExpandEntity)> {
  static const MethodInfo* get() {
    static auto* ent = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "ExpandEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ent});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::ExpandEntityReference
// Il2CppName: ExpandEntityReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLoader::*)(::System::Xml::XmlEntityReference*)>(&System::Xml::XmlLoader::ExpandEntityReference)> {
  static const MethodInfo* get() {
    static auto* eref = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlEntityReference")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "ExpandEntityReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eref});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::CreateInnerXmlReader
// Il2CppName: CreateInnerXmlReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (System::Xml::XmlLoader::*)(::StringW, ::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*, ::System::Xml::XmlDocument*)>(&System::Xml::XmlLoader::CreateInnerXmlReader)> {
  static const MethodInfo* get() {
    static auto* xmlFragment = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nt = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlParserContext")->byval_arg;
    static auto* doc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "CreateInnerXmlReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlFragment, nt, context, doc});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::ParseXmlDeclarationValue
// Il2CppName: ParseXmlDeclarationValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&System::Xml::XmlLoader::ParseXmlDeclarationValue)> {
  static const MethodInfo* get() {
    static auto* strValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "ParseXmlDeclarationValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strValue, version, encoding, standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlLoader::UnexpectedNodeType
// Il2CppName: UnexpectedNodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlLoader::UnexpectedNodeType)> {
  static const MethodInfo* get() {
    static auto* nodetype = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlLoader*), "UnexpectedNodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodetype});
  }
};
