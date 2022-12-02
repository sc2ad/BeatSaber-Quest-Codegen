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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FocusType
  struct FocusType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FocusType, "UnityEngine", "FocusType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.FocusType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FocusType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FocusType
    constexpr FocusType(int value_ = {}) noexcept : value{value_} {}
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
    // [ObsoleteAttribute] Offset: 0x10A3890
    // static field const value: static public UnityEngine.FocusType Native
    static constexpr const int Native = 0;
    // Get static field: static public UnityEngine.FocusType Native
    static ::UnityEngine::FocusType _get_Native();
    // Set static field: static public UnityEngine.FocusType Native
    static void _set_Native(::UnityEngine::FocusType value);
    // static field const value: static public UnityEngine.FocusType Keyboard
    static constexpr const int Keyboard = 1;
    // Get static field: static public UnityEngine.FocusType Keyboard
    static ::UnityEngine::FocusType _get_Keyboard();
    // Set static field: static public UnityEngine.FocusType Keyboard
    static void _set_Keyboard(::UnityEngine::FocusType value);
    // static field const value: static public UnityEngine.FocusType Passive
    static constexpr const int Passive = 2;
    // Get static field: static public UnityEngine.FocusType Passive
    static ::UnityEngine::FocusType _get_Passive();
    // Set static field: static public UnityEngine.FocusType Passive
    static void _set_Passive(::UnityEngine::FocusType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.FocusType
  #pragma pack(pop)
  static check_size<sizeof(FocusType), 0 + sizeof(int)> __UnityEngine_FocusTypeSizeCheck;
  static_assert(sizeof(FocusType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
