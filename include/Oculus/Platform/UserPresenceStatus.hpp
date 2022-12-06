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
  // Forward declaring type: UserPresenceStatus
  struct UserPresenceStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserPresenceStatus, "Oculus.Platform", "UserPresenceStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserPresenceStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserPresenceStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UserPresenceStatus
    constexpr UserPresenceStatus(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x11064E4
    // static field const value: static public Oculus.Platform.UserPresenceStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.UserPresenceStatus Unknown
    static ::Oculus::Platform::UserPresenceStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.UserPresenceStatus Unknown
    static void _set_Unknown(::Oculus::Platform::UserPresenceStatus value);
    // [DescriptionAttribute] Offset: 0x110651C
    // static field const value: static public Oculus.Platform.UserPresenceStatus Online
    static constexpr const int Online = 1;
    // Get static field: static public Oculus.Platform.UserPresenceStatus Online
    static ::Oculus::Platform::UserPresenceStatus _get_Online();
    // Set static field: static public Oculus.Platform.UserPresenceStatus Online
    static void _set_Online(::Oculus::Platform::UserPresenceStatus value);
    // [DescriptionAttribute] Offset: 0x1106554
    // static field const value: static public Oculus.Platform.UserPresenceStatus Offline
    static constexpr const int Offline = 2;
    // Get static field: static public Oculus.Platform.UserPresenceStatus Offline
    static ::Oculus::Platform::UserPresenceStatus _get_Offline();
    // Set static field: static public Oculus.Platform.UserPresenceStatus Offline
    static void _set_Offline(::Oculus::Platform::UserPresenceStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.UserPresenceStatus
  #pragma pack(pop)
  static check_size<sizeof(UserPresenceStatus), 0 + sizeof(int)> __Oculus_Platform_UserPresenceStatusSizeCheck;
  static_assert(sizeof(UserPresenceStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
