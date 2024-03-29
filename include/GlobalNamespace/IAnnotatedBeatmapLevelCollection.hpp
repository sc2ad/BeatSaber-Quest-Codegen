// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IAnnotatedBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, "", "IAnnotatedBeatmapLevelCollection");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IAnnotatedBeatmapLevelCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class IAnnotatedBeatmapLevelCollection {
    public:
    // public System.String get_collectionName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Sprite* get_coverImage();
    // public UnityEngine.Sprite get_smallCoverImage()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Sprite* get_smallCoverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
  }; // IAnnotatedBeatmapLevelCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_collectionName
// Il2CppName: get_collectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IAnnotatedBeatmapLevelCollection::*)()>(&GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_collectionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*), "get_collectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_coverImage
// Il2CppName: get_coverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::IAnnotatedBeatmapLevelCollection::*)()>(&GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_coverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*), "get_coverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_smallCoverImage
// Il2CppName: get_smallCoverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::IAnnotatedBeatmapLevelCollection::*)()>(&GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_smallCoverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*), "get_smallCoverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection
// Il2CppName: get_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelCollection* (GlobalNamespace::IAnnotatedBeatmapLevelCollection::*)()>(&GlobalNamespace::IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*), "get_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
