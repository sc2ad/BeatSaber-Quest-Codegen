#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoteCutParticlesEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutParticlesEffect::*)()>(&GlobalNamespace::NoteCutParticlesEffect::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2252790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutParticlesEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutParticlesEffect.SpawnParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutParticlesEffect::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float_t, UnityEngine::Vector3, UnityEngine::Color32, int32_t, int32_t, float_t)>(&GlobalNamespace::NoteCutParticlesEffect::SpawnParticles)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x22528d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutParticlesEffect>::get(),
                            "SpawnParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutParticlesEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutParticlesEffect::*)()>(&GlobalNamespace::NoteCutParticlesEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2252d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutParticlesEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPS(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPS() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPS(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::NoteCutParticlesEffect::__get__explosionPS() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePS(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePS() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPrePassBloomPS(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPS() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__EmitParams>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSEmitParams() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSMainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__MainModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSMainModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSShapeModule(UnityEngine::UnityEngine__ParticleSystem__ShapeModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__ShapeModule, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__ShapeModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__ShapeModule GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSShapeModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__ShapeModule, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesLifetimeMinMaxCurve(UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve GlobalNamespace::NoteCutParticlesEffect::__get__sparklesLifetimeMinMaxCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__EmitParams>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams GlobalNamespace::NoteCutParticlesEffect::__get__explosionPSEmitParams() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__EmitParams>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSEmitParams() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__EmitParams, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSMainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__MainModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSMainModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSShapeModule(UnityEngine::UnityEngine__ParticleSystem__ShapeModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__ShapeModule, 0x220>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__ShapeModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__ShapeModule GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSShapeModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__ShapeModule, 0x220>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPrePassBloomPSShapeModule(UnityEngine::UnityEngine__ParticleSystem__ShapeModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__ShapeModule, 0x228>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__ShapeModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__ShapeModule GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPSShapeModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__ShapeModule, 0x228>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::NoteCutParticlesEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutParticlesEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteCutParticlesEffect::SpawnParticles(UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 saberDir, float_t saberSpeed, UnityEngine::Vector3 noteMovementVec, UnityEngine::Color32 color, int32_t sparkleParticlesCount, int32_t explosionParticlesCount, float_t lifetimeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutParticlesEffect>::get(),
                            "SpawnParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutPoint, cutNormal, saberDir, saberSpeed, noteMovementVec, color, sparkleParticlesCount, explosionParticlesCount, lifetimeMultiplier);
}
 GlobalNamespace::NoteCutParticlesEffect GlobalNamespace::NoteCutParticlesEffect::New_ctor()  {
GlobalNamespace::NoteCutParticlesEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::NoteCutParticlesEffect>())};
return o;
}
 void GlobalNamespace::NoteCutParticlesEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutParticlesEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
