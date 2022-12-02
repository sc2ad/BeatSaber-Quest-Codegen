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
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Forward declaring type: PermissionState
  struct PermissionState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::PermissionState, "System.Security.Permissions", "PermissionState");
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Permissions.PermissionState
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106FAEC
  struct PermissionState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PermissionState
    constexpr PermissionState(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Security.Permissions.PermissionState Unrestricted
    static constexpr const int Unrestricted = 1;
    // Get static field: static public System.Security.Permissions.PermissionState Unrestricted
    static ::System::Security::Permissions::PermissionState _get_Unrestricted();
    // Set static field: static public System.Security.Permissions.PermissionState Unrestricted
    static void _set_Unrestricted(::System::Security::Permissions::PermissionState value);
    // static field const value: static public System.Security.Permissions.PermissionState None
    static constexpr const int None = 0;
    // Get static field: static public System.Security.Permissions.PermissionState None
    static ::System::Security::Permissions::PermissionState _get_None();
    // Set static field: static public System.Security.Permissions.PermissionState None
    static void _set_None(::System::Security::Permissions::PermissionState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Permissions.PermissionState
  #pragma pack(pop)
  static check_size<sizeof(PermissionState), 0 + sizeof(int)> __System_Security_Permissions_PermissionStateSizeCheck;
  static_assert(sizeof(PermissionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
