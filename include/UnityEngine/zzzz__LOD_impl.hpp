#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::LOD._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LOD::*)(float_t, ::ArrayW<::UnityEngine::Renderer>)>(&::UnityEngine::LOD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b40ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LOD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Renderer>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderers", ty: "::ArrayW<::UnityEngine::Renderer>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::LOD::LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityEngine::Renderer> renderers) noexcept : ::bs_hook::ValueTypeWrapper() {this->screenRelativeTransitionHeight = screenRelativeTransitionHeight;
this->fadeTransitionWidth = fadeTransitionWidth;
this->renderers = renderers;
}
constexpr void ::UnityEngine::LOD::__set_screenRelativeTransitionHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::LOD::__get_screenRelativeTransitionHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::LOD::__set_fadeTransitionWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::LOD::__get_fadeTransitionWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::LOD::__set_renderers(::ArrayW<::UnityEngine::Renderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Renderer>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::Renderer>>(value));
}
constexpr ::ArrayW<::UnityEngine::Renderer> ::UnityEngine::LOD::__get_renderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Renderer>, 0x8>(this->__instance);
}
 void ::UnityEngine::LOD::_ctor(float_t screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer> renderers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LOD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Renderer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, screenRelativeTransitionHeight, renderers);
}
} // end anonymous namespace
