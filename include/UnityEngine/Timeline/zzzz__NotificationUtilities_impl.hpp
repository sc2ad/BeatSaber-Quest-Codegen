#pragma once
namespace {
#include "UnityEngine/Timeline/zzzz__NotificationUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::NotificationUtilities.CreateNotificationsPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour> (*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker>, double_t, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x2ad8434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::NotificationUtilities>::get(),
                            "CreateNotificationsPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::NotificationUtilities.TrackTypeSupportsNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type)>(&::UnityEngine::Timeline::NotificationUtilities::TrackTypeSupportsNotifications)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2ad8b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::NotificationUtilities>::get(),
                            "TrackTypeSupportsNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour> ::UnityEngine::Timeline::NotificationUtilities::CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker> markers, double_t duration, ::UnityEngine::Playables::DirectorWrapMode extrapolationMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::NotificationUtilities>::get(),
                            "CreateNotificationsPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour>, false>(nullptr, ___internal_method, graph, markers, duration, extrapolationMode);
}
 bool ::UnityEngine::Timeline::NotificationUtilities::TrackTypeSupportsNotifications(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::NotificationUtilities>::get(),
                            "TrackTypeSupportsNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
} // end anonymous namespace
