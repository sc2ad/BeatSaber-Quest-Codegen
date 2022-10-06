// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_duration
#include "System/Xml/Schema/Datatype_duration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
}
// Forward declaring namespace: System
namespace System {
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
  // Forward declaring type: Datatype_yearMonthDuration
  class Datatype_yearMonthDuration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_yearMonthDuration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_yearMonthDuration*, "System.Xml.Schema", "Datatype_yearMonthDuration");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_yearMonthDuration
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_yearMonthDuration : public ::System::Xml::Schema::Datatype_duration {
    public:
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1C88AC8
    // Implemented from: System.Xml.Schema.Datatype_duration
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_duration::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public System.Void .ctor()
    // Offset: 0x1C88AD0
    // Implemented from: System.Xml.Schema.Datatype_duration
    // Base method: System.Void Datatype_duration::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_yearMonthDuration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_yearMonthDuration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_yearMonthDuration*, creationType>()));
    }
    // override System.Exception TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    // Offset: 0x1C88914
    // Implemented from: System.Xml.Schema.Datatype_duration
    // Base method: System.Exception Datatype_duration::TryParseValue(System.String s, System.Xml.XmlNameTable nameTable, System.Xml.IXmlNamespaceResolver nsmgr, out System.Object typedValue)
    ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::Il2CppObject*> typedValue);
  }; // System.Xml.Schema.Datatype_yearMonthDuration
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_yearMonthDuration::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_yearMonthDuration::*)()>(&System::Xml::Schema::Datatype_yearMonthDuration::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_yearMonthDuration*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_yearMonthDuration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_yearMonthDuration::TryParseValue
// Il2CppName: TryParseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::Datatype_yearMonthDuration::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::Il2CppObject*>)>(&System::Xml::Schema::Datatype_yearMonthDuration::TryParseValue)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nameTable = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNameTable")->byval_arg;
    static auto* nsmgr = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    static auto* typedValue = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_yearMonthDuration*), "TryParseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, nameTable, nsmgr, typedValue});
  }
};
