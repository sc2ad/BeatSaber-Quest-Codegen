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
  // Forward declaring type: PrimitiveType
  struct PrimitiveType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PrimitiveType, "UnityEngine", "PrimitiveType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PrimitiveType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PrimitiveType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PrimitiveType
    constexpr PrimitiveType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.PrimitiveType Sphere
    static constexpr const int Sphere = 0;
    // Get static field: static public UnityEngine.PrimitiveType Sphere
    static ::UnityEngine::PrimitiveType _get_Sphere();
    // Set static field: static public UnityEngine.PrimitiveType Sphere
    static void _set_Sphere(::UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Capsule
    static constexpr const int Capsule = 1;
    // Get static field: static public UnityEngine.PrimitiveType Capsule
    static ::UnityEngine::PrimitiveType _get_Capsule();
    // Set static field: static public UnityEngine.PrimitiveType Capsule
    static void _set_Capsule(::UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Cylinder
    static constexpr const int Cylinder = 2;
    // Get static field: static public UnityEngine.PrimitiveType Cylinder
    static ::UnityEngine::PrimitiveType _get_Cylinder();
    // Set static field: static public UnityEngine.PrimitiveType Cylinder
    static void _set_Cylinder(::UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Cube
    static constexpr const int Cube = 3;
    // Get static field: static public UnityEngine.PrimitiveType Cube
    static ::UnityEngine::PrimitiveType _get_Cube();
    // Set static field: static public UnityEngine.PrimitiveType Cube
    static void _set_Cube(::UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Plane
    static constexpr const int Plane = 4;
    // Get static field: static public UnityEngine.PrimitiveType Plane
    static ::UnityEngine::PrimitiveType _get_Plane();
    // Set static field: static public UnityEngine.PrimitiveType Plane
    static void _set_Plane(::UnityEngine::PrimitiveType value);
    // static field const value: static public UnityEngine.PrimitiveType Quad
    static constexpr const int Quad = 5;
    // Get static field: static public UnityEngine.PrimitiveType Quad
    static ::UnityEngine::PrimitiveType _get_Quad();
    // Set static field: static public UnityEngine.PrimitiveType Quad
    static void _set_Quad(::UnityEngine::PrimitiveType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.PrimitiveType
  #pragma pack(pop)
  static check_size<sizeof(PrimitiveType), 0 + sizeof(int)> __UnityEngine_PrimitiveTypeSizeCheck;
  static_assert(sizeof(PrimitiveType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
