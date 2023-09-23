#pragma once
#include "GlobalNamespace/zzzz__SliderInteractionEffect_impl.hpp"
#include "GlobalNamespace/zzzz__SliderHapticFeedbackInteractionEffect_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
//  Writing Method size for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2249fd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x224a120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect.StartEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)(float_t)>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x224a250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect.EndEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x224a298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderHapticFeedbackInteractionEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect.Vibrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x224a210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "Vibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderHapticFeedbackInteractionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderHapticFeedbackInteractionEffect::*)()>(&GlobalNamespace::SliderHapticFeedbackInteractionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224a2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__hapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__hapticPreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__hapticFeedbackManager(GlobalNamespace::HapticFeedbackManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HapticFeedbackManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HapticFeedbackManager>(value));
}
constexpr GlobalNamespace::HapticFeedbackManager GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__hapticFeedbackManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HapticFeedbackManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__gamePause(GlobalNamespace::IGamePause value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IGamePause, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IGamePause>(value));
}
constexpr GlobalNamespace::IGamePause GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__gamePause() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IGamePause, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderHapticFeedbackInteractionEffect::__set__saberType(GlobalNamespace::SaberType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberType>(value));
}
constexpr GlobalNamespace::SaberType GlobalNamespace::SliderHapticFeedbackInteractionEffect::__get__saberType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderHapticFeedbackInteractionEffect::StartEffect(float_t saberInteractionParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "StartEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberInteractionParam);
}
 void GlobalNamespace::SliderHapticFeedbackInteractionEffect::EndEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "EndEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderHapticFeedbackInteractionEffect::Vibrate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            "Vibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::SliderHapticFeedbackInteractionEffect::SliderHapticFeedbackInteractionEffect()  : GlobalNamespace::SliderInteractionEffect(THROW_UNLESS(::il2cpp_utils::New<SliderHapticFeedbackInteractionEffect>())) {}
 void GlobalNamespace::SliderHapticFeedbackInteractionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderHapticFeedbackInteractionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
