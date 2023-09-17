#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
namespace {
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.CanBindTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::U2D::SpriteAtlas::*)(::UnityEngine::Sprite)>(&::UnityEngine::U2D::SpriteAtlas::CanBindTo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6e98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlas>::get(),
                            "CanBindTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite (::UnityEngine::U2D::SpriteAtlas::*)(::StringW)>(&::UnityEngine::U2D::SpriteAtlas::GetSprite)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b6e9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlas>::get(),
                            "GetSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::U2D::SpriteAtlas::CanBindTo(::UnityEngine::Sprite sprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlas>::get(),
                            "CanBindTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sprite);
}
 ::UnityEngine::Sprite ::UnityEngine::U2D::SpriteAtlas::GetSprite(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlas>::get(),
                            "GetSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite, false>(const_cast<void*>(instance), ___internal_method, name);
}
} // end anonymous namespace
