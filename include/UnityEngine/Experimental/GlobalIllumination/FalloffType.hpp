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
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: FalloffType
  struct FalloffType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::FalloffType, "UnityEngine.Experimental.GlobalIllumination", "FalloffType");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.FalloffType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FalloffType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: FalloffType
    constexpr FalloffType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.FalloffType InverseSquared
    static constexpr const uint8_t InverseSquared = 0u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType InverseSquared
    static ::UnityEngine::Experimental::GlobalIllumination::FalloffType _get_InverseSquared();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType InverseSquared
    static void _set_InverseSquared(::UnityEngine::Experimental::GlobalIllumination::FalloffType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.FalloffType InverseSquaredNoRangeAttenuation
    static constexpr const uint8_t InverseSquaredNoRangeAttenuation = 1u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType InverseSquaredNoRangeAttenuation
    static ::UnityEngine::Experimental::GlobalIllumination::FalloffType _get_InverseSquaredNoRangeAttenuation();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType InverseSquaredNoRangeAttenuation
    static void _set_InverseSquaredNoRangeAttenuation(::UnityEngine::Experimental::GlobalIllumination::FalloffType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Linear
    static constexpr const uint8_t Linear = 2u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Linear
    static ::UnityEngine::Experimental::GlobalIllumination::FalloffType _get_Linear();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Linear
    static void _set_Linear(::UnityEngine::Experimental::GlobalIllumination::FalloffType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Legacy
    static constexpr const uint8_t Legacy = 3u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Legacy
    static ::UnityEngine::Experimental::GlobalIllumination::FalloffType _get_Legacy();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Legacy
    static void _set_Legacy(::UnityEngine::Experimental::GlobalIllumination::FalloffType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Undefined
    static constexpr const uint8_t Undefined = 4u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Undefined
    static ::UnityEngine::Experimental::GlobalIllumination::FalloffType _get_Undefined();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.FalloffType Undefined
    static void _set_Undefined(::UnityEngine::Experimental::GlobalIllumination::FalloffType value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // UnityEngine.Experimental.GlobalIllumination.FalloffType
  #pragma pack(pop)
  static check_size<sizeof(FalloffType), 0 + sizeof(uint8_t)> __UnityEngine_Experimental_GlobalIllumination_FalloffTypeSizeCheck;
  static_assert(sizeof(FalloffType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
