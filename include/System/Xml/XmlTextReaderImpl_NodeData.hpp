// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.Xml.XmlNodeType
#include "System/Xml/XmlNodeType.hpp"
// Including type: System.Xml.LineInfo
#include "System/Xml/LineInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::NodeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::NodeData*, "System.Xml", "XmlTextReaderImpl/NodeData");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.NodeData
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::NodeData : public ::Il2CppObject/*, public ::System::IComparable*/ {
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
    // System.Xml.XmlNodeType type
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::XmlNodeType type;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNodeType) == 0x4);
    // Padding between fields: type and: localName
    char __padding0[0x4] = {};
    // System.String localName
    // Size: 0x8
    // Offset: 0x18
    ::StringW localName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String prefix
    // Size: 0x8
    // Offset: 0x20
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String ns
    // Size: 0x8
    // Offset: 0x28
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String nameWPrefix
    // Size: 0x8
    // Offset: 0x30
    ::StringW nameWPrefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String value
    // Size: 0x8
    // Offset: 0x38
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Char[] chars
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Il2CppChar> chars;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 valueStartPos
    // Size: 0x4
    // Offset: 0x48
    int valueStartPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 valueLength
    // Size: 0x4
    // Offset: 0x4C
    int valueLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Xml.LineInfo lineInfo
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::LineInfo lineInfo;
    // Field size check
    static_assert(sizeof(::System::Xml::LineInfo) == 0x8);
    // System.Xml.LineInfo lineInfo2
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::LineInfo lineInfo2;
    // Field size check
    static_assert(sizeof(::System::Xml::LineInfo) == 0x8);
    // System.Char quoteChar
    // Size: 0x2
    // Offset: 0x60
    ::Il2CppChar quoteChar;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: quoteChar and: depth
    char __padding11[0x2] = {};
    // System.Int32 depth
    // Size: 0x4
    // Offset: 0x64
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isEmptyOrDefault
    // Size: 0x1
    // Offset: 0x68
    bool isEmptyOrDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEmptyOrDefault and: entityId
    char __padding13[0x3] = {};
    // System.Int32 entityId
    // Size: 0x4
    // Offset: 0x6C
    int entityId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean xmlContextPushed
    // Size: 0x1
    // Offset: 0x70
    bool xmlContextPushed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: xmlContextPushed and: nextAttrValueChunk
    char __padding15[0x7] = {};
    // System.Xml.XmlTextReaderImpl/System.Xml.NodeData nextAttrValueChunk
    // Size: 0x8
    // Offset: 0x78
    ::System::Xml::XmlTextReaderImpl::NodeData* nextAttrValueChunk;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlTextReaderImpl::NodeData*) == 0x8);
    // System.Object schemaType
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppObject* schemaType;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Object typedValue
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppObject* typedValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Get static field: static private System.Xml.XmlTextReaderImpl/System.Xml.NodeData s_None
    static ::System::Xml::XmlTextReaderImpl::NodeData* _get_s_None();
    // Set static field: static private System.Xml.XmlTextReaderImpl/System.Xml.NodeData s_None
    static void _set_s_None(::System::Xml::XmlTextReaderImpl::NodeData* value);
    // Get instance field reference: System.Xml.XmlNodeType type
    ::System::Xml::XmlNodeType& dyn_type();
    // Get instance field reference: System.String localName
    ::StringW& dyn_localName();
    // Get instance field reference: System.String prefix
    ::StringW& dyn_prefix();
    // Get instance field reference: System.String ns
    ::StringW& dyn_ns();
    // Get instance field reference: System.String nameWPrefix
    ::StringW& dyn_nameWPrefix();
    // Get instance field reference: private System.String value
    ::StringW& dyn_value();
    // Get instance field reference: private System.Char[] chars
    ::ArrayW<::Il2CppChar>& dyn_chars();
    // Get instance field reference: private System.Int32 valueStartPos
    int& dyn_valueStartPos();
    // Get instance field reference: private System.Int32 valueLength
    int& dyn_valueLength();
    // Get instance field reference: System.Xml.LineInfo lineInfo
    ::System::Xml::LineInfo& dyn_lineInfo();
    // Get instance field reference: System.Xml.LineInfo lineInfo2
    ::System::Xml::LineInfo& dyn_lineInfo2();
    // Get instance field reference: System.Char quoteChar
    ::Il2CppChar& dyn_quoteChar();
    // Get instance field reference: System.Int32 depth
    int& dyn_depth();
    // Get instance field reference: private System.Boolean isEmptyOrDefault
    bool& dyn_isEmptyOrDefault();
    // Get instance field reference: System.Int32 entityId
    int& dyn_entityId();
    // Get instance field reference: System.Boolean xmlContextPushed
    bool& dyn_xmlContextPushed();
    // Get instance field reference: System.Xml.XmlTextReaderImpl/System.Xml.NodeData nextAttrValueChunk
    ::System::Xml::XmlTextReaderImpl::NodeData*& dyn_nextAttrValueChunk();
    // Get instance field reference: System.Object schemaType
    ::Il2CppObject*& dyn_schemaType();
    // Get instance field reference: System.Object typedValue
    ::Il2CppObject*& dyn_typedValue();
    // static System.Xml.XmlTextReaderImpl/System.Xml.NodeData get_None()
    // Offset: 0x1BADE40
    static ::System::Xml::XmlTextReaderImpl::NodeData* get_None();
    // System.Int32 get_LineNo()
    // Offset: 0x1BADF9C
    int get_LineNo();
    // System.Int32 get_LinePos()
    // Offset: 0x1BADFA4
    int get_LinePos();
    // System.Boolean get_IsEmptyElement()
    // Offset: 0x1BADFAC
    bool get_IsEmptyElement();
    // System.Void set_IsEmptyElement(System.Boolean value)
    // Offset: 0x1BADFD0
    void set_IsEmptyElement(bool value);
    // System.Boolean get_IsDefaultAttribute()
    // Offset: 0x1BADFDC
    bool get_IsDefaultAttribute();
    // System.Void set_IsDefaultAttribute(System.Boolean value)
    // Offset: 0x1BAE000
    void set_IsDefaultAttribute(bool value);
    // System.Boolean get_ValueBuffered()
    // Offset: 0x1BAE00C
    bool get_ValueBuffered();
    // System.String get_StringValue()
    // Offset: 0x1BAE01C
    ::StringW get_StringValue();
    // System.Void TrimSpacesInValue()
    // Offset: 0x1BAE054
    void TrimSpacesInValue();
    // System.Void Clear(System.Xml.XmlNodeType type)
    // Offset: 0x1BADF14
    void Clear(::System::Xml::XmlNodeType type);
    // System.Void ClearName()
    // Offset: 0x1BAE0A0
    void ClearName();
    // System.Void SetLineInfo(System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1BAE11C
    void SetLineInfo(int lineNo, int linePos);
    // System.Void SetLineInfo2(System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1BAE128
    void SetLineInfo2(int lineNo, int linePos);
    // System.Void SetValueNode(System.Xml.XmlNodeType type, System.String value)
    // Offset: 0x1BAE134
    void SetValueNode(::System::Xml::XmlNodeType type, ::StringW value);
    // System.Void SetValueNode(System.Xml.XmlNodeType type, System.Char[] chars, System.Int32 startPos, System.Int32 len)
    // Offset: 0x1BAE168
    void SetValueNode(::System::Xml::XmlNodeType type, ::ArrayW<::Il2CppChar> chars, int startPos, int len);
    // System.Void SetNamedNode(System.Xml.XmlNodeType type, System.String localName)
    // Offset: 0x1BAE1A8
    void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName);
    // System.Void SetNamedNode(System.Xml.XmlNodeType type, System.String localName, System.String prefix, System.String nameWPrefix)
    // Offset: 0x1BAE21C
    void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName, ::StringW prefix, ::StringW nameWPrefix);
    // System.Void SetValue(System.String value)
    // Offset: 0x1BAE2B4
    void SetValue(::StringW value);
    // System.Void SetValue(System.Char[] chars, System.Int32 startPos, System.Int32 len)
    // Offset: 0x1BAE2C4
    void SetValue(::ArrayW<::Il2CppChar> chars, int startPos, int len);
    // System.Void OnBufferInvalidated()
    // Offset: 0x1BAE2D0
    void OnBufferInvalidated();
    // System.Void CopyTo(System.Int32 valueOffset, System.Text.StringBuilder sb)
    // Offset: 0x1BAE320
    void CopyTo(int valueOffset, ::System::Text::StringBuilder* sb);
    // System.Int32 CopyTo(System.Int32 valueOffset, System.Char[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x1BAE3A4
    int CopyTo(int valueOffset, ::ArrayW<::Il2CppChar> buffer, int offset, int length);
    // System.String GetNameWPrefix(System.Xml.XmlNameTable nt)
    // Offset: 0x1BAE410
    ::StringW GetNameWPrefix(::System::Xml::XmlNameTable* nt);
    // System.String CreateNameWPrefix(System.Xml.XmlNameTable nt)
    // Offset: 0x1BAE424
    ::StringW CreateNameWPrefix(::System::Xml::XmlNameTable* nt);
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0x1BAE4C0
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // System.Void .ctor()
    // Offset: 0x1BADEE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlTextReaderImpl::NodeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlTextReaderImpl::NodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlTextReaderImpl::NodeData*, creationType>()));
    }
  }; // System.Xml.XmlTextReaderImpl/System.Xml.NodeData
  #pragma pack(pop)
  static check_size<sizeof(XmlTextReaderImpl::NodeData), 136 + sizeof(::Il2CppObject*)> __System_Xml_XmlTextReaderImpl_NodeDataSizeCheck;
  static_assert(sizeof(XmlTextReaderImpl::NodeData) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlTextReaderImpl::NodeData* (*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_LineNo
// Il2CppName: get_LineNo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_LineNo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_LineNo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_LinePos
// Il2CppName: get_LinePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_LinePos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_LinePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_IsEmptyElement
// Il2CppName: get_IsEmptyElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_IsEmptyElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_IsEmptyElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::set_IsEmptyElement
// Il2CppName: set_IsEmptyElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(bool)>(&System::Xml::XmlTextReaderImpl::NodeData::set_IsEmptyElement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "set_IsEmptyElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_IsDefaultAttribute
// Il2CppName: get_IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::set_IsDefaultAttribute
// Il2CppName: set_IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(bool)>(&System::Xml::XmlTextReaderImpl::NodeData::set_IsDefaultAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "set_IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_ValueBuffered
// Il2CppName: get_ValueBuffered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_ValueBuffered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_ValueBuffered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::get_StringValue
// Il2CppName: get_StringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::get_StringValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "get_StringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::TrimSpacesInValue
// Il2CppName: TrimSpacesInValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::TrimSpacesInValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "TrimSpacesInValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlTextReaderImpl::NodeData::Clear)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::ClearName
// Il2CppName: ClearName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::ClearName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "ClearName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetLineInfo
// Il2CppName: SetLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(int, int)>(&System::Xml::XmlTextReaderImpl::NodeData::SetLineInfo)> {
  static const MethodInfo* get() {
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetLineInfo2
// Il2CppName: SetLineInfo2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(int, int)>(&System::Xml::XmlTextReaderImpl::NodeData::SetLineInfo2)> {
  static const MethodInfo* get() {
    static auto* lineNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* linePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetLineInfo2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineNo, linePos});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetValueNode
// Il2CppName: SetValueNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNodeType, ::StringW)>(&System::Xml::XmlTextReaderImpl::NodeData::SetValueNode)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetValueNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetValueNode
// Il2CppName: SetValueNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNodeType, ::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlTextReaderImpl::NodeData::SetValueNode)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetValueNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, chars, startPos, len});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetNamedNode
// Il2CppName: SetNamedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNodeType, ::StringW)>(&System::Xml::XmlTextReaderImpl::NodeData::SetNamedNode)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetNamedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, localName});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetNamedNode
// Il2CppName: SetNamedNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNodeType, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlTextReaderImpl::NodeData::SetNamedNode)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameWPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetNamedNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, localName, prefix, nameWPrefix});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::StringW)>(&System::Xml::XmlTextReaderImpl::NodeData::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlTextReaderImpl::NodeData::SetValue)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, startPos, len});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::OnBufferInvalidated
// Il2CppName: OnBufferInvalidated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)()>(&System::Xml::XmlTextReaderImpl::NodeData::OnBufferInvalidated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "OnBufferInvalidated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlTextReaderImpl::NodeData::*)(int, ::System::Text::StringBuilder*)>(&System::Xml::XmlTextReaderImpl::NodeData::CopyTo)> {
  static const MethodInfo* get() {
    static auto* valueOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueOffset, sb});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::NodeData::*)(int, ::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::XmlTextReaderImpl::NodeData::CopyTo)> {
  static const MethodInfo* get() {
    static auto* valueOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueOffset, buffer, offset, length});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::GetNameWPrefix
// Il2CppName: GetNameWPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNameTable*)>(&System::Xml::XmlTextReaderImpl::NodeData::GetNameWPrefix)> {
  static const MethodInfo* get() {
    static auto* nt = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "GetNameWPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nt});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::CreateNameWPrefix
// Il2CppName: CreateNameWPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlTextReaderImpl::NodeData::*)(::System::Xml::XmlNameTable*)>(&System::Xml::XmlTextReaderImpl::NodeData::CreateNameWPrefix)> {
  static const MethodInfo* get() {
    static auto* nt = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "CreateNameWPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nt});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::System_IComparable_CompareTo
// Il2CppName: System.IComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlTextReaderImpl::NodeData::*)(::Il2CppObject*)>(&System::Xml::XmlTextReaderImpl::NodeData::System_IComparable_CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlTextReaderImpl::NodeData*), "System.IComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlTextReaderImpl::NodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
