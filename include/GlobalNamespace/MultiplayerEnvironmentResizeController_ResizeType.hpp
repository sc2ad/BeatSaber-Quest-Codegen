// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerEnvironmentResizeController
#include "GlobalNamespace/MultiplayerEnvironmentResizeController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType, "", "MultiplayerEnvironmentResizeController/ResizeType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEnvironmentResizeController/ResizeType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MultiplayerEnvironmentResizeController::ResizeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ResizeType
    constexpr ResizeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerEnvironmentResizeController/ResizeType None
    static constexpr const int None = 0;
    // Get static field: static public MultiplayerEnvironmentResizeController/ResizeType None
    static ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType _get_None();
    // Set static field: static public MultiplayerEnvironmentResizeController/ResizeType None
    static void _set_None(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType value);
    // static field const value: static public MultiplayerEnvironmentResizeController/ResizeType Position
    static constexpr const int Position = 1;
    // Get static field: static public MultiplayerEnvironmentResizeController/ResizeType Position
    static ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType _get_Position();
    // Set static field: static public MultiplayerEnvironmentResizeController/ResizeType Position
    static void _set_Position(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType value);
    // static field const value: static public MultiplayerEnvironmentResizeController/ResizeType Length
    static constexpr const int Length = 2;
    // Get static field: static public MultiplayerEnvironmentResizeController/ResizeType Length
    static ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType _get_Length();
    // Set static field: static public MultiplayerEnvironmentResizeController/ResizeType Length
    static void _set_Length(::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // MultiplayerEnvironmentResizeController/ResizeType
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEnvironmentResizeController::ResizeType), 0 + sizeof(int)> __GlobalNamespace_MultiplayerEnvironmentResizeController_ResizeTypeSizeCheck;
  static_assert(sizeof(MultiplayerEnvironmentResizeController::ResizeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
