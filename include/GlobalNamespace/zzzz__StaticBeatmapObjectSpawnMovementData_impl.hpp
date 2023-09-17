#pragma once
namespace {
#include "GlobalNamespace/zzzz__StaticBeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.Get2DNoteOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xd98384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData>::get(),
                            "Get2DNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.LineYPosForLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xd98768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData>::get(),
                            "LineYPosForLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData.get_layerHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::get_layerHeight)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xd9878c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData>::get(),
                            "get_layerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::Vector2 ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::Get2DNoteOffset(int32_t noteLineIndex, int32_t noteLinesCount, ::GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData>::get(),
                            "Get2DNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, noteLineIndex, noteLinesCount, noteLineLayer);
}
 float_t ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::LineYPosForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData>::get(),
                            "LineYPosForLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, lineLayer);
}
 float_t ::GlobalNamespace::StaticBeatmapObjectSpawnMovementData::get_layerHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData>::get(),
                            "get_layerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
