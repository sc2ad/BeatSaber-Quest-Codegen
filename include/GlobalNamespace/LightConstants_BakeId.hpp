// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightConstants
#include "GlobalNamespace/LightConstants.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightConstants::BakeId, "", "LightConstants/BakeId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LightConstants/BakeId
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightConstants::BakeId/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BakeId
    constexpr BakeId(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public LightConstants/BakeId A
    static constexpr const int A = 1;
    // Get static field: static public LightConstants/BakeId A
    static ::GlobalNamespace::LightConstants::BakeId _get_A();
    // Set static field: static public LightConstants/BakeId A
    static void _set_A(::GlobalNamespace::LightConstants::BakeId value);
    // static field const value: static public LightConstants/BakeId B
    static constexpr const int B = 2;
    // Get static field: static public LightConstants/BakeId B
    static ::GlobalNamespace::LightConstants::BakeId _get_B();
    // Set static field: static public LightConstants/BakeId B
    static void _set_B(::GlobalNamespace::LightConstants::BakeId value);
    // static field const value: static public LightConstants/BakeId C
    static constexpr const int C = 3;
    // Get static field: static public LightConstants/BakeId C
    static ::GlobalNamespace::LightConstants::BakeId _get_C();
    // Set static field: static public LightConstants/BakeId C
    static void _set_C(::GlobalNamespace::LightConstants::BakeId value);
    // static field const value: static public LightConstants/BakeId D
    static constexpr const int D = 4;
    // Get static field: static public LightConstants/BakeId D
    static ::GlobalNamespace::LightConstants::BakeId _get_D();
    // Set static field: static public LightConstants/BakeId D
    static void _set_D(::GlobalNamespace::LightConstants::BakeId value);
    // static field const value: static public LightConstants/BakeId E
    static constexpr const int E = 5;
    // Get static field: static public LightConstants/BakeId E
    static ::GlobalNamespace::LightConstants::BakeId _get_E();
    // Set static field: static public LightConstants/BakeId E
    static void _set_E(::GlobalNamespace::LightConstants::BakeId value);
    // static field const value: static public LightConstants/BakeId F
    static constexpr const int F = 6;
    // Get static field: static public LightConstants/BakeId F
    static ::GlobalNamespace::LightConstants::BakeId _get_F();
    // Set static field: static public LightConstants/BakeId F
    static void _set_F(::GlobalNamespace::LightConstants::BakeId value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LightConstants/BakeId
  #pragma pack(pop)
  static check_size<sizeof(LightConstants::BakeId), 0 + sizeof(int)> __GlobalNamespace_LightConstants_BakeIdSizeCheck;
  static_assert(sizeof(LightConstants::BakeId) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
