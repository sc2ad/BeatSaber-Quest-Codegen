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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InvitePolicy, "", "InvitePolicy");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: InvitePolicy
  // [TokenAttribute] Offset: FFFFFFFF
  struct InvitePolicy/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InvitePolicy
    constexpr InvitePolicy(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public InvitePolicy OnlyConnectionOwnerCanInvite
    static constexpr const int OnlyConnectionOwnerCanInvite = 0;
    // Get static field: static public InvitePolicy OnlyConnectionOwnerCanInvite
    static ::GlobalNamespace::InvitePolicy _get_OnlyConnectionOwnerCanInvite();
    // Set static field: static public InvitePolicy OnlyConnectionOwnerCanInvite
    static void _set_OnlyConnectionOwnerCanInvite(::GlobalNamespace::InvitePolicy value);
    // static field const value: static public InvitePolicy AnyoneCanInvite
    static constexpr const int AnyoneCanInvite = 1;
    // Get static field: static public InvitePolicy AnyoneCanInvite
    static ::GlobalNamespace::InvitePolicy _get_AnyoneCanInvite();
    // Set static field: static public InvitePolicy AnyoneCanInvite
    static void _set_AnyoneCanInvite(::GlobalNamespace::InvitePolicy value);
    // static field const value: static public InvitePolicy NobodyCanInvite
    static constexpr const int NobodyCanInvite = 2;
    // Get static field: static public InvitePolicy NobodyCanInvite
    static ::GlobalNamespace::InvitePolicy _get_NobodyCanInvite();
    // Set static field: static public InvitePolicy NobodyCanInvite
    static void _set_NobodyCanInvite(::GlobalNamespace::InvitePolicy value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // InvitePolicy
  #pragma pack(pop)
  static check_size<sizeof(InvitePolicy), 0 + sizeof(int)> __GlobalNamespace_InvitePolicySizeCheck;
  static_assert(sizeof(InvitePolicy) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
