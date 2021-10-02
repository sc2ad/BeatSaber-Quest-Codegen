// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRScreenshots
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRScreenshots/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRScreenshots::_RequestScreenshot
    class _RequestScreenshot;
    // Nested type: Valve::VR::IVRScreenshots::_HookScreenshot
    class _HookScreenshot;
    // Nested type: Valve::VR::IVRScreenshots::_GetScreenshotPropertyType
    class _GetScreenshotPropertyType;
    // Nested type: Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename
    class _GetScreenshotPropertyFilename;
    // Nested type: Valve::VR::IVRScreenshots::_UpdateScreenshotProgress
    class _UpdateScreenshotProgress;
    // Nested type: Valve::VR::IVRScreenshots::_TakeStereoScreenshot
    class _TakeStereoScreenshot;
    // Nested type: Valve::VR::IVRScreenshots::_SubmitScreenshot
    class _SubmitScreenshot;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // Valve.VR.IVRScreenshots/Valve.VR._RequestScreenshot RequestScreenshot
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRScreenshots::_RequestScreenshot* RequestScreenshot;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_RequestScreenshot*) == 0x8);
    // Valve.VR.IVRScreenshots/Valve.VR._HookScreenshot HookScreenshot
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRScreenshots::_HookScreenshot* HookScreenshot;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_HookScreenshot*) == 0x8);
    // Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyType GetScreenshotPropertyType
    // Size: 0x8
    // Offset: 0x10
    Valve::VR::IVRScreenshots::_GetScreenshotPropertyType* GetScreenshotPropertyType;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*) == 0x8);
    // Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyFilename GetScreenshotPropertyFilename
    // Size: 0x8
    // Offset: 0x18
    Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename* GetScreenshotPropertyFilename;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*) == 0x8);
    // Valve.VR.IVRScreenshots/Valve.VR._UpdateScreenshotProgress UpdateScreenshotProgress
    // Size: 0x8
    // Offset: 0x20
    Valve::VR::IVRScreenshots::_UpdateScreenshotProgress* UpdateScreenshotProgress;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_UpdateScreenshotProgress*) == 0x8);
    // Valve.VR.IVRScreenshots/Valve.VR._TakeStereoScreenshot TakeStereoScreenshot
    // Size: 0x8
    // Offset: 0x28
    Valve::VR::IVRScreenshots::_TakeStereoScreenshot* TakeStereoScreenshot;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_TakeStereoScreenshot*) == 0x8);
    // Valve.VR.IVRScreenshots/Valve.VR._SubmitScreenshot SubmitScreenshot
    // Size: 0x8
    // Offset: 0x30
    Valve::VR::IVRScreenshots::_SubmitScreenshot* SubmitScreenshot;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRScreenshots::_SubmitScreenshot*) == 0x8);
    public:
    // Creating value type constructor for type: IVRScreenshots
    constexpr IVRScreenshots(Valve::VR::IVRScreenshots::_RequestScreenshot* RequestScreenshot_ = {}, Valve::VR::IVRScreenshots::_HookScreenshot* HookScreenshot_ = {}, Valve::VR::IVRScreenshots::_GetScreenshotPropertyType* GetScreenshotPropertyType_ = {}, Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename* GetScreenshotPropertyFilename_ = {}, Valve::VR::IVRScreenshots::_UpdateScreenshotProgress* UpdateScreenshotProgress_ = {}, Valve::VR::IVRScreenshots::_TakeStereoScreenshot* TakeStereoScreenshot_ = {}, Valve::VR::IVRScreenshots::_SubmitScreenshot* SubmitScreenshot_ = {}) noexcept : RequestScreenshot{RequestScreenshot_}, HookScreenshot{HookScreenshot_}, GetScreenshotPropertyType{GetScreenshotPropertyType_}, GetScreenshotPropertyFilename{GetScreenshotPropertyFilename_}, UpdateScreenshotProgress{UpdateScreenshotProgress_}, TakeStereoScreenshot{TakeStereoScreenshot_}, SubmitScreenshot{SubmitScreenshot_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._RequestScreenshot RequestScreenshot
    Valve::VR::IVRScreenshots::_RequestScreenshot*& dyn_RequestScreenshot();
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._HookScreenshot HookScreenshot
    Valve::VR::IVRScreenshots::_HookScreenshot*& dyn_HookScreenshot();
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyType GetScreenshotPropertyType
    Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*& dyn_GetScreenshotPropertyType();
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyFilename GetScreenshotPropertyFilename
    Valve::VR::IVRScreenshots::_GetScreenshotPropertyFilename*& dyn_GetScreenshotPropertyFilename();
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._UpdateScreenshotProgress UpdateScreenshotProgress
    Valve::VR::IVRScreenshots::_UpdateScreenshotProgress*& dyn_UpdateScreenshotProgress();
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._TakeStereoScreenshot TakeStereoScreenshot
    Valve::VR::IVRScreenshots::_TakeStereoScreenshot*& dyn_TakeStereoScreenshot();
    // Get instance field reference: Valve.VR.IVRScreenshots/Valve.VR._SubmitScreenshot SubmitScreenshot
    Valve::VR::IVRScreenshots::_SubmitScreenshot*& dyn_SubmitScreenshot();
  }; // Valve.VR.IVRScreenshots
  #pragma pack(pop)
  static check_size<sizeof(IVRScreenshots), 48 + sizeof(Valve::VR::IVRScreenshots::_SubmitScreenshot*)> __Valve_VR_IVRScreenshotsSizeCheck;
  static_assert(sizeof(IVRScreenshots) == 0x38);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots, "Valve.VR", "IVRScreenshots");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
