// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightGroupSubsystem
#include "GlobalNamespace/LightGroupSubsystem.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSubsystem::RefreshContext, "", "LightGroupSubsystem/RefreshContext");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LightGroupSubsystem/RefreshContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightGroupSubsystem::RefreshContext/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RefreshContext
    constexpr RefreshContext(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LightGroupSubsystem/RefreshContext LightGroup
    static constexpr const int LightGroup = 0;
    // Get static field: static public LightGroupSubsystem/RefreshContext LightGroup
    static ::GlobalNamespace::LightGroupSubsystem::RefreshContext _get_LightGroup();
    // Set static field: static public LightGroupSubsystem/RefreshContext LightGroup
    static void _set_LightGroup(::GlobalNamespace::LightGroupSubsystem::RefreshContext value);
    // static field const value: static public LightGroupSubsystem/RefreshContext Self
    static constexpr const int Self = 1;
    // Get static field: static public LightGroupSubsystem/RefreshContext Self
    static ::GlobalNamespace::LightGroupSubsystem::RefreshContext _get_Self();
    // Set static field: static public LightGroupSubsystem/RefreshContext Self
    static void _set_Self(::GlobalNamespace::LightGroupSubsystem::RefreshContext value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LightGroupSubsystem/RefreshContext
  #pragma pack(pop)
  static check_size<sizeof(LightGroupSubsystem::RefreshContext), 0 + sizeof(int)> __GlobalNamespace_LightGroupSubsystem_RefreshContextSizeCheck;
  static_assert(sizeof(LightGroupSubsystem::RefreshContext) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"