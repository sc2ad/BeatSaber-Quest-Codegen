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
  // Forward declaring type: NullValueHandling
  struct NullValueHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::NullValueHandling, "Newtonsoft.Json", "NullValueHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.NullValueHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EFE34
  struct NullValueHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NullValueHandling
    constexpr NullValueHandling(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.NullValueHandling Include
    static constexpr const int Include = 0;
    // Get static field: static public Newtonsoft.Json.NullValueHandling Include
    static ::Newtonsoft::Json::NullValueHandling _get_Include();
    // Set static field: static public Newtonsoft.Json.NullValueHandling Include
    static void _set_Include(::Newtonsoft::Json::NullValueHandling value);
    // static field const value: static public Newtonsoft.Json.NullValueHandling Ignore
    static constexpr const int Ignore = 1;
    // Get static field: static public Newtonsoft.Json.NullValueHandling Ignore
    static ::Newtonsoft::Json::NullValueHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.NullValueHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::NullValueHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.NullValueHandling
  #pragma pack(pop)
  static check_size<sizeof(NullValueHandling), 0 + sizeof(int)> __Newtonsoft_Json_NullValueHandlingSizeCheck;
  static_assert(sizeof(NullValueHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
