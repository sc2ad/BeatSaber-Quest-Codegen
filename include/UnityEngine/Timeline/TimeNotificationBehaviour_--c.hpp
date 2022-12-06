// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimeNotificationBehaviour
#include "UnityEngine/Timeline/TimeNotificationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimeNotificationBehaviour::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeNotificationBehaviour::$$c*, "UnityEngine.Timeline", "TimeNotificationBehaviour/<>c");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TimeNotificationBehaviour::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.<>c <>9
    static ::UnityEngine::Timeline::TimeNotificationBehaviour::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.<>c <>9
    static void _set_$$9(::UnityEngine::Timeline::TimeNotificationBehaviour::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry> <>9__12_0
    static ::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* _get_$$9__12_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry> <>9__12_0
    static void _set_$$9__12_0(::System::Comparison_1<::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry>* value);
    // static private System.Void .cctor()
    // Offset: 0x1E42C44
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1E42CA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeNotificationBehaviour::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TimeNotificationBehaviour::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeNotificationBehaviour::$$c*, creationType>()));
    }
    // System.Int32 <SortNotifications>b__12_0(UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry x, UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.NotificationEntry y)
    // Offset: 0x1E42CB0
    int $SortNotifications$b__12_0(::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry x, ::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry y);
  }; // UnityEngine.Timeline.TimeNotificationBehaviour/UnityEngine.Timeline.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimeNotificationBehaviour::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeNotificationBehaviour::$$c::$SortNotifications$b__12_0
// Il2CppName: <SortNotifications>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::TimeNotificationBehaviour::$$c::*)(::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry, ::UnityEngine::Timeline::TimeNotificationBehaviour::NotificationEntry)>(&UnityEngine::Timeline::TimeNotificationBehaviour::$$c::$SortNotifications$b__12_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimeNotificationBehaviour/NotificationEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeNotificationBehaviour::$$c*), "<SortNotifications>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
