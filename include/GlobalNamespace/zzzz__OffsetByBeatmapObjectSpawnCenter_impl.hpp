#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetByBeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
//  Writing Method size for method: GlobalNamespace::OffsetByBeatmapObjectSpawnCenter.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(&GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x222cc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OffsetByBeatmapObjectSpawnCenter.HandleSpawnCenterDistanceWasFound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)(float_t)>(&GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x222cd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OffsetByBeatmapObjectSpawnCenter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(&GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222ce40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__set__spawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectSpawnCenter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectSpawnCenter>(value));
}
constexpr GlobalNamespace::BeatmapObjectSpawnCenter GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__get__spawnCenter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectSpawnCenter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound(float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance);
}
 GlobalNamespace::OffsetByBeatmapObjectSpawnCenter GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::New_ctor()  {
GlobalNamespace::OffsetByBeatmapObjectSpawnCenter o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>())};
return o;
}
 void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OffsetByBeatmapObjectSpawnCenter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
