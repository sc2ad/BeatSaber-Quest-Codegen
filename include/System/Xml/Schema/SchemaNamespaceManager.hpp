// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNamespaceManager
#include "System/Xml/XmlNamespaceManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObject
  class XmlSchemaObject;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaNamespaceManager
  class SchemaNamespaceManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SchemaNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaNamespaceManager*, "System.Xml.Schema", "SchemaNamespaceManager");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaNamespaceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaNamespaceManager : public ::System::Xml::XmlNamespaceManager {
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
    // private System.Xml.Schema.XmlSchemaObject node
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::Schema::XmlSchemaObject* node;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Schema::XmlSchemaObject*
    constexpr operator ::System::Xml::Schema::XmlSchemaObject*() const noexcept {
      return node;
    }
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObject node
    ::System::Xml::Schema::XmlSchemaObject*& dyn_node();
    // public System.Void .ctor(System.Xml.Schema.XmlSchemaObject node)
    // Offset: 0x1699AE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaNamespaceManager* New_ctor(::System::Xml::Schema::XmlSchemaObject* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaNamespaceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaNamespaceManager*, creationType>(node)));
    }
    // public override System.String LookupNamespace(System.String prefix)
    // Offset: 0x1699B10
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.String XmlNamespaceManager::LookupNamespace(System.String prefix)
    ::StringW LookupNamespace(::StringW prefix);
    // public override System.String LookupPrefix(System.String ns)
    // Offset: 0x1699C30
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.String XmlNamespaceManager::LookupPrefix(System.String ns)
    ::StringW LookupPrefix(::StringW ns);
  }; // System.Xml.Schema.SchemaNamespaceManager
  #pragma pack(pop)
  static check_size<sizeof(SchemaNamespaceManager), 80 + sizeof(::System::Xml::Schema::XmlSchemaObject*)> __System_Xml_Schema_SchemaNamespaceManagerSizeCheck;
  static_assert(sizeof(SchemaNamespaceManager) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNamespaceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNamespaceManager::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaNamespaceManager::*)(::StringW)>(&System::Xml::Schema::SchemaNamespaceManager::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNamespaceManager*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNamespaceManager::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaNamespaceManager::*)(::StringW)>(&System::Xml::Schema::SchemaNamespaceManager::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNamespaceManager*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
