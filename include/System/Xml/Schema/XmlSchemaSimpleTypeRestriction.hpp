// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaSimpleTypeContent
#include "System/Xml/Schema/XmlSchemaSimpleTypeContent.hpp"
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
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleTypeRestriction
  class XmlSchemaSimpleTypeRestriction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*, "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaSimpleTypeRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaSimpleTypeRestriction : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
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
    // private System.Xml.XmlQualifiedName baseTypeName
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlQualifiedName* baseTypeName;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Xml.Schema.XmlSchemaObjectCollection facets
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::XmlSchemaObjectCollection* facets;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlQualifiedName baseTypeName
    ::System::Xml::XmlQualifiedName*& dyn_baseTypeName();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection facets
    ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_facets();
    // public System.Void set_BaseTypeName(System.Xml.XmlQualifiedName value)
    // Offset: 0x2011D98
    void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);
    // public System.Void .ctor()
    // Offset: 0x2011E48
    // Implemented from: System.Xml.Schema.XmlSchemaSimpleTypeContent
    // Base method: System.Void XmlSchemaSimpleTypeContent::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaSimpleTypeRestriction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaSimpleTypeRestriction*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaSimpleTypeRestriction
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaSimpleTypeRestriction), 24 + sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*)> __System_Xml_Schema_XmlSchemaSimpleTypeRestrictionSizeCheck;
  static_assert(sizeof(XmlSchemaSimpleTypeRestriction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeRestriction::set_BaseTypeName
// Il2CppName: set_BaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaSimpleTypeRestriction::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::XmlSchemaSimpleTypeRestriction::set_BaseTypeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaSimpleTypeRestriction*), "set_BaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaSimpleTypeRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
