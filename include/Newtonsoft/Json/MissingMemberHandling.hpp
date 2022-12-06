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
  // Forward declaring type: MissingMemberHandling
  struct MissingMemberHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::MissingMemberHandling, "Newtonsoft.Json", "MissingMemberHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.MissingMemberHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EFE24
  struct MissingMemberHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MissingMemberHandling
    constexpr MissingMemberHandling(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.MissingMemberHandling Ignore
    static constexpr const int Ignore = 0;
    // Get static field: static public Newtonsoft.Json.MissingMemberHandling Ignore
    static ::Newtonsoft::Json::MissingMemberHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.MissingMemberHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::MissingMemberHandling value);
    // static field const value: static public Newtonsoft.Json.MissingMemberHandling Error
    static constexpr const int Error = 1;
    // Get static field: static public Newtonsoft.Json.MissingMemberHandling Error
    static ::Newtonsoft::Json::MissingMemberHandling _get_Error();
    // Set static field: static public Newtonsoft.Json.MissingMemberHandling Error
    static void _set_Error(::Newtonsoft::Json::MissingMemberHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.MissingMemberHandling
  #pragma pack(pop)
  static check_size<sizeof(MissingMemberHandling), 0 + sizeof(int)> __Newtonsoft_Json_MissingMemberHandlingSizeCheck;
  static_assert(sizeof(MissingMemberHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
