#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__HapticsAudioClipPlayer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__HapticsAudioClipPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.PlayHapticsPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)(UnityEngine::XR::XRNode, Libraries::HM::HMLib::VR::HapticPresetSO, System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>)>(&GlobalNamespace::HapticsAudioClipPlayer::PlayHapticsPreset)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1f87ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "PlayHapticsPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.TriggerContinuousHaptic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::TriggerContinuousHaptic)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1f88250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "TriggerContinuousHaptic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.RestartHaptic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::RestartHaptic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f88288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "RestartHaptic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.HandleContinuousAudioCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::HapticsAudioClipPlayer::*)(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>)>(&GlobalNamespace::HapticsAudioClipPlayer::HandleContinuousAudioCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f881dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "HandleContinuousAudioCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.UpdateFadeVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)(float_t)>(&GlobalNamespace::HapticsAudioClipPlayer::UpdateFadeVolume)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1f882b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "UpdateFadeVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.HandleOneShotPlayEndCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::HapticsAudioClipPlayer::*)(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>)>(&GlobalNamespace::HapticsAudioClipPlayer::HandleOneShotPlayEndCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f88168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "HandleOneShotPlayEndCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1f88030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.ForceStopPlaying
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::ForceStopPlaying)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1f88324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "ForceStopPlaying",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::Initialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1f88350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer.GetPanForNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::HapticsAudioClipPlayer::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::HapticsAudioClipPlayer::GetPanForNode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1f88084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "GetPanForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f88388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticsAudioClipPlayer._HandleOneShotPlayEndCoroutine_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HapticsAudioClipPlayer::*)()>(&GlobalNamespace::HapticsAudioClipPlayer::_HandleOneShotPlayEndCoroutine_b__11_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f88390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "<HandleOneShotPlayEndCoroutine>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__audioSource(UnityEngine::AudioSource value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioSource>(value));
}
constexpr UnityEngine::AudioSource GlobalNamespace::HapticsAudioClipPlayer::__get__audioSource() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__baseVolume(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::HapticsAudioClipPlayer::__get__baseVolume() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__triggeredThisFrame(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::HapticsAudioClipPlayer::__get__triggeredThisFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HapticsAudioClipPlayer::__set__lastTriggerTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::HapticsAudioClipPlayer::__get__lastTriggerTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HapticsAudioClipPlayer::PlayHapticsPreset(UnityEngine::XR::XRNode onNode, Libraries::HM::HMLib::VR::HapticPresetSO preset, System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "PlayHapticsPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onNode, preset, onComplete);
}
 void GlobalNamespace::HapticsAudioClipPlayer::TriggerContinuousHaptic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "TriggerContinuousHaptic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HapticsAudioClipPlayer::RestartHaptic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "RestartHaptic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::HapticsAudioClipPlayer::HandleContinuousAudioCoroutine(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "HandleContinuousAudioCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, onComplete);
}
 void GlobalNamespace::HapticsAudioClipPlayer::UpdateFadeVolume(float_t timeSinceEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "UpdateFadeVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeSinceEnd);
}
 System::Collections::IEnumerator GlobalNamespace::HapticsAudioClipPlayer::HandleOneShotPlayEndCoroutine(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "HandleOneShotPlayEndCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, onComplete);
}
 void GlobalNamespace::HapticsAudioClipPlayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HapticsAudioClipPlayer::ForceStopPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "ForceStopPlaying",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HapticsAudioClipPlayer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::HapticsAudioClipPlayer::GetPanForNode(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "GetPanForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, node);
}
 GlobalNamespace::HapticsAudioClipPlayer GlobalNamespace::HapticsAudioClipPlayer::New_ctor()  {
GlobalNamespace::HapticsAudioClipPlayer o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::HapticsAudioClipPlayer>())};
return o;
}
 void GlobalNamespace::HapticsAudioClipPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::HapticsAudioClipPlayer::_HandleOneShotPlayEndCoroutine_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticsAudioClipPlayer>::get(),
                            "<HandleOneShotPlayEndCoroutine>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool.OnCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::*)(GlobalNamespace::HapticsAudioClipPlayer)>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::OnCreated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f883b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool.OnDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::*)(GlobalNamespace::HapticsAudioClipPlayer)>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::OnDestroyed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f883cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::*)(GlobalNamespace::HapticsAudioClipPlayer)>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::OnDespawned)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f88440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool.Reinitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::*)(GlobalNamespace::HapticsAudioClipPlayer)>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::Reinitialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f88454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1f88468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::OnCreated(GlobalNamespace::HapticsAudioClipPlayer item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                            "OnCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::HapticsAudioClipPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::OnDestroyed(GlobalNamespace::HapticsAudioClipPlayer item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                            "OnDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::HapticsAudioClipPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::OnDespawned(GlobalNamespace::HapticsAudioClipPlayer item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::HapticsAudioClipPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::Reinitialize(GlobalNamespace::HapticsAudioClipPlayer clipPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                            "Reinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::HapticsAudioClipPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clipPlayer);
}
 GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::New_ctor()  {
GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f8828c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f884b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1f884b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f885e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f885e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f88628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set___4__this(GlobalNamespace::HapticsAudioClipPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HapticsAudioClipPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HapticsAudioClipPlayer>(value));
}
constexpr GlobalNamespace::HapticsAudioClipPlayer GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HapticsAudioClipPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set_onComplete(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get_onComplete() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__set__waitForLateUpdate_5__2(UnityEngine::WaitForEndOfFrame value)  {
::cordl_internals::setInstanceField<UnityEngine::WaitForEndOfFrame, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::WaitForEndOfFrame>(value));
}
constexpr UnityEngine::WaitForEndOfFrame GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::__get__waitForLateUpdate_5__2() const {
return ::cordl_internals::getInstanceField<UnityEngine::WaitForEndOfFrame, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f882fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f88630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1f88634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f88754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f8875c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::*)()>(&GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8879c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set___4__this(GlobalNamespace::HapticsAudioClipPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HapticsAudioClipPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HapticsAudioClipPlayer>(value));
}
constexpr GlobalNamespace::HapticsAudioClipPlayer GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HapticsAudioClipPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__set_onComplete(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>>(value));
}
constexpr System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::__get_onComplete() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::HapticsAudioClipPlayer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
