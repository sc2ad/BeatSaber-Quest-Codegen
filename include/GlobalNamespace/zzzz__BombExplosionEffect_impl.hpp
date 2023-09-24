#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::BombExplosionEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombExplosionEffect::*)()>(&GlobalNamespace::BombExplosionEffect::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x224da98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExplosionEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BombExplosionEffect.SpawnExplosion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombExplosionEffect::*)(UnityEngine::Vector3)>(&GlobalNamespace::BombExplosionEffect::SpawnExplosion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x224dac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExplosionEffect>::get(),
                            "SpawnExplosion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BombExplosionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombExplosionEffect::*)()>(&GlobalNamespace::BombExplosionEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x224db80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExplosionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BombExplosionEffect::__set__debrisPS(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::BombExplosionEffect::__get__debrisPS() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__explosionPS(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::BombExplosionEffect::__get__explosionPS() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__debrisCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BombExplosionEffect::__get__debrisCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__explosionParticlesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BombExplosionEffect::__get__explosionParticlesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__emitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__EmitParams>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams GlobalNamespace::BombExplosionEffect::__get__emitParams() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__explosionPSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__EmitParams>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams GlobalNamespace::BombExplosionEffect::__get__explosionPSEmitParams() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BombExplosionEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExplosionEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BombExplosionEffect::SpawnExplosion(UnityEngine::Vector3 pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExplosionEffect>::get(),
                            "SpawnExplosion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 GlobalNamespace::BombExplosionEffect GlobalNamespace::BombExplosionEffect::New_ctor()  {
GlobalNamespace::BombExplosionEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BombExplosionEffect>())};
return o;
}
 void GlobalNamespace::BombExplosionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BombExplosionEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
