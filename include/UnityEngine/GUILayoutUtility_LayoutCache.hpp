// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GUILayoutUtility
#include "UnityEngine/GUILayoutUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutGroup
  class GUILayoutGroup;
}
// Forward declaring namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: GenericStack
  class GenericStack;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUILayoutUtility::LayoutCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutUtility::LayoutCache*, "UnityEngine", "GUILayoutUtility/LayoutCache");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class GUILayoutUtility::LayoutCache : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.GUILayoutGroup topLevel
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GUILayoutGroup* topLevel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUILayoutGroup*) == 0x8);
    // UnityEngineInternal.GenericStack layoutGroups
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngineInternal::GenericStack* layoutGroups;
    // Field size check
    static_assert(sizeof(::UnityEngineInternal::GenericStack*) == 0x8);
    // UnityEngine.GUILayoutGroup windows
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GUILayoutGroup* windows;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUILayoutGroup*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.GUILayoutGroup topLevel
    [[deprecated("Use field access instead!")]] ::UnityEngine::GUILayoutGroup*& dyn_topLevel();
    // Get instance field reference: UnityEngineInternal.GenericStack layoutGroups
    [[deprecated("Use field access instead!")]] ::UnityEngineInternal::GenericStack*& dyn_layoutGroups();
    // Get instance field reference: UnityEngine.GUILayoutGroup windows
    [[deprecated("Use field access instead!")]] ::UnityEngine::GUILayoutGroup*& dyn_windows();
    // System.Void .ctor()
    // Offset: 0x20B43A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutUtility::LayoutCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUILayoutUtility::LayoutCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutUtility::LayoutCache*, creationType>()));
    }
  }; // UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache
  #pragma pack(pop)
  static check_size<sizeof(GUILayoutUtility::LayoutCache), 32 + sizeof(::UnityEngine::GUILayoutGroup*)> __UnityEngine_GUILayoutUtility_LayoutCacheSizeCheck;
  static_assert(sizeof(GUILayoutUtility::LayoutCache) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
