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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentColorType, "", "EnvironmentColorType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentColorType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EnvironmentColorType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EnvironmentColorType
    constexpr EnvironmentColorType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public EnvironmentColorType None
    static constexpr const int None = -1;
    // Get static field: static public EnvironmentColorType None
    static ::GlobalNamespace::EnvironmentColorType _get_None();
    // Set static field: static public EnvironmentColorType None
    static void _set_None(::GlobalNamespace::EnvironmentColorType value);
    // static field const value: static public EnvironmentColorType Color0
    static constexpr const int Color0 = 0;
    // Get static field: static public EnvironmentColorType Color0
    static ::GlobalNamespace::EnvironmentColorType _get_Color0();
    // Set static field: static public EnvironmentColorType Color0
    static void _set_Color0(::GlobalNamespace::EnvironmentColorType value);
    // static field const value: static public EnvironmentColorType Color1
    static constexpr const int Color1 = 1;
    // Get static field: static public EnvironmentColorType Color1
    static ::GlobalNamespace::EnvironmentColorType _get_Color1();
    // Set static field: static public EnvironmentColorType Color1
    static void _set_Color1(::GlobalNamespace::EnvironmentColorType value);
    // static field const value: static public EnvironmentColorType ColorW
    static constexpr const int ColorW = 2;
    // Get static field: static public EnvironmentColorType ColorW
    static ::GlobalNamespace::EnvironmentColorType _get_ColorW();
    // Set static field: static public EnvironmentColorType ColorW
    static void _set_ColorW(::GlobalNamespace::EnvironmentColorType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // EnvironmentColorType
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentColorType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentColorTypeSizeCheck;
  static_assert(sizeof(EnvironmentColorType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
