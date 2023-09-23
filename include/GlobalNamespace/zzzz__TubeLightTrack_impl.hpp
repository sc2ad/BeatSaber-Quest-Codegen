#pragma once
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightTrack_def.hpp"
//  Writing Method size for method: GlobalNamespace::TubeLightTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightTrack::*)()>(&GlobalNamespace::TubeLightTrack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21b3dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::TubeLightTrack::TubeLightTrack()  : UnityEngine::Timeline::TrackAsset(THROW_UNLESS(::il2cpp_utils::New<TubeLightTrack>())) {}
 void GlobalNamespace::TubeLightTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TubeLightTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
