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
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlCharacterData
  class XmlCharacterData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlCharacterData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCharacterData*, "System.Xml", "XmlCharacterData");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlCharacterData
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlCharacterData : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.String data
    // Size: 0x8
    // Offset: 0x20
    ::StringW data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String data
    [[deprecated("Use field access instead!")]] ::StringW& dyn_data();
    // public System.String get_Data()
    // Offset: 0x1BF2C30
    ::StringW get_Data();
    // public System.Void set_Data(System.String value)
    // Offset: 0x1BF2C8C
    void set_Data(::StringW value);
    // protected internal System.Void .ctor(System.String data, System.Xml.XmlDocument doc)
    // Offset: 0x1BF20B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlCharacterData* New_ctor(::StringW data, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlCharacterData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlCharacterData*, creationType>(data, doc)));
    }
    // System.Boolean CheckOnData(System.String data)
    // Offset: 0x1BF2D3C
    bool CheckOnData(::StringW data);
    // public override System.String get_Value()
    // Offset: 0x1BF2BF8
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Value()
    ::StringW get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x1BF2C08
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_Value(System.String value)
    void set_Value(::StringW value);
    // public override System.String get_InnerText()
    // Offset: 0x1BF2C18
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_InnerText()
    ::StringW get_InnerText();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x1BF2C24
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
  }; // System.Xml.XmlCharacterData
  #pragma pack(pop)
  static check_size<sizeof(XmlCharacterData), 32 + sizeof(::StringW)> __System_Xml_XmlCharacterDataSizeCheck;
  static_assert(sizeof(XmlCharacterData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlCharacterData::*)()>(&System::Xml::XmlCharacterData::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlCharacterData::*)(::StringW)>(&System::Xml::XmlCharacterData::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::CheckOnData
// Il2CppName: CheckOnData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharacterData::*)(::StringW)>(&System::Xml::XmlCharacterData::CheckOnData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "CheckOnData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlCharacterData::*)()>(&System::Xml::XmlCharacterData::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlCharacterData::*)(::StringW)>(&System::Xml::XmlCharacterData::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::get_InnerText
// Il2CppName: get_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlCharacterData::*)()>(&System::Xml::XmlCharacterData::get_InnerText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "get_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharacterData::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlCharacterData::*)(::StringW)>(&System::Xml::XmlCharacterData::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharacterData*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
