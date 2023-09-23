#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundSpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundSpriteRenderer.get_renderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Renderer (GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f93f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBackgroundSpriteRenderer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundSpriteRenderer>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundSpriteRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1f93f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundSpriteRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::__set__spriteRenderer(UnityEngine::SpriteRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::SpriteRenderer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpriteRenderer>(value));
}
constexpr UnityEngine::SpriteRenderer GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpriteRenderer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Renderer GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::get_renderer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundSpriteRenderer>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Renderer, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::BloomPrePassBackgroundSpriteRenderer()  : GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassBackgroundSpriteRenderer>())) {}
 void GlobalNamespace::BloomPrePassBackgroundSpriteRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundSpriteRenderer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
