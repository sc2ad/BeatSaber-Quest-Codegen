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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyAttributes
  struct PropertyAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PropertyAttributes, "System.Reflection", "PropertyAttributes");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.PropertyAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106E288
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PropertyAttributes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PropertyAttributes
    constexpr PropertyAttributes(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Reflection.PropertyAttributes None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.PropertyAttributes None
    static ::System::Reflection::PropertyAttributes _get_None();
    // Set static field: static public System.Reflection.PropertyAttributes None
    static void _set_None(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes SpecialName
    static constexpr const int SpecialName = 512;
    // Get static field: static public System.Reflection.PropertyAttributes SpecialName
    static ::System::Reflection::PropertyAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.PropertyAttributes SpecialName
    static void _set_SpecialName(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes ReservedMask
    static constexpr const int ReservedMask = 62464;
    // Get static field: static public System.Reflection.PropertyAttributes ReservedMask
    static ::System::Reflection::PropertyAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.PropertyAttributes ReservedMask
    static void _set_ReservedMask(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes RTSpecialName
    static constexpr const int RTSpecialName = 1024;
    // Get static field: static public System.Reflection.PropertyAttributes RTSpecialName
    static ::System::Reflection::PropertyAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.PropertyAttributes RTSpecialName
    static void _set_RTSpecialName(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes HasDefault
    static constexpr const int HasDefault = 4096;
    // Get static field: static public System.Reflection.PropertyAttributes HasDefault
    static ::System::Reflection::PropertyAttributes _get_HasDefault();
    // Set static field: static public System.Reflection.PropertyAttributes HasDefault
    static void _set_HasDefault(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes Reserved2
    static constexpr const int Reserved2 = 8192;
    // Get static field: static public System.Reflection.PropertyAttributes Reserved2
    static ::System::Reflection::PropertyAttributes _get_Reserved2();
    // Set static field: static public System.Reflection.PropertyAttributes Reserved2
    static void _set_Reserved2(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes Reserved3
    static constexpr const int Reserved3 = 16384;
    // Get static field: static public System.Reflection.PropertyAttributes Reserved3
    static ::System::Reflection::PropertyAttributes _get_Reserved3();
    // Set static field: static public System.Reflection.PropertyAttributes Reserved3
    static void _set_Reserved3(::System::Reflection::PropertyAttributes value);
    // static field const value: static public System.Reflection.PropertyAttributes Reserved4
    static constexpr const int Reserved4 = 32768;
    // Get static field: static public System.Reflection.PropertyAttributes Reserved4
    static ::System::Reflection::PropertyAttributes _get_Reserved4();
    // Set static field: static public System.Reflection.PropertyAttributes Reserved4
    static void _set_Reserved4(::System::Reflection::PropertyAttributes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Reflection.PropertyAttributes
  #pragma pack(pop)
  static check_size<sizeof(PropertyAttributes), 0 + sizeof(int)> __System_Reflection_PropertyAttributesSizeCheck;
  static_assert(sizeof(PropertyAttributes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
