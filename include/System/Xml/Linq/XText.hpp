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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XText
  class XText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XText);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XText*, "System.Xml.Linq", "XText");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XText
  // [TokenAttribute] Offset: FFFFFFFF
  class XText : public ::System::Xml::Linq::XNode {
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
    // System.String text
    // Size: 0x8
    // Offset: 0x28
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Xml::Linq::XNode*
    constexpr operator ::System::Xml::Linq::XNode*() const noexcept = delete;
    // Get instance field reference: System.String text
    ::StringW& dyn_text();
    // public System.String get_Value()
    // Offset: 0x29E79B8
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x29E2354
    void set_Value(::StringW value);
    // public System.Void .ctor(System.String value)
    // Offset: 0x29E098C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XText* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XText*, creationType>(value)));
    }
    // public System.Void .ctor(System.Xml.Linq.XText other)
    // Offset: 0x29E0A2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XText* New_ctor(::System::Xml::Linq::XText* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XText*, creationType>(other)));
    }
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x29E79B0
    // Implemented from: System.Xml.Linq.XObject
    // Base method: System.Xml.XmlNodeType XObject::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x29E79C0
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::WriteTo(System.Xml.XmlWriter writer)
    void WriteTo(::System::Xml::XmlWriter* writer);
    // override System.Void AppendText(System.Text.StringBuilder sb)
    // Offset: 0x29E7AB4
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Void XNode::AppendText(System.Text.StringBuilder sb)
    void AppendText(::System::Text::StringBuilder* sb);
    // override System.Xml.Linq.XNode CloneNode()
    // Offset: 0x29E7AD8
    // Implemented from: System.Xml.Linq.XNode
    // Base method: System.Xml.Linq.XNode XNode::CloneNode()
    ::System::Xml::Linq::XNode* CloneNode();
  }; // System.Xml.Linq.XText
  #pragma pack(pop)
  static check_size<sizeof(XText), 40 + sizeof(::StringW)> __System_Xml_Linq_XTextSizeCheck;
  static_assert(sizeof(XText) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XText::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XText::*)()>(&System::Xml::Linq::XText::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XText*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XText::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XText::*)(::StringW)>(&System::Xml::Linq::XText::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XText*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XText::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::Linq::XText::*)()>(&System::Xml::Linq::XText::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XText*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XText::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XText::*)(::System::Xml::XmlWriter*)>(&System::Xml::Linq::XText::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XText*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XText::AppendText
// Il2CppName: AppendText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XText::*)(::System::Text::StringBuilder*)>(&System::Xml::Linq::XText::AppendText)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XText*), "AppendText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XText::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XText::*)()>(&System::Xml::Linq::XText::CloneNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XText*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
