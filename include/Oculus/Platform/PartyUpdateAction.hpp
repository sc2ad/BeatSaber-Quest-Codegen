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
  // Forward declaring type: PartyUpdateAction
  struct PartyUpdateAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PartyUpdateAction, "Oculus.Platform", "PartyUpdateAction");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PartyUpdateAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct PartyUpdateAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PartyUpdateAction
    constexpr PartyUpdateAction(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x11033EC
    // static field const value: static public Oculus.Platform.PartyUpdateAction Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PartyUpdateAction Unknown
    static ::Oculus::Platform::PartyUpdateAction _get_Unknown();
    // Set static field: static public Oculus.Platform.PartyUpdateAction Unknown
    static void _set_Unknown(::Oculus::Platform::PartyUpdateAction value);
    // [DescriptionAttribute] Offset: 0x1103424
    // static field const value: static public Oculus.Platform.PartyUpdateAction Join
    static constexpr const int Join = 1;
    // Get static field: static public Oculus.Platform.PartyUpdateAction Join
    static ::Oculus::Platform::PartyUpdateAction _get_Join();
    // Set static field: static public Oculus.Platform.PartyUpdateAction Join
    static void _set_Join(::Oculus::Platform::PartyUpdateAction value);
    // [DescriptionAttribute] Offset: 0x110345C
    // static field const value: static public Oculus.Platform.PartyUpdateAction Leave
    static constexpr const int Leave = 2;
    // Get static field: static public Oculus.Platform.PartyUpdateAction Leave
    static ::Oculus::Platform::PartyUpdateAction _get_Leave();
    // Set static field: static public Oculus.Platform.PartyUpdateAction Leave
    static void _set_Leave(::Oculus::Platform::PartyUpdateAction value);
    // [DescriptionAttribute] Offset: 0x1103494
    // static field const value: static public Oculus.Platform.PartyUpdateAction Invite
    static constexpr const int Invite = 3;
    // Get static field: static public Oculus.Platform.PartyUpdateAction Invite
    static ::Oculus::Platform::PartyUpdateAction _get_Invite();
    // Set static field: static public Oculus.Platform.PartyUpdateAction Invite
    static void _set_Invite(::Oculus::Platform::PartyUpdateAction value);
    // [DescriptionAttribute] Offset: 0x11034CC
    // static field const value: static public Oculus.Platform.PartyUpdateAction Uninvite
    static constexpr const int Uninvite = 4;
    // Get static field: static public Oculus.Platform.PartyUpdateAction Uninvite
    static ::Oculus::Platform::PartyUpdateAction _get_Uninvite();
    // Set static field: static public Oculus.Platform.PartyUpdateAction Uninvite
    static void _set_Uninvite(::Oculus::Platform::PartyUpdateAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.PartyUpdateAction
  #pragma pack(pop)
  static check_size<sizeof(PartyUpdateAction), 0 + sizeof(int)> __Oculus_Platform_PartyUpdateActionSizeCheck;
  static_assert(sizeof(PartyUpdateAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
