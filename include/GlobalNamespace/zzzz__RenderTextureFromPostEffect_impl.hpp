#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__RenderTextureFromPostEffect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect.get_targetTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture (::GlobalNamespace::RenderTextureFromPostEffect::*)()>(&::GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26797c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            "get_targetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderTextureFromPostEffect::*)()>(&::GlobalNamespace::RenderTextureFromPostEffect::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26797c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect.OnRenderImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderTextureFromPostEffect::*)(::UnityEngine::RenderTexture, ::UnityEngine::RenderTexture)>(&::GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2679818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            "OnRenderImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderTextureFromPostEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderTextureFromPostEffect::*)()>(&::GlobalNamespace::RenderTextureFromPostEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2679a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RenderTextureFromPostEffect::__set__targetTexture(::UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RenderTexture>(value));
}
constexpr ::UnityEngine::RenderTexture ::GlobalNamespace::RenderTextureFromPostEffect::__get__targetTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RenderTextureFromPostEffect::__set__camera(::UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Camera>(value));
}
constexpr ::UnityEngine::Camera ::GlobalNamespace::RenderTextureFromPostEffect::__get__camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::RenderTexture ::GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            "get_targetTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTexture, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::RenderTextureFromPostEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage(::UnityEngine::RenderTexture src, ::UnityEngine::RenderTexture dst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            "OnRenderImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dst);
}
// Ctor Parameters []
 ::GlobalNamespace::RenderTextureFromPostEffect::RenderTextureFromPostEffect()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<RenderTextureFromPostEffect>())) {}
 void ::GlobalNamespace::RenderTextureFromPostEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderTextureFromPostEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
