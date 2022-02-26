// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRScreenshots
  class CVRScreenshots;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRScreenshots);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRScreenshots*, "Valve.VR", "CVRScreenshots");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRScreenshots
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRScreenshots : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Valve.VR.IVRScreenshots FnTable
    // Size: 0x38
    // Offset: 0x10
    ::Valve::VR::IVRScreenshots FnTable;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRScreenshots) == 0x38);
    public:
    // Creating conversion operator: operator ::Valve::VR::IVRScreenshots
    constexpr operator ::Valve::VR::IVRScreenshots() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRScreenshots FnTable
    ::Valve::VR::IVRScreenshots& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1AFC4C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRScreenshots* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRScreenshots::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRScreenshots*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRScreenshotError RequestScreenshot(ref System.UInt32 pOutScreenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1AFC5D8
    ::Valve::VR::EVRScreenshotError RequestScreenshot(ByRef<uint> pOutScreenshotHandle, ::Valve::VR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename);
    // public Valve.VR.EVRScreenshotError HookScreenshot(Valve.VR.EVRScreenshotType[] pSupportedTypes)
    // Offset: 0x1AFC5F8
    ::Valve::VR::EVRScreenshotError HookScreenshot(::ArrayW<::Valve::VR::EVRScreenshotType> pSupportedTypes);
    // public Valve.VR.EVRScreenshotType GetScreenshotPropertyType(System.UInt32 screenshotHandle, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x1AFC620
    ::Valve::VR::EVRScreenshotType GetScreenshotPropertyType(uint screenshotHandle, ByRef<::Valve::VR::EVRScreenshotError> pError);
    // public System.UInt32 GetScreenshotPropertyFilename(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x1AFC63C
    uint GetScreenshotPropertyFilename(uint screenshotHandle, ::Valve::VR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint cchFilename, ByRef<::Valve::VR::EVRScreenshotError> pError);
    // public Valve.VR.EVRScreenshotError UpdateScreenshotProgress(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0x1AEF290
    ::Valve::VR::EVRScreenshotError UpdateScreenshotProgress(uint screenshotHandle, float flProgress);
    // public Valve.VR.EVRScreenshotError TakeStereoScreenshot(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1AFC658
    ::Valve::VR::EVRScreenshotError TakeStereoScreenshot(ByRef<uint> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename);
    // public Valve.VR.EVRScreenshotError SubmitScreenshot(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0x1AFC678
    ::Valve::VR::EVRScreenshotError SubmitScreenshot(uint screenshotHandle, ::Valve::VR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename);
  }; // Valve.VR.CVRScreenshots
  #pragma pack(pop)
  static check_size<sizeof(CVRScreenshots), 16 + sizeof(::Valve::VR::IVRScreenshots)> __Valve_VR_CVRScreenshotsSizeCheck;
  static_assert(sizeof(CVRScreenshots) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::RequestScreenshot
// Il2CppName: RequestScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRScreenshotError (Valve::VR::CVRScreenshots::*)(ByRef<uint>, ::Valve::VR::EVRScreenshotType, ::StringW, ::StringW)>(&Valve::VR::CVRScreenshots::RequestScreenshot)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType")->byval_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "RequestScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::HookScreenshot
// Il2CppName: HookScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRScreenshotError (Valve::VR::CVRScreenshots::*)(::ArrayW<::Valve::VR::EVRScreenshotType>)>(&Valve::VR::CVRScreenshots::HookScreenshot)> {
  static const MethodInfo* get() {
    static auto* pSupportedTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "HookScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSupportedTypes});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::GetScreenshotPropertyType
// Il2CppName: GetScreenshotPropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRScreenshotType (Valve::VR::CVRScreenshots::*)(uint, ByRef<::Valve::VR::EVRScreenshotError>)>(&Valve::VR::CVRScreenshots::GetScreenshotPropertyType)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "GetScreenshotPropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::GetScreenshotPropertyFilename
// Il2CppName: GetScreenshotPropertyFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::CVRScreenshots::*)(uint, ::Valve::VR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint, ByRef<::Valve::VR::EVRScreenshotError>)>(&Valve::VR::CVRScreenshots::GetScreenshotPropertyFilename)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* filenameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotPropertyFilenames")->byval_arg;
    static auto* pchFilename = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* cchFilename = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "GetScreenshotPropertyFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, filenameType, pchFilename, cchFilename, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::UpdateScreenshotProgress
// Il2CppName: UpdateScreenshotProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRScreenshotError (Valve::VR::CVRScreenshots::*)(uint, float)>(&Valve::VR::CVRScreenshots::UpdateScreenshotProgress)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* flProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "UpdateScreenshotProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, flProgress});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::TakeStereoScreenshot
// Il2CppName: TakeStereoScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRScreenshotError (Valve::VR::CVRScreenshots::*)(ByRef<uint>, ::StringW, ::StringW)>(&Valve::VR::CVRScreenshots::TakeStereoScreenshot)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "TakeStereoScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRScreenshots::SubmitScreenshot
// Il2CppName: SubmitScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRScreenshotError (Valve::VR::CVRScreenshots::*)(uint, ::Valve::VR::EVRScreenshotType, ::StringW, ::StringW)>(&Valve::VR::CVRScreenshots::SubmitScreenshot)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotType")->byval_arg;
    static auto* pchSourcePreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSourceVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRScreenshots*), "SubmitScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename});
  }
};
