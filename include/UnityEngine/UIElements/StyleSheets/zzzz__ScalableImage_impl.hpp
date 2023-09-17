#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::ScalableImage.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::ScalableImage::*)()>(&::UnityEngine::UIElements::StyleSheets::ScalableImage::ToString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2c6d2cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::StyleSheets::ScalableImage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityEngine::Texture2D", modifiers: "", def_value: Some("csnull") }, CppParam { name: "highResolutionImage", ty: "::UnityEngine::Texture2D", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::StyleSheets::ScalableImage::ScalableImage(::UnityEngine::Texture2D normalImage, ::UnityEngine::Texture2D highResolutionImage) noexcept : ::bs_hook::ValueTypeWrapper() {this->normalImage = normalImage;
this->highResolutionImage = highResolutionImage;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::ScalableImage::__set_normalImage(::UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D, 0x0>(this->__instance, std::forward<::UnityEngine::Texture2D>(value));
}
constexpr ::UnityEngine::Texture2D ::UnityEngine::UIElements::StyleSheets::ScalableImage::__get_normalImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::ScalableImage::__set_highResolutionImage(::UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D, 0x8>(this->__instance, std::forward<::UnityEngine::Texture2D>(value));
}
constexpr ::UnityEngine::Texture2D ::UnityEngine::UIElements::StyleSheets::ScalableImage::__get_highResolutionImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D, 0x8>(this->__instance);
}
 ::StringW ::UnityEngine::UIElements::StyleSheets::ScalableImage::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
