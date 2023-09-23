#pragma once
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
//  Writing Method size for method: GlobalNamespace::IBeatmapObjectSpawner.ProcessObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectSpawner::*)(GlobalNamespace::ObstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>, float_t)>(&GlobalNamespace::IBeatmapObjectSpawner::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IBeatmapObjectSpawner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapObjectSpawner>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IBeatmapObjectSpawner.ProcessNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectSpawner::*)(GlobalNamespace::NoteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>, float_t, bool)>(&GlobalNamespace::IBeatmapObjectSpawner::ProcessNoteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IBeatmapObjectSpawner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapObjectSpawner>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IBeatmapObjectSpawner.ProcessSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectSpawner::*)(GlobalNamespace::SliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>, float_t)>(&GlobalNamespace::IBeatmapObjectSpawner::ProcessSliderData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IBeatmapObjectSpawner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapObjectSpawner>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::IBeatmapObjectSpawner::ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapObjectSpawner>::get(),
                            "ProcessObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
 void GlobalNamespace::IBeatmapObjectSpawner::ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapObjectSpawner>::get(),
                            "ProcessNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour);
}
 void GlobalNamespace::IBeatmapObjectSpawner::ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapObjectSpawner>::get(),
                            "ProcessSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderData, sliderSpawnData, rotation);
}
