#pragma once
#include "UnityEngine/Timeline/zzzz__ControlTrack_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__CustomControlTrack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomControlTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomControlTrack::*)()>(&::GlobalNamespace::CustomControlTrack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b1dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomControlTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::CustomControlTrack::CustomControlTrack()  : ::UnityEngine::Timeline::ControlTrack(THROW_UNLESS(::il2cpp_utils::New<CustomControlTrack>())) {}
 void ::GlobalNamespace::CustomControlTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomControlTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
