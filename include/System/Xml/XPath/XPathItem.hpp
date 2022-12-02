// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathItem
  class XPathItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XPath::XPathItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathItem*, "System.Xml.XPath", "XPathItem");
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XPath.XPathItem
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathItem : public ::Il2CppObject {
    public:
    // public System.Xml.Schema.XmlSchemaType get_XmlType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Xml::Schema::XmlSchemaType* get_XmlType();
    // public System.String get_Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Value();
    // public System.Object get_TypedValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_TypedValue();
    // public System.Type get_ValueType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_ValueType();
    // public System.Boolean get_ValueAsBoolean()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ValueAsBoolean();
    // public System.DateTime get_ValueAsDateTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::DateTime get_ValueAsDateTime();
    // public System.Double get_ValueAsDouble()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_ValueAsDouble();
    // public System.Int32 get_ValueAsInt()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ValueAsInt();
    // public System.Int64 get_ValueAsLong()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_ValueAsLong();
    // protected System.Void .ctor()
    // Offset: 0x1C2F0C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XPathItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XPath::XPathItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XPathItem*, creationType>()));
    }
    // public System.Object ValueAs(System.Type returnType)
    // Offset: 0x1C2F0B0
    ::Il2CppObject* ValueAs(::System::Type* returnType);
    // public System.Object ValueAs(System.Type returnType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.XPath.XPathItem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_XmlType
// Il2CppName: get_XmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_XmlType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_XmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_TypedValue
// Il2CppName: get_TypedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_TypedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_TypedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_ValueAsBoolean
// Il2CppName: get_ValueAsBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_ValueAsBoolean)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_ValueAsBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_ValueAsDateTime
// Il2CppName: get_ValueAsDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_ValueAsDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_ValueAsDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_ValueAsDouble
// Il2CppName: get_ValueAsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_ValueAsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_ValueAsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_ValueAsInt
// Il2CppName: get_ValueAsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_ValueAsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_ValueAsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::get_ValueAsLong
// Il2CppName: get_ValueAsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::XPath::XPathItem::*)()>(&System::Xml::XPath::XPathItem::get_ValueAsLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "get_ValueAsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::ValueAs
// Il2CppName: ValueAs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathItem::*)(::System::Type*)>(&System::Xml::XPath::XPathItem::ValueAs)> {
  static const MethodInfo* get() {
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "ValueAs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{returnType});
  }
};
// Writing MetadataGetter for method: System::Xml::XPath::XPathItem::ValueAs
// Il2CppName: ValueAs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XPath::XPathItem::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::XPath::XPathItem::ValueAs)> {
  static const MethodInfo* get() {
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XPath::XPathItem*), "ValueAs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{returnType, nsResolver});
  }
};
