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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.LazyThreadSafetyMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct LazyThreadSafetyMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: LazyThreadSafetyMode
    constexpr LazyThreadSafetyMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.LazyThreadSafetyMode None
    static constexpr const int None = 0;
    // Get static field: static public System.Threading.LazyThreadSafetyMode None
    static System::Threading::LazyThreadSafetyMode _get_None();
    // Set static field: static public System.Threading.LazyThreadSafetyMode None
    static void _set_None(System::Threading::LazyThreadSafetyMode value);
    // static field const value: static public System.Threading.LazyThreadSafetyMode PublicationOnly
    static constexpr const int PublicationOnly = 1;
    // Get static field: static public System.Threading.LazyThreadSafetyMode PublicationOnly
    static System::Threading::LazyThreadSafetyMode _get_PublicationOnly();
    // Set static field: static public System.Threading.LazyThreadSafetyMode PublicationOnly
    static void _set_PublicationOnly(System::Threading::LazyThreadSafetyMode value);
    // static field const value: static public System.Threading.LazyThreadSafetyMode ExecutionAndPublication
    static constexpr const int ExecutionAndPublication = 2;
    // Get static field: static public System.Threading.LazyThreadSafetyMode ExecutionAndPublication
    static System::Threading::LazyThreadSafetyMode _get_ExecutionAndPublication();
    // Set static field: static public System.Threading.LazyThreadSafetyMode ExecutionAndPublication
    static void _set_ExecutionAndPublication(System::Threading::LazyThreadSafetyMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.LazyThreadSafetyMode
  #pragma pack(pop)
  static check_size<sizeof(LazyThreadSafetyMode), 0 + sizeof(int)> __System_Threading_LazyThreadSafetyModeSizeCheck;
  static_assert(sizeof(LazyThreadSafetyMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LazyThreadSafetyMode, "System.Threading", "LazyThreadSafetyMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
