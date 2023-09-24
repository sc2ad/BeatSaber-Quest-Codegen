#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ImageSource_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::ImageSource.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::ImageSource::*)()>(&UnityEngine::UIElements::StyleSheets::ImageSource::IsNull)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c6d464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::ImageSource>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "texture", ty: "UnityEngine::Texture2D", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sprite", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "vectorImage", ty: "UnityEngine::UIElements::VectorImage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "renderTexture", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::StyleSheets::ImageSource::ImageSource(UnityEngine::Texture2D texture, UnityEngine::Sprite sprite, UnityEngine::UIElements::VectorImage vectorImage, UnityEngine::RenderTexture renderTexture) noexcept : ::bs_hook::ValueTypeWrapper() {this->texture = texture;
this->sprite = sprite;
this->vectorImage = vectorImage;
this->renderTexture = renderTexture;
}
constexpr void UnityEngine::UIElements::StyleSheets::ImageSource::__set_texture(UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture2D, 0x0>(this->__instance, std::forward<UnityEngine::Texture2D>(value));
}
constexpr UnityEngine::Texture2D UnityEngine::UIElements::StyleSheets::ImageSource::__get_texture() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture2D, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::ImageSource::__set_sprite(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x8>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UIElements::StyleSheets::ImageSource::__get_sprite() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::ImageSource::__set_vectorImage(UnityEngine::UIElements::VectorImage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VectorImage, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::VectorImage>(value));
}
constexpr UnityEngine::UIElements::VectorImage UnityEngine::UIElements::StyleSheets::ImageSource::__get_vectorImage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VectorImage, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::ImageSource::__set_renderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x18>(this->__instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture UnityEngine::UIElements::StyleSheets::ImageSource::__get_renderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x18>(this->__instance);
}
 bool UnityEngine::UIElements::StyleSheets::ImageSource::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::ImageSource>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
