// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.TargetType
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  struct TargetType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TargetType
    constexpr TargetType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Bindings.TargetType Function
    static constexpr const int Function = 0;
    // Get static field: static public UnityEngine.Bindings.TargetType Function
    static UnityEngine::Bindings::TargetType _get_Function();
    // Set static field: static public UnityEngine.Bindings.TargetType Function
    static void _set_Function(UnityEngine::Bindings::TargetType value);
    // static field const value: static public UnityEngine.Bindings.TargetType Field
    static constexpr const int Field = 1;
    // Get static field: static public UnityEngine.Bindings.TargetType Field
    static UnityEngine::Bindings::TargetType _get_Field();
    // Set static field: static public UnityEngine.Bindings.TargetType Field
    static void _set_Field(UnityEngine::Bindings::TargetType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Bindings.TargetType
  #pragma pack(pop)
  static check_size<sizeof(TargetType), 0 + sizeof(int)> __UnityEngine_Bindings_TargetTypeSizeCheck;
  static_assert(sizeof(TargetType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::TargetType, "UnityEngine.Bindings", "TargetType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
