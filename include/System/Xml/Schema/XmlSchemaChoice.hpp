// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaGroupBase
#include "System/Xml/Schema/XmlSchemaGroupBase.hpp"
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
  // Forward declaring type: XmlSchemaChoice
  class XmlSchemaChoice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaChoice);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaChoice*, "System.Xml.Schema", "XmlSchemaChoice");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaChoice
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaChoice : public ::System::Xml::Schema::XmlSchemaGroupBase {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    public:
    // private System.Xml.Schema.XmlSchemaObjectCollection items
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Schema::XmlSchemaObjectCollection* items;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Schema::XmlSchemaObjectCollection*
    constexpr operator ::System::Xml::Schema::XmlSchemaObjectCollection*() const noexcept {
      return items;
    }
    // Get instance field reference: private System.Xml.Schema.XmlSchemaObjectCollection items
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaObjectCollection*& dyn_items();
    // public override System.Xml.Schema.XmlSchemaObjectCollection get_Items()
    // Offset: 0x21039C0
    // Implemented from: System.Xml.Schema.XmlSchemaGroupBase
    // Base method: System.Xml.Schema.XmlSchemaObjectCollection XmlSchemaGroupBase::get_Items()
    ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
  }; // System.Xml.Schema.XmlSchemaChoice
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaChoice), 56 + sizeof(::System::Xml::Schema::XmlSchemaObjectCollection*)> __System_Xml_Schema_XmlSchemaChoiceSizeCheck;
  static_assert(sizeof(XmlSchemaChoice) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaChoice::get_Items
// Il2CppName: get_Items
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (System::Xml::Schema::XmlSchemaChoice::*)()>(&System::Xml::Schema::XmlSchemaChoice::get_Items)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaChoice*), "get_Items", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
