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
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_ImagePacking
  struct HAPI_ImagePacking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImagePacking, "HoudiniEngineUnity", "HAPI_ImagePacking");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_ImagePacking
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_ImagePacking/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_ImagePacking
    constexpr HAPI_ImagePacking(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_UNKNOWN
    static constexpr const int HAPI_IMAGE_PACKING_UNKNOWN = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_UNKNOWN
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_UNKNOWN();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_UNKNOWN
    static void _set_HAPI_IMAGE_PACKING_UNKNOWN(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_SINGLE
    static constexpr const int HAPI_IMAGE_PACKING_SINGLE = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_SINGLE
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_SINGLE();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_SINGLE
    static void _set_HAPI_IMAGE_PACKING_SINGLE(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DUAL
    static constexpr const int HAPI_IMAGE_PACKING_DUAL = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DUAL
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_DUAL();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DUAL
    static void _set_HAPI_IMAGE_PACKING_DUAL(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_RGB
    static constexpr const int HAPI_IMAGE_PACKING_RGB = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_RGB
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_RGB();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_RGB
    static void _set_HAPI_IMAGE_PACKING_RGB(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_BGR
    static constexpr const int HAPI_IMAGE_PACKING_BGR = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_BGR
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_BGR();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_BGR
    static void _set_HAPI_IMAGE_PACKING_BGR(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_RGBA
    static constexpr const int HAPI_IMAGE_PACKING_RGBA = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_RGBA
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_RGBA();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_RGBA
    static void _set_HAPI_IMAGE_PACKING_RGBA(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_ABGR
    static constexpr const int HAPI_IMAGE_PACKING_ABGR = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_ABGR
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_ABGR();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_ABGR
    static void _set_HAPI_IMAGE_PACKING_ABGR(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_MAX
    static constexpr const int HAPI_IMAGE_PACKING_MAX = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_MAX
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_MAX
    static void _set_HAPI_IMAGE_PACKING_MAX(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DEFAULT3
    static constexpr const int HAPI_IMAGE_PACKING_DEFAULT3 = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DEFAULT3
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_DEFAULT3();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DEFAULT3
    static void _set_HAPI_IMAGE_PACKING_DEFAULT3(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // static field const value: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DEFAULT4
    static constexpr const int HAPI_IMAGE_PACKING_DEFAULT4 = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DEFAULT4
    static ::HoudiniEngineUnity::HAPI_ImagePacking _get_HAPI_IMAGE_PACKING_DEFAULT4();
    // Set static field: static public HoudiniEngineUnity.HAPI_ImagePacking HAPI_IMAGE_PACKING_DEFAULT4
    static void _set_HAPI_IMAGE_PACKING_DEFAULT4(::HoudiniEngineUnity::HAPI_ImagePacking value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_ImagePacking
  #pragma pack(pop)
  static check_size<sizeof(HAPI_ImagePacking), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_ImagePackingSizeCheck;
  static_assert(sizeof(HAPI_ImagePacking) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
