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
  // Forward declaring type: XmlEntityReference
  class XmlEntityReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlEntityReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntityReference*, "System.Xml", "XmlEntityReference");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlEntityReference
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlEntityReference : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.XmlLinkedNode lastChild
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlLinkedNode* lastChild;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlLinkedNode*) == 0x8);
    public:
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.Xml.XmlLinkedNode lastChild
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlLinkedNode*& dyn_lastChild();
    // System.String get_ChildBaseURI()
    // Offset: 0x160A5D8
    ::StringW get_ChildBaseURI();
    // protected internal System.Void .ctor(System.String name, System.Xml.XmlDocument doc)
    // Offset: 0x1609BF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlEntityReference* New_ctor(::StringW name, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlEntityReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlEntityReference*, creationType>(name, doc)));
    }
    // private System.String ConstructBaseURI(System.String baseURI, System.String systemId)
    // Offset: 0x160A4F0
    ::StringW ConstructBaseURI(::StringW baseURI, ::StringW systemId);
    // public override System.String get_Name()
    // Offset: 0x1609D34
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x1609D3C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_Value()
    // Offset: 0x1609D44
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x1609D4C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x1609DCC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x1609E18
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsReadOnly()
    bool get_IsReadOnly();
    // override System.Boolean get_IsContainer()
    // Offset: 0x1609E20
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsContainer()
    bool get_IsContainer();
    // override System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x160A488
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlLinkedNode XmlNode::get_LastNode()
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // override System.Void set_LastNode(System.Xml.XmlLinkedNode value)
    // Offset: 0x160A490
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_LastNode(System.Xml.XmlLinkedNode value)
    void set_LastNode(::System::Xml::XmlLinkedNode* value);
    // public override System.String get_BaseURI()
    // Offset: 0x160A4BC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_BaseURI()
    ::StringW get_BaseURI();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x1609DD4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // override System.Void SetParent(System.Xml.XmlNode node)
    // Offset: 0x1609E28
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::SetParent(System.Xml.XmlNode node)
    void SetParent(::System::Xml::XmlNode* node);
    // override System.Void SetParentForLoad(System.Xml.XmlNode node)
    // Offset: 0x160A478
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::SetParentForLoad(System.Xml.XmlNode node)
    void SetParentForLoad(::System::Xml::XmlNode* node);
    // override System.Boolean IsValidChildType(System.Xml.XmlNodeType type)
    // Offset: 0x160A498
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::IsValidChildType(System.Xml.XmlNodeType type)
    bool IsValidChildType(::System::Xml::XmlNodeType type);
  }; // System.Xml.XmlEntityReference
  #pragma pack(pop)
  static check_size<sizeof(XmlEntityReference), 40 + sizeof(::System::Xml::XmlLinkedNode*)> __System_Xml_XmlEntityReferenceSizeCheck;
  static_assert(sizeof(XmlEntityReference) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_ChildBaseURI
// Il2CppName: get_ChildBaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_ChildBaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_ChildBaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::ConstructBaseURI
// Il2CppName: ConstructBaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntityReference::*)(::StringW, ::StringW)>(&System::Xml::XmlEntityReference::ConstructBaseURI)> {
  static const MethodInfo* get() {
    static auto* baseURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* systemId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "ConstructBaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseURI, systemId});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntityReference::*)(::StringW)>(&System::Xml::XmlEntityReference::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::set_LastNode
// Il2CppName: set_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntityReference::*)(::System::Xml::XmlLinkedNode*)>(&System::Xml::XmlEntityReference::set_LastNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlLinkedNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "set_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::get_BaseURI
// Il2CppName: get_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntityReference::*)()>(&System::Xml::XmlEntityReference::get_BaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "get_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlEntityReference::*)(bool)>(&System::Xml::XmlEntityReference::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::SetParent
// Il2CppName: SetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntityReference::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlEntityReference::SetParent)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "SetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::SetParentForLoad
// Il2CppName: SetParentForLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntityReference::*)(::System::Xml::XmlNode*)>(&System::Xml::XmlEntityReference::SetParentForLoad)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "SetParentForLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntityReference::IsValidChildType
// Il2CppName: IsValidChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlEntityReference::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlEntityReference::IsValidChildType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntityReference*), "IsValidChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
