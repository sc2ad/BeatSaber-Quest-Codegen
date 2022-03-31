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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: StringEscapeHandling
  struct StringEscapeHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::StringEscapeHandling, "Newtonsoft.Json", "StringEscapeHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.StringEscapeHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 122AECC
  struct StringEscapeHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StringEscapeHandling
    constexpr StringEscapeHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.StringEscapeHandling Default
    static constexpr const int Default = 0;
    // Get static field: static public Newtonsoft.Json.StringEscapeHandling Default
    static ::Newtonsoft::Json::StringEscapeHandling _get_Default();
    // Set static field: static public Newtonsoft.Json.StringEscapeHandling Default
    static void _set_Default(::Newtonsoft::Json::StringEscapeHandling value);
    // static field const value: static public Newtonsoft.Json.StringEscapeHandling EscapeNonAscii
    static constexpr const int EscapeNonAscii = 1;
    // Get static field: static public Newtonsoft.Json.StringEscapeHandling EscapeNonAscii
    static ::Newtonsoft::Json::StringEscapeHandling _get_EscapeNonAscii();
    // Set static field: static public Newtonsoft.Json.StringEscapeHandling EscapeNonAscii
    static void _set_EscapeNonAscii(::Newtonsoft::Json::StringEscapeHandling value);
    // static field const value: static public Newtonsoft.Json.StringEscapeHandling EscapeHtml
    static constexpr const int EscapeHtml = 2;
    // Get static field: static public Newtonsoft.Json.StringEscapeHandling EscapeHtml
    static ::Newtonsoft::Json::StringEscapeHandling _get_EscapeHtml();
    // Set static field: static public Newtonsoft.Json.StringEscapeHandling EscapeHtml
    static void _set_EscapeHtml(::Newtonsoft::Json::StringEscapeHandling value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Newtonsoft.Json.StringEscapeHandling
  #pragma pack(pop)
  static check_size<sizeof(StringEscapeHandling), 0 + sizeof(int)> __Newtonsoft_Json_StringEscapeHandlingSizeCheck;
  static_assert(sizeof(StringEscapeHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
