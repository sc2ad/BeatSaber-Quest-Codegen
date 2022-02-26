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
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: DuplicatePropertyNameHandling
  struct DuplicatePropertyNameHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling, "Newtonsoft.Json.Linq", "DuplicatePropertyNameHandling");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.DuplicatePropertyNameHandling
  // [TokenAttribute] Offset: FFFFFFFF
  struct DuplicatePropertyNameHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DuplicatePropertyNameHandling
    constexpr DuplicatePropertyNameHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Replace
    static constexpr const int Replace = 0;
    // Get static field: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Replace
    static ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling _get_Replace();
    // Set static field: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Replace
    static void _set_Replace(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling value);
    // static field const value: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Ignore
    static constexpr const int Ignore = 1;
    // Get static field: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Ignore
    static ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling value);
    // static field const value: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Error
    static constexpr const int Error = 2;
    // Get static field: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Error
    static ::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling _get_Error();
    // Set static field: static public Newtonsoft.Json.Linq.DuplicatePropertyNameHandling Error
    static void _set_Error(::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Newtonsoft.Json.Linq.DuplicatePropertyNameHandling
  #pragma pack(pop)
  static check_size<sizeof(DuplicatePropertyNameHandling), 0 + sizeof(int)> __Newtonsoft_Json_Linq_DuplicatePropertyNameHandlingSizeCheck;
  static_assert(sizeof(DuplicatePropertyNameHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
