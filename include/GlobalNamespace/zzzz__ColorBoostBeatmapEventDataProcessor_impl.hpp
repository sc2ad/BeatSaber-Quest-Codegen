#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventDataProcessor_def.hpp"
//  Writing Method size for method: GlobalNamespace::ColorBoostBeatmapEventDataProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorBoostBeatmapEventDataProcessor::*)()>(&GlobalNamespace::ColorBoostBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xd92e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventDataProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::ColorBoostBeatmapEventDataProcessor::ColorBoostBeatmapEventDataProcessor()  : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::ColorBoostBeatmapEventData>(THROW_UNLESS(::il2cpp_utils::New<ColorBoostBeatmapEventDataProcessor>())) {}
 void GlobalNamespace::ColorBoostBeatmapEventDataProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventDataProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
