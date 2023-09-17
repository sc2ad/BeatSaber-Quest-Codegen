#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImageVertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VectorImage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VectorImage::*)()>(&::UnityEngine::UIElements::VectorImage::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c44248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VectorImage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::VectorImage::__set_atlas(::UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Texture2D>(value));
}
constexpr ::UnityEngine::Texture2D ::UnityEngine::UIElements::VectorImage::__get_atlas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VectorImage::__set_vertices(::ArrayW<::UnityEngine::UIElements::VectorImageVertex> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::VectorImageVertex>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::UIElements::VectorImageVertex>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex> ::UnityEngine::UIElements::VectorImage::__get_vertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::VectorImageVertex>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VectorImage::__set_indices(::ArrayW<uint16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint16_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint16_t>>(value));
}
constexpr ::ArrayW<uint16_t> ::UnityEngine::UIElements::VectorImage::__get_indices() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint16_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VectorImage::__set_settings(::ArrayW<::UnityEngine::UIElements::GradientSettings> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::GradientSettings>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::UIElements::GradientSettings>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings> ::UnityEngine::UIElements::VectorImage::__get_settings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::GradientSettings>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::VectorImage::__set_size(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::VectorImage::__get_size() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::VectorImage::VectorImage()  : ::UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<VectorImage>())) {}
 void ::UnityEngine::UIElements::VectorImage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VectorImage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
