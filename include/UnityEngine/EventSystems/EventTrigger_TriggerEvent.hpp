// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.EventTrigger
#include "UnityEngine/EventSystems/EventTrigger.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::EventTrigger::TriggerEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTrigger::TriggerEvent*, "UnityEngine.EventSystems", "EventTrigger/TriggerEvent");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.TriggerEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class EventTrigger::TriggerEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::BaseEventData*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1919544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventTrigger::TriggerEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::EventTrigger::TriggerEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventTrigger::TriggerEvent*, creationType>()));
    }
  }; // UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.TriggerEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::TriggerEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
