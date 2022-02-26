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
  // Forward declaring type: SecurityAction
  struct SecurityAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityAction, "System.Security.Permissions", "SecurityAction");
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Permissions.SecurityAction
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1189DD0
  // [ObsoleteAttribute] Offset: 1189DD0
  struct SecurityAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SecurityAction
    constexpr SecurityAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Permissions.SecurityAction Demand
    static constexpr const int Demand = 2;
    // Get static field: static public System.Security.Permissions.SecurityAction Demand
    static ::System::Security::Permissions::SecurityAction _get_Demand();
    // Set static field: static public System.Security.Permissions.SecurityAction Demand
    static void _set_Demand(::System::Security::Permissions::SecurityAction value);
    // static field const value: static public System.Security.Permissions.SecurityAction Assert
    static constexpr const int _Assert = 3;
    // Get static field: static public System.Security.Permissions.SecurityAction Assert
    static ::System::Security::Permissions::SecurityAction _get_Assert();
    // Set static field: static public System.Security.Permissions.SecurityAction Assert
    static void _set_Assert(::System::Security::Permissions::SecurityAction value);
    // [ObsoleteAttribute] Offset: 0x118EA34
    // static field const value: static public System.Security.Permissions.SecurityAction Deny
    static constexpr const int Deny = 4;
    // Get static field: static public System.Security.Permissions.SecurityAction Deny
    static ::System::Security::Permissions::SecurityAction _get_Deny();
    // Set static field: static public System.Security.Permissions.SecurityAction Deny
    static void _set_Deny(::System::Security::Permissions::SecurityAction value);
    // static field const value: static public System.Security.Permissions.SecurityAction PermitOnly
    static constexpr const int PermitOnly = 5;
    // Get static field: static public System.Security.Permissions.SecurityAction PermitOnly
    static ::System::Security::Permissions::SecurityAction _get_PermitOnly();
    // Set static field: static public System.Security.Permissions.SecurityAction PermitOnly
    static void _set_PermitOnly(::System::Security::Permissions::SecurityAction value);
    // static field const value: static public System.Security.Permissions.SecurityAction LinkDemand
    static constexpr const int LinkDemand = 6;
    // Get static field: static public System.Security.Permissions.SecurityAction LinkDemand
    static ::System::Security::Permissions::SecurityAction _get_LinkDemand();
    // Set static field: static public System.Security.Permissions.SecurityAction LinkDemand
    static void _set_LinkDemand(::System::Security::Permissions::SecurityAction value);
    // static field const value: static public System.Security.Permissions.SecurityAction InheritanceDemand
    static constexpr const int InheritanceDemand = 7;
    // Get static field: static public System.Security.Permissions.SecurityAction InheritanceDemand
    static ::System::Security::Permissions::SecurityAction _get_InheritanceDemand();
    // Set static field: static public System.Security.Permissions.SecurityAction InheritanceDemand
    static void _set_InheritanceDemand(::System::Security::Permissions::SecurityAction value);
    // [ObsoleteAttribute] Offset: 0x118EA6C
    // static field const value: static public System.Security.Permissions.SecurityAction RequestMinimum
    static constexpr const int RequestMinimum = 8;
    // Get static field: static public System.Security.Permissions.SecurityAction RequestMinimum
    static ::System::Security::Permissions::SecurityAction _get_RequestMinimum();
    // Set static field: static public System.Security.Permissions.SecurityAction RequestMinimum
    static void _set_RequestMinimum(::System::Security::Permissions::SecurityAction value);
    // [ObsoleteAttribute] Offset: 0x118EAA4
    // static field const value: static public System.Security.Permissions.SecurityAction RequestOptional
    static constexpr const int RequestOptional = 9;
    // Get static field: static public System.Security.Permissions.SecurityAction RequestOptional
    static ::System::Security::Permissions::SecurityAction _get_RequestOptional();
    // Set static field: static public System.Security.Permissions.SecurityAction RequestOptional
    static void _set_RequestOptional(::System::Security::Permissions::SecurityAction value);
    // [ObsoleteAttribute] Offset: 0x118EADC
    // static field const value: static public System.Security.Permissions.SecurityAction RequestRefuse
    static constexpr const int RequestRefuse = 10;
    // Get static field: static public System.Security.Permissions.SecurityAction RequestRefuse
    static ::System::Security::Permissions::SecurityAction _get_RequestRefuse();
    // Set static field: static public System.Security.Permissions.SecurityAction RequestRefuse
    static void _set_RequestRefuse(::System::Security::Permissions::SecurityAction value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Permissions.SecurityAction
  #pragma pack(pop)
  static check_size<sizeof(SecurityAction), 0 + sizeof(int)> __System_Security_Permissions_SecurityActionSizeCheck;
  static_assert(sizeof(SecurityAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
