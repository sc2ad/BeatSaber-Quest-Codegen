#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__LightsAnimator_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerGameplayAnimator.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerGameplayAnimator::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20f77a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerGameplayAnimator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerGameplayAnimator.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x20e65bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerGameplayAnimator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerGameplayAnimator.AnimateNewLeaderSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerGameplayAnimator::*)(bool)>(&GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerGameplayAnimator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerGameplayAnimator.HandleStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerGameplayAnimator::*)(GlobalNamespace::GlobalNamespace__MultiplayerController__State)>(&GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x20e69bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerGameplayAnimator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerGameplayAnimator.HandleNewLeaderWasSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerGameplayAnimator::*)(::StringW)>(&GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x20f7994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            "HandleNewLeaderWasSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerGameplayAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&GlobalNamespace::MultiplayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20e6d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__activeLightsColor(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::MultiplayerGameplayAnimator::__get__activeLightsColor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadingLightsColor(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingLightsColor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__failedLightsColor(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::MultiplayerGameplayAnimator::__get__failedLightsColor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadingSwitchCrossFadeDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerGameplayAnimator::__get__leadingSwitchCrossFadeDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__gameplayLightsAnimators(::ArrayW<GlobalNamespace::LightsAnimator> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::LightsAnimator>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::LightsAnimator>>(value));
}
constexpr ::ArrayW<GlobalNamespace::LightsAnimator> GlobalNamespace::MultiplayerGameplayAnimator::__get__gameplayLightsAnimators() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::LightsAnimator>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__allLightsAnimators(::ArrayW<GlobalNamespace::LightsAnimator> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::LightsAnimator>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::LightsAnimator>>(value));
}
constexpr ::ArrayW<GlobalNamespace::LightsAnimator> GlobalNamespace::MultiplayerGameplayAnimator::__get__allLightsAnimators() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::LightsAnimator>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__leadPlayerProvider(GlobalNamespace::MultiplayerLeadPlayerProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLeadPlayerProvider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLeadPlayerProvider>(value));
}
constexpr GlobalNamespace::MultiplayerLeadPlayerProvider GlobalNamespace::MultiplayerGameplayAnimator::__get__leadPlayerProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLeadPlayerProvider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set__multiplayerController(GlobalNamespace::MultiplayerController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerController>(value));
}
constexpr GlobalNamespace::MultiplayerController GlobalNamespace::MultiplayerGameplayAnimator::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set_tweeningManager(Tweening::TimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::TimeTweeningManager, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::TimeTweeningManager>(value));
}
constexpr Tweening::TimeTweeningManager GlobalNamespace::MultiplayerGameplayAnimator::__get_tweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::TimeTweeningManager, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__set_connectedPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerGameplayAnimator::__get_connectedPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerGameplayAnimator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected(bool isLeading)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            "AnimateNewLeaderSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isLeading);
}
 void GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            "HandleStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerController__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected(::StringW userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            "HandleNewLeaderWasSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userId);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerGameplayAnimator::MultiplayerGameplayAnimator()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerGameplayAnimator>())) {}
 void GlobalNamespace::MultiplayerGameplayAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerGameplayAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
