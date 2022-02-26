// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaParticle
#include "System/Xml/Schema/XmlSchemaParticle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaObjectCollection
  class XmlSchemaObjectCollection;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaGroupBase
  class XmlSchemaGroupBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroupBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroupBase*, "System.Xml.Schema", "XmlSchemaGroupBase");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaGroupBase
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaGroupBase : public ::System::Xml::Schema::XmlSchemaParticle {
    public:
    // public System.Xml.Schema.XmlSchemaObjectCollection get_Items()
    // Offset: 0xFFFFFFFF
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
    // System.Void SetItems(System.Xml.Schema.XmlSchemaObjectCollection newItems)
    // Offset: 0xFFFFFFFF
    void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems);
    // protected System.Void .ctor()
    // Offset: 0x18ABDA0
    // Implemented from: System.Xml.Schema.XmlSchemaParticle
    // Base method: System.Void XmlSchemaParticle::.ctor()
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaGroupBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaGroupBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaGroupBase*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaGroupBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaGroupBase::get_Items
// Il2CppName: get_Items
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaGroupBase::*)()>(&System::Xml::Schema::XmlSchemaGroupBase::get_Items)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaGroupBase*), "get_Items", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaGroupBase::SetItems
// Il2CppName: SetItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaGroupBase::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&System::Xml::Schema::XmlSchemaGroupBase::SetItems)> {
  static const MethodInfo* get() {
    static auto* newItems = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaObjectCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaGroupBase*), "SetItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newItems});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaGroupBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
