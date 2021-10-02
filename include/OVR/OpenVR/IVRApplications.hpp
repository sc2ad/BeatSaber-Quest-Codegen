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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xF8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRApplications
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRApplications/*, public System::ValueType*/ {
    public:
    // Nested type: OVR::OpenVR::IVRApplications::_AddApplicationManifest
    class _AddApplicationManifest;
    // Nested type: OVR::OpenVR::IVRApplications::_RemoveApplicationManifest
    class _RemoveApplicationManifest;
    // Nested type: OVR::OpenVR::IVRApplications::_IsApplicationInstalled
    class _IsApplicationInstalled;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationCount
    class _GetApplicationCount;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationKeyByIndex
    class _GetApplicationKeyByIndex;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId
    class _GetApplicationKeyByProcessId;
    // Nested type: OVR::OpenVR::IVRApplications::_LaunchApplication
    class _LaunchApplication;
    // Nested type: OVR::OpenVR::IVRApplications::_LaunchTemplateApplication
    class _LaunchTemplateApplication;
    // Nested type: OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType
    class _LaunchApplicationFromMimeType;
    // Nested type: OVR::OpenVR::IVRApplications::_LaunchDashboardOverlay
    class _LaunchDashboardOverlay;
    // Nested type: OVR::OpenVR::IVRApplications::_CancelApplicationLaunch
    class _CancelApplicationLaunch;
    // Nested type: OVR::OpenVR::IVRApplications::_IdentifyApplication
    class _IdentifyApplication;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationProcessId
    class _GetApplicationProcessId;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum
    class _GetApplicationsErrorNameFromEnum;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationPropertyString
    class _GetApplicationPropertyString;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationPropertyBool
    class _GetApplicationPropertyBool;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64
    class _GetApplicationPropertyUint64;
    // Nested type: OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch
    class _SetApplicationAutoLaunch;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch
    class _GetApplicationAutoLaunch;
    // Nested type: OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType
    class _SetDefaultApplicationForMimeType;
    // Nested type: OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType
    class _GetDefaultApplicationForMimeType;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationSupportedMimeTypes
    class _GetApplicationSupportedMimeTypes;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType
    class _GetApplicationsThatSupportMimeType;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationLaunchArguments
    class _GetApplicationLaunchArguments;
    // Nested type: OVR::OpenVR::IVRApplications::_GetStartingApplication
    class _GetStartingApplication;
    // Nested type: OVR::OpenVR::IVRApplications::_GetTransitionState
    class _GetTransitionState;
    // Nested type: OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck
    class _PerformApplicationPrelaunchCheck;
    // Nested type: OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum
    class _GetApplicationsTransitionStateNameFromEnum;
    // Nested type: OVR::OpenVR::IVRApplications::_IsQuitUserPromptRequested
    class _IsQuitUserPromptRequested;
    // Nested type: OVR::OpenVR::IVRApplications::_LaunchInternalProcess
    class _LaunchInternalProcess;
    // Nested type: OVR::OpenVR::IVRApplications::_GetCurrentSceneProcessId
    class _GetCurrentSceneProcessId;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._AddApplicationManifest AddApplicationManifest
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRApplications::_AddApplicationManifest* AddApplicationManifest;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_AddApplicationManifest*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._RemoveApplicationManifest RemoveApplicationManifest
    // Size: 0x8
    // Offset: 0x8
    OVR::OpenVR::IVRApplications::_RemoveApplicationManifest* RemoveApplicationManifest;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_RemoveApplicationManifest*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._IsApplicationInstalled IsApplicationInstalled
    // Size: 0x8
    // Offset: 0x10
    OVR::OpenVR::IVRApplications::_IsApplicationInstalled* IsApplicationInstalled;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_IsApplicationInstalled*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationCount GetApplicationCount
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::IVRApplications::_GetApplicationCount* GetApplicationCount;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationCount*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationKeyByIndex GetApplicationKeyByIndex
    // Size: 0x8
    // Offset: 0x20
    OVR::OpenVR::IVRApplications::_GetApplicationKeyByIndex* GetApplicationKeyByIndex;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationKeyByIndex*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationKeyByProcessId GetApplicationKeyByProcessId
    // Size: 0x8
    // Offset: 0x28
    OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId* GetApplicationKeyByProcessId;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplication LaunchApplication
    // Size: 0x8
    // Offset: 0x30
    OVR::OpenVR::IVRApplications::_LaunchApplication* LaunchApplication;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_LaunchApplication*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchTemplateApplication LaunchTemplateApplication
    // Size: 0x8
    // Offset: 0x38
    OVR::OpenVR::IVRApplications::_LaunchTemplateApplication* LaunchTemplateApplication;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplicationFromMimeType LaunchApplicationFromMimeType
    // Size: 0x8
    // Offset: 0x40
    OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType* LaunchApplicationFromMimeType;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchDashboardOverlay LaunchDashboardOverlay
    // Size: 0x8
    // Offset: 0x48
    OVR::OpenVR::IVRApplications::_LaunchDashboardOverlay* LaunchDashboardOverlay;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_LaunchDashboardOverlay*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._CancelApplicationLaunch CancelApplicationLaunch
    // Size: 0x8
    // Offset: 0x50
    OVR::OpenVR::IVRApplications::_CancelApplicationLaunch* CancelApplicationLaunch;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_CancelApplicationLaunch*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._IdentifyApplication IdentifyApplication
    // Size: 0x8
    // Offset: 0x58
    OVR::OpenVR::IVRApplications::_IdentifyApplication* IdentifyApplication;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_IdentifyApplication*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationProcessId GetApplicationProcessId
    // Size: 0x8
    // Offset: 0x60
    OVR::OpenVR::IVRApplications::_GetApplicationProcessId* GetApplicationProcessId;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationProcessId*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsErrorNameFromEnum GetApplicationsErrorNameFromEnum
    // Size: 0x8
    // Offset: 0x68
    OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationPropertyString GetApplicationPropertyString
    // Size: 0x8
    // Offset: 0x70
    OVR::OpenVR::IVRApplications::_GetApplicationPropertyString* GetApplicationPropertyString;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationPropertyString*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationPropertyBool GetApplicationPropertyBool
    // Size: 0x8
    // Offset: 0x78
    OVR::OpenVR::IVRApplications::_GetApplicationPropertyBool* GetApplicationPropertyBool;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationPropertyBool*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationPropertyUint64 GetApplicationPropertyUint64
    // Size: 0x8
    // Offset: 0x80
    OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64* GetApplicationPropertyUint64;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._SetApplicationAutoLaunch SetApplicationAutoLaunch
    // Size: 0x8
    // Offset: 0x88
    OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch* SetApplicationAutoLaunch;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationAutoLaunch GetApplicationAutoLaunch
    // Size: 0x8
    // Offset: 0x90
    OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch* GetApplicationAutoLaunch;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._SetDefaultApplicationForMimeType SetDefaultApplicationForMimeType
    // Size: 0x8
    // Offset: 0x98
    OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetDefaultApplicationForMimeType GetDefaultApplicationForMimeType
    // Size: 0x8
    // Offset: 0xA0
    OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationSupportedMimeTypes GetApplicationSupportedMimeTypes
    // Size: 0x8
    // Offset: 0xA8
    OVR::OpenVR::IVRApplications::_GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationSupportedMimeTypes*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsThatSupportMimeType GetApplicationsThatSupportMimeType
    // Size: 0x8
    // Offset: 0xB0
    OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationLaunchArguments GetApplicationLaunchArguments
    // Size: 0x8
    // Offset: 0xB8
    OVR::OpenVR::IVRApplications::_GetApplicationLaunchArguments* GetApplicationLaunchArguments;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationLaunchArguments*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetStartingApplication GetStartingApplication
    // Size: 0x8
    // Offset: 0xC0
    OVR::OpenVR::IVRApplications::_GetStartingApplication* GetStartingApplication;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetStartingApplication*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetTransitionState GetTransitionState
    // Size: 0x8
    // Offset: 0xC8
    OVR::OpenVR::IVRApplications::_GetTransitionState* GetTransitionState;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetTransitionState*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._PerformApplicationPrelaunchCheck PerformApplicationPrelaunchCheck
    // Size: 0x8
    // Offset: 0xD0
    OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsTransitionStateNameFromEnum GetApplicationsTransitionStateNameFromEnum
    // Size: 0x8
    // Offset: 0xD8
    OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._IsQuitUserPromptRequested IsQuitUserPromptRequested
    // Size: 0x8
    // Offset: 0xE0
    OVR::OpenVR::IVRApplications::_IsQuitUserPromptRequested* IsQuitUserPromptRequested;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_IsQuitUserPromptRequested*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchInternalProcess LaunchInternalProcess
    // Size: 0x8
    // Offset: 0xE8
    OVR::OpenVR::IVRApplications::_LaunchInternalProcess* LaunchInternalProcess;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_LaunchInternalProcess*) == 0x8);
    // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetCurrentSceneProcessId GetCurrentSceneProcessId
    // Size: 0x8
    // Offset: 0xF0
    OVR::OpenVR::IVRApplications::_GetCurrentSceneProcessId* GetCurrentSceneProcessId;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRApplications::_GetCurrentSceneProcessId*) == 0x8);
    public:
    // Creating value type constructor for type: IVRApplications
    constexpr IVRApplications(OVR::OpenVR::IVRApplications::_AddApplicationManifest* AddApplicationManifest_ = {}, OVR::OpenVR::IVRApplications::_RemoveApplicationManifest* RemoveApplicationManifest_ = {}, OVR::OpenVR::IVRApplications::_IsApplicationInstalled* IsApplicationInstalled_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationCount* GetApplicationCount_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationKeyByIndex* GetApplicationKeyByIndex_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId* GetApplicationKeyByProcessId_ = {}, OVR::OpenVR::IVRApplications::_LaunchApplication* LaunchApplication_ = {}, OVR::OpenVR::IVRApplications::_LaunchTemplateApplication* LaunchTemplateApplication_ = {}, OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType* LaunchApplicationFromMimeType_ = {}, OVR::OpenVR::IVRApplications::_LaunchDashboardOverlay* LaunchDashboardOverlay_ = {}, OVR::OpenVR::IVRApplications::_CancelApplicationLaunch* CancelApplicationLaunch_ = {}, OVR::OpenVR::IVRApplications::_IdentifyApplication* IdentifyApplication_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationProcessId* GetApplicationProcessId_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationPropertyString* GetApplicationPropertyString_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationPropertyBool* GetApplicationPropertyBool_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64* GetApplicationPropertyUint64_ = {}, OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch* SetApplicationAutoLaunch_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch* GetApplicationAutoLaunch_ = {}, OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType_ = {}, OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationLaunchArguments* GetApplicationLaunchArguments_ = {}, OVR::OpenVR::IVRApplications::_GetStartingApplication* GetStartingApplication_ = {}, OVR::OpenVR::IVRApplications::_GetTransitionState* GetTransitionState_ = {}, OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck_ = {}, OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum_ = {}, OVR::OpenVR::IVRApplications::_IsQuitUserPromptRequested* IsQuitUserPromptRequested_ = {}, OVR::OpenVR::IVRApplications::_LaunchInternalProcess* LaunchInternalProcess_ = {}, OVR::OpenVR::IVRApplications::_GetCurrentSceneProcessId* GetCurrentSceneProcessId_ = {}) noexcept : AddApplicationManifest{AddApplicationManifest_}, RemoveApplicationManifest{RemoveApplicationManifest_}, IsApplicationInstalled{IsApplicationInstalled_}, GetApplicationCount{GetApplicationCount_}, GetApplicationKeyByIndex{GetApplicationKeyByIndex_}, GetApplicationKeyByProcessId{GetApplicationKeyByProcessId_}, LaunchApplication{LaunchApplication_}, LaunchTemplateApplication{LaunchTemplateApplication_}, LaunchApplicationFromMimeType{LaunchApplicationFromMimeType_}, LaunchDashboardOverlay{LaunchDashboardOverlay_}, CancelApplicationLaunch{CancelApplicationLaunch_}, IdentifyApplication{IdentifyApplication_}, GetApplicationProcessId{GetApplicationProcessId_}, GetApplicationsErrorNameFromEnum{GetApplicationsErrorNameFromEnum_}, GetApplicationPropertyString{GetApplicationPropertyString_}, GetApplicationPropertyBool{GetApplicationPropertyBool_}, GetApplicationPropertyUint64{GetApplicationPropertyUint64_}, SetApplicationAutoLaunch{SetApplicationAutoLaunch_}, GetApplicationAutoLaunch{GetApplicationAutoLaunch_}, SetDefaultApplicationForMimeType{SetDefaultApplicationForMimeType_}, GetDefaultApplicationForMimeType{GetDefaultApplicationForMimeType_}, GetApplicationSupportedMimeTypes{GetApplicationSupportedMimeTypes_}, GetApplicationsThatSupportMimeType{GetApplicationsThatSupportMimeType_}, GetApplicationLaunchArguments{GetApplicationLaunchArguments_}, GetStartingApplication{GetStartingApplication_}, GetTransitionState{GetTransitionState_}, PerformApplicationPrelaunchCheck{PerformApplicationPrelaunchCheck_}, GetApplicationsTransitionStateNameFromEnum{GetApplicationsTransitionStateNameFromEnum_}, IsQuitUserPromptRequested{IsQuitUserPromptRequested_}, LaunchInternalProcess{LaunchInternalProcess_}, GetCurrentSceneProcessId{GetCurrentSceneProcessId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._AddApplicationManifest AddApplicationManifest
    OVR::OpenVR::IVRApplications::_AddApplicationManifest*& dyn_AddApplicationManifest();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._RemoveApplicationManifest RemoveApplicationManifest
    OVR::OpenVR::IVRApplications::_RemoveApplicationManifest*& dyn_RemoveApplicationManifest();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._IsApplicationInstalled IsApplicationInstalled
    OVR::OpenVR::IVRApplications::_IsApplicationInstalled*& dyn_IsApplicationInstalled();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationCount GetApplicationCount
    OVR::OpenVR::IVRApplications::_GetApplicationCount*& dyn_GetApplicationCount();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationKeyByIndex GetApplicationKeyByIndex
    OVR::OpenVR::IVRApplications::_GetApplicationKeyByIndex*& dyn_GetApplicationKeyByIndex();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationKeyByProcessId GetApplicationKeyByProcessId
    OVR::OpenVR::IVRApplications::_GetApplicationKeyByProcessId*& dyn_GetApplicationKeyByProcessId();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplication LaunchApplication
    OVR::OpenVR::IVRApplications::_LaunchApplication*& dyn_LaunchApplication();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchTemplateApplication LaunchTemplateApplication
    OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*& dyn_LaunchTemplateApplication();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchApplicationFromMimeType LaunchApplicationFromMimeType
    OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType*& dyn_LaunchApplicationFromMimeType();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchDashboardOverlay LaunchDashboardOverlay
    OVR::OpenVR::IVRApplications::_LaunchDashboardOverlay*& dyn_LaunchDashboardOverlay();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._CancelApplicationLaunch CancelApplicationLaunch
    OVR::OpenVR::IVRApplications::_CancelApplicationLaunch*& dyn_CancelApplicationLaunch();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._IdentifyApplication IdentifyApplication
    OVR::OpenVR::IVRApplications::_IdentifyApplication*& dyn_IdentifyApplication();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationProcessId GetApplicationProcessId
    OVR::OpenVR::IVRApplications::_GetApplicationProcessId*& dyn_GetApplicationProcessId();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsErrorNameFromEnum GetApplicationsErrorNameFromEnum
    OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*& dyn_GetApplicationsErrorNameFromEnum();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationPropertyString GetApplicationPropertyString
    OVR::OpenVR::IVRApplications::_GetApplicationPropertyString*& dyn_GetApplicationPropertyString();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationPropertyBool GetApplicationPropertyBool
    OVR::OpenVR::IVRApplications::_GetApplicationPropertyBool*& dyn_GetApplicationPropertyBool();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationPropertyUint64 GetApplicationPropertyUint64
    OVR::OpenVR::IVRApplications::_GetApplicationPropertyUint64*& dyn_GetApplicationPropertyUint64();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._SetApplicationAutoLaunch SetApplicationAutoLaunch
    OVR::OpenVR::IVRApplications::_SetApplicationAutoLaunch*& dyn_SetApplicationAutoLaunch();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationAutoLaunch GetApplicationAutoLaunch
    OVR::OpenVR::IVRApplications::_GetApplicationAutoLaunch*& dyn_GetApplicationAutoLaunch();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._SetDefaultApplicationForMimeType SetDefaultApplicationForMimeType
    OVR::OpenVR::IVRApplications::_SetDefaultApplicationForMimeType*& dyn_SetDefaultApplicationForMimeType();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetDefaultApplicationForMimeType GetDefaultApplicationForMimeType
    OVR::OpenVR::IVRApplications::_GetDefaultApplicationForMimeType*& dyn_GetDefaultApplicationForMimeType();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationSupportedMimeTypes GetApplicationSupportedMimeTypes
    OVR::OpenVR::IVRApplications::_GetApplicationSupportedMimeTypes*& dyn_GetApplicationSupportedMimeTypes();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsThatSupportMimeType GetApplicationsThatSupportMimeType
    OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType*& dyn_GetApplicationsThatSupportMimeType();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationLaunchArguments GetApplicationLaunchArguments
    OVR::OpenVR::IVRApplications::_GetApplicationLaunchArguments*& dyn_GetApplicationLaunchArguments();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetStartingApplication GetStartingApplication
    OVR::OpenVR::IVRApplications::_GetStartingApplication*& dyn_GetStartingApplication();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetTransitionState GetTransitionState
    OVR::OpenVR::IVRApplications::_GetTransitionState*& dyn_GetTransitionState();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._PerformApplicationPrelaunchCheck PerformApplicationPrelaunchCheck
    OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck*& dyn_PerformApplicationPrelaunchCheck();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsTransitionStateNameFromEnum GetApplicationsTransitionStateNameFromEnum
    OVR::OpenVR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum*& dyn_GetApplicationsTransitionStateNameFromEnum();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._IsQuitUserPromptRequested IsQuitUserPromptRequested
    OVR::OpenVR::IVRApplications::_IsQuitUserPromptRequested*& dyn_IsQuitUserPromptRequested();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchInternalProcess LaunchInternalProcess
    OVR::OpenVR::IVRApplications::_LaunchInternalProcess*& dyn_LaunchInternalProcess();
    // Get instance field reference: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetCurrentSceneProcessId GetCurrentSceneProcessId
    OVR::OpenVR::IVRApplications::_GetCurrentSceneProcessId*& dyn_GetCurrentSceneProcessId();
  }; // OVR.OpenVR.IVRApplications
  #pragma pack(pop)
  static check_size<sizeof(IVRApplications), 240 + sizeof(OVR::OpenVR::IVRApplications::_GetCurrentSceneProcessId*)> __OVR_OpenVR_IVRApplicationsSizeCheck;
  static_assert(sizeof(IVRApplications) == 0xF8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications, "OVR.OpenVR", "IVRApplications");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
