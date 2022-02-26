// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWriter
#include "System/Xml/XmlWriter.hpp"
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
  // Forward declaring type: XmlRawWriterBase64Encoder
  class XmlRawWriterBase64Encoder;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
  // Forward declaring type: XmlStandalone
  struct XmlStandalone;
  // Forward declaring type: ConformanceLevel
  struct ConformanceLevel;
  // Forward declaring type: WriteState
  struct WriteState;
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlRawWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlRawWriter*, "System.Xml", "XmlRawWriter");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlRawWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlRawWriter : public ::System::Xml::XmlWriter {
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
    // protected System.Xml.XmlRawWriterBase64Encoder base64Encoder
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlRawWriterBase64Encoder* base64Encoder;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlRawWriterBase64Encoder*) == 0x8);
    // protected System.Xml.IXmlNamespaceResolver resolver
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::IXmlNamespaceResolver* resolver;
    // Field size check
    static_assert(sizeof(::System::Xml::IXmlNamespaceResolver*) == 0x8);
    public:
    // Deleting conversion operator: operator ::ArrayW<::Il2CppChar>
    constexpr operator ::ArrayW<::Il2CppChar>() const noexcept = delete;
    // Get instance field reference: protected System.Xml.XmlRawWriterBase64Encoder base64Encoder
    ::System::Xml::XmlRawWriterBase64Encoder*& dyn_base64Encoder();
    // Get instance field reference: protected System.Xml.IXmlNamespaceResolver resolver
    ::System::Xml::IXmlNamespaceResolver*& dyn_resolver();
    // System.Void set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    // Offset: 0x14D79C0
    void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);
    // System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x14D79E4
    bool get_SupportsNamespaceDeclarationInChunks();
    // System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x14D79C8
    void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);
    // System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x14D79CC
    void WriteXmlDeclaration(::StringW xmldecl);
    // System.Void StartElementContent()
    // Offset: 0xFFFFFFFF
    void StartElementContent();
    // System.Void OnRootElement(System.Xml.ConformanceLevel conformanceLevel)
    // Offset: 0x14D79D0
    void OnRootElement(::System::Xml::ConformanceLevel conformanceLevel);
    // System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0xFFFFFFFF
    void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14D79D4
    void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);
    // System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0xFFFFFFFF
    void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);
    // System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x14D79EC
    void WriteStartNamespaceDeclaration(::StringW prefix);
    // System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x14D7A4C
    void WriteEndNamespaceDeclaration();
    // System.Void WriteEndBase64()
    // Offset: 0x14D7AAC
    void WriteEndBase64();
    // System.Void Close(System.Xml.WriteState currentState)
    // Offset: 0x14D7AC8
    void Close(::System::Xml::WriteState currentState);
    // public override System.Xml.WriteState get_WriteState()
    // Offset: 0x14D7630
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Xml.WriteState XmlWriter::get_WriteState()
    ::System::Xml::WriteState get_WriteState();
    // protected System.Void .ctor()
    // Offset: 0x14D7AD8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlRawWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlRawWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlRawWriter*, creationType>()));
    }
    // public override System.Void WriteStartDocument()
    // Offset: 0x14D725C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartDocument()
    void WriteStartDocument();
    // public override System.Void WriteStartDocument(System.Boolean standalone)
    // Offset: 0x14D72DC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartDocument(System.Boolean standalone)
    void WriteStartDocument(bool standalone);
    // public override System.Void WriteEndDocument()
    // Offset: 0x14D735C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndDocument()
    void WriteEndDocument();
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x14D73DC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);
    // public override System.Void WriteEndElement()
    // Offset: 0x14D73E0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndElement()
    void WriteEndElement();
    // public override System.Void WriteFullEndElement()
    // Offset: 0x14D7460
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteFullEndElement()
    void WriteFullEndElement();
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14D74E0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::ArrayW<uint8_t> buffer, int index, int count);
    // public override System.String LookupPrefix(System.String ns)
    // Offset: 0x14D75B0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.String XmlWriter::LookupPrefix(System.String ns)
    ::StringW LookupPrefix(::StringW ns);
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x14D76B0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteCData(System.String text)
    void WriteCData(::StringW text);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x14D76C0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x14D7764
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x14D7818
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::StringW ws);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14D7828
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14D7864
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x14D78A0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteRaw(System.String data)
    void WriteRaw(::StringW data);
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x14D78B0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteValue(System.String value)
    void WriteValue(::StringW value);
    // public override System.Void WriteAttributes(System.Xml.XmlReader reader, System.Boolean defattr)
    // Offset: 0x14D78C0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteAttributes(System.Xml.XmlReader reader, System.Boolean defattr)
    void WriteAttributes(::System::Xml::XmlReader* reader, bool defattr);
    // public override System.Void WriteNode(System.Xml.XmlReader reader, System.Boolean defattr)
    // Offset: 0x14D7940
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteNode(System.Xml.XmlReader reader, System.Boolean defattr)
    void WriteNode(::System::Xml::XmlReader* reader, bool defattr);
  }; // System.Xml.XmlRawWriter
  #pragma pack(pop)
  static check_size<sizeof(XmlRawWriter), 32 + sizeof(::System::Xml::IXmlNamespaceResolver*)> __System_Xml_XmlRawWriterSizeCheck;
  static_assert(sizeof(XmlRawWriter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::set_NamespaceResolver
// Il2CppName: set_NamespaceResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::XmlRawWriter::set_NamespaceResolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "set_NamespaceResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::get_SupportsNamespaceDeclarationInChunks
// Il2CppName: get_SupportsNamespaceDeclarationInChunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::get_SupportsNamespaceDeclarationInChunks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "get_SupportsNamespaceDeclarationInChunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::System::Xml::XmlStandalone)>(&System::Xml::XmlRawWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlStandalone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* xmldecl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmldecl});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::StartElementContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::OnRootElement
// Il2CppName: OnRootElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::System::Xml::ConformanceLevel)>(&System::Xml::XmlRawWriter::OnRootElement)> {
  static const MethodInfo* get() {
    static auto* conformanceLevel = &::il2cpp_utils::GetClassFromName("System.Xml", "ConformanceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "OnRootElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{conformanceLevel});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlRawWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlRawWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteNamespaceDeclaration
// Il2CppName: WriteNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlRawWriter::WriteNamespaceDeclaration)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteStartNamespaceDeclaration
// Il2CppName: WriteStartNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::WriteStartNamespaceDeclaration)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteStartNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteEndNamespaceDeclaration
// Il2CppName: WriteEndNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::WriteEndNamespaceDeclaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteEndNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteEndBase64
// Il2CppName: WriteEndBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::WriteEndBase64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteEndBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::System::Xml::WriteState)>(&System::Xml::XmlRawWriter::Close)> {
  static const MethodInfo* get() {
    static auto* currentState = &::il2cpp_utils::GetClassFromName("System.Xml", "WriteState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentState});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::get_WriteState
// Il2CppName: get_WriteState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::WriteState (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::get_WriteState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "get_WriteState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteStartDocument
// Il2CppName: WriteStartDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::WriteStartDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteStartDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteStartDocument
// Il2CppName: WriteStartDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(bool)>(&System::Xml::XmlRawWriter::WriteStartDocument)> {
  static const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteStartDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteEndDocument
// Il2CppName: WriteEndDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::WriteEndDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteEndDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlRawWriter::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)()>(&System::Xml::XmlRawWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteBase64
// Il2CppName: WriteBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::XmlRawWriter::WriteBase64)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::WriteCData)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::Il2CppChar)>(&System::Xml::XmlRawWriter::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlRawWriter::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::WriteWhitespace)> {
  static const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlRawWriter::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlRawWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::StringW)>(&System::Xml::XmlRawWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteAttributes
// Il2CppName: WriteAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::System::Xml::XmlReader*, bool)>(&System::Xml::XmlRawWriter::WriteAttributes)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* defattr = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, defattr});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlRawWriter::WriteNode
// Il2CppName: WriteNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlRawWriter::*)(::System::Xml::XmlReader*, bool)>(&System::Xml::XmlRawWriter::WriteNode)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    static auto* defattr = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlRawWriter*), "WriteNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, defattr});
  }
};
