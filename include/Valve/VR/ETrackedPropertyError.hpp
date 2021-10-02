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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.ETrackedPropertyError
  // [TokenAttribute] Offset: FFFFFFFF
  struct ETrackedPropertyError/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ETrackedPropertyError
    constexpr ETrackedPropertyError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_Success
    static constexpr const int TrackedProp_Success = 0;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_Success
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_Success();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_Success
    static void _set_TrackedProp_Success(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_WrongDataType
    static constexpr const int TrackedProp_WrongDataType = 1;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_WrongDataType
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_WrongDataType();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_WrongDataType
    static void _set_TrackedProp_WrongDataType(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_WrongDeviceClass
    static constexpr const int TrackedProp_WrongDeviceClass = 2;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_WrongDeviceClass
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_WrongDeviceClass();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_WrongDeviceClass
    static void _set_TrackedProp_WrongDeviceClass(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_BufferTooSmall
    static constexpr const int TrackedProp_BufferTooSmall = 3;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_BufferTooSmall
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_BufferTooSmall();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_BufferTooSmall
    static void _set_TrackedProp_BufferTooSmall(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_UnknownProperty
    static constexpr const int TrackedProp_UnknownProperty = 4;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_UnknownProperty
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_UnknownProperty();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_UnknownProperty
    static void _set_TrackedProp_UnknownProperty(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_InvalidDevice
    static constexpr const int TrackedProp_InvalidDevice = 5;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_InvalidDevice
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_InvalidDevice();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_InvalidDevice
    static void _set_TrackedProp_InvalidDevice(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_CouldNotContactServer
    static constexpr const int TrackedProp_CouldNotContactServer = 6;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_CouldNotContactServer
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_CouldNotContactServer();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_CouldNotContactServer
    static void _set_TrackedProp_CouldNotContactServer(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_ValueNotProvidedByDevice
    static constexpr const int TrackedProp_ValueNotProvidedByDevice = 7;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_ValueNotProvidedByDevice
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_ValueNotProvidedByDevice();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_ValueNotProvidedByDevice
    static void _set_TrackedProp_ValueNotProvidedByDevice(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_StringExceedsMaximumLength
    static constexpr const int TrackedProp_StringExceedsMaximumLength = 8;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_StringExceedsMaximumLength
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_StringExceedsMaximumLength();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_StringExceedsMaximumLength
    static void _set_TrackedProp_StringExceedsMaximumLength(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_NotYetAvailable
    static constexpr const int TrackedProp_NotYetAvailable = 9;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_NotYetAvailable
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_NotYetAvailable();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_NotYetAvailable
    static void _set_TrackedProp_NotYetAvailable(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_PermissionDenied
    static constexpr const int TrackedProp_PermissionDenied = 10;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_PermissionDenied
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_PermissionDenied();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_PermissionDenied
    static void _set_TrackedProp_PermissionDenied(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_InvalidOperation
    static constexpr const int TrackedProp_InvalidOperation = 11;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_InvalidOperation
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_InvalidOperation();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_InvalidOperation
    static void _set_TrackedProp_InvalidOperation(Valve::VR::ETrackedPropertyError value);
    // static field const value: static public Valve.VR.ETrackedPropertyError TrackedProp_CannotWriteToWildcards
    static constexpr const int TrackedProp_CannotWriteToWildcards = 12;
    // Get static field: static public Valve.VR.ETrackedPropertyError TrackedProp_CannotWriteToWildcards
    static Valve::VR::ETrackedPropertyError _get_TrackedProp_CannotWriteToWildcards();
    // Set static field: static public Valve.VR.ETrackedPropertyError TrackedProp_CannotWriteToWildcards
    static void _set_TrackedProp_CannotWriteToWildcards(Valve::VR::ETrackedPropertyError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.ETrackedPropertyError
  #pragma pack(pop)
  static check_size<sizeof(ETrackedPropertyError), 0 + sizeof(int)> __Valve_VR_ETrackedPropertyErrorSizeCheck;
  static_assert(sizeof(ETrackedPropertyError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ETrackedPropertyError, "Valve.VR", "ETrackedPropertyError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
