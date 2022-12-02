// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XNode
#include "System/Xml/Linq/XNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XComment
  class XComment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XComment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XComment*, "System.Xml.Linq", "XComment");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XComment
  // [TokenAttribute] Offset: FFFFFFFF
  class XComment : public ::System::Xml::Linq::XNode {
    public:
    public:
    // System.String value
    // Size: 0x8
    // Offset: 0x28
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::Linq::XNode*
    constexpr operator ::System::Xml::Linq::XNode*() const noexcept = delete;
    // Get instance field reference: System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // public System.String get_Value()
    // Offset: 0x2B2A028
    ::StringW get_Value();
    // public System.Void .ctor(System.String value)
    // Offset: 0x2B29EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XComment* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XComment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XComment*, creationType>(value)));
    }
    // public System.Void .ctor(System.Xml.Linq.XComment other)
    // Offset: 0x2B29F80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XComment* New_ctor(::System::Xml::Linq::XComment* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XComment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XComment*, creationType>(other)));
    }
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x2B2A020
    // Implemented from: System.Xml.Linq.XObject
    // Base method: System.Xml.XmlNodeType XObject::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x2B2A030
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::WriteTo(System.Xml.XmlWriter writer)
    void WriteTo(::System::Xml::XmlWriter* writer);
    // override System.Xml.Linq.XNode CloneNode()
    // Offset: 0x2B2A0D0
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Xml.Linq.XNode XNode::CloneNode()
    ::System::Xml::Linq::XNode* CloneNode();
  }; // System.Xml.Linq.XComment
  #pragma pack(pop)
  static check_size<sizeof(XComment), 40 + sizeof(::StringW)> __System_Xml_Linq_XCommentSizeCheck;
  static_assert(sizeof(XComment) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XComment::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XComment::*)()>(&System::Xml::Linq::XComment::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XComment*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XComment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XComment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XComment::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::Linq::XComment::*)()>(&System::Xml::Linq::XComment::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XComment*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XComment::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XComment::*)(::System::Xml::XmlWriter*)>(&System::Xml::Linq::XComment::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XComment*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XComment::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XComment::*)()>(&System::Xml::Linq::XComment::CloneNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XComment*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
