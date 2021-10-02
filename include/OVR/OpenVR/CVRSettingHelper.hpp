// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.CVRSettingHelper
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSettingHelper/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.IntPtr m_pSettings
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_pSettings;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: CVRSettingHelper
    constexpr CVRSettingHelper(System::IntPtr m_pSettings_ = {}) noexcept : m_pSettings{m_pSettings_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_pSettings;
    }
    // Get instance field reference: public System.IntPtr m_pSettings
    System::IntPtr& dyn_m_pSettings();
  }; // OVR.OpenVR.CVRSettingHelper
  #pragma pack(pop)
  static check_size<sizeof(CVRSettingHelper), 0 + sizeof(System::IntPtr)> __OVR_OpenVR_CVRSettingHelperSizeCheck;
  static_assert(sizeof(CVRSettingHelper) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSettingHelper, "OVR.OpenVR", "CVRSettingHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
