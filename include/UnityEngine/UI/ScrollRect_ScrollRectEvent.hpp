// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.ScrollRect
#include "UnityEngine/UI/ScrollRect.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::ScrollRect::ScrollRectEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ScrollRect::ScrollRectEvent*, "UnityEngine.UI", "ScrollRect/ScrollRectEvent");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.ScrollRect/UnityEngine.UI.ScrollRectEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ScrollRect::ScrollRectEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E8868C
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollRect::ScrollRectEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::ScrollRect::ScrollRectEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollRect::ScrollRectEvent*, creationType>()));
    }
  }; // UnityEngine.UI.ScrollRect/UnityEngine.UI.ScrollRectEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ScrollRect::ScrollRectEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
