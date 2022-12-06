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
  // Forward declaring type: AssemblyContentType
  struct AssemblyContentType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyContentType, "System.Reflection", "AssemblyContentType");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyContentType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106DD38
  struct AssemblyContentType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AssemblyContentType
    constexpr AssemblyContentType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Reflection.AssemblyContentType Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Reflection.AssemblyContentType Default
    static ::System::Reflection::AssemblyContentType _get_Default();
    // Set static field: static public System.Reflection.AssemblyContentType Default
    static void _set_Default(::System::Reflection::AssemblyContentType value);
    // static field const value: static public System.Reflection.AssemblyContentType WindowsRuntime
    static constexpr const int WindowsRuntime = 1;
    // Get static field: static public System.Reflection.AssemblyContentType WindowsRuntime
    static ::System::Reflection::AssemblyContentType _get_WindowsRuntime();
    // Set static field: static public System.Reflection.AssemblyContentType WindowsRuntime
    static void _set_WindowsRuntime(::System::Reflection::AssemblyContentType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Reflection.AssemblyContentType
  #pragma pack(pop)
  static check_size<sizeof(AssemblyContentType), 0 + sizeof(int)> __System_Reflection_AssemblyContentTypeSizeCheck;
  static_assert(sizeof(AssemblyContentType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
