// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.Datatype_anySimpleType
#include "System/Xml/Schema/Datatype_anySimpleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Datatype_union
  class Datatype_union;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Datatype_union);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_union*, "System.Xml.Schema", "Datatype_union");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Datatype_union
  // [TokenAttribute] Offset: FFFFFFFF
  class Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType {
    public:
    public:
    // private System.Xml.Schema.XmlSchemaSimpleType[] types
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> types;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>
    constexpr operator ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>() const noexcept {
      return types;
    }
    // Get static field: static private readonly System.Type atomicValueType
    static ::System::Type* _get_atomicValueType();
    // Set static field: static private readonly System.Type atomicValueType
    static void _set_atomicValueType(::System::Type* value);
    // Get static field: static private readonly System.Type listValueType
    static ::System::Type* _get_listValueType();
    // Set static field: static private readonly System.Type listValueType
    static void _set_listValueType(::System::Type* value);
    // Get instance field reference: private System.Xml.Schema.XmlSchemaSimpleType[] types
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>& dyn_types();
    // System.Boolean HasAtomicMembers()
    // Offset: 0x1D12A08
    bool HasAtomicMembers();
    // static private System.Void .cctor()
    // Offset: 0x1D12A94
    // Implemented from: System.Xml.Schema.Datatype_anySimpleType
    // Base method: System.Void Datatype_anySimpleType::.cctor()
    // Base method: System.Void DatatypeImplementation::.cctor()
    static void _cctor();
  }; // System.Xml.Schema.Datatype_union
  #pragma pack(pop)
  static check_size<sizeof(Datatype_union), 56 + sizeof(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>)> __System_Xml_Schema_Datatype_unionSizeCheck;
  static_assert(sizeof(Datatype_union) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::HasAtomicMembers
// Il2CppName: HasAtomicMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::HasAtomicMembers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), "HasAtomicMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Datatype_union::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::Datatype_union::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Datatype_union*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
