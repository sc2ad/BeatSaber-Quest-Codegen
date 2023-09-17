#pragma once
namespace {
#include "Unity/XR/Oculus/zzzz__Performance_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Performance.TrySetCPULevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Unity::XR::Oculus::Performance::TrySetCPULevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ae0024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TrySetCPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Performance.TrySetGPULevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Unity::XR::Oculus::Performance::TrySetGPULevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ae0040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TrySetGPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Performance.TryGetAvailableDisplayRefreshRates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::ArrayW<float_t>>)>(&::Unity::XR::Oculus::Performance::TryGetAvailableDisplayRefreshRates)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2ae005c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TryGetAvailableDisplayRefreshRates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Performance.TrySetDisplayRefreshRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::Unity::XR::Oculus::Performance::TrySetDisplayRefreshRate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae0218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TrySetDisplayRefreshRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Performance.TryGetDisplayRefreshRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float_t>)>(&::Unity::XR::Oculus::Performance::TryGetDisplayRefreshRate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae0220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TryGetDisplayRefreshRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Unity::XR::Oculus::Performance::__set_cachedDisplayAvailableFrequencies(::ArrayW<float_t> value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "cachedDisplayAvailableFrequencies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get>(std::forward<::ArrayW<float_t>>(value));
}
 ::ArrayW<float_t> ::Unity::XR::Oculus::Performance::__get_cachedDisplayAvailableFrequencies()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "cachedDisplayAvailableFrequencies", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get>();
}
 bool ::Unity::XR::Oculus::Performance::TrySetCPULevel(int32_t level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TrySetCPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, level);
}
 bool ::Unity::XR::Oculus::Performance::TrySetGPULevel(int32_t level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TrySetGPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, level);
}
 bool ::Unity::XR::Oculus::Performance::TryGetAvailableDisplayRefreshRates(ByRef<::ArrayW<float_t>> refreshRates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TryGetAvailableDisplayRefreshRates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRates);
}
 bool ::Unity::XR::Oculus::Performance::TrySetDisplayRefreshRate(float_t refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TrySetDisplayRefreshRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
 bool ::Unity::XR::Oculus::Performance::TryGetDisplayRefreshRate(ByRef<float_t> refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Performance>::get(),
                            "TryGetDisplayRefreshRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
} // end anonymous namespace
