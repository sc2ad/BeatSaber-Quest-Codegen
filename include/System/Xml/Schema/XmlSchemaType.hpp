// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaAnnotated
#include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
// Including type: System.Xml.Schema.XmlSchemaDerivationMethod
#include "System/Xml/Schema/XmlSchemaDerivationMethod.hpp"
// Including type: System.Xml.Schema.XmlSchemaContentType
#include "System/Xml/Schema/XmlSchemaContentType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Forward declaring type: XmlSchemaComplexType
  class XmlSchemaComplexType;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaType*, "System.Xml.Schema", "XmlSchemaType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaType
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated {
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
    // private System.String name
    // Size: 0x8
    // Offset: 0x50
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.Schema.XmlSchemaDerivationMethod final
    // Size: 0x4
    // Offset: 0x58
    ::System::Xml::Schema::XmlSchemaDerivationMethod final;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDerivationMethod) == 0x4);
    // private System.Xml.Schema.XmlSchemaDerivationMethod derivedBy
    // Size: 0x4
    // Offset: 0x5C
    ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDerivationMethod) == 0x4);
    // private System.Xml.Schema.XmlSchemaType baseSchemaType
    // Size: 0x8
    // Offset: 0x60
    ::System::Xml::Schema::XmlSchemaType* baseSchemaType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaDatatype datatype
    // Size: 0x8
    // Offset: 0x68
    ::System::Xml::Schema::XmlSchemaDatatype* datatype;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDatatype*) == 0x8);
    // private System.Xml.Schema.XmlSchemaDerivationMethod finalResolved
    // Size: 0x4
    // Offset: 0x70
    ::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaDerivationMethod) == 0x4);
    // Padding between fields: finalResolved and: elementDecl
    char __padding5[0x4] = {};
    // private System.Xml.Schema.SchemaElementDecl elementDecl
    // Size: 0x8
    // Offset: 0x78
    ::System::Xml::Schema::SchemaElementDecl* elementDecl;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaElementDecl*) == 0x8);
    // private System.Xml.XmlQualifiedName qname
    // Size: 0x8
    // Offset: 0x80
    ::System::Xml::XmlQualifiedName* qname;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Xml.Schema.XmlSchemaType redefined
    // Size: 0x8
    // Offset: 0x88
    ::System::Xml::Schema::XmlSchemaType* redefined;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaType*) == 0x8);
    // private System.Xml.Schema.XmlSchemaContentType contentType
    // Size: 0x4
    // Offset: 0x90
    ::System::Xml::Schema::XmlSchemaContentType contentType;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaContentType) == 0x4);
    public:
    // Get instance field reference: private System.String name
    ::StringW& dyn_name();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDerivationMethod final
    ::System::Xml::Schema::XmlSchemaDerivationMethod& dyn_final();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDerivationMethod derivedBy
    ::System::Xml::Schema::XmlSchemaDerivationMethod& dyn_derivedBy();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaType baseSchemaType
    ::System::Xml::Schema::XmlSchemaType*& dyn_baseSchemaType();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDatatype datatype
    ::System::Xml::Schema::XmlSchemaDatatype*& dyn_datatype();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaDerivationMethod finalResolved
    ::System::Xml::Schema::XmlSchemaDerivationMethod& dyn_finalResolved();
    // Get instance field reference: private System.Xml.Schema.SchemaElementDecl elementDecl
    ::System::Xml::Schema::SchemaElementDecl*& dyn_elementDecl();
    // Get instance field reference: private System.Xml.XmlQualifiedName qname
    ::System::Xml::XmlQualifiedName*& dyn_qname();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaType redefined
    ::System::Xml::Schema::XmlSchemaType*& dyn_redefined();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaContentType contentType
    ::System::Xml::Schema::XmlSchemaContentType& dyn_contentType();
    // public System.String get_Name()
    // Offset: 0x153E5B8
    ::StringW get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x153E5C0
    void set_Name(::StringW value);
    // public System.Xml.Schema.XmlSchemaDerivationMethod get_Final()
    // Offset: 0x153E5C8
    ::System::Xml::Schema::XmlSchemaDerivationMethod get_Final();
    // public System.Void set_Final(System.Xml.Schema.XmlSchemaDerivationMethod value)
    // Offset: 0x153E5D0
    void set_Final(::System::Xml::Schema::XmlSchemaDerivationMethod value);
    // public System.Xml.XmlQualifiedName get_QualifiedName()
    // Offset: 0x153E594
    ::System::Xml::XmlQualifiedName* get_QualifiedName();
    // public System.Xml.Schema.XmlSchemaDerivationMethod get_FinalResolved()
    // Offset: 0x153E5D8
    ::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalResolved();
    // public System.Xml.Schema.XmlSchemaType get_BaseXmlSchemaType()
    // Offset: 0x153E5E0
    ::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType();
    // public System.Xml.Schema.XmlSchemaDerivationMethod get_DerivedBy()
    // Offset: 0x153E5E8
    ::System::Xml::Schema::XmlSchemaDerivationMethod get_DerivedBy();
    // public System.Xml.Schema.XmlSchemaDatatype get_Datatype()
    // Offset: 0x153E5F0
    ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();
    // public System.Boolean get_IsMixed()
    // Offset: 0x153E5F8
    bool get_IsMixed();
    // public System.Void set_IsMixed(System.Boolean value)
    // Offset: 0x153E600
    void set_IsMixed(bool value);
    // public System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x153E604
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // System.Xml.Schema.XmlValueConverter get_ValueConverter()
    // Offset: 0x153E6E0
    ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();
    // System.Xml.Schema.XmlSchemaContentType get_SchemaContentType()
    // Offset: 0x153E768
    ::System::Xml::Schema::XmlSchemaContentType get_SchemaContentType();
    // System.Xml.Schema.SchemaElementDecl get_ElementDecl()
    // Offset: 0x153E7B8
    ::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();
    // System.Void set_ElementDecl(System.Xml.Schema.SchemaElementDecl value)
    // Offset: 0x153E7DC
    void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);
    // System.Xml.Schema.XmlSchemaType get_Redefined()
    // Offset: 0x153E804
    ::System::Xml::Schema::XmlSchemaType* get_Redefined();
    // System.Void set_Redefined(System.Xml.Schema.XmlSchemaType value)
    // Offset: 0x153E80C
    void set_Redefined(::System::Xml::Schema::XmlSchemaType* value);
    // static public System.Xml.Schema.XmlSchemaSimpleType GetBuiltInSimpleType(System.Xml.XmlQualifiedName qualifiedName)
    // Offset: 0x153E1C0
    static ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::XmlQualifiedName* qualifiedName);
    // static public System.Xml.Schema.XmlSchemaSimpleType GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode typeCode)
    // Offset: 0x153E298
    static ::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode typeCode);
    // static public System.Xml.Schema.XmlSchemaComplexType GetBuiltInComplexType(System.Xml.XmlQualifiedName qualifiedName)
    // Offset: 0x153E300
    static ::System::Xml::Schema::XmlSchemaComplexType* GetBuiltInComplexType(::System::Xml::XmlQualifiedName* qualifiedName);
    // System.Void SetQualifiedName(System.Xml.XmlQualifiedName value)
    // Offset: 0x153E770
    void SetQualifiedName(::System::Xml::XmlQualifiedName* value);
    // System.Void SetFinalResolved(System.Xml.Schema.XmlSchemaDerivationMethod value)
    // Offset: 0x153E798
    void SetFinalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);
    // System.Void SetBaseSchemaType(System.Xml.Schema.XmlSchemaType value)
    // Offset: 0x153E7A0
    void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* value);
    // System.Void SetDerivedBy(System.Xml.Schema.XmlSchemaDerivationMethod value)
    // Offset: 0x153E7A8
    void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value);
    // System.Void SetDatatype(System.Xml.Schema.XmlSchemaDatatype value)
    // Offset: 0x153E7B0
    void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* value);
    // System.Void SetContentType(System.Xml.Schema.XmlSchemaContentType value)
    // Offset: 0x153E814
    void SetContentType(::System::Xml::Schema::XmlSchemaContentType value);
    // static public System.Boolean IsDerivedFrom(System.Xml.Schema.XmlSchemaType derivedType, System.Xml.Schema.XmlSchemaType baseType, System.Xml.Schema.XmlSchemaDerivationMethod except)
    // Offset: 0x153E81C
    static bool IsDerivedFrom(::System::Xml::Schema::XmlSchemaType* derivedType, ::System::Xml::Schema::XmlSchemaType* baseType, ::System::Xml::Schema::XmlSchemaDerivationMethod except);
    // static System.Boolean IsDerivedFromDatatype(System.Xml.Schema.XmlSchemaDatatype derivedDataType, System.Xml.Schema.XmlSchemaDatatype baseDataType, System.Xml.Schema.XmlSchemaDerivationMethod except)
    // Offset: 0x153EA2C
    static bool IsDerivedFromDatatype(::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, ::System::Xml::Schema::XmlSchemaDatatype* baseDataType, ::System::Xml::Schema::XmlSchemaDerivationMethod except);
    // override System.String get_NameAttribute()
    // Offset: 0x153EB1C
    // Implemented from: System.Xml.Schema.XmlSchemaObject
    // Base method: System.String XmlSchemaObject::get_NameAttribute()
    ::StringW get_NameAttribute();
    // override System.Void set_NameAttribute(System.String value)
    // Offset: 0x153EB24
    // Implemented from: System.Xml.Schema.XmlSchemaObject
    // Base method: System.Void XmlSchemaObject::set_NameAttribute(System.String value)
    void set_NameAttribute(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x153D8C4
    // Implemented from: System.Xml.Schema.XmlSchemaAnnotated
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaType*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaType
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaType), 144 + sizeof(::System::Xml::Schema::XmlSchemaContentType)> __System_Xml_Schema_XmlSchemaTypeSizeCheck;
  static_assert(sizeof(XmlSchemaType) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::StringW)>(&System::Xml::Schema::XmlSchemaType::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_Final
// Il2CppName: get_Final
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_Final)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_Final", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_Final
// Il2CppName: set_Final
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(&System::Xml::Schema::XmlSchemaType::set_Final)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDerivationMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_Final", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_QualifiedName
// Il2CppName: get_QualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_QualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_QualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_FinalResolved
// Il2CppName: get_FinalResolved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_FinalResolved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_FinalResolved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType
// Il2CppName: get_BaseXmlSchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_BaseXmlSchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_DerivedBy
// Il2CppName: get_DerivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_DerivedBy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_DerivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_Datatype
// Il2CppName: get_Datatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_Datatype)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_Datatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_IsMixed
// Il2CppName: get_IsMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_IsMixed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_IsMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_IsMixed
// Il2CppName: set_IsMixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(bool)>(&System::Xml::Schema::XmlSchemaType::set_IsMixed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_IsMixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_ValueConverter
// Il2CppName: get_ValueConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_ValueConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_ValueConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_SchemaContentType
// Il2CppName: get_SchemaContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentType (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_SchemaContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_SchemaContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_ElementDecl
// Il2CppName: get_ElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaElementDecl* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_ElementDecl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_ElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_ElementDecl
// Il2CppName: set_ElementDecl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::SchemaElementDecl*)>(&System::Xml::Schema::XmlSchemaType::set_ElementDecl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaElementDecl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_ElementDecl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_Redefined
// Il2CppName: get_Redefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_Redefined)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_Redefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_Redefined
// Il2CppName: set_Redefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlSchemaType::set_Redefined)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_Redefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType
// Il2CppName: GetBuiltInSimpleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType)> {
  static const MethodInfo* get() {
    static auto* qualifiedName = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "GetBuiltInSimpleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qualifiedName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType
// Il2CppName: GetBuiltInSimpleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (*)(::System::Xml::Schema::XmlTypeCode)>(&System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType)> {
  static const MethodInfo* get() {
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlTypeCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "GetBuiltInSimpleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeCode});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::GetBuiltInComplexType
// Il2CppName: GetBuiltInComplexType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaType::GetBuiltInComplexType)> {
  static const MethodInfo* get() {
    static auto* qualifiedName = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "GetBuiltInComplexType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qualifiedName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetQualifiedName
// Il2CppName: SetQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaType::SetQualifiedName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetFinalResolved
// Il2CppName: SetFinalResolved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(&System::Xml::Schema::XmlSchemaType::SetFinalResolved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDerivationMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetFinalResolved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetBaseSchemaType
// Il2CppName: SetBaseSchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlSchemaType::SetBaseSchemaType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetBaseSchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetDerivedBy
// Il2CppName: SetDerivedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(&System::Xml::Schema::XmlSchemaType::SetDerivedBy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDerivationMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetDerivedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetDatatype
// Il2CppName: SetDatatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::XmlSchemaType::SetDatatype)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetDatatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::SetContentType
// Il2CppName: SetContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaContentType)>(&System::Xml::Schema::XmlSchemaType::SetContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaContentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "SetContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::IsDerivedFrom
// Il2CppName: IsDerivedFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&System::Xml::Schema::XmlSchemaType::IsDerivedFrom)> {
  static const MethodInfo* get() {
    static auto* derivedType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    static auto* baseType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    static auto* except = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDerivationMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "IsDerivedFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derivedType, baseType, except});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::IsDerivedFromDatatype
// Il2CppName: IsDerivedFromDatatype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&System::Xml::Schema::XmlSchemaType::IsDerivedFromDatatype)> {
  static const MethodInfo* get() {
    static auto* derivedDataType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    static auto* baseDataType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    static auto* except = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDerivationMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "IsDerivedFromDatatype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derivedDataType, baseDataType, except});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::get_NameAttribute
// Il2CppName: get_NameAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaType::*)()>(&System::Xml::Schema::XmlSchemaType::get_NameAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "get_NameAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::set_NameAttribute
// Il2CppName: set_NameAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaType::*)(::StringW)>(&System::Xml::Schema::XmlSchemaType::set_NameAttribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaType*), "set_NameAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
