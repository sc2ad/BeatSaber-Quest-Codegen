#pragma once
#include "UnityEngine/Timeline/zzzz__MarkerTrack_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalTrack_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::SignalTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalTrack::*)()>(&UnityEngine::Timeline::SignalTrack::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ad14f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::SignalTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Timeline::SignalTrack UnityEngine::Timeline::SignalTrack::New_ctor()  {
UnityEngine::Timeline::SignalTrack o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Timeline::SignalTrack>())};
return o;
}
 void UnityEngine::Timeline::SignalTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::SignalTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
