#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry.get_triggerInEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::get_triggerInEditor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad5ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(),
                            "get_triggerInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry.get_prewarm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::get_prewarm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad5ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(),
                            "get_prewarm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry.get_triggerOnce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::get_triggerOnce)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ad5204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(),
                            "get_triggerOnce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "UnityEngine::Playables::INotification", modifiers: "", def_value: Some("csnull") }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "UnityEngine::Timeline::NotificationFlags", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry(double_t time, UnityEngine::Playables::INotification payload, bool notificationFired, UnityEngine::Timeline::NotificationFlags flags) noexcept : ::bs_hook::ValueTypeWrapper() {this->time = time;
this->payload = payload;
this->notificationFired = notificationFired;
this->flags = flags;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__set_time(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__get_time() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__set_payload(UnityEngine::Playables::INotification value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::INotification, 0x8>(this->__instance, std::forward<UnityEngine::Playables::INotification>(value));
}
constexpr UnityEngine::Playables::INotification UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__get_payload() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::INotification, 0x8>(this->__instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__set_notificationFired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__get_notificationFired() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__set_flags(UnityEngine::Timeline::NotificationFlags value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::NotificationFlags, 0x12>(this->__instance, std::forward<UnityEngine::Timeline::NotificationFlags>(value));
}
constexpr UnityEngine::Timeline::NotificationFlags UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::__get_flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::NotificationFlags, 0x12>(this->__instance);
}
 bool UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::get_triggerInEditor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(),
                            "get_triggerInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::get_prewarm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(),
                            "get_prewarm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry::get_triggerOnce()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(),
                            "get_triggerOnce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad5bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c._SortNotifications_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::*)(UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry, UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::_SortNotifications_b__12_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ad5bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get(),
                            "<SortNotifications>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::__set___9(UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c value)  {
::cordl_internals::setStaticField<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get>(std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>(value));
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get>();
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::__set___9__12_0(System::Comparison_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get>(std::forward<System::Comparison_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>>(value));
}
 System::Comparison_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get>();
}
// Ctor Parameters []
 UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::UnityEngine__Timeline__TimeNotificationBehaviour____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Timeline__TimeNotificationBehaviour____c>())) {}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c::_SortNotifications_b__12_0(UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry x, UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour____c>::get(),
                            "<SortNotifications>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.set_timeSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad4d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "set_timeSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeNotificationBehaviour> (*)(UnityEngine::Playables::PlayableGraph, double_t, UnityEngine::Playables::DirectorWrapMode)>(&UnityEngine::Timeline::TimeNotificationBehaviour::Create)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ad4d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::DirectorWrapMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.AddNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(double_t, UnityEngine::Playables::INotification, UnityEngine::Timeline::NotificationFlags)>(&UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ad4e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "AddNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::INotification>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::NotificationFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.OnGraphStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2ad4f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimeNotificationBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.OnBehaviourPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2ad5210;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimeNotificationBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.PrepareFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2ad5444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimeNotificationBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.SortNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(&UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2ad50f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "SortNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.CanRestoreNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry, UnityEngine::Playables::FrameData, double_t, double_t)>(&UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ad5a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "CanRestoreNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.TriggerNotificationsInRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(double_t, double_t, UnityEngine::Playables::FrameData, UnityEngine::Playables::Playable, bool)>(&UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2ad58a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "TriggerNotificationsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.SyncDurationWithExternalSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ad57a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "SyncDurationWithExternalSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.Trigger_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Playables::Playable, UnityEngine::Playables::PlayableOutput, ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>)>(&UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ad53bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "Trigger_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableOutput>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour.Restore_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>)>(&UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad5ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "Restore_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimeNotificationBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(&UnityEngine::Timeline::TimeNotificationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ad5ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_Notifications(System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_Notifications() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_PreviousTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_PreviousTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_NeedSortNotifications(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_NeedSortNotifications() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_TimeSource(UnityEngine::Playables::Playable value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::Playable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Playables::Playable>(value));
}
constexpr UnityEngine::Playables::Playable UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_TimeSource() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::Playable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource(UnityEngine::Playables::Playable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "set_timeSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeNotificationBehaviour> UnityEngine::Timeline::TimeNotificationBehaviour::Create(UnityEngine::Playables::PlayableGraph graph, double_t duration, UnityEngine::Playables::DirectorWrapMode loopMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::DirectorWrapMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimeNotificationBehaviour>, false>(nullptr, ___internal_method, graph, duration, loopMode);
}
/// @param flags: UnityEngine::Timeline::NotificationFlags (default: 2)
 void UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification(double_t time, UnityEngine::Playables::INotification payload, UnityEngine::Timeline::NotificationFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "AddNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::INotification>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::NotificationFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, payload, flags);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart(UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "OnGraphStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "OnBehaviourPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "PrepareFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "SortNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification(UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry e, UnityEngine::Playables::FrameData info, double_t currentTime, double_t previousTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "CanRestoreNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e, info, currentTime, previousTime);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange(double_t start, double_t end, UnityEngine::Playables::FrameData info, UnityEngine::Playables::Playable playable, bool checkState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "TriggerNotificationsInRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, info, playable, checkState);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource(UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "SyncDurationWithExternalSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal(UnityEngine::Playables::Playable playable, UnityEngine::Playables::PlayableOutput output, ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "Trigger_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableOutput>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playable, output, e);
}
 void UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal(ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry> e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            "Restore_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Timeline::UnityEngine__Timeline__TimeNotificationBehaviour__NotificationEntry>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
 UnityEngine::Timeline::TimeNotificationBehaviour::TimeNotificationBehaviour()  : UnityEngine::Playables::PlayableBehaviour(THROW_UNLESS(::il2cpp_utils::New<TimeNotificationBehaviour>())) {}
 void UnityEngine::Timeline::TimeNotificationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimeNotificationBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
