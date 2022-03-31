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
  // Forward declaring type: PreserveReferencesHandling
  struct PreserveReferencesHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::PreserveReferencesHandling, "Newtonsoft.Json", "PreserveReferencesHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.PreserveReferencesHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 122AEEC
  struct PreserveReferencesHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PreserveReferencesHandling
    constexpr PreserveReferencesHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.PreserveReferencesHandling None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.PreserveReferencesHandling None
    static ::Newtonsoft::Json::PreserveReferencesHandling _get_None();
    // Set static field: static public Newtonsoft.Json.PreserveReferencesHandling None
    static void _set_None(::Newtonsoft::Json::PreserveReferencesHandling value);
    // static field const value: static public Newtonsoft.Json.PreserveReferencesHandling Objects
    static constexpr const int Objects = 1;
    // Get static field: static public Newtonsoft.Json.PreserveReferencesHandling Objects
    static ::Newtonsoft::Json::PreserveReferencesHandling _get_Objects();
    // Set static field: static public Newtonsoft.Json.PreserveReferencesHandling Objects
    static void _set_Objects(::Newtonsoft::Json::PreserveReferencesHandling value);
    // static field const value: static public Newtonsoft.Json.PreserveReferencesHandling Arrays
    static constexpr const int Arrays = 2;
    // Get static field: static public Newtonsoft.Json.PreserveReferencesHandling Arrays
    static ::Newtonsoft::Json::PreserveReferencesHandling _get_Arrays();
    // Set static field: static public Newtonsoft.Json.PreserveReferencesHandling Arrays
    static void _set_Arrays(::Newtonsoft::Json::PreserveReferencesHandling value);
    // static field const value: static public Newtonsoft.Json.PreserveReferencesHandling All
    static constexpr const int All = 3;
    // Get static field: static public Newtonsoft.Json.PreserveReferencesHandling All
    static ::Newtonsoft::Json::PreserveReferencesHandling _get_All();
    // Set static field: static public Newtonsoft.Json.PreserveReferencesHandling All
    static void _set_All(::Newtonsoft::Json::PreserveReferencesHandling value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Newtonsoft.Json.PreserveReferencesHandling
  #pragma pack(pop)
  static check_size<sizeof(PreserveReferencesHandling), 0 + sizeof(int)> __Newtonsoft_Json_PreserveReferencesHandlingSizeCheck;
  static_assert(sizeof(PreserveReferencesHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
