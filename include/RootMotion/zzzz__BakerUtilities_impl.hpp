#pragma once
#include "RootMotion/zzzz__BakerUtilities_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
//  Writing Method size for method: RootMotion::BakerUtilities.ReduceKeyframes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AnimationCurve, float_t)>(&RootMotion::BakerUtilities::ReduceKeyframes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11a82ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "ReduceKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BakerUtilities.GetReducedKeyframes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Keyframe> (*)(UnityEngine::AnimationCurve, float_t)>(&RootMotion::BakerUtilities::GetReducedKeyframes)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x11a8324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "GetReducedKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BakerUtilities.SetLoopFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, UnityEngine::AnimationCurve)>(&RootMotion::BakerUtilities::SetLoopFrame)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x11a86e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "SetLoopFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BakerUtilities.SetTangentMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AnimationCurve)>(&RootMotion::BakerUtilities::SetTangentMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11a88c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "SetTangentMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BakerUtilities.EnsureQuaternionContinuity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>(&RootMotion::BakerUtilities::EnsureQuaternionContinuity)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x11a88cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "EnsureQuaternionContinuity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
 void RootMotion::BakerUtilities::ReduceKeyframes(UnityEngine::AnimationCurve curve, float_t maxError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "ReduceKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, curve, maxError);
}
 ::ArrayW<UnityEngine::Keyframe> RootMotion::BakerUtilities::GetReducedKeyframes(UnityEngine::AnimationCurve curve, float_t maxError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "GetReducedKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Keyframe>, false>(nullptr, ___internal_method, curve, maxError);
}
 void RootMotion::BakerUtilities::SetLoopFrame(float_t time, UnityEngine::AnimationCurve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "SetLoopFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, time, curve);
}
 void RootMotion::BakerUtilities::SetTangentMode(UnityEngine::AnimationCurve curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "SetTangentMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, curve);
}
 UnityEngine::Quaternion RootMotion::BakerUtilities::EnsureQuaternionContinuity(UnityEngine::Quaternion lastQ, UnityEngine::Quaternion q)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BakerUtilities>::get(),
                            "EnsureQuaternionContinuity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(nullptr, ___internal_method, lastQ, q);
}
