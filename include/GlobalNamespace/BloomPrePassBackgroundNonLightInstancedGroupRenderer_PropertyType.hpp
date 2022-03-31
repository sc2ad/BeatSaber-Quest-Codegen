// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundNonLightInstancedGroupRenderer
#include "GlobalNamespace/BloomPrePassBackgroundNonLightInstancedGroupRenderer.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PropertyType
    constexpr PropertyType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Float
    static constexpr const int Float = 0;
    // Get static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Float
    static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType _get_Float();
    // Set static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Float
    static void _set_Float(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType value);
    // static field const value: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Vector
    static constexpr const int Vector = 1;
    // Get static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Vector
    static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType _get_Vector();
    // Set static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Vector
    static void _set_Vector(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType value);
    // static field const value: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Color
    static constexpr const int Color = 2;
    // Get static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Color
    static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType _get_Color();
    // Set static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Color
    static void _set_Color(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType value);
    // static field const value: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Matrix4x4
    static constexpr const int Matrix4x4 = 3;
    // Get static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Matrix4x4
    static ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType _get_Matrix4x4();
    // Set static field: static public BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType Matrix4x4
    static void _set_Matrix4x4(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType), 0 + sizeof(int)> __GlobalNamespace_BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyTypeSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
