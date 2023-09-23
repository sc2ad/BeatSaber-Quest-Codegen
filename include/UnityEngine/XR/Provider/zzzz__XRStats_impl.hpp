#pragma once
#include "UnityEngine/XR/Provider/zzzz__XRStats_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
//  Writing Method size for method: UnityEngine::XR::Provider::XRStats.TryGetStat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::IntegratedSubsystem, ::StringW, ByRef<float_t>)>(&UnityEngine::XR::Provider::XRStats::TryGetStat)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d3abcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Provider::XRStats>::get(),
                            "TryGetStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::IntegratedSubsystem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::Provider::XRStats.TryGetStat_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, ::StringW, ByRef<float_t>)>(&UnityEngine::XR::Provider::XRStats::TryGetStat_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d3ac28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Provider::XRStats>::get(),
                            "TryGetStat_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::XR::Provider::XRStats::TryGetStat(UnityEngine::IntegratedSubsystem xrSubsystem, ::StringW tag, ByRef<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Provider::XRStats>::get(),
                            "TryGetStat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::IntegratedSubsystem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xrSubsystem, tag, value);
}
 bool UnityEngine::XR::Provider::XRStats::TryGetStat_Internal(::cordl_internals::intptr_t ptr, ::StringW tag, ByRef<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Provider::XRStats>::get(),
                            "TryGetStat_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, tag, value);
}
