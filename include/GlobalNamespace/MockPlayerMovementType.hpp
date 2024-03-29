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
  // Forward declaring type: MockPlayerMovementType
  struct MockPlayerMovementType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerMovementType, "", "MockPlayerMovementType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerMovementType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MockPlayerMovementType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MockPlayerMovementType
    constexpr MockPlayerMovementType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public MockPlayerMovementType AI
    static constexpr const int AI = 0;
    // Get static field: static public MockPlayerMovementType AI
    static ::GlobalNamespace::MockPlayerMovementType _get_AI();
    // Set static field: static public MockPlayerMovementType AI
    static void _set_AI(::GlobalNamespace::MockPlayerMovementType value);
    // static field const value: static public MockPlayerMovementType MirrorPlayer
    static constexpr const int MirrorPlayer = 1;
    // Get static field: static public MockPlayerMovementType MirrorPlayer
    static ::GlobalNamespace::MockPlayerMovementType _get_MirrorPlayer();
    // Set static field: static public MockPlayerMovementType MirrorPlayer
    static void _set_MirrorPlayer(::GlobalNamespace::MockPlayerMovementType value);
    // static field const value: static public MockPlayerMovementType Recording
    static constexpr const int Recording = 2;
    // Get static field: static public MockPlayerMovementType Recording
    static ::GlobalNamespace::MockPlayerMovementType _get_Recording();
    // Set static field: static public MockPlayerMovementType Recording
    static void _set_Recording(::GlobalNamespace::MockPlayerMovementType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MockPlayerMovementType
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerMovementType), 0 + sizeof(int)> __GlobalNamespace_MockPlayerMovementTypeSizeCheck;
  static_assert(sizeof(MockPlayerMovementType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
