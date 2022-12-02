// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNode
#include "System/Xml/XmlNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlLinkedNode
  class XmlLinkedNode;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlDocument
  class XmlDocument;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlDocumentFragment
  class XmlDocumentFragment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlDocumentFragment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentFragment*, "System.Xml", "XmlDocumentFragment");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlDocumentFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDocumentFragment : public ::System::Xml::XmlNode {
    public:
    public:
    // private System.Xml.XmlLinkedNode lastChild
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::XmlLinkedNode* lastChild;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlLinkedNode*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::XmlNode*
    constexpr operator ::System::Xml::XmlNode*() const noexcept = delete;
    // Get instance field reference: private System.Xml.XmlLinkedNode lastChild
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlLinkedNode*& dyn_lastChild();
    // public override System.String get_Name()
    // Offset: 0x1C3EE78
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x1C3EEA4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x1C3EED0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Xml.XmlNode get_ParentNode()
    // Offset: 0x1C3EED8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::get_ParentNode()
    ::System::Xml::XmlNode* get_ParentNode();
    // public override System.Xml.XmlDocument get_OwnerDocument()
    // Offset: 0x1C3EEE0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlDocument XmlNode::get_OwnerDocument()
    ::System::Xml::XmlDocument* get_OwnerDocument();
    // public override System.Void set_InnerXml(System.String value)
    // Offset: 0x1C3EF60
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerXml(System.String value)
    void set_InnerXml(::StringW value);
    // override System.Boolean get_IsContainer()
    // Offset: 0x1C3F080
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsContainer()
    bool get_IsContainer();
    // override System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x1C3F088
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlLinkedNode XmlNode::get_LastNode()
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // override System.Void set_LastNode(System.Xml.XmlLinkedNode value)
    // Offset: 0x1C3F090
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_LastNode(System.Xml.XmlLinkedNode value)
    void set_LastNode(::System::Xml::XmlLinkedNode* value);
    // protected internal System.Void .ctor(System.Xml.XmlDocument ownerDocument)
    // Offset: 0x1C3D25C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::.ctor(System.Xml.XmlDocument ownerDocument)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDocumentFragment* New_ctor(::System::Xml::XmlDocument* ownerDocument) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlDocumentFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDocumentFragment*, creationType>(ownerDocument)));
    }
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x1C3EFF8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // override System.Boolean IsValidChildType(System.Xml.XmlNodeType type)
    // Offset: 0x1C3F098
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::IsValidChildType(System.Xml.XmlNodeType type)
    bool IsValidChildType(::System::Xml::XmlNodeType type);
    // override System.Boolean CanInsertAfter(System.Xml.XmlNode newChild, System.Xml.XmlNode refChild)
    // Offset: 0x1C3F108
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::CanInsertAfter(System.Xml.XmlNode newChild, System.Xml.XmlNode refChild)
    bool CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);
  }; // System.Xml.XmlDocumentFragment
  #pragma pack(pop)
  static check_size<sizeof(XmlDocumentFragment), 24 + sizeof(::System::Xml::XmlLinkedNode*)> __System_Xml_XmlDocumentFragmentSizeCheck;
  static_assert(sizeof(XmlDocumentFragment) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_ParentNode
// Il2CppName: get_ParentNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_ParentNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_ParentNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_OwnerDocument
// Il2CppName: get_OwnerDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_OwnerDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_OwnerDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::set_InnerXml
// Il2CppName: set_InnerXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDocumentFragment::*)(::StringW)>(&System::Xml::XmlDocumentFragment::set_InnerXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "set_InnerXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlDocumentFragment::*)()>(&System::Xml::XmlDocumentFragment::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::set_LastNode
// Il2CppName: set_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlLinkedNode*)>(&System::Xml::XmlDocumentFragment::set_LastNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlLinkedNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "set_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlDocumentFragment::*)(bool)>(&System::Xml::XmlDocumentFragment::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::IsValidChildType
// Il2CppName: IsValidChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlDocumentFragment::IsValidChildType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "IsValidChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentFragment::CanInsertAfter
// Il2CppName: CanInsertAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlDocumentFragment::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&System::Xml::XmlDocumentFragment::CanInsertAfter)> {
  static const MethodInfo* get() {
    static auto* newChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    static auto* refChild = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentFragment*), "CanInsertAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newChild, refChild});
  }
};
