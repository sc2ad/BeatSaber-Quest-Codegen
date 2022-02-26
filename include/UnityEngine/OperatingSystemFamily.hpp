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
  // Forward declaring type: OperatingSystemFamily
  struct OperatingSystemFamily;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::OperatingSystemFamily, "UnityEngine", "OperatingSystemFamily");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.OperatingSystemFamily
  // [TokenAttribute] Offset: FFFFFFFF
  struct OperatingSystemFamily/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OperatingSystemFamily
    constexpr OperatingSystemFamily(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.OperatingSystemFamily Other
    static constexpr const int Other = 0;
    // Get static field: static public UnityEngine.OperatingSystemFamily Other
    static ::UnityEngine::OperatingSystemFamily _get_Other();
    // Set static field: static public UnityEngine.OperatingSystemFamily Other
    static void _set_Other(::UnityEngine::OperatingSystemFamily value);
    // static field const value: static public UnityEngine.OperatingSystemFamily MacOSX
    static constexpr const int MacOSX = 1;
    // Get static field: static public UnityEngine.OperatingSystemFamily MacOSX
    static ::UnityEngine::OperatingSystemFamily _get_MacOSX();
    // Set static field: static public UnityEngine.OperatingSystemFamily MacOSX
    static void _set_MacOSX(::UnityEngine::OperatingSystemFamily value);
    // static field const value: static public UnityEngine.OperatingSystemFamily Windows
    static constexpr const int Windows = 2;
    // Get static field: static public UnityEngine.OperatingSystemFamily Windows
    static ::UnityEngine::OperatingSystemFamily _get_Windows();
    // Set static field: static public UnityEngine.OperatingSystemFamily Windows
    static void _set_Windows(::UnityEngine::OperatingSystemFamily value);
    // static field const value: static public UnityEngine.OperatingSystemFamily Linux
    static constexpr const int Linux = 3;
    // Get static field: static public UnityEngine.OperatingSystemFamily Linux
    static ::UnityEngine::OperatingSystemFamily _get_Linux();
    // Set static field: static public UnityEngine.OperatingSystemFamily Linux
    static void _set_Linux(::UnityEngine::OperatingSystemFamily value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.OperatingSystemFamily
  #pragma pack(pop)
  static check_size<sizeof(OperatingSystemFamily), 0 + sizeof(int)> __UnityEngine_OperatingSystemFamilySizeCheck;
  static_assert(sizeof(OperatingSystemFamily) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
