// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Including type: UnityEngine.Events.UnityEvent
#include "UnityEngine/Events/UnityEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Button::ButtonClickedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Button::ButtonClickedEvent*, "UnityEngine.UI", "Button/ButtonClickedEvent");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Button/UnityEngine.UI.ButtonClickedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Button::ButtonClickedEvent : public ::UnityEngine::Events::UnityEvent {
    public:
    // public System.Void .ctor()
    // Offset: 0x18FDE24
    // Implemented from: UnityEngine.Events.UnityEvent
    // Base method: System.Void UnityEvent::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Button::ButtonClickedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Button::ButtonClickedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Button::ButtonClickedEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Button/UnityEngine.UI.ButtonClickedEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Button::ButtonClickedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
