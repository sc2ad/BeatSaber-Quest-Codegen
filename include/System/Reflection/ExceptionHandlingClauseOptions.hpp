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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ExceptionHandlingClauseOptions
  struct ExceptionHandlingClauseOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ExceptionHandlingClauseOptions, "System.Reflection", "ExceptionHandlingClauseOptions");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ExceptionHandlingClauseOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106E0CC
  struct ExceptionHandlingClauseOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ExceptionHandlingClauseOptions
    constexpr ExceptionHandlingClauseOptions(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Reflection.ExceptionHandlingClauseOptions Clause
    static constexpr const int Clause = 0;
    // Get static field: static public System.Reflection.ExceptionHandlingClauseOptions Clause
    static ::System::Reflection::ExceptionHandlingClauseOptions _get_Clause();
    // Set static field: static public System.Reflection.ExceptionHandlingClauseOptions Clause
    static void _set_Clause(::System::Reflection::ExceptionHandlingClauseOptions value);
    // static field const value: static public System.Reflection.ExceptionHandlingClauseOptions Filter
    static constexpr const int Filter = 1;
    // Get static field: static public System.Reflection.ExceptionHandlingClauseOptions Filter
    static ::System::Reflection::ExceptionHandlingClauseOptions _get_Filter();
    // Set static field: static public System.Reflection.ExceptionHandlingClauseOptions Filter
    static void _set_Filter(::System::Reflection::ExceptionHandlingClauseOptions value);
    // static field const value: static public System.Reflection.ExceptionHandlingClauseOptions Finally
    static constexpr const int Finally = 2;
    // Get static field: static public System.Reflection.ExceptionHandlingClauseOptions Finally
    static ::System::Reflection::ExceptionHandlingClauseOptions _get_Finally();
    // Set static field: static public System.Reflection.ExceptionHandlingClauseOptions Finally
    static void _set_Finally(::System::Reflection::ExceptionHandlingClauseOptions value);
    // static field const value: static public System.Reflection.ExceptionHandlingClauseOptions Fault
    static constexpr const int Fault = 4;
    // Get static field: static public System.Reflection.ExceptionHandlingClauseOptions Fault
    static ::System::Reflection::ExceptionHandlingClauseOptions _get_Fault();
    // Set static field: static public System.Reflection.ExceptionHandlingClauseOptions Fault
    static void _set_Fault(::System::Reflection::ExceptionHandlingClauseOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Reflection.ExceptionHandlingClauseOptions
  #pragma pack(pop)
  static check_size<sizeof(ExceptionHandlingClauseOptions), 0 + sizeof(int)> __System_Reflection_ExceptionHandlingClauseOptionsSizeCheck;
  static_assert(sizeof(ExceptionHandlingClauseOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
