#pragma once
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__PlayableTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::PlayableTrack.OnCreateClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::PlayableTrack::*)(::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::PlayableTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ad5bd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::PlayableTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::PlayableTrack>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::PlayableTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::PlayableTrack::*)()>(&::UnityEngine::Timeline::PlayableTrack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ad5c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::PlayableTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Timeline::PlayableTrack::OnCreateClip(::UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::PlayableTrack>::get(),
                            "OnCreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip);
}
// Ctor Parameters []
 ::UnityEngine::Timeline::PlayableTrack::PlayableTrack()  : ::UnityEngine::Timeline::TrackAsset(THROW_UNLESS(::il2cpp_utils::New<PlayableTrack>())) {}
 void ::UnityEngine::Timeline::PlayableTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::PlayableTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
