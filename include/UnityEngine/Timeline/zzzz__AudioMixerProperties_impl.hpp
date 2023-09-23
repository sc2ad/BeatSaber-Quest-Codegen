#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AudioMixerProperties_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::AudioMixerProperties.PrepareFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioMixerProperties::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::AudioMixerProperties::PrepareFrame)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2ac9154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::AudioMixerProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AudioMixerProperties>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::AudioMixerProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioMixerProperties::*)()>(&UnityEngine::Timeline::AudioMixerProperties::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ac9388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AudioMixerProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::AudioMixerProperties::__set_volume(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Timeline::AudioMixerProperties::__get_volume() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__set_stereoPan(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Timeline::AudioMixerProperties::__get_stereoPan() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__set_spatialBlend(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Timeline::AudioMixerProperties::__get_spatialBlend() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Timeline::AudioMixerProperties::PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AudioMixerProperties>::get(),
                            "PrepareFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
// Ctor Parameters []
 UnityEngine::Timeline::AudioMixerProperties::AudioMixerProperties()  : UnityEngine::Playables::PlayableBehaviour(THROW_UNLESS(::il2cpp_utils::New<AudioMixerProperties>())) {}
 void UnityEngine::Timeline::AudioMixerProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::AudioMixerProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
