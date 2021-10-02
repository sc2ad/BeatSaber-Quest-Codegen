// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VRControllerAxis_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRControllerAxis_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VRControllerAxis_t
    constexpr VRControllerAxis_t(float x_ = {}, float y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    float& dyn_x();
    // Get instance field reference: public System.Single y
    float& dyn_y();
  }; // Valve.VR.VRControllerAxis_t
  #pragma pack(pop)
  static check_size<sizeof(VRControllerAxis_t), 4 + sizeof(float)> __Valve_VR_VRControllerAxis_tSizeCheck;
  static_assert(sizeof(VRControllerAxis_t) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRControllerAxis_t, "Valve.VR", "VRControllerAxis_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
