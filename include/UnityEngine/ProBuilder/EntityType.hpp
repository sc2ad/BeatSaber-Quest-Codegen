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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: EntityType
  struct EntityType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EntityType, "UnityEngine.ProBuilder", "EntityType");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.EntityType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EntityType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EntityType
    constexpr EntityType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.EntityType Detail
    static constexpr const int Detail = 0;
    // Get static field: static public UnityEngine.ProBuilder.EntityType Detail
    static ::UnityEngine::ProBuilder::EntityType _get_Detail();
    // Set static field: static public UnityEngine.ProBuilder.EntityType Detail
    static void _set_Detail(::UnityEngine::ProBuilder::EntityType value);
    // static field const value: static public UnityEngine.ProBuilder.EntityType Occluder
    static constexpr const int Occluder = 1;
    // Get static field: static public UnityEngine.ProBuilder.EntityType Occluder
    static ::UnityEngine::ProBuilder::EntityType _get_Occluder();
    // Set static field: static public UnityEngine.ProBuilder.EntityType Occluder
    static void _set_Occluder(::UnityEngine::ProBuilder::EntityType value);
    // static field const value: static public UnityEngine.ProBuilder.EntityType Trigger
    static constexpr const int Trigger = 2;
    // Get static field: static public UnityEngine.ProBuilder.EntityType Trigger
    static ::UnityEngine::ProBuilder::EntityType _get_Trigger();
    // Set static field: static public UnityEngine.ProBuilder.EntityType Trigger
    static void _set_Trigger(::UnityEngine::ProBuilder::EntityType value);
    // static field const value: static public UnityEngine.ProBuilder.EntityType Collider
    static constexpr const int Collider = 3;
    // Get static field: static public UnityEngine.ProBuilder.EntityType Collider
    static ::UnityEngine::ProBuilder::EntityType _get_Collider();
    // Set static field: static public UnityEngine.ProBuilder.EntityType Collider
    static void _set_Collider(::UnityEngine::ProBuilder::EntityType value);
    // static field const value: static public UnityEngine.ProBuilder.EntityType Mover
    static constexpr const int Mover = 4;
    // Get static field: static public UnityEngine.ProBuilder.EntityType Mover
    static ::UnityEngine::ProBuilder::EntityType _get_Mover();
    // Set static field: static public UnityEngine.ProBuilder.EntityType Mover
    static void _set_Mover(::UnityEngine::ProBuilder::EntityType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.EntityType
  #pragma pack(pop)
  static check_size<sizeof(EntityType), 0 + sizeof(int)> __UnityEngine_ProBuilder_EntityTypeSizeCheck;
  static_assert(sizeof(EntityType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
