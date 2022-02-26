// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_anySimpleType
#include "System/Xml/Schema/Datatype_anySimpleType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Skipping declaration: DatatypeImplementation because it is already included!
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
  // Forward declaring type: FacetsChecker
  class FacetsChecker;
  // Forward declaring type: RestrictionFlags
  struct RestrictionFlags;
  // Forward declaring type: XmlValueConverter
  class XmlValueConverter;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_union
  class Datatype_union;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_union);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_union*, "System.Xml.Schema", "Datatype_union");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_union
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType {
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
    // private System.Xml.Schema.XmlSchemaSimpleType[] types
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>
    constexpr operator ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>() const noexcept {
      return types;
    }
    // Get static field: static private readonly System.Type atomicValueType
    static ::System::Type* _get_atomicValueType();
    // Set static field: static private readonly System.Type atomicValueType
    static void _set_atomicValueType(::System::Type* value);
    // Get static field: static private readonly System.Type listValueType
    static ::System::Type* _get_listValueType();
    // Set static field: static private readonly System.Type listValueType
    static void _set_listValueType(::System::Type* value);
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType[] types
    ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>& dyn_types();
    // System.Xml.Schema.XmlSchemaSimpleType[] get_BaseMemberTypes()
    // Offset: 0x1D67DF4
    ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> get_BaseMemberTypes();
    // System.Void .ctor(System.Xml.Schema.XmlSchemaSimpleType[] types)
    // Offset: 0x1D5F938
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_union* New_ctor(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_union::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_union*, creationType>(types)));
    }
    // System.Boolean HasAtomicMembers()
    // Offset: 0x1D5F77C
    bool HasAtomicMembers();
    // System.Boolean IsUnionBaseOf(System.Xml.Schema.DatatypeImplementation derivedType)
    // Offset: 0x1D5FBD4
    bool IsUnionBaseOf(::System::Xml::Schema::DatatypeImplementation* derivedType);
    // public override System.Type get_ValueType()
    // Offset: 0x1D67CAC
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Type Datatype_anySimpleType::get_ValueType()
    ::System::Type* get_ValueType();
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1D67D14
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_anySimpleType::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // override System.Xml.Schema.FacetsChecker get_FacetsChecker()
    // Offset: 0x1D67D1C
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.FacetsChecker Datatype_anySimpleType::get_FacetsChecker()
    ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
    // override System.Type get_ListValueType()
    // Offset: 0x1D67D84
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Type Datatype_anySimpleType::get_ListValueType()
    ::System::Type* get_ListValueType();
    // override System.Xml.Schema.RestrictionFlags get_ValidRestrictionFlags()
    // Offset: 0x1D67DEC
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.RestrictionFlags Datatype_anySimpleType::get_ValidRestrictionFlags()
    ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
    // static private System.Void .cctor()
    // Offset: 0x1D68454
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
    // override System.Xml.Schema.XmlValueConverter CreateValueConverter(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x1D67B94
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Xml.Schema.XmlValueConverter Datatype_anySimpleType::CreateValueConverter(System.Xml.Schema.XmlSchemaType schemaType)
    ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);
    // override System.Int32 Compare(System.Object value1, System.Object value2)
    // Offset: 0x1D67BA0
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Int32 Datatype_anySimpleType::Compare(System.Object value1, System.Object value2)
    int Compare(::Il2CppObject* value1, ::Il2CppObject* value2);
    // override System.Exception TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0x1D67DFC
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Exception Datatype_anySimpleType::TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
    // override System.Exception TryParseValue(System.Object value, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0x1D67FE8
    // Implemented from: System.Xml.Schema.DatatypeImplementation
    // Base method: System.Exception DatatypeImplementation::TryParseValue(System.Object value, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    ::System::Exception* TryParseValue(::Il2CppObject* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
  }; // System.Xml.Schema.Datatype_union
  #pragma pack(pop)
  static check_size<sizeof(Datatype_union), 56 + sizeof(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>)> __System_Xml_Schema_Datatype_unionSizeCheck;
  static_assert(sizeof(Datatype_union) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::get_BaseMemberTypes
// Il2CppName: get_BaseMemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::get_BaseMemberTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "get_BaseMemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::HasAtomicMembers
// Il2CppName: HasAtomicMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::HasAtomicMembers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "HasAtomicMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::IsUnionBaseOf
// Il2CppName: IsUnionBaseOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Datatype_union::*)(::System::Xml::Schema::DatatypeImplementation*)>(&System::Xml::Schema::Datatype_union::IsUnionBaseOf)> {
  static const MethodInfo* get() {
    static auto* derivedType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "DatatypeImplementation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "IsUnionBaseOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derivedType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::get_FacetsChecker
// Il2CppName: get_FacetsChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetsChecker* (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::get_FacetsChecker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "get_FacetsChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::get_ListValueType
// Il2CppName: get_ListValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::get_ListValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "get_ListValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::get_ValidRestrictionFlags
// Il2CppName: get_ValidRestrictionFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::RestrictionFlags (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::get_ValidRestrictionFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "get_ValidRestrictionFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_union::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::CreateValueConverter
// Il2CppName: CreateValueConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (System::Xml::Schema::Datatype_union::*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::Datatype_union::CreateValueConverter)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "CreateValueConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::Datatype_union::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Xml::Schema::Datatype_union::Compare)> {
  static const MethodInfo* get() {
    static auto* value1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value1, value2});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Datatype_union::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::Datatype_union::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, typedValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Datatype_union::*)(::Il2CppObject*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::Datatype_union::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, nameTable, nsmgr, typedValue});
  }
};
