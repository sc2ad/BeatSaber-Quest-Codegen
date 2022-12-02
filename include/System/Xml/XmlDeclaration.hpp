// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlLinkedNode
#include "System/Xml/XmlLinkedNode.hpp"
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
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Skipping declaration: XmlNode because it is already included!
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlDeclaration
  class XmlDeclaration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDeclaration*, "System.Xml", "XmlDeclaration");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlDeclaration
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDeclaration : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.String version
    // Size: 0x8
    // Offset: 0x20
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String encoding
    // Size: 0x8
    // Offset: 0x28
    ::StringW encoding;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String standalone
    // Size: 0x8
    // Offset: 0x30
    ::StringW standalone;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String version
    [[deprecated("Use field access instead!")]] ::StringW& dyn_version();
    // Get instance field reference: private System.String encoding
    [[deprecated("Use field access instead!")]] ::StringW& dyn_encoding();
    // Get instance field reference: private System.String standalone
    [[deprecated("Use field access instead!")]] ::StringW& dyn_standalone();
    // public System.String get_Version()
    // Offset: 0x1C3B76C
    ::StringW get_Version();
    // System.Void set_Version(System.String value)
    // Offset: 0x1C3B774
    void set_Version(::StringW value);
    // public System.String get_Encoding()
    // Offset: 0x1C3B77C
    ::StringW get_Encoding();
    // public System.Void set_Encoding(System.String value)
    // Offset: 0x1C3B5B8
    void set_Encoding(::StringW value);
    // public System.String get_Standalone()
    // Offset: 0x1C3B784
    ::StringW get_Standalone();
    // public System.Void set_Standalone(System.String value)
    // Offset: 0x1C3B630
    void set_Standalone(::StringW value);
    // protected internal System.Void .ctor(System.String version, System.String encoding, System.String standalone, System.Xml.XmlDocument doc)
    // Offset: 0x1C3B3AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDeclaration* New_ctor(::StringW version, ::StringW encoding, ::StringW standalone, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlDeclaration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDeclaration*, creationType>(version, encoding, standalone, doc)));
    }
    // private System.Boolean IsValidXmlVersion(System.String ver)
    // Offset: 0x1C3B530
    bool IsValidXmlVersion(::StringW ver);
    // public override System.String get_Value()
    // Offset: 0x1C3B78C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x1C3B79C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.String get_InnerText()
    // Offset: 0x1C3B7AC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_InnerText()
    ::StringW get_InnerText();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x1C3B8F8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
    // public override System.String get_Name()
    // Offset: 0x1C3BAB8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x1C3BB00
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x1C3BB0C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x1C3BB14
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
  }; // System.Xml.XmlDeclaration
  #pragma pack(pop)
  static check_size<sizeof(XmlDeclaration), 48 + sizeof(::StringW)> __System_Xml_XmlDeclarationSizeCheck;
  static_assert(sizeof(XmlDeclaration) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::set_Version
// Il2CppName: set_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDeclaration::*)(::StringW)>(&System::Xml::XmlDeclaration::set_Version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "set_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::set_Encoding
// Il2CppName: set_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDeclaration::*)(::StringW)>(&System::Xml::XmlDeclaration::set_Encoding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "set_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_Standalone
// Il2CppName: get_Standalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_Standalone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_Standalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::set_Standalone
// Il2CppName: set_Standalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDeclaration::*)(::StringW)>(&System::Xml::XmlDeclaration::set_Standalone)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "set_Standalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::IsValidXmlVersion
// Il2CppName: IsValidXmlVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlDeclaration::*)(::StringW)>(&System::Xml::XmlDeclaration::IsValidXmlVersion)> {
  static const MethodInfo* get() {
    static auto* ver = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "IsValidXmlVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ver});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDeclaration::*)(::StringW)>(&System::Xml::XmlDeclaration::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_InnerText
// Il2CppName: get_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_InnerText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDeclaration::*)(::StringW)>(&System::Xml::XmlDeclaration::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlDeclaration::*)()>(&System::Xml::XmlDeclaration::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDeclaration::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlDeclaration::*)(bool)>(&System::Xml::XmlDeclaration::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDeclaration*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
