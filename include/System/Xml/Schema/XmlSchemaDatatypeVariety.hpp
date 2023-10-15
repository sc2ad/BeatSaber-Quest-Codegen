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
  // Forward declaring type: XmlSchemaDatatypeVariety
  struct XmlSchemaDatatypeVariety;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDatatypeVariety, "System.Xml.Schema", "XmlSchemaDatatypeVariety");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaDatatypeVariety
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSchemaDatatypeVariety/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlSchemaDatatypeVariety
    constexpr XmlSchemaDatatypeVariety(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.XmlSchemaDatatypeVariety Atomic
    static constexpr const int Atomic = 0;
    // Get static field: static public System.Xml.Schema.XmlSchemaDatatypeVariety Atomic
    static ::System::Xml::Schema::XmlSchemaDatatypeVariety _get_Atomic();
    // Set static field: static public System.Xml.Schema.XmlSchemaDatatypeVariety Atomic
    static void _set_Atomic(::System::Xml::Schema::XmlSchemaDatatypeVariety value);
    // static field const value: static public System.Xml.Schema.XmlSchemaDatatypeVariety List
    static constexpr const int List = 1;
    // Get static field: static public System.Xml.Schema.XmlSchemaDatatypeVariety List
    static ::System::Xml::Schema::XmlSchemaDatatypeVariety _get_List();
    // Set static field: static public System.Xml.Schema.XmlSchemaDatatypeVariety List
    static void _set_List(::System::Xml::Schema::XmlSchemaDatatypeVariety value);
    // static field const value: static public System.Xml.Schema.XmlSchemaDatatypeVariety Union
    static constexpr const int Union = 2;
    // Get static field: static public System.Xml.Schema.XmlSchemaDatatypeVariety Union
    static ::System::Xml::Schema::XmlSchemaDatatypeVariety _get_Union();
    // Set static field: static public System.Xml.Schema.XmlSchemaDatatypeVariety Union
    static void _set_Union(::System::Xml::Schema::XmlSchemaDatatypeVariety value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XmlSchemaDatatypeVariety
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaDatatypeVariety), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaDatatypeVarietySizeCheck;
  static_assert(sizeof(XmlSchemaDatatypeVariety) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"