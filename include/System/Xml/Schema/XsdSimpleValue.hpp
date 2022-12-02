// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XsdSimpleValue
  class XsdSimpleValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XsdSimpleValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdSimpleValue*, "System.Xml.Schema", "XsdSimpleValue");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XsdSimpleValue
  // [TokenAttribute] Offset: FFFFFFFF
  class XsdSimpleValue : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaSimpleType xmlType
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::XmlSchemaSimpleType* xmlType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaSimpleType*) == 0x8);
    // private System.Object typedValue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* typedValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType xmlType
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaSimpleType*& dyn_xmlType();
    // Get instance field reference: private System.Object typedValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_typedValue();
    // public System.Xml.Schema.XmlSchemaSimpleType get_XmlType()
    // Offset: 0x21126E4
    ::System::Xml::Schema::XmlSchemaSimpleType* get_XmlType();
    // public System.Object get_TypedValue()
    // Offset: 0x21126EC
    ::Il2CppObject* get_TypedValue();
  }; // System.Xml.Schema.XsdSimpleValue
  #pragma pack(pop)
  static check_size<sizeof(XsdSimpleValue), 24 + sizeof(::Il2CppObject*)> __System_Xml_Schema_XsdSimpleValueSizeCheck;
  static_assert(sizeof(XsdSimpleValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XsdSimpleValue::get_XmlType
// Il2CppName: get_XmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (System::Xml::Schema::XsdSimpleValue::*)()>(&System::Xml::Schema::XsdSimpleValue::get_XmlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdSimpleValue*), "get_XmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdSimpleValue::get_TypedValue
// Il2CppName: get_TypedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XsdSimpleValue::*)()>(&System::Xml::Schema::XsdSimpleValue::get_TypedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdSimpleValue*), "get_TypedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
