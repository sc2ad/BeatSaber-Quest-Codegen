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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: ValidationType
  struct ValidationType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidationType, "System.Xml", "ValidationType");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ValidationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ValidationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ValidationType
    constexpr ValidationType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Xml.ValidationType None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.ValidationType None
    static ::System::Xml::ValidationType _get_None();
    // Set static field: static public System.Xml.ValidationType None
    static void _set_None(::System::Xml::ValidationType value);
    // [ObsoleteAttribute] Offset: 0x1062D50
    // static field const value: static public System.Xml.ValidationType Auto
    static constexpr const int Auto = 1;
    // Get static field: static public System.Xml.ValidationType Auto
    static ::System::Xml::ValidationType _get_Auto();
    // Set static field: static public System.Xml.ValidationType Auto
    static void _set_Auto(::System::Xml::ValidationType value);
    // static field const value: static public System.Xml.ValidationType DTD
    static constexpr const int DTD = 2;
    // Get static field: static public System.Xml.ValidationType DTD
    static ::System::Xml::ValidationType _get_DTD();
    // Set static field: static public System.Xml.ValidationType DTD
    static void _set_DTD(::System::Xml::ValidationType value);
    // [ObsoleteAttribute] Offset: 0x1062D88
    // static field const value: static public System.Xml.ValidationType XDR
    static constexpr const int XDR = 3;
    // Get static field: static public System.Xml.ValidationType XDR
    static ::System::Xml::ValidationType _get_XDR();
    // Set static field: static public System.Xml.ValidationType XDR
    static void _set_XDR(::System::Xml::ValidationType value);
    // static field const value: static public System.Xml.ValidationType Schema
    static constexpr const int Schema = 4;
    // Get static field: static public System.Xml.ValidationType Schema
    static ::System::Xml::ValidationType _get_Schema();
    // Set static field: static public System.Xml.ValidationType Schema
    static void _set_Schema(::System::Xml::ValidationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.ValidationType
  #pragma pack(pop)
  static check_size<sizeof(ValidationType), 0 + sizeof(int)> __System_Xml_ValidationTypeSizeCheck;
  static_assert(sizeof(ValidationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
