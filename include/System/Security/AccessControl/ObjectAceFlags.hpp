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
  // Forward declaring type: ObjectAceFlags
  struct ObjectAceFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectAceFlags, "System.Security.AccessControl", "ObjectAceFlags");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.ObjectAceFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ObjectAceFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ObjectAceFlags
    constexpr ObjectAceFlags(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Security.AccessControl.ObjectAceFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Security.AccessControl.ObjectAceFlags None
    static ::System::Security::AccessControl::ObjectAceFlags _get_None();
    // Set static field: static public System.Security.AccessControl.ObjectAceFlags None
    static void _set_None(::System::Security::AccessControl::ObjectAceFlags value);
    // static field const value: static public System.Security.AccessControl.ObjectAceFlags ObjectAceTypePresent
    static constexpr const int ObjectAceTypePresent = 1;
    // Get static field: static public System.Security.AccessControl.ObjectAceFlags ObjectAceTypePresent
    static ::System::Security::AccessControl::ObjectAceFlags _get_ObjectAceTypePresent();
    // Set static field: static public System.Security.AccessControl.ObjectAceFlags ObjectAceTypePresent
    static void _set_ObjectAceTypePresent(::System::Security::AccessControl::ObjectAceFlags value);
    // static field const value: static public System.Security.AccessControl.ObjectAceFlags InheritedObjectAceTypePresent
    static constexpr const int InheritedObjectAceTypePresent = 2;
    // Get static field: static public System.Security.AccessControl.ObjectAceFlags InheritedObjectAceTypePresent
    static ::System::Security::AccessControl::ObjectAceFlags _get_InheritedObjectAceTypePresent();
    // Set static field: static public System.Security.AccessControl.ObjectAceFlags InheritedObjectAceTypePresent
    static void _set_InheritedObjectAceTypePresent(::System::Security::AccessControl::ObjectAceFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.AccessControl.ObjectAceFlags
  #pragma pack(pop)
  static check_size<sizeof(ObjectAceFlags), 0 + sizeof(int)> __System_Security_AccessControl_ObjectAceFlagsSizeCheck;
  static_assert(sizeof(ObjectAceFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
