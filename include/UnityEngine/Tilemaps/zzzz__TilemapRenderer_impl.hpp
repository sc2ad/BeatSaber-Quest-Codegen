#pragma once
#include "UnityEngine/zzzz__Renderer_impl.hpp"
namespace {
#include "UnityEngine/Tilemaps/zzzz__TilemapRenderer_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.RegisterSpriteAtlasRegistered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(&::UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bd6f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer>::get(),
                            "RegisterSpriteAtlasRegistered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.UnregisterSpriteAtlasRegistered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(&::UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bd6ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer>::get(),
                            "UnregisterSpriteAtlasRegistered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.OnSpriteAtlasRegistered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)(::UnityEngine::U2D::SpriteAtlas)>(&::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2bd7078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer>::get(),
                            "OnSpriteAtlasRegistered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer>::get(),
                            "RegisterSpriteAtlasRegistered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer>::get(),
                            "UnregisterSpriteAtlasRegistered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas atlas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer>::get(),
                            "OnSpriteAtlasRegistered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, atlas);
}
} // end anonymous namespace
