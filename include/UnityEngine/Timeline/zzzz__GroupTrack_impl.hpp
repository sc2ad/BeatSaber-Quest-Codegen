#pragma once
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__GroupTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::GroupTrack.CanCompileClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::GroupTrack::*)()>(&UnityEngine::Timeline::GroupTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad18ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::GroupTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::GroupTrack>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::GroupTrack.get_outputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> (UnityEngine::Timeline::GroupTrack::*)()>(&UnityEngine::Timeline::GroupTrack::get_outputs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ad18f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::GroupTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::GroupTrack>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::GroupTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::GroupTrack::*)()>(&UnityEngine::Timeline::GroupTrack::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ad194c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::GroupTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::Timeline::GroupTrack::CanCompileClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::GroupTrack>::get(),
                            "CanCompileClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> UnityEngine::Timeline::GroupTrack::get_outputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::GroupTrack>::get(),
                            "get_outputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::Timeline::GroupTrack::GroupTrack()  : UnityEngine::Timeline::TrackAsset(THROW_UNLESS(::il2cpp_utils::New<GroupTrack>())) {}
 void UnityEngine::Timeline::GroupTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::GroupTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
