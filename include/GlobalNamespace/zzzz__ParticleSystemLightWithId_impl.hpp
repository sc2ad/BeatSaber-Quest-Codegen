#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: GlobalNamespace::ParticleSystemLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ParticleSystemLightWithId::*)()>(&GlobalNamespace::ParticleSystemLightWithId::get_color)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1f9f568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemLightWithId.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithId::*)()>(&GlobalNamespace::ParticleSystemLightWithId::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1f9f5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::ParticleSystemLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x1f9f63c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ParticleSystemLightWithId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemLightWithId::*)()>(&GlobalNamespace::ParticleSystemLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f9faa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set__particleSystem(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::ParticleSystemLightWithId::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set_setOnlyOnce(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ParticleSystemLightWithId::__get_setOnlyOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set__setColorOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ParticleSystemLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::ParticleSystemLightWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set__minAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::ParticleSystemLightWithId::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set__mainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__MainModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule GlobalNamespace::ParticleSystemLightWithId::__get__mainModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemLightWithId::__set__particles(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>>(value));
}
constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> GlobalNamespace::ParticleSystemLightWithId::__get__particles() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Color GlobalNamespace::ParticleSystemLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ParticleSystemLightWithId::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ParticleSystemLightWithId::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::ParticleSystemLightWithId::ParticleSystemLightWithId()  : GlobalNamespace::LightWithIdMonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ParticleSystemLightWithId>())) {}
 void GlobalNamespace::ParticleSystemLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
