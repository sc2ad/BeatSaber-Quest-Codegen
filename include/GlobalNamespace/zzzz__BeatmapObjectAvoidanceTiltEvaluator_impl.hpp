#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceTiltEvaluator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)(GlobalNamespace::IAudioTimeSource, GlobalNamespace::BezierSplineEvaluator, UnityEngine::Vector2)>(&GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x20a4a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BezierSplineEvaluator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator.GetTiltAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)()>(&GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x20a4b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator>::get(),
                            "GetTiltAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__audioTimeSource(GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAudioTimeSource, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAudioTimeSource>(value));
}
constexpr GlobalNamespace::IAudioTimeSource GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAudioTimeSource, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__gravity(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__gravity() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__normalizedGravity(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__normalizedGravity() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__bezierSplineEvaluator(GlobalNamespace::BezierSplineEvaluator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BezierSplineEvaluator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BezierSplineEvaluator>(value));
}
constexpr GlobalNamespace::BezierSplineEvaluator GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__bezierSplineEvaluator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BezierSplineEvaluator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__currentAcceleration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__currentAcceleration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::New_ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BezierSplineEvaluator bezierSplineEvaluator, UnityEngine::Vector2 gravity)  {
GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator>(audioTimeSource, bezierSplineEvaluator, gravity))};
return o;
}
 void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor(GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BezierSplineEvaluator bezierSplineEvaluator, UnityEngine::Vector2 gravity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BezierSplineEvaluator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audioTimeSource, bezierSplineEvaluator, gravity);
}
 float_t GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator>::get(),
                            "GetTiltAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
