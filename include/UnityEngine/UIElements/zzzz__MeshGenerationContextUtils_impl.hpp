#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextNativeSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
// Ctor Parameters [CppParam { name: "rect", ty: "UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "leftColorPage", ty: "UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColorPage", ty: "UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColorPage", ty: "UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColorPage", ty: "UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams(UnityEngine::Rect rect, UnityEngine::Color playmodeTintColor, UnityEngine::Color leftColor, UnityEngine::Color topColor, UnityEngine::Color rightColor, UnityEngine::Color bottomColor, float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth, UnityEngine::Vector2 topLeftRadius, UnityEngine::Vector2 topRightRadius, UnityEngine::Vector2 bottomRightRadius, UnityEngine::Vector2 bottomLeftRadius, UnityEngine::Material material, UnityEngine::UIElements::ColorPage leftColorPage, UnityEngine::UIElements::ColorPage topColorPage, UnityEngine::UIElements::ColorPage rightColorPage, UnityEngine::UIElements::ColorPage bottomColorPage) noexcept : ::bs_hook::ValueTypeWrapper() {this->rect = rect;
this->playmodeTintColor = playmodeTintColor;
this->leftColor = leftColor;
this->topColor = topColor;
this->rightColor = rightColor;
this->bottomColor = bottomColor;
this->leftWidth = leftWidth;
this->topWidth = topWidth;
this->rightWidth = rightWidth;
this->bottomWidth = bottomWidth;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->material = material;
this->leftColorPage = leftColorPage;
this->topColorPage = topColorPage;
this->rightColorPage = rightColorPage;
this->bottomColorPage = bottomColorPage;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_rect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x0>(this->__instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_rect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_playmodeTintColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x10>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_playmodeTintColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_leftColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x20>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_leftColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_topColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x30>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_topColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_rightColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x40>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_rightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x40>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_bottomColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x50>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_bottomColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x50>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_leftWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_leftWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_topWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_topWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_rightWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_rightWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_bottomWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_bottomWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_topLeftRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x70>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_topLeftRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x70>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_topRightRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x78>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_topRightRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x78>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_bottomRightRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x80>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_bottomRightRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x80>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_bottomLeftRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x88>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_bottomLeftRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x88>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x90>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x90>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_leftColorPage(UnityEngine::UIElements::ColorPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ColorPage, 0x98>(this->__instance, std::forward<UnityEngine::UIElements::ColorPage>(value));
}
constexpr UnityEngine::UIElements::ColorPage UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_leftColorPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ColorPage, 0x98>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_topColorPage(UnityEngine::UIElements::ColorPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ColorPage, 0xa0>(this->__instance, std::forward<UnityEngine::UIElements::ColorPage>(value));
}
constexpr UnityEngine::UIElements::ColorPage UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_topColorPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ColorPage, 0xa0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_rightColorPage(UnityEngine::UIElements::ColorPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ColorPage, 0xa8>(this->__instance, std::forward<UnityEngine::UIElements::ColorPage>(value));
}
constexpr UnityEngine::UIElements::ColorPage UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_rightColorPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ColorPage, 0xa8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__set_bottomColorPage(UnityEngine::UIElements::ColorPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ColorPage, 0xb0>(this->__instance, std::forward<UnityEngine::UIElements::ColorPage>(value));
}
constexpr UnityEngine::UIElements::ColorPage UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams::__get_bottomColorPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ColorPage, 0xb0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.AdjustUVsForScaleMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rect, UnityEngine::Rect, UnityEngine::Texture, UnityEngine::ScaleMode, ByRef<UnityEngine::Rect>, ByRef<UnityEngine::Rect>)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::AdjustUVsForScaleMode)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2d03080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "AdjustUVsForScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.AdjustSpriteUVsForScaleMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rect, UnityEngine::Rect, UnityEngine::Rect, UnityEngine::Texture, UnityEngine::Sprite, UnityEngine::ScaleMode, ByRef<UnityEngine::Rect>, ByRef<UnityEngine::Rect>)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::AdjustSpriteUVsForScaleMode)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x2d033a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "AdjustSpriteUVsForScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.RectIntersection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Rect, UnityEngine::Rect)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::RectIntersection)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d03b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "RectIntersection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.ComputeGeomRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Sprite)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::ComputeGeomRect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d03c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "ComputeGeomRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.ComputeUVRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Sprite)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::ComputeUVRect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d03cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "ComputeUVRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.ApplyPackingRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Rect, UnityEngine::SpritePackingRotation)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::ApplyPackingRotation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d03dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "ApplyPackingRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpritePackingRotation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.MakeTextured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams (*)(UnityEngine::Rect, UnityEngine::Rect, UnityEngine::Texture, UnityEngine::ScaleMode, UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::MakeTextured)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2d03efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "MakeTextured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.MakeSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams (*)(UnityEngine::Rect, UnityEngine::Sprite, UnityEngine::ScaleMode, UnityEngine::UIElements::ContextType, bool, ByRef<UnityEngine::Vector4>)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::MakeSprite)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x2d04068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "MakeSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.MakeVectorTextured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams (*)(UnityEngine::Rect, UnityEngine::Rect, UnityEngine::UIElements::VectorImage, UnityEngine::ScaleMode, UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::MakeVectorTextured)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d0472c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "MakeVectorTextured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VectorImage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams.HasRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::*)(float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::HasRadius)> {
  constexpr static std::size_t size = 0x1074;
  constexpr static std::size_t addrs = 0x2d04848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "HasRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "rect", ty: "UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sprite", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "vectorImage", ty: "UnityEngine::UIElements::VectorImage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "scaleMode", ty: "UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteGeomRect", ty: "UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorPage", ty: "UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshFlags", ty: "UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams(UnityEngine::Rect rect, UnityEngine::Rect uv, UnityEngine::Color color, UnityEngine::Texture texture, UnityEngine::Sprite sprite, UnityEngine::UIElements::VectorImage vectorImage, UnityEngine::Material material, UnityEngine::ScaleMode scaleMode, UnityEngine::Color playmodeTintColor, UnityEngine::Vector2 topLeftRadius, UnityEngine::Vector2 topRightRadius, UnityEngine::Vector2 bottomRightRadius, UnityEngine::Vector2 bottomLeftRadius, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice, float_t sliceScale, UnityEngine::Rect spriteGeomRect, UnityEngine::UIElements::ColorPage colorPage, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags meshFlags) noexcept : ::bs_hook::ValueTypeWrapper() {this->rect = rect;
