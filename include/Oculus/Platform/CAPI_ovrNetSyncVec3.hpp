// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI::ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Platform.CAPI/Oculus.Platform.ovrNetSyncVec3
  // [TokenAttribute] Offset: FFFFFFFF
  struct CAPI::ovrNetSyncVec3/*, public ::System::ValueType*/ {
    public:
    public:
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
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ovrNetSyncVec3
    constexpr ovrNetSyncVec3(float x_ = {}, float y_ = {}, float z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    float& dyn_x();
    // Get instance field reference: public System.Single y
    float& dyn_y();
    // Get instance field reference: public System.Single z
    float& dyn_z();
  }; // Oculus.Platform.CAPI/Oculus.Platform.ovrNetSyncVec3
  #pragma pack(pop)
  static check_size<sizeof(CAPI::ovrNetSyncVec3), 8 + sizeof(float)> __Oculus_Platform_CAPI_ovrNetSyncVec3SizeCheck;
  static_assert(sizeof(CAPI::ovrNetSyncVec3) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
