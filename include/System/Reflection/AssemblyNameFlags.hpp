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
  // Forward declaring type: AssemblyNameFlags
  struct AssemblyNameFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyNameFlags, "System.Reflection", "AssemblyNameFlags");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyNameFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106DCFC
  // [FlagsAttribute] Offset: FFFFFFFF
  struct AssemblyNameFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AssemblyNameFlags
    constexpr AssemblyNameFlags(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Reflection.AssemblyNameFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.AssemblyNameFlags None
    static ::System::Reflection::AssemblyNameFlags _get_None();
    // Set static field: static public System.Reflection.AssemblyNameFlags None
    static void _set_None(::System::Reflection::AssemblyNameFlags value);
    // static field const value: static public System.Reflection.AssemblyNameFlags PublicKey
    static constexpr const int PublicKey = 1;
    // Get static field: static public System.Reflection.AssemblyNameFlags PublicKey
    static ::System::Reflection::AssemblyNameFlags _get_PublicKey();
    // Set static field: static public System.Reflection.AssemblyNameFlags PublicKey
    static void _set_PublicKey(::System::Reflection::AssemblyNameFlags value);
    // static field const value: static public System.Reflection.AssemblyNameFlags EnableJITcompileOptimizer
    static constexpr const int EnableJITcompileOptimizer = 16384;
    // Get static field: static public System.Reflection.AssemblyNameFlags EnableJITcompileOptimizer
    static ::System::Reflection::AssemblyNameFlags _get_EnableJITcompileOptimizer();
    // Set static field: static public System.Reflection.AssemblyNameFlags EnableJITcompileOptimizer
    static void _set_EnableJITcompileOptimizer(::System::Reflection::AssemblyNameFlags value);
    // static field const value: static public System.Reflection.AssemblyNameFlags EnableJITcompileTracking
    static constexpr const int EnableJITcompileTracking = 32768;
    // Get static field: static public System.Reflection.AssemblyNameFlags EnableJITcompileTracking
    static ::System::Reflection::AssemblyNameFlags _get_EnableJITcompileTracking();
    // Set static field: static public System.Reflection.AssemblyNameFlags EnableJITcompileTracking
    static void _set_EnableJITcompileTracking(::System::Reflection::AssemblyNameFlags value);
    // static field const value: static public System.Reflection.AssemblyNameFlags Retargetable
    static constexpr const int Retargetable = 256;
    // Get static field: static public System.Reflection.AssemblyNameFlags Retargetable
    static ::System::Reflection::AssemblyNameFlags _get_Retargetable();
    // Set static field: static public System.Reflection.AssemblyNameFlags Retargetable
    static void _set_Retargetable(::System::Reflection::AssemblyNameFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Reflection.AssemblyNameFlags
  #pragma pack(pop)
  static check_size<sizeof(AssemblyNameFlags), 0 + sizeof(int)> __System_Reflection_AssemblyNameFlagsSizeCheck;
  static_assert(sizeof(AssemblyNameFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
