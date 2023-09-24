#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMRAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRExternalComposition_def.hpp"
//  Writing Method size for method: GlobalNamespace::OVRMRAudioFilter.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMRAudioFilter::*)()>(&GlobalNamespace::OVRMRAudioFilter::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a8f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMRAudioFilter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRMRAudioFilter.OnAudioFilterRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMRAudioFilter::*)(::ArrayW<float_t>, int32_t)>(&GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25a8f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMRAudioFilter>::get(),
                            "OnAudioFilterRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRMRAudioFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMRAudioFilter::*)()>(&GlobalNamespace::OVRMRAudioFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a8fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMRAudioFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRMRAudioFilter::__set_running(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRMRAudioFilter::__get_running() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRMRAudioFilter::__set_composition(GlobalNamespace::OVRExternalComposition value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRExternalComposition, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRExternalComposition>(value));
}
constexpr GlobalNamespace::OVRExternalComposition GlobalNamespace::OVRMRAudioFilter::__get_composition() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRExternalComposition, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRMRAudioFilter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMRAudioFilter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead(::ArrayW<float_t> data, int32_t channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMRAudioFilter>::get(),
                            "OnAudioFilterRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, channels);
}
 GlobalNamespace::OVRMRAudioFilter GlobalNamespace::OVRMRAudioFilter::New_ctor()  {
GlobalNamespace::OVRMRAudioFilter o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRMRAudioFilter>())};
return o;
}
 void GlobalNamespace::OVRMRAudioFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMRAudioFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
