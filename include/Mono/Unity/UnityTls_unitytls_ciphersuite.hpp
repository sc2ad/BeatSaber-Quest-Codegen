// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_ciphersuite, "Mono.Unity", "UnityTls/unitytls_ciphersuite");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_ciphersuite
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_ciphersuite/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: unitytls_ciphersuite
    constexpr unitytls_ciphersuite(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_ciphersuite UNITYTLS_CIPHERSUITE_INVALID
    static constexpr const uint UNITYTLS_CIPHERSUITE_INVALID = 16777215u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_ciphersuite UNITYTLS_CIPHERSUITE_INVALID
    static ::Mono::Unity::UnityTls::unitytls_ciphersuite _get_UNITYTLS_CIPHERSUITE_INVALID();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_ciphersuite UNITYTLS_CIPHERSUITE_INVALID
    static void _set_UNITYTLS_CIPHERSUITE_INVALID(::Mono::Unity::UnityTls::unitytls_ciphersuite value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_ciphersuite
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_ciphersuite), 0 + sizeof(uint)> __Mono_Unity_UnityTls_unitytls_ciphersuiteSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_ciphersuite) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
