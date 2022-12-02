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
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: AceQualifier
  struct AceQualifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceQualifier, "System.Security.AccessControl", "AceQualifier");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.AceQualifier
  // [TokenAttribute] Offset: FFFFFFFF
  struct AceQualifier/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AceQualifier
    constexpr AceQualifier(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Security.AccessControl.AceQualifier AccessAllowed
    static constexpr const int AccessAllowed = 0;
    // Get static field: static public System.Security.AccessControl.AceQualifier AccessAllowed
    static ::System::Security::AccessControl::AceQualifier _get_AccessAllowed();
    // Set static field: static public System.Security.AccessControl.AceQualifier AccessAllowed
    static void _set_AccessAllowed(::System::Security::AccessControl::AceQualifier value);
    // static field const value: static public System.Security.AccessControl.AceQualifier AccessDenied
    static constexpr const int AccessDenied = 1;
    // Get static field: static public System.Security.AccessControl.AceQualifier AccessDenied
    static ::System::Security::AccessControl::AceQualifier _get_AccessDenied();
    // Set static field: static public System.Security.AccessControl.AceQualifier AccessDenied
    static void _set_AccessDenied(::System::Security::AccessControl::AceQualifier value);
    // static field const value: static public System.Security.AccessControl.AceQualifier SystemAudit
    static constexpr const int SystemAudit = 2;
    // Get static field: static public System.Security.AccessControl.AceQualifier SystemAudit
    static ::System::Security::AccessControl::AceQualifier _get_SystemAudit();
    // Set static field: static public System.Security.AccessControl.AceQualifier SystemAudit
    static void _set_SystemAudit(::System::Security::AccessControl::AceQualifier value);
    // static field const value: static public System.Security.AccessControl.AceQualifier SystemAlarm
    static constexpr const int SystemAlarm = 3;
    // Get static field: static public System.Security.AccessControl.AceQualifier SystemAlarm
    static ::System::Security::AccessControl::AceQualifier _get_SystemAlarm();
    // Set static field: static public System.Security.AccessControl.AceQualifier SystemAlarm
    static void _set_SystemAlarm(::System::Security::AccessControl::AceQualifier value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.AccessControl.AceQualifier
  #pragma pack(pop)
  static check_size<sizeof(AceQualifier), 0 + sizeof(int)> __System_Security_AccessControl_AceQualifierSizeCheck;
  static_assert(sizeof(AceQualifier) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"