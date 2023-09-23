#pragma once
#include "GlobalNamespace/zzzz__SongController_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSongController_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSongController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialSongController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::*)(float_t, GlobalNamespace::BeatmapData)>(&GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x211402c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::__set_songBpm(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::__get_songBpm() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::__set_beatmapData(GlobalNamespace::BeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapData>(value));
}
constexpr GlobalNamespace::BeatmapData GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::__get_beatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "songBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapData", ty: "GlobalNamespace::BeatmapData", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::GlobalNamespace__TutorialSongController__InitData(float_t songBpm, GlobalNamespace::BeatmapData beatmapData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialSongController__InitData>(songBpm, beatmapData))) {}
 void GlobalNamespace::GlobalNamespace__TutorialSongController__InitData::_ctor(float_t songBpm, GlobalNamespace::BeatmapData beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songBpm, beatmapData);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::*)(GlobalNamespace::Signal, int32_t, int32_t, int32_t)>(&GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2114064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__set_signal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__get_signal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__set_beatOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__get_beatOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__set_firstTimeBeatOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__get_firstTimeBeatOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__set_lineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::__get_lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialSongController__TutorialObjectSpawnData>(signal, firstTimeBeatOffset, beatOffset, lineIndex))) {}
 void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData::_ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData::*)(GlobalNamespace::Signal, int32_t, int32_t, int32_t, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21140a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData::__set_noteLineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData::__get_noteLineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer)  : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer))) {}
 void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData::_ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::*)(GlobalNamespace::Signal, int32_t, int32_t, int32_t, GlobalNamespace::NoteLineLayer, GlobalNamespace::NoteCutDirection, GlobalNamespace::ColorType)>(&GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21136a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::__set_cutDirection(GlobalNamespace::NoteCutDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutDirection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutDirection>(value));
}
constexpr GlobalNamespace::NoteCutDirection GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::__get_cutDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutDirection, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::__set_colorType(GlobalNamespace::ColorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorType>(value));
}
constexpr GlobalNamespace::ColorType GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::__get_colorType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "GlobalNamespace::ColorType", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::ColorType colorType)  : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType))) {}
 void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData::_ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::ColorType colorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer, cutDirection, colorType);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData::*)(GlobalNamespace::Signal, int32_t, int32_t, int32_t, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2113704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer)  : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer))) {}
 void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData::_ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::*)(GlobalNamespace::Signal, int32_t, int32_t, int32_t, int32_t, int32_t, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2113754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::__set_noteLineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::__get_noteLineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::__set_width(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::__get_width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::__set_height(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height, GlobalNamespace::NoteLineLayer noteLineLayer)  : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData>(signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer))) {}
 void GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData::_ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height, GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Signal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer);
}
//  Writing Method size for method: GlobalNamespace::TutorialSongController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::Awake)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x2113194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::Start)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x21137b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::OnDestroy)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2113924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.StartSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(float_t)>(&GlobalNamespace::TutorialSongController::StartSong)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2112660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.StopSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::StopSong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2113cb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialSongController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.PauseSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::PauseSong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2113cd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialSongController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.ResumeSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::ResumeSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2113d00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialSongController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::TutorialSongController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2113d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.HandleNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::TutorialSongController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2113e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.HandleObstacleDidPassThreeQuartersOfMove2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2113e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "HandleObstacleDidPassThreeQuartersOfMove2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.UpdateBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(float_t)>(&GlobalNamespace::TutorialSongController::UpdateBeatmapData)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2113a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "UpdateBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.GetNextBeatmapObjectTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::TutorialSongController::*)(int32_t)>(&GlobalNamespace::TutorialSongController::GetNextBeatmapObjectTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2113e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "GetNextBeatmapObjectTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.CreateObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleData (GlobalNamespace::TutorialSongController::*)(float_t, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData)>(&GlobalNamespace::TutorialSongController::CreateObstacleData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2113f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "CreateObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.CreateBasicNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (GlobalNamespace::TutorialSongController::*)(float_t, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData)>(&GlobalNamespace::TutorialSongController::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2113efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "CreateBasicNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController.CreateBombNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (GlobalNamespace::TutorialSongController::*)(float_t, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData)>(&GlobalNamespace::TutorialSongController::CreateBombNoteData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2113f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "CreateBombNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialSongController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x211400c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialSongController::__set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr GlobalNamespace::AudioTimeSyncController GlobalNamespace::TutorialSongController::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__startWaitTimeInBeats(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::TutorialSongController::__get__startWaitTimeInBeats() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__numberOfBeatsToSnap(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::TutorialSongController::__get__numberOfBeatsToSnap() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__obstacleDurationInBeats(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::TutorialSongController::__get__obstacleDurationInBeats() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteCuttingTutorialPartDidStartSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteCuttingTutorialPartDidStartSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteCuttingInAnyDirectionDidStartSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteCuttingInAnyDirectionDidStartSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__bombCuttingTutorialPartDidStartSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__bombCuttingTutorialPartDidStartSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__leftObstacleTutorialPartDidStartSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__leftObstacleTutorialPartDidStartSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__rightObstacleTutorialPartDidStartSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__rightObstacleTutorialPartDidStartSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__topObstacleTutorialPartDidStartSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__topObstacleTutorialPartDidStartSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteWasCutOKSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteWasCutOKSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteWasCutTooSoonSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteWasCutTooSoonSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteWasCutWithWrongColorSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteWasCutWithWrongColorSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteWasCutFromDifferentDirectionSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteWasCutFromDifferentDirectionSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__noteWasCutWithSlowSpeedSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__noteWasCutWithSlowSpeedSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__bombWasCutSignal(GlobalNamespace::Signal value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Signal, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Signal>(value));
}
constexpr GlobalNamespace::Signal GlobalNamespace::TutorialSongController::__get__bombWasCutSignal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Signal, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__initData(GlobalNamespace::GlobalNamespace__TutorialSongController__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__TutorialSongController__InitData, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__TutorialSongController__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__TutorialSongController__InitData GlobalNamespace::TutorialSongController::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__TutorialSongController__InitData, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectManager, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr GlobalNamespace::BeatmapObjectManager GlobalNamespace::TutorialSongController::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectManager, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__tutorialBeatmapObjectIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::TutorialSongController::__get__tutorialBeatmapObjectIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__prevSpawnedBeatmapObjectIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::TutorialSongController::__get__prevSpawnedBeatmapObjectIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__songBpm(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::TutorialSongController::__get__songBpm() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__beatmapData(GlobalNamespace::BeatmapData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapData, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapData>(value));
}
constexpr GlobalNamespace::BeatmapData GlobalNamespace::TutorialSongController::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapData, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialSongController::__set__normalModeTutorialObjectsSpawnData(::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData> GlobalNamespace::TutorialSongController::__get__normalModeTutorialObjectsSpawnData() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TutorialSongController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialSongController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialSongController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param startTimeOffset: float_t (default: 0)
 void GlobalNamespace::TutorialSongController::StartSong(float_t startTimeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startTimeOffset);
}
 void GlobalNamespace::TutorialSongController::StopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialSongController::PauseSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "PauseSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialSongController::ResumeSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "ResumeSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialSongController::HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
 void GlobalNamespace::TutorialSongController::HandleNoteWasMissed(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "HandleObstacleDidPassThreeQuartersOfMove2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::TutorialSongController::UpdateBeatmapData(float_t noteTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "UpdateBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteTime);
}
 float_t GlobalNamespace::TutorialSongController::GetNextBeatmapObjectTime(int32_t beatOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "GetNextBeatmapObjectTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, beatOffset);
}
 GlobalNamespace::ObstacleData GlobalNamespace::TutorialSongController::CreateObstacleData(float_t time, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData tutorialObstacleSpawnData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "CreateObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ObstacleData, false>(const_cast<void*>(instance), ___internal_method, time, tutorialObstacleSpawnData);
}
 GlobalNamespace::NoteData GlobalNamespace::TutorialSongController::CreateBasicNoteData(float_t time, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData tutorialBasicNoteSpawnData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "CreateBasicNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(const_cast<void*>(instance), ___internal_method, time, tutorialBasicNoteSpawnData);
}
 GlobalNamespace::NoteData GlobalNamespace::TutorialSongController::CreateBombNoteData(float_t time, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData tutorialBombNoteSpawnData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            "CreateBombNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(const_cast<void*>(instance), ___internal_method, time, tutorialBombNoteSpawnData);
}
// Ctor Parameters []
 GlobalNamespace::TutorialSongController::TutorialSongController()  : GlobalNamespace::SongController(THROW_UNLESS(::il2cpp_utils::New<TutorialSongController>())) {}
 void GlobalNamespace::TutorialSongController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialSongController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
