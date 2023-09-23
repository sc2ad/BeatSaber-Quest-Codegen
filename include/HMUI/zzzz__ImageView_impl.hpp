#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__IComponentRefresher_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HMUI::HMUI__ImageView__GradientDirection::HMUI__ImageView__GradientDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HMUI::HMUI__ImageView__GradientDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__ImageView__GradientDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HMUI::HMUI__ImageView__GradientDirection  HMUI::HMUI__ImageView__GradientDirection::Horizontal{0};
constexpr HMUI::HMUI__ImageView__GradientDirection  HMUI::HMUI__ImageView__GradientDirection::Vertical{1};
//  Writing Method size for method: HMUI::ImageView.get_useScriptableObjectColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ImageView::*)()>(&HMUI::ImageView::get_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc4420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.set_useScriptableObjectColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(bool)>(&HMUI::ImageView::set_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fc4428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::ImageView::*)()>(&HMUI::ImageView::get_color)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fc4434;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ImageView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::Color)>(&HMUI::ImageView::set_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc44bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ImageView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.get_skew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (HMUI::ImageView::*)()>(&HMUI::ImageView::get_skew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc44c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_skew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.get_gradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ImageView::*)()>(&HMUI::ImageView::get_gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fc44cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_gradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.set_gradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(bool)>(&HMUI::ImageView::set_gradient)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fc44d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_gradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.get_color0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::ImageView::*)()>(&HMUI::ImageView::get_color0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1fc44ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_color0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.set_color0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::Color)>(&HMUI::ImageView::set_color0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fbc794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_color0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.get_color1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::ImageView::*)()>(&HMUI::ImageView::get_color1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1fc457c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_color1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.set_color1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::Color)>(&HMUI::ImageView::set_color1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fbc7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_color1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)()>(&HMUI::ImageView::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1fc460c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ImageView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.OnPopulateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper)>(&HMUI::ImageView::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1fc4634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ImageView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.__Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)()>(&HMUI::ImageView::__Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fcb0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "__Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GenerateSimpleSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper, bool, float_t)>(&HMUI::ImageView::GenerateSimpleSprite)> {
  constexpr static std::size_t size = 0x14c0;
  constexpr static std::size_t addrs = 0x1fc47a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateSimpleSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GenerateSlicedSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper, float_t)>(&HMUI::ImageView::GenerateSlicedSprite)> {
  constexpr static std::size_t size = 0x1bcc;
  constexpr static std::size_t addrs = 0x1fc5c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateSlicedSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GenerateTiledSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper, float_t)>(&HMUI::ImageView::GenerateTiledSprite)> {
  constexpr static std::size_t size = 0x2394;
  constexpr static std::size_t addrs = 0x1fc7834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateTiledSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.AddQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper, ::ArrayW<UnityEngine::Vector3>, UnityEngine::Color32, ::ArrayW<UnityEngine::Vector3>)>(&HMUI::ImageView::AddQuad)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1fcc8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.AddQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, float_t, float_t)>(&HMUI::ImageView::AddQuad)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1fcc64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.AddQuad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float_t, float_t, float_t, float_t)>(&HMUI::ImageView::AddQuad)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x1fcc368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.AddQuadWithHorizontalGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float_t, float_t, float_t, float_t)>(&HMUI::ImageView::AddQuadWithHorizontalGradient)> {
  constexpr static std::size_t size = 0x8c4;
  constexpr static std::size_t addrs = 0x1fcb7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuadWithHorizontalGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.AddQuadWithVerticalGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::VertexHelper, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Color32, UnityEngine::Color32, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float_t, float_t, float_t, float_t)>(&HMUI::ImageView::AddQuadWithVerticalGradient)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x1fcc074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuadWithVerticalGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GetAdjustedBorders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(UnityEngine::Vector4, UnityEngine::Rect)>(&HMUI::ImageView::GetAdjustedBorders)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1fcb6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GetAdjustedBorders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GenerateFilledSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)(UnityEngine::UI::VertexHelper, bool, float_t)>(&HMUI::ImageView::GenerateFilledSprite)> {
  constexpr static std::size_t size = 0x14e4;
  constexpr static std::size_t addrs = 0x1fc9bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateFilledSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.RadialCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Vector3>, float_t, bool, int32_t)>(&HMUI::ImageView::RadialCut)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1fcc9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "RadialCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.RadialCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Vector3>, float_t, float_t, bool, int32_t)>(&HMUI::ImageView::RadialCut)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x1fccac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "RadialCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GetNumberOfElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t, float_t)>(&HMUI::ImageView::GetNumberOfElements)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1fcb644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GetNumberOfElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView.GetDrawingDimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (HMUI::ImageView::*)(bool)>(&HMUI::ImageView::GetDrawingDimensions)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x1fcb0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GetDrawingDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageView::*)()>(&HMUI::ImageView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1fcceb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IComponentRefresher
constexpr  HMUI::ImageView::operator GlobalNamespace::IComponentRefresher() const noexcept {
return GlobalNamespace::IComponentRefresher(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__useScriptableObjectColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::ImageView::__get__useScriptableObjectColors() const {
return ::cordl_internals::getInstanceField<bool, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__colorSo(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO HMUI::ImageView::__get__colorSo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__color0So(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO HMUI::ImageView::__get__color0So() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__color1So(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO HMUI::ImageView::__get__color1So() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__skew(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::ImageView::__get__skew() const {
return ::cordl_internals::getInstanceField<float_t, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__gradient(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::ImageView::__get__gradient() const {
return ::cordl_internals::getInstanceField<bool, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__color0(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color HMUI::ImageView::__get__color0() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__color1(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color HMUI::ImageView::__get__color1() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__gradientDirection(HMUI::HMUI__ImageView__GradientDirection value)  {
::cordl_internals::setInstanceField<HMUI::HMUI__ImageView__GradientDirection, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HMUI__ImageView__GradientDirection>(value));
}
constexpr HMUI::HMUI__ImageView__GradientDirection HMUI::ImageView::__get__gradientDirection() const {
return ::cordl_internals::getInstanceField<HMUI::HMUI__ImageView__GradientDirection, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageView::__set__flipGradientColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x154>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::ImageView::__get__flipGradientColors() const {
return ::cordl_internals::getInstanceField<bool, 0x154>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::ImageView::__set_kVec2Zero(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "kVec2Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 HMUI::ImageView::__get_kVec2Zero()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "kVec2Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_kVec3Zero(UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector3, "kVec3Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<UnityEngine::Vector3>(value));
}
 UnityEngine::Vector3 HMUI::ImageView::__get_kVec3Zero()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector3, "kVec3Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_kVec4Zero(UnityEngine::Vector4 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector4, "kVec4Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<UnityEngine::Vector4>(value));
}
 UnityEngine::Vector4 HMUI::ImageView::__get_kVec4Zero()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector4, "kVec4Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
constexpr void HMUI::ImageView::__set__curvedCanvasSettingsHelper(HMUI::CurvedCanvasSettingsHelper value)  {
::cordl_internals::setInstanceField<HMUI::CurvedCanvasSettingsHelper, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::CurvedCanvasSettingsHelper>(value));
}
constexpr HMUI::CurvedCanvasSettingsHelper HMUI::ImageView::__get__curvedCanvasSettingsHelper() const {
return ::cordl_internals::getInstanceField<HMUI::CurvedCanvasSettingsHelper, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::ImageView::__set_s_VertScratch(::ArrayW<UnityEngine::Vector2> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector2>, "s_VertScratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<::ArrayW<UnityEngine::Vector2>>(value));
}
 ::ArrayW<UnityEngine::Vector2> HMUI::ImageView::__get_s_VertScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector2>, "s_VertScratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_s_UVScratch(::ArrayW<UnityEngine::Vector2> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector2>, "s_UVScratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<::ArrayW<UnityEngine::Vector2>>(value));
}
 ::ArrayW<UnityEngine::Vector2> HMUI::ImageView::__get_s_UVScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector2>, "s_UVScratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_s_UV1Scratch(::ArrayW<UnityEngine::Vector2> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector2>, "s_UV1Scratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<::ArrayW<UnityEngine::Vector2>>(value));
}
 ::ArrayW<UnityEngine::Vector2> HMUI::ImageView::__get_s_UV1Scratch()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector2>, "s_UV1Scratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_s_ColorScratch(::ArrayW<UnityEngine::Color> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Color>, "s_ColorScratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<::ArrayW<UnityEngine::Color>>(value));
}
 ::ArrayW<UnityEngine::Color> HMUI::ImageView::__get_s_ColorScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Color>, "s_ColorScratch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_s_Xy(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector3>, "s_Xy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
 ::ArrayW<UnityEngine::Vector3> HMUI::ImageView::__get_s_Xy()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector3>, "s_Xy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 void HMUI::ImageView::__set_s_Uv(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::Vector3>, "s_Uv", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>(std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
 ::ArrayW<UnityEngine::Vector3> HMUI::ImageView::__get_s_Uv()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::Vector3>, "s_Uv", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get>();
}
 bool HMUI::ImageView::get_useScriptableObjectColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::set_useScriptableObjectColors(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color HMUI::ImageView::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::set_color(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t HMUI::ImageView::get_skew()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_skew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HMUI::ImageView::get_gradient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_gradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::set_gradient(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_gradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color HMUI::ImageView::get_color0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_color0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::set_color0(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_color0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color HMUI::ImageView::get_color1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "get_color1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::set_color1(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "set_color1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::ImageView::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::OnPopulateMesh(UnityEngine::UI::VertexHelper toFill)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "OnPopulateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, toFill);
}
 void HMUI::ImageView::__Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "__Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageView::GenerateSimpleSprite(UnityEngine::UI::VertexHelper vh, bool lPreserveAspect, float_t curvedUIRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateSimpleSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vh, lPreserveAspect, curvedUIRadius);
}
 void HMUI::ImageView::GenerateSlicedSprite(UnityEngine::UI::VertexHelper toFill, float_t curvedUIRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateSlicedSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, toFill, curvedUIRadius);
}
 void HMUI::ImageView::GenerateTiledSprite(UnityEngine::UI::VertexHelper toFill, float_t curvedUIRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateTiledSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, toFill, curvedUIRadius);
}
 void HMUI::ImageView::AddQuad(UnityEngine::UI::VertexHelper vertexHelper, ::ArrayW<UnityEngine::Vector3> quadPositions, UnityEngine::Color32 color, ::ArrayW<UnityEngine::Vector3> quadUVs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, quadPositions, color, quadUVs);
}
 void HMUI::ImageView::AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax, float_t elementWidthScale, float_t curvedUIRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color, uvMin, uvMax, elementWidthScale, curvedUIRadius);
}
 void HMUI::ImageView::AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor, skewOffset);
}
 void HMUI::ImageView::AddQuadWithHorizontalGradient(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuadWithHorizontalGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor, skewOffset);
}
 void HMUI::ImageView::AddQuadWithVerticalGradient(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "AddQuadWithVerticalGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor, skewOffset);
}
 UnityEngine::Vector4 HMUI::ImageView::GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GetAdjustedBorders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(nullptr, ___internal_method, border, rect);
}
 void HMUI::ImageView::GenerateFilledSprite(UnityEngine::UI::VertexHelper toFill, bool preserveAspect, float_t curvedUIRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GenerateFilledSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, toFill, preserveAspect, curvedUIRadius);
}
 bool HMUI::ImageView::RadialCut(::ArrayW<UnityEngine::Vector3> xy, ::ArrayW<UnityEngine::Vector3> uv, float_t fill, bool invert, int32_t corner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "RadialCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xy, uv, fill, invert, corner);
}
 void HMUI::ImageView::RadialCut(::ArrayW<UnityEngine::Vector3> xy, float_t cos, float_t sin, bool invert, int32_t corner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "RadialCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xy, cos, sin, invert, corner);
}
 int32_t HMUI::ImageView::GetNumberOfElements(float_t curvedUIRadius, float_t width)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GetNumberOfElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, curvedUIRadius, width);
}
 UnityEngine::Vector4 HMUI::ImageView::GetDrawingDimensions(bool shouldPreserveAspect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            "GetDrawingDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method, shouldPreserveAspect);
}
// Ctor Parameters []
 HMUI::ImageView::ImageView()  : UnityEngine::UI::Image(THROW_UNLESS(::il2cpp_utils::New<ImageView>())) {}
 void HMUI::ImageView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
