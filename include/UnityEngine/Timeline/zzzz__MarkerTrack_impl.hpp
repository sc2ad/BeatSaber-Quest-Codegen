#pragma once
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerTrack_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::MarkerTrack.get_outputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> (UnityEngine::Timeline::MarkerTrack::*)()>(&UnityEngine::Timeline::MarkerTrack::get_outputs)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2ad01c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::MarkerTrack),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::MarkerTrack>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::MarkerTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::MarkerTrack::*)()>(&UnityEngine::Timeline::MarkerTrack::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ad03ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::MarkerTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> UnityEngine::Timeline::MarkerTrack::get_outputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::MarkerTrack>::get(),
                            "get_outputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::Timeline::MarkerTrack::MarkerTrack()  : UnityEngine::Timeline::TrackAsset(THROW_UNLESS(::il2cpp_utils::New<MarkerTrack>())) {}
 void UnityEngine::Timeline::MarkerTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::MarkerTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
