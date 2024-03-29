// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScreenCapture
  class ScreenCapture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ScreenCapture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenCapture*, "UnityEngine", "ScreenCapture");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScreenCapture
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10E1E54
  class ScreenCapture : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ScreenCapture::StereoScreenCaptureMode
    struct StereoScreenCaptureMode;
    // static public System.Void CaptureScreenshot(System.String filename)
    // Offset: 0x2BB637C
    static void CaptureScreenshot(::StringW filename);
    // static private System.Void CaptureScreenshot(System.String filename, System.Int32 superSize, UnityEngine.ScreenCapture/UnityEngine.StereoScreenCaptureMode CaptureMode)
    // Offset: 0x2BB63C4
    static void CaptureScreenshot(::StringW filename, int superSize, ::UnityEngine::ScreenCapture::StereoScreenCaptureMode CaptureMode);
  }; // UnityEngine.ScreenCapture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ScreenCapture::CaptureScreenshot
// Il2CppName: CaptureScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::ScreenCapture::CaptureScreenshot)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ScreenCapture*), "CaptureScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: UnityEngine::ScreenCapture::CaptureScreenshot
// Il2CppName: CaptureScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int, ::UnityEngine::ScreenCapture::StereoScreenCaptureMode)>(&UnityEngine::ScreenCapture::CaptureScreenshot)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* superSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* CaptureMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScreenCapture/StereoScreenCaptureMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ScreenCapture*), "CaptureScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename, superSize, CaptureMode});
  }
};
