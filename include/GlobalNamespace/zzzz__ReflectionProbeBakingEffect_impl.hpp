#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeBakingEffect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: GlobalNamespace::ReflectionProbeBakingEffect.OnRenderImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeBakingEffect::*)(UnityEngine::RenderTexture, UnityEngine::RenderTexture)>(&GlobalNamespace::ReflectionProbeBakingEffect::OnRenderImage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1f99f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingEffect>::get(),
                            "OnRenderImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ReflectionProbeBakingEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeBakingEffect::*)()>(&GlobalNamespace::ReflectionProbeBakingEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f99fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ReflectionProbeBakingEffect::__set__material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::ReflectionProbeBakingEffect::__get__material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ReflectionProbeBakingEffect::OnRenderImage(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingEffect>::get(),
                            "OnRenderImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dest);
}
// Ctor Parameters []
 GlobalNamespace::ReflectionProbeBakingEffect::ReflectionProbeBakingEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ReflectionProbeBakingEffect>())) {}
 void GlobalNamespace::ReflectionProbeBakingEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
