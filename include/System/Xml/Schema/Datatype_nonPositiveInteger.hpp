// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_integer
#include "System/Xml/Schema/Datatype_integer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: FacetsChecker
  class FacetsChecker;
  // Forward declaring type: XmlTypeCode
  struct XmlTypeCode;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_nonPositiveInteger
  class Datatype_nonPositiveInteger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_nonPositiveInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_nonPositiveInteger*, "System.Xml.Schema", "Datatype_nonPositiveInteger");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_nonPositiveInteger
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_nonPositiveInteger : public ::System::Xml::Schema::Datatype_integer {
    public:
    // Get static field: static private readonly System.Xml.Schema.FacetsChecker numeric10FacetsChecker
    static ::System::Xml::Schema::FacetsChecker* _get_numeric10FacetsChecker();
    // Set static field: static private readonly System.Xml.Schema.FacetsChecker numeric10FacetsChecker
    static void _set_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value);
    // override System.Xml.Schema.FacetsChecker get_FacetsChecker()
    // Offset: 0x1C1FC98
    // Implemented from: System.Xml.Schema.Datatype_decimal
    // Base method: System.Xml.Schema.FacetsChecker Datatype_decimal::get_FacetsChecker()
    ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
    // public override System.Xml.Schema.XmlTypeCode get_TypeCode()
    // Offset: 0x1C1FD00
    // Implemented from: System.Xml.Schema.Datatype_integer
    // Base method: System.Xml.Schema.XmlTypeCode Datatype_integer::get_TypeCode()
    ::System::Xml::Schema::XmlTypeCode get_TypeCode();
    // public System.Void .ctor()
    // Offset: 0x1C1FA60
    // Implemented from: System.Xml.Schema.Datatype_integer
    // Base method: System.Void Datatype_integer::.ctor()
    // Base method: System.Void Datatype_decimal::.ctor()
    // Base method: System.Void Datatype_anySimpleType::.ctor()
    // Base method: System.Void DatatypeImplementation::.ctor()
    // Base method: System.Void XmlSchemaDatatype::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datatype_nonPositiveInteger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Datatype_nonPositiveInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datatype_nonPositiveInteger*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C1FD08
    // Implemented from: System.Xml.Schema.Datatype_decimal
    // Base method: System.Void Datatype_decimal::.cctor()
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
  }; // System.Xml.Schema.Datatype_nonPositiveInteger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_nonPositiveInteger::get_FacetsChecker
// Il2CppName: get_FacetsChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::FacetsChecker* (System::Xml::Schema::Datatype_nonPositiveInteger::*)()>(&System::Xml::Schema::Datatype_nonPositiveInteger::get_FacetsChecker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_nonPositiveInteger*), "get_FacetsChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_nonPositiveInteger::get_TypeCode
// Il2CppName: get_TypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_nonPositiveInteger::*)()>(&System::Xml::Schema::Datatype_nonPositiveInteger::get_TypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_nonPositiveInteger*), "get_TypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_nonPositiveInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_nonPositiveInteger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_nonPositiveInteger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_nonPositiveInteger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
