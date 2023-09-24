#pragma once
#include "GlobalNamespace/zzzz__SliderInteractionEffect_impl.hpp"
#include "GlobalNamespace/zzzz__SliderParticleInteractionEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: GlobalNamespace::SliderParticleInteractionEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderParticleInteractionEffect::*)()>(&GlobalNamespace::SliderParticleInteractionEffect::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x224c2d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderParticleInteractionEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderParticleInteractionEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderParticleInteractionEffect::*)()>(&GlobalNamespace::SliderParticleInteractionEffect::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x224c440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderParticleInteractionEffect.SetPSStartColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderParticleInteractionEffect::*)(UnityEngine::Color)>(&GlobalNamespace::SliderParticleInteractionEffect::SetPSStartColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x224c36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "SetPSStartColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderParticleInteractionEffect.StartEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderParticleInteractionEffect::*)(float_t)>(&GlobalNamespace::SliderParticleInteractionEffect::StartEffect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x224c4ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderParticleInteractionEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderParticleInteractionEffect.EndEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderParticleInteractionEffect::*)()>(&GlobalNamespace::SliderParticleInteractionEffect::EndEffect)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x224c564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderParticleInteractionEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderParticleInteractionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderParticleInteractionEffect::*)()>(&GlobalNamespace::SliderParticleInteractionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__set__particleSystems(::ArrayW<UnityEngine::ParticleSystem> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::ParticleSystem>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::ParticleSystem>>(value));
}
constexpr ::ArrayW<UnityEngine::ParticleSystem> GlobalNamespace::SliderParticleInteractionEffect::__get__particleSystems() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::ParticleSystem>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::SliderParticleInteractionEffect::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__set__saberManager(GlobalNamespace::SaberManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberManager>(value));
}
constexpr GlobalNamespace::SaberManager GlobalNamespace::SliderParticleInteractionEffect::__get__saberManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__set__startColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::SliderParticleInteractionEffect::__get__startColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__set__saber(GlobalNamespace::Saber value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Saber, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Saber>(value));
}
constexpr GlobalNamespace::Saber GlobalNamespace::SliderParticleInteractionEffect::__get__saber() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Saber, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SliderParticleInteractionEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderParticleInteractionEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderParticleInteractionEffect::SetPSStartColor(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "SetPSStartColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 void GlobalNamespace::SliderParticleInteractionEffect::StartEffect(float_t saberInteractionParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "StartEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberInteractionParam);
}
 void GlobalNamespace::SliderParticleInteractionEffect::EndEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            "EndEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SliderParticleInteractionEffect GlobalNamespace::SliderParticleInteractionEffect::New_ctor()  {
GlobalNamespace::SliderParticleInteractionEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SliderParticleInteractionEffect>())};
return o;
}
 void GlobalNamespace::SliderParticleInteractionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderParticleInteractionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
