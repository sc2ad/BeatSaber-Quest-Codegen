// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventDataExtension
  class PointerEventDataExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::PointerEventDataExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventDataExtension*, "UnityEngine.EventSystems", "PointerEventDataExtension");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerEventDataExtension
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PointerEventDataExtension : public ::Il2CppObject {
    public:
    // static public System.Boolean IsVRPointer(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x25362FC
    static bool IsVRPointer(::UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // static public UnityEngine.Ray GetRay(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x253892C
    static ::UnityEngine::Ray GetRay(::UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // static public UnityEngine.Vector2 GetSwipeStart(UnityEngine.EventSystems.PointerEventData pointerEventData)
    // Offset: 0x2537D24
    static ::UnityEngine::Vector2 GetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData);
    // static public System.Void SetSwipeStart(UnityEngine.EventSystems.PointerEventData pointerEventData, UnityEngine.Vector2 start)
    // Offset: 0x253637C
    static void SetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData, ::UnityEngine::Vector2 start);
  }; // UnityEngine.EventSystems.PointerEventDataExtension
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerEventDataExtension::IsVRPointer
// Il2CppName: IsVRPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerEventDataExtension::IsVRPointer)> {
  static const MethodInfo* get() {
    static auto* pointerEventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerEventDataExtension*), "IsVRPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerEventDataExtension::GetRay
// Il2CppName: GetRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerEventDataExtension::GetRay)> {
  static const MethodInfo* get() {
    static auto* pointerEventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerEventDataExtension*), "GetRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerEventDataExtension::GetSwipeStart
// Il2CppName: GetSwipeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerEventDataExtension::GetSwipeStart)> {
  static const MethodInfo* get() {
    static auto* pointerEventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerEventDataExtension*), "GetSwipeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerEventDataExtension::SetSwipeStart
// Il2CppName: SetSwipeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2)>(&UnityEngine::EventSystems::PointerEventDataExtension::SetSwipeStart)> {
  static const MethodInfo* get() {
    static auto* pointerEventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerEventDataExtension*), "SetSwipeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEventData, start});
  }
};
