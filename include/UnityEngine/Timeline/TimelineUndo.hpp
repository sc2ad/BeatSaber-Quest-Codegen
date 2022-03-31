// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineAsset
  class TimelineAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineUndo
  class TimelineUndo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineUndo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineUndo*, "UnityEngine.Timeline", "TimelineUndo");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineUndo
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineUndo : public ::Il2CppObject {
    public:
    // static public System.Void PushDestroyUndo(UnityEngine.Timeline.TimelineAsset timeline, UnityEngine.Object thingToDirty, UnityEngine.Object objectToDestroy)
    // Offset: 0x29CC9C4
    static void PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* timeline, ::UnityEngine::Object* thingToDirty, ::UnityEngine::Object* objectToDestroy);
    // static public System.Void PushUndo(UnityEngine.Object[] thingsToDirty, System.String operation)
    // Offset: 0x29CCA64
    static void PushUndo(::ArrayW<::UnityEngine::Object*> thingsToDirty, ::StringW operation);
    // static public System.Void PushUndo(UnityEngine.Object thingToDirty, System.String operation)
    // Offset: 0x29CCA68
    static void PushUndo(::UnityEngine::Object* thingToDirty, ::StringW operation);
    // static public System.Void RegisterCreatedObjectUndo(UnityEngine.Object thingCreated, System.String operation)
    // Offset: 0x29CCA6C
    static void RegisterCreatedObjectUndo(::UnityEngine::Object* thingCreated, ::StringW operation);
    // static private System.String UndoName(System.String name)
    // Offset: 0x29CCA70
    static ::StringW UndoName(::StringW name);
  }; // UnityEngine.Timeline.TimelineUndo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineUndo::PushDestroyUndo
// Il2CppName: PushDestroyUndo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Object*, ::UnityEngine::Object*)>(&UnityEngine::Timeline::TimelineUndo::PushDestroyUndo)> {
  static const MethodInfo* get() {
    static auto* timeline = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineAsset")->byval_arg;
    static auto* thingToDirty = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* objectToDestroy = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineUndo*), "PushDestroyUndo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeline, thingToDirty, objectToDestroy});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineUndo::PushUndo
// Il2CppName: PushUndo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Object*>, ::StringW)>(&UnityEngine::Timeline::TimelineUndo::PushUndo)> {
  static const MethodInfo* get() {
    static auto* thingsToDirty = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Object"), 1)->byval_arg;
    static auto* operation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineUndo*), "PushUndo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thingsToDirty, operation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineUndo::PushUndo
// Il2CppName: PushUndo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&UnityEngine::Timeline::TimelineUndo::PushUndo)> {
  static const MethodInfo* get() {
    static auto* thingToDirty = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* operation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineUndo*), "PushUndo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thingToDirty, operation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineUndo::RegisterCreatedObjectUndo
// Il2CppName: RegisterCreatedObjectUndo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&UnityEngine::Timeline::TimelineUndo::RegisterCreatedObjectUndo)> {
  static const MethodInfo* get() {
    static auto* thingCreated = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* operation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineUndo*), "RegisterCreatedObjectUndo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thingCreated, operation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineUndo::UndoName
// Il2CppName: UndoName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::Timeline::TimelineUndo::UndoName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineUndo*), "UndoName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
