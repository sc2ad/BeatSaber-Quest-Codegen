// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Xml.Schema.XmlSchemaForm
#include "System/Xml/Schema/XmlSchemaForm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlElementAttribute
  class XmlElementAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementAttribute*, "System.Xml.Serialization", "XmlElementAttribute");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlElementAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 119443C
  class XmlElementAttribute : public ::System::Attribute {
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
    // private System.String dataType
    // Size: 0x8
    // Offset: 0x10
    ::StringW dataType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String elementName
    // Size: 0x8
    // Offset: 0x18
    ::StringW elementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaForm form
    // Size: 0x4
    // Offset: 0x20
    ::System::Xml::Schema::XmlSchemaForm form;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaForm) == 0x4);
    // Padding between fields: form and: ns
    char __padding2[0x4] = {};
    // private System.String ns
    // Size: 0x8
    // Offset: 0x28
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean isNullable
    // Size: 0x1
    // Offset: 0x30
    bool isNullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isNullable and: type
    char __padding4[0x7] = {};
    // private System.Type type
    // Size: 0x8
    // Offset: 0x38
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Int32 order
    // Size: 0x4
    // Offset: 0x40
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String dataType
    ::StringW& dyn_dataType();
    // Get instance field reference: private System.String elementName
    ::StringW& dyn_elementName();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaForm form
    ::System::Xml::Schema::XmlSchemaForm& dyn_form();
    // Get instance field reference: private System.String ns
    ::StringW& dyn_ns();
    // Get instance field reference: private System.Boolean isNullable
    bool& dyn_isNullable();
    // Get instance field reference: private System.Type type
    ::System::Type*& dyn_type();
    // Get instance field reference: private System.Int32 order
    int& dyn_order();
    // public System.String get_DataType()
    // Offset: 0x1954D9C
    ::StringW get_DataType();
    // public System.String get_ElementName()
    // Offset: 0x1954DF8
    ::StringW get_ElementName();
    // public System.Xml.Schema.XmlSchemaForm get_Form()
    // Offset: 0x1954E54
    ::System::Xml::Schema::XmlSchemaForm get_Form();
    // public System.String get_Namespace()
    // Offset: 0x1954E5C
    ::StringW get_Namespace();
    // public System.Boolean get_IsNullable()
    // Offset: 0x1954E64
    bool get_IsNullable();
    // public System.Int32 get_Order()
    // Offset: 0x1954E6C
    int get_Order();
    // public System.Type get_Type()
    // Offset: 0x1954E74
    ::System::Type* get_Type();
    // public System.Void .ctor(System.String elementName)
    // Offset: 0x1954D24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElementAttribute* New_ctor(::StringW elementName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlElementAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElementAttribute*, creationType>(elementName)));
    }
    // public System.Void .ctor(System.String elementName, System.Type type)
    // Offset: 0x1954D58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlElementAttribute* New_ctor(::StringW elementName, ::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlElementAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlElementAttribute*, creationType>(elementName, type)));
    }
    // System.Void AddKeyHash(System.Text.StringBuilder sb)
    // Offset: 0x1954E7C
    void AddKeyHash(::System::Text::StringBuilder* sb);
  }; // System.Xml.Serialization.XmlElementAttribute
  #pragma pack(pop)
  static check_size<sizeof(XmlElementAttribute), 64 + sizeof(int)> __System_Xml_Serialization_XmlElementAttributeSizeCheck;
  static_assert(sizeof(XmlElementAttribute) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_DataType
// Il2CppName: get_DataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_DataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_DataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_ElementName
// Il2CppName: get_ElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_ElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_ElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_Form
// Il2CppName: get_Form
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaForm (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_Form)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_Form", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Serialization::XmlElementAttribute::*)()>(&System::Xml::Serialization::XmlElementAttribute::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlElementAttribute::AddKeyHash
// Il2CppName: AddKeyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlElementAttribute::*)(::System::Text::StringBuilder*)>(&System::Xml::Serialization::XmlElementAttribute::AddKeyHash)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlElementAttribute*), "AddKeyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
