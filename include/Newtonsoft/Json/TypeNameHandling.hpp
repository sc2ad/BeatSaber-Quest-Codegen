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
  // Forward declaring type: TypeNameHandling
  struct TypeNameHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::TypeNameHandling, "Newtonsoft.Json", "TypeNameHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.TypeNameHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EFE54
  struct TypeNameHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TypeNameHandling
    constexpr TypeNameHandling(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.TypeNameHandling None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.TypeNameHandling None
    static ::Newtonsoft::Json::TypeNameHandling _get_None();
    // Set static field: static public Newtonsoft.Json.TypeNameHandling None
    static void _set_None(::Newtonsoft::Json::TypeNameHandling value);
    // static field const value: static public Newtonsoft.Json.TypeNameHandling Objects
    static constexpr const int Objects = 1;
    // Get static field: static public Newtonsoft.Json.TypeNameHandling Objects
    static ::Newtonsoft::Json::TypeNameHandling _get_Objects();
    // Set static field: static public Newtonsoft.Json.TypeNameHandling Objects
    static void _set_Objects(::Newtonsoft::Json::TypeNameHandling value);
    // static field const value: static public Newtonsoft.Json.TypeNameHandling Arrays
    static constexpr const int Arrays = 2;
    // Get static field: static public Newtonsoft.Json.TypeNameHandling Arrays
    static ::Newtonsoft::Json::TypeNameHandling _get_Arrays();
    // Set static field: static public Newtonsoft.Json.TypeNameHandling Arrays
    static void _set_Arrays(::Newtonsoft::Json::TypeNameHandling value);
    // static field const value: static public Newtonsoft.Json.TypeNameHandling All
    static constexpr const int All = 3;
    // Get static field: static public Newtonsoft.Json.TypeNameHandling All
    static ::Newtonsoft::Json::TypeNameHandling _get_All();
    // Set static field: static public Newtonsoft.Json.TypeNameHandling All
    static void _set_All(::Newtonsoft::Json::TypeNameHandling value);
    // static field const value: static public Newtonsoft.Json.TypeNameHandling Auto
    static constexpr const int Auto = 4;
    // Get static field: static public Newtonsoft.Json.TypeNameHandling Auto
    static ::Newtonsoft::Json::TypeNameHandling _get_Auto();
    // Set static field: static public Newtonsoft.Json.TypeNameHandling Auto
    static void _set_Auto(::Newtonsoft::Json::TypeNameHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.TypeNameHandling
  #pragma pack(pop)
  static check_size<sizeof(TypeNameHandling), 0 + sizeof(int)> __Newtonsoft_Json_TypeNameHandlingSizeCheck;
  static_assert(sizeof(TypeNameHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
