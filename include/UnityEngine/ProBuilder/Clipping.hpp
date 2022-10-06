// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Clipping
  class Clipping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Clipping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Clipping*, "UnityEngine.ProBuilder", "Clipping");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Clipping
  // [TokenAttribute] Offset: FFFFFFFF
  class Clipping : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::Clipping::OutCode
    struct OutCode;
    // static private UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode ComputeOutCode(UnityEngine.Rect rect, System.Single x, System.Single y)
    // Offset: 0x2592158
    static ::UnityEngine::ProBuilder::Clipping::OutCode ComputeOutCode(::UnityEngine::Rect rect, float x, float y);
    // static System.Boolean RectContainsLineSegment(UnityEngine.Rect rect, System.Single x0, System.Single y0, System.Single x1, System.Single y1)
    // Offset: 0x2592200
    static bool RectContainsLineSegment(::UnityEngine::Rect rect, float x0, float y0, float x1, float y1);
  }; // UnityEngine.ProBuilder.Clipping
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Clipping::ComputeOutCode
// Il2CppName: ComputeOutCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Clipping::OutCode (*)(::UnityEngine::Rect, float, float)>(&UnityEngine::ProBuilder::Clipping::ComputeOutCode)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Clipping*), "ComputeOutCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Clipping::RectContainsLineSegment
// Il2CppName: RectContainsLineSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, float, float, float, float)>(&UnityEngine::ProBuilder::Clipping::RectContainsLineSegment)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* x0 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y0 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Clipping*), "RectContainsLineSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect, x0, y0, x1, y1});
  }
};
