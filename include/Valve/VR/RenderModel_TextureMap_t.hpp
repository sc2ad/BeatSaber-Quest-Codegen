// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: RenderModel_TextureMap_t
  struct RenderModel_TextureMap_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::RenderModel_TextureMap_t, "Valve.VR", "RenderModel_TextureMap_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.RenderModel_TextureMap_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_TextureMap_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Char unWidth
    // Size: 0x2
    // Offset: 0x0
    ::Il2CppChar unWidth;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // public System.Char unHeight
    // Size: 0x2
    // Offset: 0x2
    ::Il2CppChar unHeight;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: unHeight and: rubTextureMapData
    char __padding1[0x4] = {};
    // public System.IntPtr rubTextureMapData
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr rubTextureMapData;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RenderModel_TextureMap_t
    constexpr RenderModel_TextureMap_t(::Il2CppChar unWidth_ = {}, ::Il2CppChar unHeight_ = {}, ::System::IntPtr rubTextureMapData_ = {}) noexcept : unWidth{unWidth_}, unHeight{unHeight_}, rubTextureMapData{rubTextureMapData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Char unWidth
    ::Il2CppChar& dyn_unWidth();
    // Get instance field reference: public System.Char unHeight
    ::Il2CppChar& dyn_unHeight();
    // Get instance field reference: public System.IntPtr rubTextureMapData
    ::System::IntPtr& dyn_rubTextureMapData();
  }; // Valve.VR.RenderModel_TextureMap_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_TextureMap_t), 8 + sizeof(::System::IntPtr)> __Valve_VR_RenderModel_TextureMap_tSizeCheck;
  static_assert(sizeof(RenderModel_TextureMap_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
