// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.FrameTiming
#include "UnityEngine/FrameTiming.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FrameTimingManager
  class FrameTimingManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::FrameTimingManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTimingManager*, "UnityEngine", "FrameTimingManager");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.FrameTimingManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 11BEC64
  class FrameTimingManager : public ::Il2CppObject {
    public:
    // static public System.Void CaptureFrameTimings()
    // Offset: 0x1F34DD4
    static void CaptureFrameTimings();
    // static public System.UInt32 GetLatestTimings(System.UInt32 numFrames, UnityEngine.FrameTiming[] timings)
    // Offset: 0x1F34E08
    static uint GetLatestTimings(uint numFrames, ::ArrayW<::UnityEngine::FrameTiming> timings);
  }; // UnityEngine.FrameTimingManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::FrameTimingManager::CaptureFrameTimings
// Il2CppName: CaptureFrameTimings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::FrameTimingManager::CaptureFrameTimings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::FrameTimingManager*), "CaptureFrameTimings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::FrameTimingManager::GetLatestTimings
// Il2CppName: GetLatestTimings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, ::ArrayW<::UnityEngine::FrameTiming>)>(&UnityEngine::FrameTimingManager::GetLatestTimings)> {
  static const MethodInfo* get() {
    static auto* numFrames = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* timings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "FrameTiming"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::FrameTimingManager*), "GetLatestTimings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numFrames, timings});
  }
};
