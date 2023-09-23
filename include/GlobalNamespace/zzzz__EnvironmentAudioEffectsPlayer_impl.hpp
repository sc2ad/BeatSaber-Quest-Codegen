#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: GlobalNamespace::EnvironmentAudioEffectsPlayer.get_audioSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioSource (GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(&GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bad44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentAudioEffectsPlayer>::get(),
                            "get_audioSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentAudioEffectsPlayer.PlayEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentAudioEffectsPlayer::*)(UnityEngine::AudioClip, float_t)>(&GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20bad4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentAudioEffectsPlayer>::get(),
                            "PlayEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentAudioEffectsPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(&GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20badb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentAudioEffectsPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentAudioEffectsPlayer::__set__audioSource(UnityEngine::AudioSource value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioSource>(value));
}
constexpr UnityEngine::AudioSource GlobalNamespace::EnvironmentAudioEffectsPlayer::__get__audioSource() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::AudioSource GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentAudioEffectsPlayer>::get(),
                            "get_audioSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AudioSource, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect(UnityEngine::AudioClip clip, float_t volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentAudioEffectsPlayer>::get(),
                            "PlayEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AudioClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip, volume);
}
// Ctor Parameters []
 GlobalNamespace::EnvironmentAudioEffectsPlayer::EnvironmentAudioEffectsPlayer()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EnvironmentAudioEffectsPlayer>())) {}
 void GlobalNamespace::EnvironmentAudioEffectsPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentAudioEffectsPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
