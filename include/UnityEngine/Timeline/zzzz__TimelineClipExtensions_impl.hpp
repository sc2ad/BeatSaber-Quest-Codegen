#pragma once
#include "UnityEngine/Timeline/zzzz__TimelineClipExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::TimelineClipExtensions.MoveToTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Timeline::TimelineClip, UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2ad8ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get(),
                            "MoveToTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClipExtensions.TryMoveToTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TimelineClip, UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineClipExtensions::TryMoveToTrack)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2ad9180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get(),
                            "TryMoveToTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClipExtensions.MoveToTrack_Impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Timeline::TimelineClip, UnityEngine::Timeline::TrackAsset, UnityEngine::Object, UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack_Impl)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2ad9060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get(),
                            "MoveToTrack_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Timeline::TimelineClipExtensions::__set_k_UndoSetParentTrackText(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "k_UndoSetParentTrackText", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::Timeline::TimelineClipExtensions::__get_k_UndoSetParentTrackText()  {
return ::cordl_internals::getStaticField<::StringW, "k_UndoSetParentTrackText", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get>();
}
 void UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Timeline::TrackAsset destinationTrack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get(),
                            "MoveToTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clip, destinationTrack);
}
 bool UnityEngine::Timeline::TimelineClipExtensions::TryMoveToTrack(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Timeline::TrackAsset destinationTrack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get(),
                            "TryMoveToTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clip, destinationTrack);
}
 void UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack_Impl(UnityEngine::Timeline::TimelineClip clip, UnityEngine::Timeline::TrackAsset destinationTrack, UnityEngine::Object asset, UnityEngine::Timeline::TrackAsset parentTrack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClipExtensions>::get(),
                            "MoveToTrack_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clip, destinationTrack, asset, parentTrack);
}
