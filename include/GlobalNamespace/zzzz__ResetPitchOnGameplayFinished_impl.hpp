#pragma once
namespace {
#include "GlobalNamespace/zzzz__ResetPitchOnGameplayFinished_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)(::GlobalNamespace::GameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO)>(&::GlobalNamespace::ResetPitchOnGameplayFinished::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x20bd958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(&::GlobalNamespace::ResetPitchOnGameplayFinished::Finalize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x20bda00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ResetPitchOnGameplayFinished),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.HandleAnyGameplayLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(&::GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20bdb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished>::get(),
                            "HandleAnyGameplayLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ResetPitchOnGameplayFinished::__set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayLevelSceneTransitionEvents, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayLevelSceneTransitionEvents>(value));
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents ::GlobalNamespace::ResetPitchOnGameplayFinished::__get__gameplayLevelSceneTransitionEvents() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayLevelSceneTransitionEvents, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResetPitchOnGameplayFinished::__set__audioManager(::GlobalNamespace::AudioManagerSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AudioManagerSO>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO ::GlobalNamespace::ResetPitchOnGameplayFinished::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "gameplayLevelSceneTransitionEvents", ty: "::GlobalNamespace::GameplayLevelSceneTransitionEvents", modifiers: "", def_value: None }, CppParam { name: "audioManager", ty: "::GlobalNamespace::AudioManagerSO", modifiers: "", def_value: None }]
 ::GlobalNamespace::ResetPitchOnGameplayFinished::ResetPitchOnGameplayFinished(::GlobalNamespace::GameplayLevelSceneTransitionEvents gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO audioManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ResetPitchOnGameplayFinished>(gameplayLevelSceneTransitionEvents, audioManager))) {}
 void ::GlobalNamespace::ResetPitchOnGameplayFinished::_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO audioManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplayLevelSceneTransitionEvents, audioManager);
}
 void ::GlobalNamespace::ResetPitchOnGameplayFinished::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished>::get(),
                            "HandleAnyGameplayLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
