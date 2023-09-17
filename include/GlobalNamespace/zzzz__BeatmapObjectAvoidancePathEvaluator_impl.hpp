#pragma once
namespace {
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidancePathEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)(::GlobalNamespace::IAudioTimeSource, ::GlobalNamespace::PlayerTransforms, ::GlobalNamespace::BezierSplineEvaluator, float_t, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20a48f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator.GetCurrentPathPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)()>(&::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x20a496c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator>::get(),
                            "GetCurrentPathPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__jumpStartZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpStartZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__jumpEndZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpEndZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__zOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__zOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__yOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__yOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__noteJumpSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__noteJumpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__moveToPlayerHeadTParam(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__moveToPlayerHeadTParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__pathBezierCurveEvaluator(::GlobalNamespace::BezierSplineEvaluator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BezierSplineEvaluator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BezierSplineEvaluator>(value));
}
constexpr ::GlobalNamespace::BezierSplineEvaluator ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__pathBezierCurveEvaluator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BezierSplineEvaluator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAudioTimeSource>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__playerTransforms(::GlobalNamespace::PlayerTransforms value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerTransforms, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerTransforms>(value));
}
constexpr ::GlobalNamespace::PlayerTransforms ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "audioTimeSource", ty: "::GlobalNamespace::IAudioTimeSource", modifiers: "", def_value: None }, CppParam { name: "playerTransforms", ty: "::GlobalNamespace::PlayerTransforms", modifiers: "", def_value: None }, CppParam { name: "pathBezierCurveEvaluator", ty: "::GlobalNamespace::BezierSplineEvaluator", modifiers: "", def_value: None }, CppParam { name: "jumpStartZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpEndZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpSeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "moveToPlayerHeadTParam", ty: "float_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::BeatmapObjectAvoidancePathEvaluator(::GlobalNamespace::IAudioTimeSource audioTimeSource, ::GlobalNamespace::PlayerTransforms playerTransforms, ::GlobalNamespace::BezierSplineEvaluator pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectAvoidancePathEvaluator>(audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam))) {}
 void ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource audioTimeSource, ::GlobalNamespace::PlayerTransforms playerTransforms, ::GlobalNamespace::BezierSplineEvaluator pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator>::get(),
                            "GetCurrentPathPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
