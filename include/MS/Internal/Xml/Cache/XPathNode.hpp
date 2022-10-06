// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MS::Internal::Xml::Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNodeInfoAtom
  class XPathNodeInfoAtom;
  // Forward declaring type: XPathNodePageInfo
  class XPathNodePageInfo;
}
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNodeType
  struct XPathNodeType;
  // Forward declaring type: XPathDocument
  class XPathDocument;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNode
  struct XPathNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNode, "MS.Internal.Xml.Cache", "XPathNode");
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: MS.Internal.Xml.Cache.XPathNode
  // [TokenAttribute] Offset: FFFFFFFF
  struct XPathNode/*, public ::System::ValueType*/ {
    public:
    public:
    // private MS.Internal.Xml.Cache.XPathNodeInfoAtom info
    // Size: 0x8
    // Offset: 0x0
    ::MS::Internal::Xml::Cache::XPathNodeInfoAtom* info;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::Cache::XPathNodeInfoAtom*) == 0x8);
    // private System.UInt16 idxSibling
    // Size: 0x2
    // Offset: 0x8
    uint16_t idxSibling;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 idxParent
    // Size: 0x2
    // Offset: 0xA
    uint16_t idxParent;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 idxSimilar
    // Size: 0x2
    // Offset: 0xC
    uint16_t idxSimilar;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 posOffset
    // Size: 0x2
    // Offset: 0xE
    uint16_t posOffset;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt32 props
    // Size: 0x4
    // Offset: 0x10
    uint props;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: props and: value
    char __padding5[0x4] = {};
    // private System.String value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: XPathNode
    constexpr XPathNode(::MS::Internal::Xml::Cache::XPathNodeInfoAtom* info_ = {}, uint16_t idxSibling_ = {}, uint16_t idxParent_ = {}, uint16_t idxSimilar_ = {}, uint16_t posOffset_ = {}, uint props_ = {}, ::StringW value_ = {}) noexcept : info{info_}, idxSibling{idxSibling_}, idxParent{idxParent_}, idxSimilar{idxSimilar_}, posOffset{posOffset_}, props{props_}, value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNodeInfoAtom info
    [[deprecated("Use field access instead!")]] ::MS::Internal::Xml::Cache::XPathNodeInfoAtom*& dyn_info();
    // Get instance field reference: private System.UInt16 idxSibling
    [[deprecated("Use field access instead!")]] uint16_t& dyn_idxSibling();
    // Get instance field reference: private System.UInt16 idxParent
    [[deprecated("Use field access instead!")]] uint16_t& dyn_idxParent();
    // Get instance field reference: private System.UInt16 idxSimilar
    [[deprecated("Use field access instead!")]] uint16_t& dyn_idxSimilar();
    // Get instance field reference: private System.UInt16 posOffset
    [[deprecated("Use field access instead!")]] uint16_t& dyn_posOffset();
    // Get instance field reference: private System.UInt32 props
    [[deprecated("Use field access instead!")]] uint& dyn_props();
    // Get instance field reference: private System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // public System.Xml.XPath.XPathNodeType get_NodeType()
    // Offset: 0x1AB3D00
    ::System::Xml::XPath::XPathNodeType get_NodeType();
    // public System.String get_Prefix()
    // Offset: 0x1AB3E1C
    ::StringW get_Prefix();
    // public System.String get_LocalName()
    // Offset: 0x1AB3D54
    ::StringW get_LocalName();
    // public System.String get_NamespaceUri()
    // Offset: 0x1AB3DB8
    ::StringW get_NamespaceUri();
    // public System.Xml.XPath.XPathDocument get_Document()
    // Offset: 0x1AB3E88
    ::System::Xml::XPath::XPathDocument* get_Document();
    // public MS.Internal.Xml.Cache.XPathNodePageInfo get_PageInfo()
    // Offset: 0x1AB442C
    ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();
    // public System.Boolean get_IsXmlNamespaceNode()
    // Offset: 0x1AB40D8
    bool get_IsXmlNamespaceNode();
    // public System.Boolean get_HasSibling()
    // Offset: 0x1AB4448
    bool get_HasSibling();
    // public System.Boolean get_HasCollapsedText()
    // Offset: 0x1AB4458
    bool get_HasCollapsedText();
    // public System.Boolean get_IsText()
    // Offset: 0x1AB4464
    bool get_IsText();
    // public System.Boolean get_HasNamespaceDecls()
    // Offset: 0x1AB44D4
    bool get_HasNamespaceDecls();
    // public System.String get_Value()
    // Offset: 0x1AB44E0
    ::StringW get_Value();
    // public System.Int32 GetParent(out MS.Internal.Xml.Cache.XPathNode[] pageNode)
    // Offset: 0x1AB42A0
    int GetParent(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNode);
    // public System.Int32 GetSibling(out MS.Internal.Xml.Cache.XPathNode[] pageNode)
    // Offset: 0x1AB4168
    int GetSibling(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>> pageNode);
  }; // MS.Internal.Xml.Cache.XPathNode
  #pragma pack(pop)
  static check_size<sizeof(XPathNode), 24 + sizeof(::StringW)> __MS_Internal_Xml_Cache_XPathNodeSizeCheck;
  static_assert(sizeof(XPathNode) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNodeType (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_NamespaceUri
// Il2CppName: get_NamespaceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_NamespaceUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_NamespaceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_Document
// Il2CppName: get_Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathDocument* (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_Document)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_PageInfo
// Il2CppName: get_PageInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::Cache::XPathNodePageInfo* (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_PageInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_PageInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_IsXmlNamespaceNode
// Il2CppName: get_IsXmlNamespaceNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_IsXmlNamespaceNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_IsXmlNamespaceNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_HasSibling
// Il2CppName: get_HasSibling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_HasSibling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_HasSibling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_HasCollapsedText
// Il2CppName: get_HasCollapsedText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_HasCollapsedText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_HasCollapsedText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_IsText
// Il2CppName: get_IsText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_IsText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_IsText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_HasNamespaceDecls
// Il2CppName: get_HasNamespaceDecls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_HasNamespaceDecls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_HasNamespaceDecls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNode::*)()>(&MS::Internal::Xml::Cache::XPathNode::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::GetParent
// Il2CppName: GetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNode::*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&MS::Internal::Xml::Cache::XPathNode::GetParent)> {
  static const MethodInfo* get() {
    static auto* pageNode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "GetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageNode});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNode::GetSibling
// Il2CppName: GetSibling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNode::*)(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode>>)>(&MS::Internal::Xml::Cache::XPathNode::GetSibling)> {
  static const MethodInfo* get() {
    static auto* pageNode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("MS.Internal.Xml.Cache", "XPathNode"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNode), "GetSibling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pageNode});
  }
};
