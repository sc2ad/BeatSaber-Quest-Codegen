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
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IntersectionMaskCircle_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntersectionMaskCircle_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Single m_flCenterX
    // Size: 0x4
    // Offset: 0x0
    float m_flCenterX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCenterY
    // Size: 0x4
    // Offset: 0x4
    float m_flCenterY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flRadius
    // Size: 0x4
    // Offset: 0x8
    float m_flRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: IntersectionMaskCircle_t
    constexpr IntersectionMaskCircle_t(float m_flCenterX_ = {}, float m_flCenterY_ = {}, float m_flRadius_ = {}) noexcept : m_flCenterX{m_flCenterX_}, m_flCenterY{m_flCenterY_}, m_flRadius{m_flRadius_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single m_flCenterX
    float& dyn_m_flCenterX();
    // Get instance field reference: public System.Single m_flCenterY
    float& dyn_m_flCenterY();
    // Get instance field reference: public System.Single m_flRadius
    float& dyn_m_flRadius();
  }; // Valve.VR.IntersectionMaskCircle_t
  #pragma pack(pop)
  static check_size<sizeof(IntersectionMaskCircle_t), 8 + sizeof(float)> __Valve_VR_IntersectionMaskCircle_tSizeCheck;
  static_assert(sizeof(IntersectionMaskCircle_t) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IntersectionMaskCircle_t, "Valve.VR", "IntersectionMaskCircle_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
