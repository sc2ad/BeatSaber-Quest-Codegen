// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.FacetsChecker
#include "System/Xml/Schema/FacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: QNameFacetsChecker
  class QNameFacetsChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::QNameFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::QNameFacetsChecker*, "System.Xml.Schema", "QNameFacetsChecker");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.QNameFacetsChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class QNameFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
    public:
    // private System.Boolean MatchEnumeration(System.Xml.XmlQualifiedName value, System.Collections.ArrayList enumeration)
    // Offset: 0x1C28A70
    bool MatchEnumeration(::System::Xml::XmlQualifiedName* value, ::System::Collections::ArrayList* enumeration);
    // public System.Void .ctor()
    // Offset: 0x1C28C94
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Void FacetsChecker::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QNameFacetsChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::QNameFacetsChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QNameFacetsChecker*, creationType>()));
    }
    // override System.Exception CheckValueFacets(System.Object value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C28794
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Object value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(::Il2CppObject* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Exception CheckValueFacets(System.Xml.XmlQualifiedName value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C288C0
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Xml.XmlQualifiedName value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Boolean MatchEnumeration(System.Object value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0x1C28B88
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Boolean FacetsChecker::MatchEnumeration(System.Object value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    bool MatchEnumeration(::Il2CppObject* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
  }; // System.Xml.Schema.QNameFacetsChecker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::QNameFacetsChecker::MatchEnumeration
// Il2CppName: MatchEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::QNameFacetsChecker::*)(::System::Xml::XmlQualifiedName*, ::System::Collections::ArrayList*)>(&System::Xml::Schema::QNameFacetsChecker::MatchEnumeration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* enumeration = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::QNameFacetsChecker*), "MatchEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, enumeration});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::QNameFacetsChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::QNameFacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::QNameFacetsChecker::*)(::Il2CppObject*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::QNameFacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::QNameFacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::QNameFacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::QNameFacetsChecker::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::QNameFacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::QNameFacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::QNameFacetsChecker::MatchEnumeration
// Il2CppName: MatchEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::QNameFacetsChecker::*)(::Il2CppObject*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::QNameFacetsChecker::MatchEnumeration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* enumeration = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::QNameFacetsChecker*), "MatchEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, enumeration, datatype});
  }
};
