#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ParticleSystemLightWithIds_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)()>(&::GlobalNamespace::ParticleSystemLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1f9fab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ParticleSystemLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1f9fb38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ParticleSystemLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)()>(&::GlobalNamespace::ParticleSystemLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f9ff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ParticleSystemLightWithIds::__set__particleSystem(::UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ParticleSystem>(value));
}
constexpr ::UnityEngine::ParticleSystem ::GlobalNamespace::ParticleSystemLightWithIds::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemLightWithIds::__set__setOnlyOnce(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::ParticleSystemLightWithIds::__get__setOnlyOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemLightWithIds::__set__setColorOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::ParticleSystemLightWithIds::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemLightWithIds::__set__minAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::ParticleSystemLightWithIds::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemLightWithIds::__set__mainModule(::UnityEngine::____UnityEngine__ParticleSystem__MainModule value)  {
::cordl_internals::setInstanceField<::UnityEngine::____UnityEngine__ParticleSystem__MainModule, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::____UnityEngine__ParticleSystem__MainModule>(value));
}
constexpr ::UnityEngine::____UnityEngine__ParticleSystem__MainModule ::GlobalNamespace::ParticleSystemLightWithIds::__get__mainModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::____UnityEngine__ParticleSystem__MainModule, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemLightWithIds::__set__particles(::ArrayW<::UnityEngine::____UnityEngine__ParticleSystem__Particle> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::____UnityEngine__ParticleSystem__Particle>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::____UnityEngine__ParticleSystem__Particle>>(value));
}
constexpr ::ArrayW<::UnityEngine::____UnityEngine__ParticleSystem__Particle> ::GlobalNamespace::ParticleSystemLightWithIds::__get__particles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::____UnityEngine__ParticleSystem__Particle>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ParticleSystemLightWithIds::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 ::GlobalNamespace::ParticleSystemLightWithIds::ParticleSystemLightWithIds()  : ::GlobalNamespace::RuntimeLightWithIds(THROW_UNLESS(::il2cpp_utils::New<ParticleSystemLightWithIds>())) {}
 void ::GlobalNamespace::ParticleSystemLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
