// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Profiling
namespace UnityEngine::Profiling {
  // Forward declaring type: Profiler
  class Profiler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Profiling::Profiler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Profiler*, "UnityEngine.Profiling", "Profiler");
// Type namespace: UnityEngine.Profiling
namespace UnityEngine::Profiling {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Profiling.Profiler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11A6A5C
  // [MovedFromAttribute] Offset: 11A6A5C
  // [NativeHeaderAttribute] Offset: 11A6A5C
  // [NativeHeaderAttribute] Offset: 11A6A5C
  // [NativeHeaderAttribute] Offset: 11A6A5C
  // [UsedByNativeCodeAttribute] Offset: 11A6A5C
  // [NativeHeaderAttribute] Offset: 11A6A5C
  class Profiler : public ::Il2CppObject {
    public:
    // static public System.Int64 GetMonoUsedSizeLong()
    // Offset: 0x20C5FB4
    static int64_t GetMonoUsedSizeLong();
  }; // UnityEngine.Profiling.Profiler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong
// Il2CppName: GetMonoUsedSizeLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Profiler*), "GetMonoUsedSizeLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
