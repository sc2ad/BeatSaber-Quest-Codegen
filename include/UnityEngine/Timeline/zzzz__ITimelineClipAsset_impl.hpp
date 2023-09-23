#pragma once
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::ITimelineClipAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (UnityEngine::Timeline::ITimelineClipAsset::*)()>(&UnityEngine::Timeline::ITimelineClipAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ITimelineClipAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ITimelineClipAsset>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::ITimelineClipAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ITimelineClipAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
