#pragma once
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightColorBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBaseData::*)(float_t, GlobalNamespace::BeatmapEventTransitionType, GlobalNamespace::EnvironmentColorType, float_t, int32_t)>(&GlobalNamespace::LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21d7b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBaseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventTransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightColorBaseData::__set_beat(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightColorBaseData::__get_beat() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_transitionType(GlobalNamespace::BeatmapEventTransitionType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapEventTransitionType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapEventTransitionType>(value));
}
constexpr GlobalNamespace::BeatmapEventTransitionType GlobalNamespace::LightColorBaseData::__get_transitionType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapEventTransitionType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_colorType(GlobalNamespace::EnvironmentColorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentColorType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentColorType>(value));
}
constexpr GlobalNamespace::EnvironmentColorType GlobalNamespace::LightColorBaseData::__get_colorType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentColorType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_brightness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightColorBaseData::__get_brightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeBeatFrequency(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LightColorBaseData::__get_strobeBeatFrequency() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::LightColorBaseData GlobalNamespace::LightColorBaseData::New_ctor(float_t beat, GlobalNamespace::BeatmapEventTransitionType transitionType, GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency)  {
GlobalNamespace::LightColorBaseData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LightColorBaseData>(beat, transitionType, colorType, brightness, strobeBeatFrequency))};
return o;
}
 void GlobalNamespace::LightColorBaseData::_ctor(float_t beat, GlobalNamespace::BeatmapEventTransitionType transitionType, GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBaseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventTransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beat, transitionType, colorType, brightness, strobeBeatFrequency);
}
