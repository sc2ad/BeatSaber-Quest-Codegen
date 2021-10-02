// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWriter
#include "System/Xml/XmlWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: WriteState
  struct WriteState;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlAsyncCheckWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlAsyncCheckWriter : public System::Xml::XmlWriter {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Xml.XmlWriter coreWriter
    // Size: 0x8
    // Offset: 0x10
    System::Xml::XmlWriter* coreWriter;
    // Field size check
    static_assert(sizeof(System::Xml::XmlWriter*) == 0x8);
    // private System.Threading.Tasks.Task lastTask
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::Task* lastTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Xml.XmlWriter coreWriter
    System::Xml::XmlWriter*& dyn_coreWriter();
    // Get instance field reference: private System.Threading.Tasks.Task lastTask
    System::Threading::Tasks::Task*& dyn_lastTask();
    // public System.Void .ctor(System.Xml.XmlWriter writer)
    // Offset: 0x1AFE04C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAsyncCheckWriter* New_ctor(System::Xml::XmlWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlAsyncCheckWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAsyncCheckWriter*, creationType>(writer)));
    }
    // private System.Void CheckAsync()
    // Offset: 0x1AFE0D8
    void CheckAsync();
    // public override System.Xml.WriteState get_WriteState()
    // Offset: 0x1AFE708
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Xml.WriteState XmlWriter::get_WriteState()
    System::Xml::WriteState get_WriteState();
    // public override System.Void WriteStartDocument()
    // Offset: 0x1AFE170
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartDocument()
    void WriteStartDocument();
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x1AFE1A4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1AFE208
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndElement()
    // Offset: 0x1AFE25C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndElement()
    void WriteEndElement();
    // public override System.Void WriteFullEndElement()
    // Offset: 0x1AFE290
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteFullEndElement()
    void WriteFullEndElement();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1AFE2C4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x1AFE318
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x1AFE34C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x1AFE388
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1AFE3C8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x1AFE418
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x1AFE458
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x1AFE498
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x1AFE4D8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x1AFE518
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1AFE568
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1AFE5C0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x1AFE618
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1AFE658
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::ArrayW<uint8_t> buffer, int index, int count);
    // public override System.Void WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1AFE6B0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBinHex(::ArrayW<uint8_t> buffer, int index, int count);
    // public override System.Void Close()
    // Offset: 0x1AFE740
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x1AFE778
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
    // public override System.String LookupPrefix(System.String ns)
    // Offset: 0x1AFE7B0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.String XmlWriter::LookupPrefix(System.String ns)
    ::Il2CppString* LookupPrefix(::Il2CppString* ns);
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x1AFE7F0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteValue(System.String value)
    void WriteValue(::Il2CppString* value);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1AFE830
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Xml.XmlAsyncCheckWriter
  #pragma pack(pop)
  static check_size<sizeof(XmlAsyncCheckWriter), 24 + sizeof(System::Threading::Tasks::Task*)> __System_Xml_XmlAsyncCheckWriterSizeCheck;
  static_assert(sizeof(XmlAsyncCheckWriter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAsyncCheckWriter*, "System.Xml", "XmlAsyncCheckWriter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::CheckAsync
// Il2CppName: CheckAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::CheckAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "CheckAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::get_WriteState
// Il2CppName: get_WriteState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::WriteState (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::get_WriteState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "get_WriteState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteStartDocument
// Il2CppName: WriteStartDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::WriteStartDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteStartDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::WriteEndAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteCData)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteEntityRef)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppChar)>(&System::Xml::XmlAsyncCheckWriter::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteWhitespace)> {
  static const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlAsyncCheckWriter::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlAsyncCheckWriter::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlAsyncCheckWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteBase64
// Il2CppName: WriteBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::XmlAsyncCheckWriter::WriteBase64)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteBinHex
// Il2CppName: WriteBinHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::XmlAsyncCheckWriter::WriteBinHex)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteBinHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)()>(&System::Xml::XmlAsyncCheckWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(::Il2CppString*)>(&System::Xml::XmlAsyncCheckWriter::WriteValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAsyncCheckWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAsyncCheckWriter::*)(bool)>(&System::Xml::XmlAsyncCheckWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAsyncCheckWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
