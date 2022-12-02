// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScrollViewState
  class ScrollViewState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ScrollViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScrollViewState*, "UnityEngine", "ScrollViewState");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScrollViewState
  // [TokenAttribute] Offset: FFFFFFFF
  class ScrollViewState : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rect position
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Rect position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect visibleRect
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Rect visibleRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect viewRect
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Rect viewRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Vector2 scrollPosition
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Vector2 scrollPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Boolean apply
    // Size: 0x1
    // Offset: 0x48
    bool apply;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Rect position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_position();
    // Get instance field reference: public UnityEngine.Rect visibleRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_visibleRect();
    // Get instance field reference: public UnityEngine.Rect viewRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_viewRect();
    // Get instance field reference: public UnityEngine.Vector2 scrollPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_scrollPosition();
    // Get instance field reference: public System.Boolean apply
    [[deprecated("Use field access instead!")]] bool& dyn_apply();
    // public System.Void .ctor()
    // Offset: 0x20BA124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollViewState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ScrollViewState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollViewState*, creationType>()));
    }
  }; // UnityEngine.ScrollViewState
  #pragma pack(pop)
  static check_size<sizeof(ScrollViewState), 72 + sizeof(bool)> __UnityEngine_ScrollViewStateSizeCheck;
  static_assert(sizeof(ScrollViewState) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ScrollViewState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
