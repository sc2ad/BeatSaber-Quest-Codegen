#pragma once
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioLowPassFilter_def.hpp"
//  Writing Method size for method: UnityEngine::AudioLowPassFilter.get_cutoffFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::get_cutoffFrequency)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b264ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AudioLowPassFilter>::get(),
                            "get_cutoffFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AudioLowPassFilter.set_cutoffFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioLowPassFilter::*)(float_t)>(&UnityEngine::AudioLowPassFilter::set_cutoffFrequency)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b264e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AudioLowPassFilter>::get(),
                            "set_cutoffFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
 float_t UnityEngine::AudioLowPassFilter::get_cutoffFrequency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AudioLowPassFilter>::get(),
                            "get_cutoffFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AudioLowPassFilter::set_cutoffFrequency(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AudioLowPassFilter>::get(),
                            "set_cutoffFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
