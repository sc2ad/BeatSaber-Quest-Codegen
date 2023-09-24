#pragma once
#include "GlobalNamespace/zzzz__DefaultEnvironmentEventsFactory_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupLists_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
//  Writing Method size for method: GlobalNamespace::DefaultEnvironmentEventsFactory.InsertDefaultEnvironmentEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::BeatmapData, GlobalNamespace::BeatmapEventDataBoxGroupLists, GlobalNamespace::DefaultEnvironmentEvents, GlobalNamespace::EnvironmentLightGroups)>(&GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEnvironmentEvents)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x21d96fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultEnvironmentEventsFactory>::get(),
                            "InsertDefaultEnvironmentEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DefaultEnvironmentEvents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentLightGroups>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEnvironmentEvents(GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::BeatmapEventDataBoxGroupLists beatmapEventDataBoxGroupLists, GlobalNamespace::DefaultEnvironmentEvents defaultEnvironmentEvents, GlobalNamespace::EnvironmentLightGroups environmentLightGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultEnvironmentEventsFactory>::get(),
                            "InsertDefaultEnvironmentEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DefaultEnvironmentEvents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentLightGroups>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapEventDataBoxGroupLists, defaultEnvironmentEvents, environmentLightGroups);
}
