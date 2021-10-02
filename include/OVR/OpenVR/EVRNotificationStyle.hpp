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
  // Autogenerated type: OVR.OpenVR.EVRNotificationStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRNotificationStyle/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EVRNotificationStyle
    constexpr EVRNotificationStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle None
    static OVR::OpenVR::EVRNotificationStyle _get_None();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle None
    static void _set_None(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Application
    static constexpr const int Application = 100;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Application
    static OVR::OpenVR::EVRNotificationStyle _get_Application();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Application
    static void _set_Application(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Contact_Disabled
    static constexpr const int Contact_Disabled = 200;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Disabled
    static OVR::OpenVR::EVRNotificationStyle _get_Contact_Disabled();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Disabled
    static void _set_Contact_Disabled(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Contact_Enabled
    static constexpr const int Contact_Enabled = 201;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Enabled
    static OVR::OpenVR::EVRNotificationStyle _get_Contact_Enabled();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Enabled
    static void _set_Contact_Enabled(OVR::OpenVR::EVRNotificationStyle value);
    // static field const value: static public OVR.OpenVR.EVRNotificationStyle Contact_Active
    static constexpr const int Contact_Active = 202;
    // Get static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Active
    static OVR::OpenVR::EVRNotificationStyle _get_Contact_Active();
    // Set static field: static public OVR.OpenVR.EVRNotificationStyle Contact_Active
    static void _set_Contact_Active(OVR::OpenVR::EVRNotificationStyle value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRNotificationStyle
  #pragma pack(pop)
  static check_size<sizeof(EVRNotificationStyle), 0 + sizeof(int)> __OVR_OpenVR_EVRNotificationStyleSizeCheck;
  static_assert(sizeof(EVRNotificationStyle) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRNotificationStyle, "OVR.OpenVR", "EVRNotificationStyle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
