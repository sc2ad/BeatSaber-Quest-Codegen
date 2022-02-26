// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaWhiteSpace
  struct XmlSchemaWhiteSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaWhiteSpace, "System.Xml.Schema", "XmlSchemaWhiteSpace");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaWhiteSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSchemaWhiteSpace/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlSchemaWhiteSpace
    constexpr XmlSchemaWhiteSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XmlSchemaWhiteSpace Preserve
    static constexpr const int Preserve = 0;
    // Get static field: static public System.Xml.Schema.XmlSchemaWhiteSpace Preserve
    static ::System::Xml::Schema::XmlSchemaWhiteSpace _get_Preserve();
    // Set static field: static public System.Xml.Schema.XmlSchemaWhiteSpace Preserve
    static void _set_Preserve(::System::Xml::Schema::XmlSchemaWhiteSpace value);
    // static field const value: static public System.Xml.Schema.XmlSchemaWhiteSpace Replace
    static constexpr const int Replace = 1;
    // Get static field: static public System.Xml.Schema.XmlSchemaWhiteSpace Replace
    static ::System::Xml::Schema::XmlSchemaWhiteSpace _get_Replace();
    // Set static field: static public System.Xml.Schema.XmlSchemaWhiteSpace Replace
    static void _set_Replace(::System::Xml::Schema::XmlSchemaWhiteSpace value);
    // static field const value: static public System.Xml.Schema.XmlSchemaWhiteSpace Collapse
    static constexpr const int Collapse = 2;
    // Get static field: static public System.Xml.Schema.XmlSchemaWhiteSpace Collapse
    static ::System::Xml::Schema::XmlSchemaWhiteSpace _get_Collapse();
    // Set static field: static public System.Xml.Schema.XmlSchemaWhiteSpace Collapse
    static void _set_Collapse(::System::Xml::Schema::XmlSchemaWhiteSpace value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.Schema.XmlSchemaWhiteSpace
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaWhiteSpace), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaWhiteSpaceSizeCheck;
  static_assert(sizeof(XmlSchemaWhiteSpace) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
