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
  // Forward declaring type: DateParseHandling
  struct DateParseHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateParseHandling, "Newtonsoft.Json", "DateParseHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.DateParseHandling
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateParseHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DateParseHandling
    constexpr DateParseHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.DateParseHandling None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.DateParseHandling None
    static ::Newtonsoft::Json::DateParseHandling _get_None();
    // Set static field: static public Newtonsoft.Json.DateParseHandling None
    static void _set_None(::Newtonsoft::Json::DateParseHandling value);
    // static field const value: static public Newtonsoft.Json.DateParseHandling DateTime
    static constexpr const int DateTime = 1;
    // Get static field: static public Newtonsoft.Json.DateParseHandling DateTime
    static ::Newtonsoft::Json::DateParseHandling _get_DateTime();
    // Set static field: static public Newtonsoft.Json.DateParseHandling DateTime
    static void _set_DateTime(::Newtonsoft::Json::DateParseHandling value);
    // static field const value: static public Newtonsoft.Json.DateParseHandling DateTimeOffset
    static constexpr const int DateTimeOffset = 2;
    // Get static field: static public Newtonsoft.Json.DateParseHandling DateTimeOffset
    static ::Newtonsoft::Json::DateParseHandling _get_DateTimeOffset();
    // Set static field: static public Newtonsoft.Json.DateParseHandling DateTimeOffset
    static void _set_DateTimeOffset(::Newtonsoft::Json::DateParseHandling value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Newtonsoft.Json.DateParseHandling
  #pragma pack(pop)
  static check_size<sizeof(DateParseHandling), 0 + sizeof(int)> __Newtonsoft_Json_DateParseHandlingSizeCheck;
  static_assert(sizeof(DateParseHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
