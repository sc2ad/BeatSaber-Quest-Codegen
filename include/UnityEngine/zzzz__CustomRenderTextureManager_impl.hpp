#pragma once
#include "UnityEngine/zzzz__CustomRenderTextureManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__CustomRenderTexture_def.hpp"
//  Writing Method size for method: UnityEngine::CustomRenderTextureManager.InvokeOnTextureLoaded_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::CustomRenderTexture)>(&UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b407a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get(),
                            "InvokeOnTextureLoaded_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CustomRenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::CustomRenderTextureManager.InvokeOnTextureUnloaded_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::CustomRenderTexture)>(&UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b40810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get(),
                            "InvokeOnTextureUnloaded_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CustomRenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::CustomRenderTextureManager::__set_textureLoaded(System::Action_1<UnityEngine::CustomRenderTexture> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::CustomRenderTexture>, "textureLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get>(std::forward<System::Action_1<UnityEngine::CustomRenderTexture>>(value));
}
 System::Action_1<UnityEngine::CustomRenderTexture> UnityEngine::CustomRenderTextureManager::__get_textureLoaded()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::CustomRenderTexture>, "textureLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get>();
}
 void UnityEngine::CustomRenderTextureManager::__set_textureUnloaded(System::Action_1<UnityEngine::CustomRenderTexture> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::CustomRenderTexture>, "textureUnloaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get>(std::forward<System::Action_1<UnityEngine::CustomRenderTexture>>(value));
}
 System::Action_1<UnityEngine::CustomRenderTexture> UnityEngine::CustomRenderTextureManager::__get_textureUnloaded()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::CustomRenderTexture>, "textureUnloaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get>();
}
 void UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal(UnityEngine::CustomRenderTexture source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get(),
                            "InvokeOnTextureLoaded_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CustomRenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
 void UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal(UnityEngine::CustomRenderTexture source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::CustomRenderTextureManager>::get(),
                            "InvokeOnTextureUnloaded_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CustomRenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
