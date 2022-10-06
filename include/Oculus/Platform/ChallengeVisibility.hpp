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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ChallengeVisibility
  struct ChallengeVisibility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeVisibility, "Oculus.Platform", "ChallengeVisibility");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ChallengeVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChallengeVisibility/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChallengeVisibility
    constexpr ChallengeVisibility(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x10ECE34
    // static field const value: static public Oculus.Platform.ChallengeVisibility Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.ChallengeVisibility Unknown
    static ::Oculus::Platform::ChallengeVisibility _get_Unknown();
    // Set static field: static public Oculus.Platform.ChallengeVisibility Unknown
    static void _set_Unknown(::Oculus::Platform::ChallengeVisibility value);
    // [DescriptionAttribute] Offset: 0x10ECE6C
    // static field const value: static public Oculus.Platform.ChallengeVisibility InviteOnly
    static constexpr const int InviteOnly = 1;
    // Get static field: static public Oculus.Platform.ChallengeVisibility InviteOnly
    static ::Oculus::Platform::ChallengeVisibility _get_InviteOnly();
    // Set static field: static public Oculus.Platform.ChallengeVisibility InviteOnly
    static void _set_InviteOnly(::Oculus::Platform::ChallengeVisibility value);
    // [DescriptionAttribute] Offset: 0x10ECEA4
    // static field const value: static public Oculus.Platform.ChallengeVisibility Public
    static constexpr const int Public = 2;
    // Get static field: static public Oculus.Platform.ChallengeVisibility Public
    static ::Oculus::Platform::ChallengeVisibility _get_Public();
    // Set static field: static public Oculus.Platform.ChallengeVisibility Public
    static void _set_Public(::Oculus::Platform::ChallengeVisibility value);
    // [DescriptionAttribute] Offset: 0x10ECEDC
    // static field const value: static public Oculus.Platform.ChallengeVisibility Private
    static constexpr const int Private = 3;
    // Get static field: static public Oculus.Platform.ChallengeVisibility Private
    static ::Oculus::Platform::ChallengeVisibility _get_Private();
    // Set static field: static public Oculus.Platform.ChallengeVisibility Private
    static void _set_Private(::Oculus::Platform::ChallengeVisibility value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.ChallengeVisibility
  #pragma pack(pop)
  static check_size<sizeof(ChallengeVisibility), 0 + sizeof(int)> __Oculus_Platform_ChallengeVisibilitySizeCheck;
  static_assert(sizeof(ChallengeVisibility) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
