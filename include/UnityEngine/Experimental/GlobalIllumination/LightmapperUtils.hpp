// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: LinearColor
  struct LinearColor;
  // Forward declaring type: DirectionalLight
  struct DirectionalLight;
  // Forward declaring type: PointLight
  struct PointLight;
  // Forward declaring type: SpotLight
  struct SpotLight;
  // Forward declaring type: RectangleLight
  struct RectangleLight;
  // Forward declaring type: DiscLight
  struct DiscLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: LightmapperUtils
  class LightmapperUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapperUtils : public ::Il2CppObject {
    public:
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor ExtractIndirect(UnityEngine.Light l)
    // Offset: 0x1F33250
    static ::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(::UnityEngine::Light* l);
    // static public System.Single ExtractInnerCone(UnityEngine.Light l)
    // Offset: 0x1F333C8
    static float ExtractInnerCone(::UnityEngine::Light* l);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.DirectionalLight dir)
    // Offset: 0x1F33480
    static void Extract(::UnityEngine::Light* l, ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight> dir);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.PointLight point)
    // Offset: 0x1F33580
    static void Extract(::UnityEngine::Light* l, ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight> point);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.SpotLight spot)
    // Offset: 0x1F33698
    static void Extract(::UnityEngine::Light* l, ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight> spot);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.RectangleLight rect)
    // Offset: 0x1F33810
    static void Extract(::UnityEngine::Light* l, ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight> rect);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.DiscLight disc)
    // Offset: 0x1F33960
    static void Extract(::UnityEngine::Light* l, ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight> disc);
  }; // UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractIndirect
// Il2CppName: ExtractIndirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LinearColor (*)(::UnityEngine::Light*)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractIndirect)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "ExtractIndirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractInnerCone
// Il2CppName: ExtractInnerCone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Light*)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractInnerCone)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "ExtractInnerCone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Light*, ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    static auto* dir = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "DirectionalLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, dir});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Light*, ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "PointLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Light*, ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    static auto* spot = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "SpotLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, spot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Light*, ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "RectangleLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Light*, ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight>)>(&UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("UnityEngine", "Light")->byval_arg;
    static auto* disc = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "DiscLight")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, disc});
  }
};
