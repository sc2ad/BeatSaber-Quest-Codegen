#pragma once
#include "UnityEngine/Timeline/zzzz__Extrapolation_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad8234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c._SortClipsByStartTime_b__2_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::*)(UnityEngine::Timeline::TimelineClip, UnityEngine::Timeline::TimelineClip)>(&UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::_SortClipsByStartTime_b__2_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ad823c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get(),
                            "<SortClipsByStartTime>b__2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::__set___9(UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c value)  {
::cordl_internals::setStaticField<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get>(std::forward<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>(value));
}
 UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get>();
}
 void UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::__set___9__2_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::Timeline::TimelineClip>, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get>(std::forward<System::Comparison_1<UnityEngine::Timeline::TimelineClip>>(value));
}
 System::Comparison_1<UnityEngine::Timeline::TimelineClip> UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::__get___9__2_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::Timeline::TimelineClip>, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get>();
}
// Ctor Parameters []
 UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::UnityEngine__Timeline__Extrapolation____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Timeline__Extrapolation____c>())) {}
 void UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c::_SortClipsByStartTime_b__2_0(UnityEngine::Timeline::TimelineClip clip1, UnityEngine::Timeline::TimelineClip clip2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__Extrapolation____c>::get(),
                            "<SortClipsByStartTime>b__2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, clip1, clip2);
}
//  Writing Method size for method: UnityEngine::Timeline::Extrapolation.CalculateExtrapolationTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2ad7c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::Extrapolation>::get(),
                            "CalculateExtrapolationTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::Extrapolation.SortClipsByStartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Timeline::TimelineClip> (*)(::ArrayW<UnityEngine::Timeline::TimelineClip>)>(&UnityEngine::Timeline::Extrapolation::SortClipsByStartTime)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2ad8010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::Extrapolation>::get(),
                            "SortClipsByStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Timeline::TimelineClip>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Timeline::Extrapolation::__set_kMinExtrapolationTime(double_t value)  {
::cordl_internals::setStaticField<double_t, "kMinExtrapolationTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::Extrapolation>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::Extrapolation::__get_kMinExtrapolationTime()  {
return ::cordl_internals::getStaticField<double_t, "kMinExtrapolationTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::Extrapolation>::get>();
}
 void UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes(UnityEngine::Timeline::TrackAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::Extrapolation>::get(),
                            "CalculateExtrapolationTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset);
}
 ::ArrayW<UnityEngine::Timeline::TimelineClip> UnityEngine::Timeline::Extrapolation::SortClipsByStartTime(::ArrayW<UnityEngine::Timeline::TimelineClip> clips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::Extrapolation>::get(),
                            "SortClipsByStartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Timeline::TimelineClip>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Timeline::TimelineClip>, false>(nullptr, ___internal_method, clips);
}
