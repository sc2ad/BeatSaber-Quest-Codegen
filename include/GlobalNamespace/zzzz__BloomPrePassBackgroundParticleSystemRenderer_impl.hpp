#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundParticleSystemRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer.get_renderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Renderer (GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f93e6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1f93e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1f93ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__set__particleSystem(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__set__renderer(UnityEngine::Renderer value)  {
::cordl_internals::setInstanceField<UnityEngine::Renderer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Renderer>(value));
}
constexpr UnityEngine::Renderer GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::__get__renderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Renderer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Renderer GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::get_renderer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Renderer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::BloomPrePassBackgroundParticleSystemRenderer()  : GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassBackgroundParticleSystemRenderer>())) {}
 void GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
