#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::*)(float_t, float_t)>(&::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a4f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(float_t songTime, float_t yOffset) noexcept : ::bs_hook::ValueTypeWrapper() {this->songTime = songTime;
this->yOffset = yOffset;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__set_songTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__get_songTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__set_yOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__get_yOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::_ctor(float_t songTime, float_t yOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, songTime, yOffset);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(::GlobalNamespace::IAudioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController, float_t, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData)>(&::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x20a4e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapObjectSpawnController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)()>(&::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x20a4f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.GetJumpOffsetYAtJumpStartSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(float_t)>(&::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x20a5108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator>::get(),
                            "GetJumpOffsetYAtJumpStartSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__currentYJumpOffsetBufferEndIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__currentYJumpOffsetBufferEndIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__jumpDurationToDesiredZPosition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__jumpDurationToDesiredZPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__yJumpOffsetBuffer(::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData> ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__yJumpOffsetBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAudioTimeSource>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapObjectSpawnController>(value));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "audioTimeSource", ty: "::GlobalNamespace::IAudioTimeSource", modifiers: "", def_value: None }, CppParam { name: "beatmapObjectSpawnController", ty: "::GlobalNamespace::IBeatmapObjectSpawnController", modifiers: "", def_value: None }, CppParam { name: "moveToPlayerHeadTParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteSpawnData", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BeatmapObjectAvoidanceYOffsetEvaluator(::GlobalNamespace::IAudioTimeSource audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController beatmapObjectSpawnController, float_t moveToPlayerHeadTParam, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectAvoidanceYOffsetEvaluator>(audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData))) {}
 void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController beatmapObjectSpawnController, float_t moveToPlayerHeadTParam, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapObjectSpawnController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData);
}
 void ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime(float_t lastDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator>::get(),
                            "GetJumpOffsetYAtJumpStartSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lastDeltaTime);
}
} // end anonymous namespace
