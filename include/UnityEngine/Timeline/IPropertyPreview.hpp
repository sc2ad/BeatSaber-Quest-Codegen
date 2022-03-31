// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IPropertyPreview
  class IPropertyPreview;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::IPropertyPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IPropertyPreview*, "UnityEngine.Timeline", "IPropertyPreview");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IPropertyPreview
  // [TokenAttribute] Offset: FFFFFFFF
  class IPropertyPreview {
    public:
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);
  }; // UnityEngine.Timeline.IPropertyPreview
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyPreview::GatherProperties
// Il2CppName: GatherProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyPreview::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&UnityEngine::Timeline::IPropertyPreview::GatherProperties)> {
  static const MethodInfo* get() {
    static auto* director = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableDirector")->byval_arg;
    static auto* driver = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "IPropertyCollector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyPreview*), "GatherProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{director, driver});
  }
};
