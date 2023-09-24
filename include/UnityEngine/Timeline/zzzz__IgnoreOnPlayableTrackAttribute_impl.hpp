#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IgnoreOnPlayableTrackAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::*)()>(&UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad5ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::New_ctor()  {
UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute>())};
return o;
}
 void UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