this->uv = uv;
this->color = color;
this->texture = texture;
this->sprite = sprite;
this->vectorImage = vectorImage;
this->material = material;
this->scaleMode = scaleMode;
this->playmodeTintColor = playmodeTintColor;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->leftSlice = leftSlice;
this->topSlice = topSlice;
this->rightSlice = rightSlice;
this->bottomSlice = bottomSlice;
this->sliceScale = sliceScale;
this->spriteGeomRect = spriteGeomRect;
this->colorPage = colorPage;
this->meshFlags = meshFlags;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_rect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x0>(this->__instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_rect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_uv(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x10>(this->__instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_uv() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x20>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_texture(UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture, 0x30>(this->__instance, std::forward<UnityEngine::Texture>(value));
}
constexpr UnityEngine::Texture UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_texture() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_sprite(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x38>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_sprite() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x38>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_vectorImage(UnityEngine::UIElements::VectorImage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VectorImage, 0x40>(this->__instance, std::forward<UnityEngine::UIElements::VectorImage>(value));
}
constexpr UnityEngine::UIElements::VectorImage UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_vectorImage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VectorImage, 0x40>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x48>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x48>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_scaleMode(UnityEngine::ScaleMode value)  {
::cordl_internals::setInstanceField<UnityEngine::ScaleMode, 0x50>(this->__instance, std::forward<UnityEngine::ScaleMode>(value));
}
constexpr UnityEngine::ScaleMode UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_scaleMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::ScaleMode, 0x50>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_playmodeTintColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x54>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_playmodeTintColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x54>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_topLeftRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x64>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_topLeftRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x64>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_topRightRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x6c>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_topRightRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x6c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_bottomRightRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x74>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_bottomRightRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x74>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_bottomLeftRadius(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x7c>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_bottomLeftRadius() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x7c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_leftSlice(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_leftSlice() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_topSlice(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_topSlice() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_rightSlice(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_rightSlice() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_bottomSlice(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_bottomSlice() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_sliceScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_sliceScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_spriteGeomRect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x98>(this->__instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_spriteGeomRect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x98>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_colorPage(UnityEngine::UIElements::ColorPage value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ColorPage, 0xa8>(this->__instance, std::forward<UnityEngine::UIElements::ColorPage>(value));
}
constexpr UnityEngine::UIElements::ColorPage UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_colorPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ColorPage, 0xa8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__set_meshFlags(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags, 0xb0>(this->__instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::__get_meshFlags() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags, 0xb0>(this->__instance);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::AdjustUVsForScaleMode(UnityEngine::Rect rect, UnityEngine::Rect uv, UnityEngine::Texture texture, UnityEngine::ScaleMode scaleMode, ByRef<UnityEngine::Rect> rectOut, ByRef<UnityEngine::Rect> uvOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "AdjustUVsForScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, rectOut, uvOut);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::AdjustSpriteUVsForScaleMode(UnityEngine::Rect rect, UnityEngine::Rect uv, UnityEngine::Rect geomRect, UnityEngine::Texture texture, UnityEngine::Sprite sprite, UnityEngine::ScaleMode scaleMode, ByRef<UnityEngine::Rect> rectOut, ByRef<UnityEngine::Rect> uvOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "AdjustSpriteUVsForScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, uv, geomRect, texture, sprite, scaleMode, rectOut, uvOut);
}
 UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::RectIntersection(UnityEngine::Rect a, UnityEngine::Rect b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "RectIntersection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, a, b);
}
 UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::ComputeGeomRect(UnityEngine::Sprite sprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "ComputeGeomRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
 UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::ComputeUVRect(UnityEngine::Sprite sprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "ComputeUVRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
 UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::ApplyPackingRotation(UnityEngine::Rect uv, UnityEngine::SpritePackingRotation rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "ApplyPackingRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpritePackingRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, uv, rotation);
}
 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::MakeTextured(UnityEngine::Rect rect, UnityEngine::Rect uv, UnityEngine::Texture texture, UnityEngine::ScaleMode scaleMode, UnityEngine::UIElements::ContextType panelContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "MakeTextured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, panelContext);
}
 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::MakeSprite(UnityEngine::Rect rect, UnityEngine::Sprite sprite, UnityEngine::ScaleMode scaleMode, UnityEngine::UIElements::ContextType panelContext, bool hasRadius, ByRef<UnityEngine::Vector4> slices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "MakeSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, sprite, scaleMode, panelContext, hasRadius, slices);
}
 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::MakeVectorTextured(UnityEngine::Rect rect, UnityEngine::Rect uv, UnityEngine::UIElements::VectorImage vectorImage, UnityEngine::ScaleMode scaleMode, UnityEngine::UIElements::ContextType panelContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "MakeVectorTextured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VectorImage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, uv, vectorImage, scaleMode, panelContext);
}
 bool UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams::HasRadius(float_t epsilon)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get(),
                            "HasRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, epsilon);
}
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::GetHashCode)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2d058bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams.MakeStyleBased
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams (*)(UnityEngine::UIElements::VisualElement, ::StringW)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::MakeStyleBased)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x2d05b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(),
                            "MakeStyleBased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams.GetTextNativeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::TextNativeSettings (*)(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, float_t)>(&UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::GetTextNativeSettings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d05f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(),
                            "GetTextNativeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "rect", ty: "UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontDefinition", ty: "UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "letterSpacing", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordSpacing", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "paragraphSpacing", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "UnityEngine::TextAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "textOverflow", ty: "UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: Some("{}") }, CppParam { name: "textOverflowPosition", ty: "UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "overflow", ty: "UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "panel", ty: "UnityEngine::UIElements::IPanel", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams(UnityEngine::Rect rect, ::StringW text, UnityEngine::Font font, UnityEngine::UIElements::FontDefinition fontDefinition, int32_t fontSize, UnityEngine::UIElements::Length letterSpacing, UnityEngine::UIElements::Length wordSpacing, UnityEngine::UIElements::Length paragraphSpacing, UnityEngine::FontStyle fontStyle, UnityEngine::Color fontColor, UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth, bool richText, UnityEngine::Color playmodeTintColor, UnityEngine::UIElements::TextOverflow textOverflow, UnityEngine::UIElements::TextOverflowPosition textOverflowPosition, UnityEngine::UIElements::OverflowInternal overflow, UnityEngine::UIElements::IPanel panel) noexcept : ::bs_hook::ValueTypeWrapper() {this->rect = rect;
this->text = text;
this->font = font;
this->fontDefinition = fontDefinition;
this->fontSize = fontSize;
this->letterSpacing = letterSpacing;
this->wordSpacing = wordSpacing;
this->paragraphSpacing = paragraphSpacing;
this->fontStyle = fontStyle;
this->fontColor = fontColor;
this->anchor = anchor;
this->wordWrap = wordWrap;
this->wordWrapWidth = wordWrapWidth;
this->richText = richText;
this->playmodeTintColor = playmodeTintColor;
this->textOverflow = textOverflow;
this->textOverflowPosition = textOverflowPosition;
this->overflow = overflow;
this->panel = panel;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_rect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x0>(this->__instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_rect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_font(UnityEngine::Font value)  {
::cordl_internals::setInstanceField<UnityEngine::Font, 0x18>(this->__instance, std::forward<UnityEngine::Font>(value));
}
constexpr UnityEngine::Font UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_font() const {
return ::cordl_internals::getInstanceField<UnityEngine::Font, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_fontDefinition(UnityEngine::UIElements::FontDefinition value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::FontDefinition, 0x20>(this->__instance, std::forward<UnityEngine::UIElements::FontDefinition>(value));
}
constexpr UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_fontDefinition() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::FontDefinition, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_fontSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_fontSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_letterSpacing(UnityEngine::UIElements::Length value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Length, 0x34>(this->__instance, std::forward<UnityEngine::UIElements::Length>(value));
}
constexpr UnityEngine::UIElements::Length UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_letterSpacing() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Length, 0x34>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_wordSpacing(UnityEngine::UIElements::Length value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Length, 0x3c>(this->__instance, std::forward<UnityEngine::UIElements::Length>(value));
}
constexpr UnityEngine::UIElements::Length UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_wordSpacing() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Length, 0x3c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_paragraphSpacing(UnityEngine::UIElements::Length value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Length, 0x44>(this->__instance, std::forward<UnityEngine::UIElements::Length>(value));
}
constexpr UnityEngine::UIElements::Length UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_paragraphSpacing() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Length, 0x44>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_fontStyle(UnityEngine::FontStyle value)  {
::cordl_internals::setInstanceField<UnityEngine::FontStyle, 0x4c>(this->__instance, std::forward<UnityEngine::FontStyle>(value));
}
constexpr UnityEngine::FontStyle UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<UnityEngine::FontStyle, 0x4c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_fontColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x50>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_fontColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x50>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_anchor(UnityEngine::TextAnchor value)  {
::cordl_internals::setInstanceField<UnityEngine::TextAnchor, 0x60>(this->__instance, std::forward<UnityEngine::TextAnchor>(value));
}
constexpr UnityEngine::TextAnchor UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_anchor() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextAnchor, 0x60>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_wordWrap(bool value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_wordWrap() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_wordWrapWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_wordWrapWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_richText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_richText() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_playmodeTintColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x70>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_playmodeTintColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x70>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_textOverflow(UnityEngine::UIElements::TextOverflow value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::TextOverflow, 0x80>(this->__instance, std::forward<UnityEngine::UIElements::TextOverflow>(value));
}
constexpr UnityEngine::UIElements::TextOverflow UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_textOverflow() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::TextOverflow, 0x80>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_textOverflowPosition(UnityEngine::UIElements::TextOverflowPosition value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::TextOverflowPosition, 0x84>(this->__instance, std::forward<UnityEngine::UIElements::TextOverflowPosition>(value));
}
constexpr UnityEngine::UIElements::TextOverflowPosition UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_textOverflowPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::TextOverflowPosition, 0x84>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_overflow(UnityEngine::UIElements::OverflowInternal value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::OverflowInternal, 0x88>(this->__instance, std::forward<UnityEngine::UIElements::OverflowInternal>(value));
}
constexpr UnityEngine::UIElements::OverflowInternal UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_overflow() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::OverflowInternal, 0x88>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__set_panel(UnityEngine::UIElements::IPanel value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IPanel, 0x90>(this->__instance, std::forward<UnityEngine::UIElements::IPanel>(value));
}
constexpr UnityEngine::UIElements::IPanel UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::__get_panel() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IPanel, 0x90>(this->__instance);
}
 int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::MakeStyleBased(UnityEngine::UIElements::VisualElement ve, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(),
                            "MakeStyleBased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, false>(nullptr, ___internal_method, ve, text);
}
 UnityEngine::UIElements::TextNativeSettings UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams::GetTextNativeSettings(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, float_t scaling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(),
                            "GetTextNativeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextNativeSettings, false>(nullptr, ___internal_method, textParams, scaling);
}
//  Writing Method size for method: UnityEngine::UIElements::MeshGenerationContextUtils.Rectangle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::MeshGenerationContext, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams)>(&UnityEngine::UIElements::MeshGenerationContextUtils::Rectangle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2d02720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "Rectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::MeshGenerationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::MeshGenerationContextUtils.Text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::MeshGenerationContext, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, UnityEngine::UIElements::ITextHandle, float_t)>(&UnityEngine::UIElements::MeshGenerationContextUtils::Text)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2d02820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "Text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::MeshGenerationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::MeshGenerationContextUtils.ConvertBorderRadiusPercentToPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(UnityEngine::Vector2, UnityEngine::UIElements::Length)>(&UnityEngine::UIElements::MeshGenerationContextUtils::ConvertBorderRadiusPercentToPoints)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d02954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "ConvertBorderRadiusPercentToPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Length>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::MeshGenerationContextUtils.GetVisualElementRadii
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::VisualElement, ByRef<UnityEngine::Vector2>, ByRef<UnityEngine::Vector2>, ByRef<UnityEngine::Vector2>, ByRef<UnityEngine::Vector2>)>(&UnityEngine::UIElements::MeshGenerationContextUtils::GetVisualElementRadii)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2d02990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "GetVisualElementRadii",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::MeshGenerationContextUtils.AdjustBackgroundSizeForBorders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::VisualElement, ByRef<UnityEngine::Rect>)>(&UnityEngine::UIElements::MeshGenerationContextUtils::AdjustBackgroundSizeForBorders)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2d02c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "AdjustBackgroundSizeForBorders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::MeshGenerationContextUtils::Rectangle(UnityEngine::UIElements::MeshGenerationContext mgc, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "Rectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::MeshGenerationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mgc, rectParams);
}
 void UnityEngine::UIElements::MeshGenerationContextUtils::Text(UnityEngine::UIElements::MeshGenerationContext mgc, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "Text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::MeshGenerationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mgc, textParams, handle, pixelsPerPoint);
}
 UnityEngine::Vector2 UnityEngine::UIElements::MeshGenerationContextUtils::ConvertBorderRadiusPercentToPoints(UnityEngine::Vector2 borderRectSize, UnityEngine::UIElements::Length length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "ConvertBorderRadiusPercentToPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Length>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, borderRectSize, length);
}
 void UnityEngine::UIElements::MeshGenerationContextUtils::GetVisualElementRadii(UnityEngine::UIElements::VisualElement ve, ByRef<UnityEngine::Vector2> topLeft, ByRef<UnityEngine::Vector2> bottomLeft, ByRef<UnityEngine::Vector2> topRight, ByRef<UnityEngine::Vector2> bottomRight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "GetVisualElementRadii",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, topLeft, bottomLeft, topRight, bottomRight);
}
 void UnityEngine::UIElements::MeshGenerationContextUtils::AdjustBackgroundSizeForBorders(UnityEngine::UIElements::VisualElement visualElement, ByRef<UnityEngine::Rect> rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContextUtils>::get(),
                            "AdjustBackgroundSizeForBorders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Rect>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, visualElement, rect);
}
