// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieVariant
  // [TokenAttribute] Offset: FFFFFFFF
  struct CookieVariant/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CookieVariant
    constexpr CookieVariant(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.CookieVariant Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.Net.CookieVariant Unknown
    static System::Net::CookieVariant _get_Unknown();
    // Set static field: static public System.Net.CookieVariant Unknown
    static void _set_Unknown(System::Net::CookieVariant value);
    // static field const value: static public System.Net.CookieVariant Plain
    static constexpr const int Plain = 1;
    // Get static field: static public System.Net.CookieVariant Plain
    static System::Net::CookieVariant _get_Plain();
    // Set static field: static public System.Net.CookieVariant Plain
    static void _set_Plain(System::Net::CookieVariant value);
    // static field const value: static public System.Net.CookieVariant Rfc2109
    static constexpr const int Rfc2109 = 2;
    // Get static field: static public System.Net.CookieVariant Rfc2109
    static System::Net::CookieVariant _get_Rfc2109();
    // Set static field: static public System.Net.CookieVariant Rfc2109
    static void _set_Rfc2109(System::Net::CookieVariant value);
    // static field const value: static public System.Net.CookieVariant Rfc2965
    static constexpr const int Rfc2965 = 3;
    // Get static field: static public System.Net.CookieVariant Rfc2965
    static System::Net::CookieVariant _get_Rfc2965();
    // Set static field: static public System.Net.CookieVariant Rfc2965
    static void _set_Rfc2965(System::Net::CookieVariant value);
    // static field const value: static public System.Net.CookieVariant Default
    static constexpr const int Default = 2;
    // Get static field: static public System.Net.CookieVariant Default
    static System::Net::CookieVariant _get_Default();
    // Set static field: static public System.Net.CookieVariant Default
    static void _set_Default(System::Net::CookieVariant value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.CookieVariant
  #pragma pack(pop)
  static check_size<sizeof(CookieVariant), 0 + sizeof(int)> __System_Net_CookieVariantSizeCheck;
  static_assert(sizeof(CookieVariant) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieVariant, "System.Net", "CookieVariant");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
