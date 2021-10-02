// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/RawTouch
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::RawTouch/*, public System::Enum*/ {
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
    // Creating value type constructor for type: RawTouch
    constexpr RawTouch(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/RawTouch None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/RawTouch None
    static GlobalNamespace::OVRInput::RawTouch _get_None();
    // Set static field: static public OVRInput/RawTouch None
    static void _set_None(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch A
    static constexpr const int A = 1;
    // Get static field: static public OVRInput/RawTouch A
    static GlobalNamespace::OVRInput::RawTouch _get_A();
    // Set static field: static public OVRInput/RawTouch A
    static void _set_A(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch B
    static constexpr const int B = 2;
    // Get static field: static public OVRInput/RawTouch B
    static GlobalNamespace::OVRInput::RawTouch _get_B();
    // Set static field: static public OVRInput/RawTouch B
    static void _set_B(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch X
    static constexpr const int X = 256;
    // Get static field: static public OVRInput/RawTouch X
    static GlobalNamespace::OVRInput::RawTouch _get_X();
    // Set static field: static public OVRInput/RawTouch X
    static void _set_X(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch Y
    static constexpr const int Y = 512;
    // Get static field: static public OVRInput/RawTouch Y
    static GlobalNamespace::OVRInput::RawTouch _get_Y();
    // Set static field: static public OVRInput/RawTouch Y
    static void _set_Y(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch LIndexTrigger
    static constexpr const int LIndexTrigger = 4096;
    // Get static field: static public OVRInput/RawTouch LIndexTrigger
    static GlobalNamespace::OVRInput::RawTouch _get_LIndexTrigger();
    // Set static field: static public OVRInput/RawTouch LIndexTrigger
    static void _set_LIndexTrigger(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch LThumbstick
    static constexpr const int LThumbstick = 1024;
    // Get static field: static public OVRInput/RawTouch LThumbstick
    static GlobalNamespace::OVRInput::RawTouch _get_LThumbstick();
    // Set static field: static public OVRInput/RawTouch LThumbstick
    static void _set_LThumbstick(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch LThumbRest
    static constexpr const int LThumbRest = 2048;
    // Get static field: static public OVRInput/RawTouch LThumbRest
    static GlobalNamespace::OVRInput::RawTouch _get_LThumbRest();
    // Set static field: static public OVRInput/RawTouch LThumbRest
    static void _set_LThumbRest(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch LTouchpad
    static constexpr const int LTouchpad = 1073741824;
    // Get static field: static public OVRInput/RawTouch LTouchpad
    static GlobalNamespace::OVRInput::RawTouch _get_LTouchpad();
    // Set static field: static public OVRInput/RawTouch LTouchpad
    static void _set_LTouchpad(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch RIndexTrigger
    static constexpr const int RIndexTrigger = 16;
    // Get static field: static public OVRInput/RawTouch RIndexTrigger
    static GlobalNamespace::OVRInput::RawTouch _get_RIndexTrigger();
    // Set static field: static public OVRInput/RawTouch RIndexTrigger
    static void _set_RIndexTrigger(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch RThumbstick
    static constexpr const int RThumbstick = 4;
    // Get static field: static public OVRInput/RawTouch RThumbstick
    static GlobalNamespace::OVRInput::RawTouch _get_RThumbstick();
    // Set static field: static public OVRInput/RawTouch RThumbstick
    static void _set_RThumbstick(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch RThumbRest
    static constexpr const int RThumbRest = 8;
    // Get static field: static public OVRInput/RawTouch RThumbRest
    static GlobalNamespace::OVRInput::RawTouch _get_RThumbRest();
    // Set static field: static public OVRInput/RawTouch RThumbRest
    static void _set_RThumbRest(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch RTouchpad
    static constexpr const int RTouchpad = -2147483648;
    // Get static field: static public OVRInput/RawTouch RTouchpad
    static GlobalNamespace::OVRInput::RawTouch _get_RTouchpad();
    // Set static field: static public OVRInput/RawTouch RTouchpad
    static void _set_RTouchpad(GlobalNamespace::OVRInput::RawTouch value);
    // static field const value: static public OVRInput/RawTouch Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/RawTouch Any
    static GlobalNamespace::OVRInput::RawTouch _get_Any();
    // Set static field: static public OVRInput/RawTouch Any
    static void _set_Any(GlobalNamespace::OVRInput::RawTouch value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRInput/RawTouch
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::RawTouch), 0 + sizeof(int)> __GlobalNamespace_OVRInput_RawTouchSizeCheck;
  static_assert(sizeof(OVRInput::RawTouch) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::RawTouch, "", "OVRInput/RawTouch");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
