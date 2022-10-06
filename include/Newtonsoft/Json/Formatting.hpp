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
  // Forward declaring type: Formatting
  struct Formatting;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Formatting, "Newtonsoft.Json", "Formatting");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Formatting
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10D86D0
  struct Formatting/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Formatting
    constexpr Formatting(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.Formatting None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.Formatting None
    static ::Newtonsoft::Json::Formatting _get_None();
    // Set static field: static public Newtonsoft.Json.Formatting None
    static void _set_None(::Newtonsoft::Json::Formatting value);
    // static field const value: static public Newtonsoft.Json.Formatting Indented
    static constexpr const int Indented = 1;
    // Get static field: static public Newtonsoft.Json.Formatting Indented
    static ::Newtonsoft::Json::Formatting _get_Indented();
    // Set static field: static public Newtonsoft.Json.Formatting Indented
    static void _set_Indented(::Newtonsoft::Json::Formatting value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.Formatting
  #pragma pack(pop)
  static check_size<sizeof(Formatting), 0 + sizeof(int)> __Newtonsoft_Json_FormattingSizeCheck;
  static_assert(sizeof(Formatting) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
