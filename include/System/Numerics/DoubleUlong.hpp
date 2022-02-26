// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Numerics
namespace System::Numerics {
  // Forward declaring type: DoubleUlong
  struct DoubleUlong;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::DoubleUlong, "System.Numerics", "DoubleUlong");
// Type namespace: System.Numerics
namespace System::Numerics {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Numerics.DoubleUlong
  // [TokenAttribute] Offset: FFFFFFFF
  struct DoubleUlong/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double dbl
    // Size: 0x8
    // Offset: 0x0
    double dbl;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.UInt64 uu
    // Size: 0x8
    // Offset: 0x0
    uint64_t uu;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: DoubleUlong
    constexpr DoubleUlong(double dbl_ = {}, uint64_t uu_ = {}) noexcept : dbl{dbl_}, uu{uu_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double dbl
    double& dyn_dbl();
    // Get instance field reference: public System.UInt64 uu
    uint64_t& dyn_uu();
  }; // System.Numerics.DoubleUlong
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
