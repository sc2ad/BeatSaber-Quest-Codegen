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
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalMemberValueE/*, public System::Enum*/ {
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
    // Creating value type constructor for type: InternalMemberValueE
    constexpr InternalMemberValueE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Empty
    static System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE InlineValue
    static constexpr const int InlineValue = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE InlineValue
    static System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE _get_InlineValue();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE InlineValue
    static void _set_InlineValue(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Nested
    static constexpr const int Nested = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Nested
    static System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE _get_Nested();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Nested
    static void _set_Nested(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Reference
    static constexpr const int Reference = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Reference
    static System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE _get_Reference();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Reference
    static void _set_Reference(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Null
    static constexpr const int Null = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Null
    static System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE _get_Null();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE Null
    static void _set_Null(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
  #pragma pack(pop)
  static check_size<sizeof(InternalMemberValueE), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalMemberValueESizeCheck;
  static_assert(sizeof(InternalMemberValueE) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
