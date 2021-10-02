// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRTrackedCameraFrameType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRTrackedCameraFrameType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EVRTrackedCameraFrameType
    constexpr EVRTrackedCameraFrameType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameType Distorted
    static constexpr const int Distorted = 0;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameType Distorted
    static OVR::OpenVR::EVRTrackedCameraFrameType _get_Distorted();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameType Distorted
    static void _set_Distorted(OVR::OpenVR::EVRTrackedCameraFrameType value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameType Undistorted
    static constexpr const int Undistorted = 1;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameType Undistorted
    static OVR::OpenVR::EVRTrackedCameraFrameType _get_Undistorted();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameType Undistorted
    static void _set_Undistorted(OVR::OpenVR::EVRTrackedCameraFrameType value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameType MaximumUndistorted
    static constexpr const int MaximumUndistorted = 2;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameType MaximumUndistorted
    static OVR::OpenVR::EVRTrackedCameraFrameType _get_MaximumUndistorted();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameType MaximumUndistorted
    static void _set_MaximumUndistorted(OVR::OpenVR::EVRTrackedCameraFrameType value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static constexpr const int MAX_CAMERA_FRAME_TYPES = 3;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static OVR::OpenVR::EVRTrackedCameraFrameType _get_MAX_CAMERA_FRAME_TYPES();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static void _set_MAX_CAMERA_FRAME_TYPES(OVR::OpenVR::EVRTrackedCameraFrameType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRTrackedCameraFrameType
  #pragma pack(pop)
  static check_size<sizeof(EVRTrackedCameraFrameType), 0 + sizeof(int)> __OVR_OpenVR_EVRTrackedCameraFrameTypeSizeCheck;
  static_assert(sizeof(EVRTrackedCameraFrameType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRTrackedCameraFrameType, "OVR.OpenVR", "EVRTrackedCameraFrameType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
