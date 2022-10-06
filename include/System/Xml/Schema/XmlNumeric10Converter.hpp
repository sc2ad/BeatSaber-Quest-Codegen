// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlBaseConverter
#include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Skipping declaration: XmlValueConverter because it is already included!
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Decimal
  struct Decimal;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlNumeric10Converter
  class XmlNumeric10Converter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric10Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric10Converter*, "System.Xml.Schema", "XmlNumeric10Converter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlNumeric10Converter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlNumeric10Converter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    // static public System.Xml.Schema.XmlValueConverter Create(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x2102BDC
    static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);
    // private System.Object ChangeTypeWildcardDestination(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2103150
    ::Il2CppObject* ChangeTypeWildcardDestination(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // private System.Object ChangeTypeWildcardSource(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2104A90
    ::Il2CppObject* ChangeTypeWildcardSource(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x2102B64
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType schemaType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlNumeric10Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlNumeric10Converter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlNumeric10Converter*, creationType>(schemaType)));
    }
    // public override System.Decimal ToDecimal(System.String value)
    // Offset: 0x2102C3C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Decimal XmlBaseConverter::ToDecimal(System.String value)
    ::System::Decimal ToDecimal(::StringW value);
    // public override System.Decimal ToDecimal(System.Object value)
    // Offset: 0x2102D24
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Decimal XmlBaseConverter::ToDecimal(System.Object value)
    ::System::Decimal ToDecimal(::Il2CppObject* value);
    // public override System.Int32 ToInt32(System.Int64 value)
    // Offset: 0x21035C0
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int32 XmlBaseConverter::ToInt32(System.Int64 value)
    int ToInt32(int64_t value);
    // public override System.Int32 ToInt32(System.String value)
    // Offset: 0x2103628
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int32 XmlBaseConverter::ToInt32(System.String value)
    int ToInt32(::StringW value);
    // public override System.Int32 ToInt32(System.Object value)
    // Offset: 0x2103748
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int32 XmlBaseConverter::ToInt32(System.Object value)
    int ToInt32(::Il2CppObject* value);
    // public override System.Int64 ToInt64(System.Int32 value)
    // Offset: 0x2103B5C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int64 XmlBaseConverter::ToInt64(System.Int32 value)
    int64_t ToInt64(int value);
    // public override System.Int64 ToInt64(System.String value)
    // Offset: 0x2103B64
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int64 XmlBaseConverter::ToInt64(System.String value)
    int64_t ToInt64(::StringW value);
    // public override System.Int64 ToInt64(System.Object value)
    // Offset: 0x2103C84
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Int64 XmlBaseConverter::ToInt64(System.Object value)
    int64_t ToInt64(::Il2CppObject* value);
    // public override System.String ToString(System.Decimal value)
    // Offset: 0x2104070
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Decimal value)
    ::StringW ToString(::System::Decimal value);
    // public override System.String ToString(System.Int32 value)
    // Offset: 0x210413C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Int32 value)
    ::StringW ToString(int value);
    // public override System.String ToString(System.Int64 value)
    // Offset: 0x21041A4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Int64 value)
    ::StringW ToString(int64_t value);
    // public override System.String ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x210420C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    ::StringW ToString(::Il2CppObject* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Decimal value, System.Type destinationType)
    // Offset: 0x210462C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Decimal value, System.Type destinationType)
    ::Il2CppObject* ChangeType(::System::Decimal value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.Int32 value, System.Type destinationType)
    // Offset: 0x2104F34
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Int32 value, System.Type destinationType)
    ::Il2CppObject* ChangeType(int value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.Int64 value, System.Type destinationType)
    // Offset: 0x2105360
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.Int64 value, System.Type destinationType)
    ::Il2CppObject* ChangeType(int64_t value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x21057A8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2105BE4
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.Schema.XmlNumeric10Converter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlNumeric10Converter::Create)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeTypeWildcardDestination
// Il2CppName: ChangeTypeWildcardDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeTypeWildcardDestination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeTypeWildcardDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeTypeWildcardSource
// Il2CppName: ChangeTypeWildcardSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeTypeWildcardSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeTypeWildcardSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToDecimal
// Il2CppName: ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::XmlNumeric10Converter::*)(::StringW)>(&System::Xml::Schema::XmlNumeric10Converter::ToDecimal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToDecimal
// Il2CppName: ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlNumeric10Converter::ToDecimal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlNumeric10Converter::*)(int64_t)>(&System::Xml::Schema::XmlNumeric10Converter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlNumeric10Converter::*)(::StringW)>(&System::Xml::Schema::XmlNumeric10Converter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlNumeric10Converter::ToInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Schema::XmlNumeric10Converter::*)(int)>(&System::Xml::Schema::XmlNumeric10Converter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Schema::XmlNumeric10Converter::*)(::StringW)>(&System::Xml::Schema::XmlNumeric10Converter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlNumeric10Converter::ToInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric10Converter::*)(::System::Decimal)>(&System::Xml::Schema::XmlNumeric10Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric10Converter::*)(int)>(&System::Xml::Schema::XmlNumeric10Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric10Converter::*)(int64_t)>(&System::Xml::Schema::XmlNumeric10Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric10Converter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(::System::Decimal, ::System::Type*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(int, ::System::Type*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(int64_t, ::System::Type*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlNumeric10Converter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlNumeric10Converter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlNumeric10Converter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlNumeric10Converter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
