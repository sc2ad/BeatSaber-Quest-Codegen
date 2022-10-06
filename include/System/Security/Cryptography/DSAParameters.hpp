// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSAParameters, "System.Security.Cryptography", "DSAParameters");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.DSAParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1058E00
  struct DSAParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte[] P
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> P;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] Q
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> Q;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] G
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> G;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] Y
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> Y;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] J
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> J;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] X
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> X;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] Seed
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> Seed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 Counter
    // Size: 0x4
    // Offset: 0x38
    int Counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DSAParameters
    constexpr DSAParameters(::ArrayW<uint8_t> P_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Q_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> G_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Y_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> J_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> X_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Seed_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int Counter_ = {}) noexcept : P{P_}, Q{Q_}, G{G_}, Y{Y_}, J{J_}, X{X_}, Seed{Seed_}, Counter{Counter_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte[] P
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_P();
    // Get instance field reference: public System.Byte[] Q
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Q();
    // Get instance field reference: public System.Byte[] G
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_G();
    // Get instance field reference: public System.Byte[] Y
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Y();
    // Get instance field reference: public System.Byte[] J
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_J();
    // Get instance field reference: public System.Byte[] X
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_X();
    // Get instance field reference: public System.Byte[] Seed
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Seed();
    // Get instance field reference: public System.Int32 Counter
    [[deprecated("Use field access instead!")]] int& dyn_Counter();
  }; // System.Security.Cryptography.DSAParameters
  #pragma pack(pop)
  static check_size<sizeof(DSAParameters), 56 + sizeof(int)> __System_Security_Cryptography_DSAParametersSizeCheck;
  static_assert(sizeof(DSAParameters) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
