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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalObjectPositionE/*, public System::Enum*/ {
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
    // Creating value type constructor for type: InternalObjectPositionE
    constexpr InternalObjectPositionE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Empty
    static System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Top
    static constexpr const int Top = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Top
    static System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE _get_Top();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Top
    static void _set_Top(System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Child
    static constexpr const int Child = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Child
    static System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE _get_Child();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Child
    static void _set_Child(System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Headers
    static constexpr const int Headers = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Headers
    static System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE _get_Headers();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE Headers
    static void _set_Headers(System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE
  #pragma pack(pop)
  static check_size<sizeof(InternalObjectPositionE), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalObjectPositionESizeCheck;
  static_assert(sizeof(InternalObjectPositionE) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE, "System.Runtime.Serialization.Formatters.Binary", "InternalObjectPositionE");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
