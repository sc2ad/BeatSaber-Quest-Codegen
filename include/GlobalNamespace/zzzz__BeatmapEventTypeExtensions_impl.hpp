#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapEventTypeExtensions.IsCoreLightIntensityChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::BasicBeatmapEventType)>(&GlobalNamespace::BeatmapEventTypeExtensions::IsCoreLightIntensityChangeEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xd91994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventTypeExtensions>::get(),
                            "IsCoreLightIntensityChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLights1{0};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLights2{1};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLights3{2};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLights4{3};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLights5{4};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kColorBoost{5};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kRotateRings{8};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kCompressExpand{9};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLegacyEarlySpawnRotation{14};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BeatmapEventTypeExtensions::kLegacyLateSpawnRotation{15};
 bool GlobalNamespace::BeatmapEventTypeExtensions::IsCoreLightIntensityChangeEvent(GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventTypeExtensions>::get(),
                            "IsCoreLightIntensityChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, basicBeatmapEventType);
}
