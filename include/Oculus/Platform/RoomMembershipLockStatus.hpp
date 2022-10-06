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
  // Forward declaring type: RoomMembershipLockStatus
  struct RoomMembershipLockStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomMembershipLockStatus, "Oculus.Platform", "RoomMembershipLockStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RoomMembershipLockStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct RoomMembershipLockStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RoomMembershipLockStatus
    constexpr RoomMembershipLockStatus(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x10EE934
    // static field const value: static public Oculus.Platform.RoomMembershipLockStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.RoomMembershipLockStatus Unknown
    static ::Oculus::Platform::RoomMembershipLockStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.RoomMembershipLockStatus Unknown
    static void _set_Unknown(::Oculus::Platform::RoomMembershipLockStatus value);
    // [DescriptionAttribute] Offset: 0x10EE96C
    // static field const value: static public Oculus.Platform.RoomMembershipLockStatus Lock
    static constexpr const int Lock = 1;
    // Get static field: static public Oculus.Platform.RoomMembershipLockStatus Lock
    static ::Oculus::Platform::RoomMembershipLockStatus _get_Lock();
    // Set static field: static public Oculus.Platform.RoomMembershipLockStatus Lock
    static void _set_Lock(::Oculus::Platform::RoomMembershipLockStatus value);
    // [DescriptionAttribute] Offset: 0x10EE9A4
    // static field const value: static public Oculus.Platform.RoomMembershipLockStatus Unlock
    static constexpr const int Unlock = 2;
    // Get static field: static public Oculus.Platform.RoomMembershipLockStatus Unlock
    static ::Oculus::Platform::RoomMembershipLockStatus _get_Unlock();
    // Set static field: static public Oculus.Platform.RoomMembershipLockStatus Unlock
    static void _set_Unlock(::Oculus::Platform::RoomMembershipLockStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.RoomMembershipLockStatus
  #pragma pack(pop)
  static check_size<sizeof(RoomMembershipLockStatus), 0 + sizeof(int)> __Oculus_Platform_RoomMembershipLockStatusSizeCheck;
  static_assert(sizeof(RoomMembershipLockStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
