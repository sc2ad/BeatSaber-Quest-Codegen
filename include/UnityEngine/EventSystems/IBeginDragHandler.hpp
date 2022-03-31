// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IBeginDragHandler
  class IBeginDragHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::IBeginDragHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IBeginDragHandler*, "UnityEngine.EventSystems", "IBeginDragHandler");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IBeginDragHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeginDragHandler/*, public ::UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IEventSystemHandler
    operator ::UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IBeginDragHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IBeginDragHandler::OnBeginDrag
// Il2CppName: OnBeginDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IBeginDragHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::IBeginDragHandler::OnBeginDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IBeginDragHandler*), "OnBeginDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
