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
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlDateTimeConverter
  class XmlDateTimeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlDateTimeConverter*, "System.Xml.Schema", "XmlDateTimeConverter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlDateTimeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDateTimeConverter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    // static public System.Xml.Schema.XmlValueConverter Create(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x200401C
    static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x2003FA4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType schemaType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDateTimeConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlDateTimeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDateTimeConverter*, creationType>(schemaType)));
    }
    // public override System.DateTime ToDateTime(System.DateTimeOffset value)
    // Offset: 0x200407C
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTime XmlBaseConverter::ToDateTime(System.DateTimeOffset value)
    ::System::DateTime ToDateTime(::System::DateTimeOffset value);
    // public override System.DateTime ToDateTime(System.String value)
    // Offset: 0x20040F4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTime XmlBaseConverter::ToDateTime(System.String value)
    ::System::DateTime ToDateTime(::StringW value);
    // public override System.DateTime ToDateTime(System.Object value)
    // Offset: 0x2004354
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTime XmlBaseConverter::ToDateTime(System.Object value)
    ::System::DateTime ToDateTime(::Il2CppObject* value);
    // public override System.DateTimeOffset ToDateTimeOffset(System.DateTime value)
    // Offset: 0x20046BC
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTimeOffset XmlBaseConverter::ToDateTimeOffset(System.DateTime value)
    ::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value);
    // public override System.DateTimeOffset ToDateTimeOffset(System.String value)
    // Offset: 0x20046E8
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTimeOffset XmlBaseConverter::ToDateTimeOffset(System.String value)
    ::System::DateTimeOffset ToDateTimeOffset(::StringW value);
    // public override System.DateTimeOffset ToDateTimeOffset(System.Object value)
    // Offset: 0x2004948
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.DateTimeOffset XmlBaseConverter::ToDateTimeOffset(System.Object value)
    ::System::DateTimeOffset ToDateTimeOffset(::Il2CppObject* value);
    // public override System.String ToString(System.DateTime value)
    // Offset: 0x2004CC4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.DateTime value)
    ::StringW ToString(::System::DateTime value);
    // public override System.String ToString(System.DateTimeOffset value)
    // Offset: 0x2004EE4
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.DateTimeOffset value)
    ::StringW ToString(::System::DateTimeOffset value);
    // public override System.String ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2005128
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.String XmlBaseConverter::ToString(System.Object value, System.Xml.IXmlNamespaceResolver nsResolver)
    ::StringW ToString(::Il2CppObject* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.DateTime value, System.Type destinationType)
    // Offset: 0x2005484
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.DateTime value, System.Type destinationType)
    ::Il2CppObject* ChangeType(::System::DateTime value, ::System::Type* destinationType);
    // public override System.Object ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2005830
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Object XmlBaseConverter::ChangeType(System.String value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x2005BFC
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.Schema.XmlDateTimeConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlDateTimeConverter::Create)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::Schema::XmlDateTimeConverter::*)(::System::DateTimeOffset)>(&System::Xml::Schema::XmlDateTimeConverter::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::Schema::XmlDateTimeConverter::*)(::StringW)>(&System::Xml::Schema::XmlDateTimeConverter::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Xml::Schema::XmlDateTimeConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlDateTimeConverter::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToDateTimeOffset
// Il2CppName: ToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (System::Xml::Schema::XmlDateTimeConverter::*)(::System::DateTime)>(&System::Xml::Schema::XmlDateTimeConverter::ToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToDateTimeOffset
// Il2CppName: ToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (System::Xml::Schema::XmlDateTimeConverter::*)(::StringW)>(&System::Xml::Schema::XmlDateTimeConverter::ToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToDateTimeOffset
// Il2CppName: ToDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (System::Xml::Schema::XmlDateTimeConverter::*)(::Il2CppObject*)>(&System::Xml::Schema::XmlDateTimeConverter::ToDateTimeOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlDateTimeConverter::*)(::System::DateTime)>(&System::Xml::Schema::XmlDateTimeConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlDateTimeConverter::*)(::System::DateTimeOffset)>(&System::Xml::Schema::XmlDateTimeConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlDateTimeConverter::*)(::Il2CppObject*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlDateTimeConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlDateTimeConverter::*)(::System::DateTime, ::System::Type*)>(&System::Xml::Schema::XmlDateTimeConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlDateTimeConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlDateTimeConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlDateTimeConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlDateTimeConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlDateTimeConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlDateTimeConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
